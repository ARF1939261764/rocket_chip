// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module UARTRx_TestHarness_UNIQUIFIED(
  input         clock,
                reset,
                io_en,
                io_in,
  input  [15:0] io_div,
  output        io_out_valid,
  output [7:0]  io_out_bits
);

  reg  [1:0]  debounce;	// @[UARTRx.scala:60:25]
  reg  [12:0] prescaler;	// @[UARTRx.scala:64:22]
  reg  [3:0]  data_count;	// @[UARTRx.scala:71:23]
  reg  [3:0]  sample_count;	// @[UARTRx.scala:74:25]
  reg  [2:0]  sample;	// @[UARTRx.scala:103:19]
  reg  [7:0]  shifter;	// @[UARTRx.scala:107:20]
  reg         valid;	// @[UARTRx.scala:109:22]
  reg         state;	// @[UARTRx.scala:115:22]
  wire [7:0]  _GEN = {data_count, sample_count} - 8'h1;	// @[UARTRx.scala:71:23, :74:25, :84:49]
  wire        pulse = prescaler == 13'h0;	// @[UARTRx.scala:64:22, :67:26]
  wire        data_last = data_count == 4'h0;	// @[UARTRx.scala:71:23, :72:31]
  wire        sample_mid = sample_count == 4'h7;	// @[UARTRx.scala:74:25, :75:34]
  wire        _GEN_0 = ~io_in & (&debounce);	// @[UARTRx.scala:60:25, :61:32, :115:22, :120:15, :123:21, :125:29, :126:17]
  wire        _GEN_1 = _GEN_0 | state;	// @[UARTRx.scala:115:22, :123:21, :125:29, :126:17]
  wire        _GEN_2 = state & pulse;	// @[UARTRx.scala:67:26, :103:19, :115:22, :117:18, :139:20, :141:16]
  wire        _GEN_3 = state & pulse & sample_mid;	// @[UARTRx.scala:67:26, :75:34, :110:9, :115:22, :117:18, :139:20, :145:27, :160:30]
  wire        restore = ~state & ~io_in & (&debounce) | pulse;	// @[UARTRx.scala:60:25, :61:32, :65:26, :67:26, :99:23, :115:22, :117:18, :120:15, :123:21, :125:29]
  always @(posedge clock) begin
    if (reset) begin
      debounce <= 2'h0;	// @[UARTRx.scala:60:25]
      valid <= 1'h0;	// @[UARTRx.scala:62:32, :109:22]
      state <= 1'h0;	// @[UARTRx.scala:62:32, :115:22]
    end
    else begin
      if (io_en) begin
        if (state) begin	// @[UARTRx.scala:115:22]
        end
        else if (io_in) begin
          if (io_in & (|debounce))	// @[UARTRx.scala:60:25, :62:32, :120:23]
            debounce <= debounce - 2'h1;	// @[UARTRx.scala:60:25, :121:30]
        end
        else
          debounce <= debounce + 2'h1;	// @[UARTRx.scala:60:25, :121:30, :124:30]
      end
      else
        debounce <= 2'h0;	// @[UARTRx.scala:60:25]
      valid <= state & _GEN_3 & data_last;	// @[UARTRx.scala:72:31, :109:22, :110:9, :115:22, :117:18, :139:20, :145:27, :160:30]
      if (state)	// @[UARTRx.scala:115:22]
        state <= ~(state & pulse & sample_mid & data_last) & state;	// @[UARTRx.scala:67:26, :72:31, :75:34, :115:22, :117:18, :139:20, :145:27, :160:30, :161:21]
      else	// @[UARTRx.scala:115:22]
        state <= _GEN_1;	// @[UARTRx.scala:115:22, :123:21, :125:29, :126:17]
    end
    if (_GEN_1)	// @[UARTRx.scala:115:22, :123:21, :125:29, :126:17]
      prescaler <= (restore ? {1'h0, io_div[15:4]} : prescaler) - {12'h0, ~(restore & sample_count < io_div[3:0])};	// @[UARTRx.scala:62:32, :64:22, :74:25, :89:25, :90:30, :99:23, :100:{25,42}, :101:{37,42,51}]
    if (state) begin	// @[UARTRx.scala:115:22]
      if (_GEN_2) begin	// @[UARTRx.scala:103:19, :117:18, :139:20, :141:16]
        data_count <= _GEN[7:4];	// @[UARTRx.scala:71:23, :84:49, :142:33]
        sample_count <= _GEN[3:0];	// @[UARTRx.scala:74:25, :84:49, :143:34]
      end
    end
    else if (_GEN_0) begin	// @[UARTRx.scala:115:22, :123:21, :125:29, :126:17]
      data_count <= 4'h9;	// @[UARTRx.scala:71:23, :130:92]
      sample_count <= 4'hF;	// @[UARTRx.scala:74:25, :132:24]
    end
    if (state & _GEN_2)	// @[UARTRx.scala:103:19, :115:22, :117:18, :139:20, :141:16]
      sample <= {sample[1:0], io_in};	// @[UARTRx.scala:103:19, :141:16]
    if (~state | ~_GEN_3 | data_last) begin	// @[UARTRx.scala:72:31, :107:20, :110:9, :115:22, :117:18, :139:20, :145:27, :160:30]
    end
    else	// @[UARTRx.scala:107:20, :117:18]
      shifter <= {sample[0] & sample[1] | sample[0] & sample[2] | sample[1] & sample[2], shifter[7:1]};	// @[Cat.scala:33:92, Misc.scala:166:48, :167:22, UARTRx.scala:103:19, :105:31, :107:20, :164:45]
  end // always @(posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        debounce = _RANDOM_0[1:0];	// @[UARTRx.scala:60:25]
        prescaler = _RANDOM_0[14:2];	// @[UARTRx.scala:60:25, :64:22]
        data_count = _RANDOM_0[18:15];	// @[UARTRx.scala:60:25, :71:23]
        sample_count = _RANDOM_0[22:19];	// @[UARTRx.scala:60:25, :74:25]
        sample = _RANDOM_0[25:23];	// @[UARTRx.scala:60:25, :103:19]
        shifter = {_RANDOM_0[31:26], _RANDOM_1[1:0]};	// @[UARTRx.scala:60:25, :107:20]
        valid = _RANDOM_1[2];	// @[UARTRx.scala:107:20, :109:22]
        state = _RANDOM_1[3];	// @[UARTRx.scala:107:20, :115:22]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_out_valid = valid;	// @[UARTRx.scala:109:22]
  assign io_out_bits = shifter;	// @[UARTRx.scala:107:20]
endmodule

