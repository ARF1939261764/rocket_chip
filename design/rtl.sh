find . -type f -iname "*.sv" -o -iname "*.v" | xargs -I {} echo "\${prj_dir}/design/{}"  > rtl.lst

echo "
# Create 'sources_1' fileset (if not found)
if {[string equal [get_filesets -quiet sources_1] \"\"]} {
  create_fileset -srcset sources_1
}

set filesets_obj [get_filesets sources_1]

set filesets_lst [list\\" > rtl_fpga.lst
cat rtl.lst | xargs -I {} echo "  {}\\" >> rtl_fpga.lst
echo "]
add_files -norecurse -fileset \${filesets_obj} \${filesets_lst}
" >> rtl_fpga.lst

echo "
set_property file_type SystemVerilog [get_files \${filesets_lst}]
" >> rtl_fpga.lst
