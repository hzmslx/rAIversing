
// FUN_000816a6 0x000816a6
void doNothing_000816a6(void) {
  return;
}
// FUN_000816a8 0x000816a8
void initialize_system_and_loop_000816a8(void)
{
  set_DAT_000816d0_flag();
  initialize_system();
  doNothing_000816a6();
  doNothing_000816a6_with_parameter(1);
  initialize_system_2();
  while (true) {
    while (DAT_000816d0 == 0) {
      FUNC_FUNCTION_1();
    }
    check_offsets();
  }
}
// FUN_00081042 0x00081042
void setValues_00081042(uint32_t *memory_address, uint32_t value1, uint32_t value2, uint32_t value3) {
  uint32_t mask1 = 0xf << 0x18;
  uint32_t mask2 = 3 << 0x1c;
  uint32_t *memory_location = memory_address + 1;
  *memory_location = value3 | *memory_location | ((value1 & mask1) | (value2 & mask2));
  return;
}
// FUN_00082ac0 0x00082ac0
int process_input_data_block_00082ac0(uint32_t parameter_1, int data_size, int **data_pointer)
{
  int *current_data_pointer;
  int *current_data_block;
  uint current_data_block_size;
  uint current_data_block_count;
  undefined4 *current_data_block_data;
  uint i;
  int function_status;
  if (-1 < *(int *)(data_size + 100) << 0x12) {
    function_status = FUNC_FUNCTION_00083f34();
    data_pointer[2] = (int *)0x0;
    data_pointer[1] = (int *)0x0;
    return function_status;
  }
  current_data_block = data_pointer[2];
  current_data_pointer = *data_pointer;
  while (current_data_block != (int *)0x0) {
    current_data_block_size = current_data_pointer[1];
    current_data_block_count = current_data_block_size >> 2;
    if (current_data_block_count != 0) {
      current_data_block_data = (undefined4 *)(*current_data_pointer + -4);
      i = 0;
      do {
        current_data_block_data = current_data_block_data + 1;
        function_status = process_input_data(parameter_1, *current_data_block_data, data_size);
        i = i + 1;
        if (function_status == -1) goto LAB_00082b00;
      } while (current_data_block_count != i);
      current_data_block = data_pointer[2];
    }
    current_data_block = (int *)((int)current_data_block - (current_data_block_size & 0xfffffffc));
    data_pointer[2] = current_data_block;
    current_data_pointer = current_data_pointer + 2;
  }
  function_status = 0;
LAB_00082b00:
  data_pointer[2] = (int *)0x0;
  data_pointer[1] = (int *)0x0;
  return function_status;
}
// FUN_00080ce0 0x00080ce0
void checkOffsets_00080ce0()
{
  int offsetDifference = getDifferenceFromOffsets_000813e4(PTR_DAT_00080d14);
  if (offsetDifference != 0) {
    doNothing_00080aa8();
  }
  offsetDifference = getDifferenceFromOffsets_000813e4(PTR_DAT_00080d18);
  if (offsetDifference != 0) {
    doNothing_00080ab8();
  }
  offsetDifference = getDifferenceFromOffsets_000813e4(PTR_DAT_00080d1c);
  if (offsetDifference != 0) {
    doNothing_00080aba();
  }
  offsetDifference = getDifferenceFromOffsets_000813e4(PTR_DAT_00080d20);
  if (offsetDifference != 0) {
    doNothing_00080abc();
  }
  return;
}
// FUN_00081682 0x00081682
undefined4 process_input_string_00081682(undefined4 *data, int size)
{
  undefined4 null_terminator_index;
  *data = 0;
  data[1] = 0;
  data[2] = 0;
  if (size != 0) {
    null_terminator_index = find_null_terminator_index(size);
    process_data(data, size, null_terminator_index);
  }
  return data;
}
// FUN_000815fe 0x000815fe
undefined4 execute_skipped_function_with_param_000815fe(undefined4 *param)
{
  execute_skipped_function(param);
  return param;
}
// FUN_00081d1c 0x00081d1c
uint32_t calculate_00081d1c(uint32_t input) {
  uint32_t sign_bit = 0x80000000;
  uint32_t exponent_mask = 0x7f800000;
  uint32_t fraction_mask = 0x7fffff;
  if ((input & sign_bit) || (input << 1) < exponent_mask) {
    return 0;
  }
  uint32_t exponent = 0x9e - ((input << 1) >> 0x18);
  if ((int32_t)exponent >= 0) {
    return (input << 8 | sign_bit) >> (exponent & 0xff);
  }
  if ((exponent == 0xffffff9f) && ((input & fraction_mask) != 0)) {
    return 0;
  }
  return 0xffffffff;
}
// FUN_000847ac 0x000847ac
void calculateValues_000847ac(uint32_t input1, int input2, uint32_t input3, uint32_t input4, int *output)
{
  long long result = FUNC_00084a80();
  result *= (long long)input3 * input4;
  uint32_t value1 = input1 - (uint32_t)result;
  uint32_t value2 = input2 - ((int)(result >> 32) + (input1 < (uint32_t)result));
  output[0] = value1;
  output[1] = value2;
  return;
}
// FUN_00080118 0x00080118
void executeFunction_00080118(undefined4 param1, undefined *param2, undefined4 param3, undefined4 param4) {
  if (DAT_00080134) {
    param2 = PTR_DAT_0008013c;
  }
  if ((*DAT_00080140 != 0) && (DAT_00080144 != (code *)0x0)) {
    (*DAT_00080144)(DAT_00080140, param2, param3, DAT_00080144, param4);
  }
  return;
}
// FUN_00080aa8 0x00080aa8
void doNothing_00080aa8(void) {
  return;
}
// FUN_00081c94 0x00081c94
bool concatenate_and_check_params_00081c94()
{
  uint64_t concatenated_word = concatenate_params_to_64bit_word();
  bool carry_flag = 0;
  bool zero_flag = 0;
  if (concatenated_word > UINT32_MAX) {
    carry_flag = 1;
  }
  if (concatenated_word == 0) {
    zero_flag = 1;
  }
  return !carry_flag || zero_flag;
}
// FUN_00083b14 0x00083b14

void FUNC_00083b14(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar5 = *(undefined4 **)(param_1 + 4);
    *(undefined **)(param_1 + 0x3c) = PTR_LAB_00083b08_1_00083bf4;
    *(undefined4 *)(param_1 + 0x2e4) = 3;
    *(int *)(param_1 + 0x2e8) = param_1 + 0x2ec;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined2 *)(puVar5 + 3) = 4;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[0x19] = 0;
    *(undefined2 *)((int)puVar5 + 0xe) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    fillMemoryWithByte_00082504(puVar5 + 0x17,0,8);
    puVar4 = PTR_LAB_000844bc_1_00083c04;
    puVar3 = PTR_update_parameter_value_0008449c_1_00083c00;
    uVar2 = DAT_00083bfc;
    puVar1 = PTR_LAB_00084440_1_00083bf8;
    puVar6 = *(undefined4 **)(param_1 + 8);
    puVar5[7] = puVar5;
    puVar5[8] = puVar1;
    puVar5[9] = uVar2;
    puVar5[10] = puVar3;
    puVar5[0xb] = puVar4;
    *(undefined2 *)((int)puVar6 + 0xe) = 1;
    *(undefined2 *)(puVar6 + 3) = 9;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[0x19] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    fillMemoryWithByte_00082504(puVar6 + 0x17,0,8);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    puVar6[7] = puVar6;
    puVar6[8] = puVar1;
    puVar6[9] = uVar2;
    puVar6[10] = puVar3;
    puVar6[0xb] = puVar4;
    *(undefined2 *)(puVar5 + 3) = 0x12;
    *(undefined2 *)((int)puVar5 + 0xe) = 2;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[0x19] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    fillMemoryWithByte_00082504(puVar5 + 0x17,0,8);
    puVar5[7] = puVar5;
    puVar5[8] = puVar1;
    puVar5[9] = uVar2;
    puVar5[10] = puVar3;
    puVar5[0xb] = puVar4;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}


// FUN_000842a4 0x000842a4
void update_parameter_000842a4(int parameter_value, int *parameter_ptr)
{
  ushort parameter_flags = *(ushort *)(parameter_ptr + 3);
  uint flags_as_uint = (uint)parameter_flags;
  if ((int)(flags_as_uint << 0x1e) < 0) {
    *parameter_ptr = (int)parameter_ptr + 0x43;
    parameter_ptr[4] = (int)parameter_ptr + 0x43;
    parameter_ptr[5] = 1;
    return;
  }
  if (*(short *)((int)parameter_ptr + 0xe) >= 0) {
    int flag_result = set_flag_in_integer(parameter_value,(int)*(short *)((int)parameter_ptr + 0xe),auStack_54);
    if (flag_result >= 0) {
      bool is_2000 = (flags_as_uint & 0xf000) == 0x2000;
      if (((flags_as_uint & 0xf000) == 0x8000) && ((undefined *)parameter_ptr[10] == PTR_update_parameter_000842a4_value_0008449c_1_00084380)) {
        flag_result = 0x400;
        parameter_flags |= 0x400;
        parameter_ptr[0x13] = 0x400;
      }
      else {
        flag_result = 0x400;
        parameter_flags |= 0x800;
      }
      goto LAB_00084300;
    }
    parameter_flags = *(ushort *)(parameter_ptr + 3);
    flags_as_uint = (uint)parameter_flags;
  }
  parameter_flags |= 0x800;
  int flag_result = (flags_as_uint & 0x80) == 0 ? 0x400 : 0x40;
  bool is_2000 = false;
LAB_00084300:
  int result = FUNC_FUNCTION_2(parameter_value,flag_result);
  parameter_flags = *(ushort *)(parameter_ptr + 3);
  if (result == 0 && (int)((uint)parameter_flags << 0x16) >= 0) {
    parameter_flags |= 2;
    *parameter_ptr = (int)parameter_ptr + 0x43;
    parameter_ptr[4] = (int)parameter_ptr + 0x43;
    parameter_ptr[5] = 1;
  }
  else {
    *(undefined **)(parameter_value + 0x3c) = PTR_LAB_00083b08_1_0008437c;
    parameter_flags |= 0x80;
    *parameter_ptr = result;
    parameter_ptr[4] = result;
    parameter_ptr[5] = flag_result;
    if ((is_2000) && (flag_result = set_param_to_true_if_return_is_negative(parameter_value,(int)*(short *)((int)parameter_ptr + 0xe)), flag_result != 0)) {
      parameter_flags |= 1;
    }
  }
  *(ushort *)(parameter_ptr + 3) = parameter_flags;
  return;
}
// FUN_000846a4 0x000846a4
undefined4 process_parameter_000846a4(int parameter)
{
  undefined4 result = 0;
  int data = *DAT_000846b0;
  if (parameter != 0) {
    if ((data != 0) && (*(int *)(data + 0x38) == 0)) {
      initialize_data_00083b14();
    }
    if (*(short *)(parameter + 0xc) != 0) {
      result = process_data_00083adc(data, parameter);
      if ((*(code **)(parameter + 0x2c) != (code *)0x0) && ((int)(**(code **)(parameter + 0x2c))(data,*(undefined4 *)(parameter + 0x1c)) < 0)) {
        result = 0xffffffff;
      }
      if ((int)((uint)*(ushort *)(parameter + 0xc) << 0x18) < 0) {
        handle_error_00083d9c(data,*(undefined4 *)(parameter + 0x10));
      }
      if (*(int *)(parameter + 0x30) != 0) {
        if (*(int *)(parameter + 0x30) != parameter + 0x40) {
          handle_error_00083d9c(data);
        }
        *(undefined4 *)(parameter + 0x30) = 0;
      }
      if (*(int *)(parameter + 0x44) != 0) {
        handle_error_00083d9c(data);
        *(undefined4 *)(parameter + 0x44) = 0;
      }
      perform_nothing_00083c08();
      *(undefined2 *)(parameter + 0xc) = 0;
      perform_nothing_00083c0c();
      return result;
    }
  }
  return 0;
}
// FUN_00080f24 0x00080f24
void initialize_00080f24(void) {
  undefined *source_pointer = DAT_00080f7c;
  undefined *destination_pointer = PTR_Elf32_Rel_ARRAY_00080f80;
  undefined4 *zero_pointer = PTR_DAT_00080f84;
  if (PTR_Elf32_Rel_ARRAY_00080f80 != DAT_00080f7c) {
    for (int i = 0; source_pointer + i < section_rel_data_end; i = i + 4) {
      *(undefined4 *)(source_pointer + i) = *(undefined4 *)(destination_pointer + i);
    }
  }
  for (; zero_pointer < DAT_00080f88; zero_pointer = zero_pointer + 1) {
    *zero_pointer = 0;
  }
  undefined *memory_address = PTR_DAT_00080f90 - 0x20000000;
  *(uint *)(DAT_00080f94) = (uint)PTR_DAT_00080f90 & 0x1fffff80;
  if (memory_address < (undefined *)0x100000) {
    *(uint *)(DAT_00080f94) = *(uint *)(DAT_00080f94) | 0x20000000;
  }
  (*(*DAT_00080f98)())();
  while (true) {
    // Infinite loop
  }
}
// FUN_00080e04 0x00080e04
uint32_t checkFlags_00080e04(int32_t data_address, uint32_t flags) {
  uint32_t data_flags = *(uint32_t *)(data_address + 8) & flags;
  if (data_flags != 0) {
    if ((flags & *(uint32_t *)(data_address + 0x18)) == 0) {
      data_flags = 0;
    }
    else {
      data_flags = 1;
    }
  }
  return data_flags;
}
// FUN_000804a8 0x000804a8
undefined8 initialize_system_000804a8(void)
{
  handle_parameter(1, 0);
  handle_parameter(6, 1);
  handle_parameter(0, 1);
  handle_parameter(1, 1);
  update_parameter(0, 0);
  update_parameter(1, 0);
  undefined *data_array = data_array_ptr_1;
  undefined *data_array_2 = data_array_ptr_2;
  *(undefined2 *)(data_array_ptr_1 + 0xe) = 0x13;
  *(undefined2 *)(data_array + 0x10) = 10;
  *(undefined **)(data_array + 0x14) = data_array_ptr_3 + 0x26;
  data_array[1] = 3;
  data_array[0x19] = 3;
  *(undefined2 *)(data_array + 0x1a) = 0x14;
  *(undefined2 *)(data_array + 0x28) = 3;
  *(undefined2 *)(data_array + 4) = 0x10;
  *(undefined **)(data_array + 8) = data_array_ptr_1;
  data_array[0xd] = 0x10;
  *(undefined2 *)(data_array + 0x1c) = 0xc;
  data_array[0x25] = 0x10;
  *(undefined2 *)(data_array + 0x34) = 8;
  *(undefined2 *)(data_array + 0x26) = 0x1c;
  *(undefined **)(data_array + 0x2c) = data_array_ptr_3 + 0x38;
  data_array[0x30] = 2;
  data_array[0x31] = 2;
  *(undefined **)(data_array + 0x38) = data_array_ptr_2;
  data_array[0x3c] = 2;
  *data_array = 1;
  data_array[0xc] = 1;
  data_array[0x18] = 1;
  data_array[0x24] = 1;
  *(undefined2 *)(data_array + 0x3e) = 1;
  *(undefined2 *)(data_array + 0x40) = 1;
  *(undefined2 *)(data_array + 2) = 0;
  *(undefined **)(data_array + 0x20) = data_array_ptr_3 + 0x28;
  *(undefined2 *)(data_array + 0x32) = 0;
  data_array[0x3d] = 5;
  *(undefined **)(data_array + 0x44) = data_array_ptr_3 + 2;
  process_data(data_array_2, 0x4b00);
  *(undefined2 *)(data_array_ptr_3 + 0x56) = 2000;
  undefined4 stored_value = getStoredValue_thunk();
  *(undefined4 *)data_array_ptr_4 = stored_value;
  int stored_value_plus_1000 = getStoredValue_thunk() + 1000;
  *(int *)data_array_ptr_5 = stored_value_plus_1000;
  *(int *)data_array_ptr_6 = stored_value_plus_1000;
  *(int *)data_array_ptr_7 = stored_value_plus_1000;
  *(int *)data_array_ptr_8 = stored_value_plus_1000;
  *data_array_ptr_9 = 0;
  if (*(int *)data_array_ptr_10 == 0) {
    software_interrupt(0x3f);
    return 1;
  }
  return 0;
}
// FUN_000802da 0x000802da

int FUNC_000802da(int param_1,ushort param_2,ushort *param_3)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  char local_1c;
  undefined local_1b;
  ushort local_1a;
  
  uVar5 = (uint)param_2;
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = -2;
    goto LAB_000803cc;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    cVar1 = -1;
    goto LAB_000803cc;
  }
  if (0xf6 < (byte)(local_1c - 1U)) {
    cVar1 = -3;
    goto LAB_000803cc;
  }
  *(char *)(param_1 + 9) = local_1c;
  *(undefined *)(param_1 + 10) = local_1b;
  *(ushort **)(param_1 + 0x4c) = param_3;
  *(char *)(param_1 + 0xb) = (char)((uint)local_1a >> 8);
  *(char *)(param_1 + 0xc) = (char)local_1a;
  cVar1 = (char)param_2;
  uVar3 = (undefined)(uVar5 >> 8);
  switch(local_1b) {
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined *)(param_1 + 0xd) = uVar3;
    break;
  case 5:
    uVar4 = *param_3;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    *(char *)(param_1 + 0xd) = -(char)uVar4;
    uVar5 = 0;
    break;
  case 6:
    *(char *)(param_1 + 0xd) = (char)((uint)*param_3 >> 8);
    uVar5 = (uint)*param_3;
    break;
  default:
    goto switchD_0008031e_caseD_7;
  case 0xf:
    bVar2 = (byte)(param_2 >> 3) & 0xfe;
    if ((param_2 & 0xf) != 0) {
      bVar2 = bVar2 + 1;
    }
    *(char *)(param_1 + 0xe) = cVar1;
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(byte *)(param_1 + 0xf) = bVar2;
    uVar3 = 7;
    goto LAB_0008034a;
  case 0x10:
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(char *)(param_1 + 0xe) = cVar1;
    param_3 = param_3 + -1;
    *(char *)(param_1 + 0xf) = cVar1 * '\x02';
    *(undefined *)(param_1 + 0x49) = 7;
    puVar6 = param_3 + uVar5;
    while (param_3 != puVar6) {
      bVar2 = *(byte *)(param_1 + 0x49);
      *(char *)(param_1 + (uint)bVar2 + 9) = (char)((uint)param_3[1] >> 8);
      uVar5 = bVar2 + 1 & 0xff;
      *(char *)(param_1 + 0x49) = (char)uVar5;
      param_3 = param_3 + 1;
      *(char *)(uVar5 + param_1 + 9) = (char)*param_3;
      *(byte *)(param_1 + 0x49) = bVar2 + 2;
    }
    goto switchD_0008031e_caseD_7;
  }
  *(char *)(param_1 + 0xe) = (char)uVar5;
  uVar3 = 6;
LAB_0008034a:
  *(undefined *)(param_1 + 0x49) = uVar3;
switchD_0008031e_caseD_7:
  update_data_00080258(param_1);
  *(undefined *)(param_1 + 7) = 1;
  cVar1 = '\0';
LAB_000803cc:
  return (int)cVar1;
}


// FUN_00080f9c 0x00080f9c
uint32_t calculateValue_00080f9c(uint32_t *output_array, uint32_t input_value, int32_t input_divisor, int32_t input_threshold) {
  uint32_t local_array[16];
  for (int i = 0; i < 16; i++) {
    local_array[i] = *(uint32_t *)(PTR_DAT_0008102c + i * 4);
  }
  output_array[0] = 1;
  output_array[1] = 0;
  output_array[0x48] = 0x202;
  output_array[0x41] = 0;
  output_array[0x45] = 0;
  uint32_t quotient = input_value / (uint32_t)(input_divisor * 2);
  if (input_value == input_divisor * 2 * quotient) {
    quotient--;
  }
  uint32_t index = 0;
  do {
    if ((uint32_t)(input_threshold * (int32_t)(((uint64_t)input_value / (uint64_t)((quotient + 1) * 2)) / (uint64_t)DAT_00081030)) <= local_array[index]) {
      output_array[1] = (index & 0xf) << 0x10 | (quotient & 0xff) << 8 | output_array[1];
      return 0;
    }
    index++;
  } while (index != 0x10);
  return 0xffffffff;
}
// FUN_00081210 0x00081210
int handle_parameter_00081210(int param_index, int option)
{
  int result = param_index;
  byte *param_type = PTR_DAT_00081310;
  byte *param_data = PTR_DAT_0008130c;
  if (param_data[param_index * 0x1c + 0xc] != 0) {
    if ((param_type[param_index] & 0xf) == 4) {
      result = set_bit_in_integer(DAT_00081314, param_data[param_index * 0x1c + 0x19]);
    }
    byte param_type_value = param_type[param_index] & 0xf;
    if (param_type_value < 3 && param_type[param_index] != 0) {
      if (param_type_value == 2 && option == 0) {
        return result;
      }
      if (param_type_value == 1 && option == 2) {
        return result;
      }
      if (param_type_value == 3) {
        if (option == 1) {
          return result;
        }
        else {
          goto handle_param_1;
        }
      }
    }
    if (option != 1) {
handle_param_1:
      if (option == 0) {
        int param_offset = param_index * 0x1c;
        set_bit_in_memory(*(undefined4 *)(param_data + param_offset + 8));
        result = handle_parameter_00081210(*(undefined4 *)(param_data + param_offset),3,*(undefined4 *)(param_data + param_offset + 4),0);
        param_type[param_index] = param_type[param_index] & 0xf0 | 2;
      }
      else {
        if (option != 2) {
          return result;
        }
        int param_offset = param_index * 0x1c;
        set_bit_in_memory(*(undefined4 *)(param_data + param_offset + 8));
        result = handle_parameter_00081210(*(undefined4 *)(param_data + param_offset),3,*(undefined4 *)(param_data + param_offset + 4),1);
        param_type[param_index] = param_type[param_index] & 0xf0 | 1;
      }
      return result;
    }
    int param_offset = param_index * 0x1c;
    int param_data_offset = *(int *)(param_data + param_offset);
    if (param_type[param_index] >> 4 == 0) {
      uVar5 = 4;
// FUN_00081454 0x00081454
uint32_t writeToMemory_00081454(int32_t memory_address, uint32_t data) {
  int32_t data_struct_address = *(int32_t *)(memory_address + 0x14);
  int32_t data_struct_field_1 = *(int32_t *)(memory_address + 0x18);
  int32_t data_struct_field_2 = *(int32_t *)(data_struct_field_1 + 0x14);
  if ((*(int32_t *)(data_struct_field_2 + 0x84) == *(int32_t *)(data_struct_field_2 + 0x80)) && ((*(int32_t *)(data_struct_field_1 + 0x14) + 0x14) << 0x1e < 0)) {
    *(uint32_t *)(data_struct_field_1 + 0x1c) = data;
  }
  else {
    uint32_t data_struct_field_3 = 0x80000000 | (DAT_000814a4 & (*(int32_t *)(data_struct_field_2 + 0x80) + 1));
    if ((int32_t)data_struct_field_3 < 0) {
      data_struct_field_3 = (data_struct_field_3 - 1 | 0xffffff80) + 1;
    }
    while (*(uint32_t *)(data_struct_field_2 + 0x84) == data_struct_field_3);
    *(char *)(data_struct_field_2 + *(int32_t *)(data_struct_field_2 + 0x80)) = (char)data;
    *(uint32_t *)(*(int32_t *)(memory_address + 0x14) + 0x80) = data_struct_field_3;
    *(uint32_t *)(*(int32_t *)(memory_address + 0x18) + 8) = 2;
  }
  return 1;
}
// FUN_00081730 0x00081730

uint FUNC_00081730(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = param_2 ^ 0x80000000;
  uVar4 = param_1 << 1;
  bVar8 = uVar4 == 0;
  if (!bVar8) {
    param_4 = param_2 << 1;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar4 == param_4;
  }
  iVar7 = (int)uVar4 >> 0x18;
  if (!bVar8) {
    bVar8 = iVar7 == -1;
  }
  if (!bVar8) {
    bVar8 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar8) {
    iVar1 = (int)(param_2 << 1) >> 0x18;
    if (iVar7 == -1 || iVar1 == -1) {
      uVar4 = uVar2;
      if (iVar7 == -1) {
        uVar4 = param_1;
      }
      if (iVar7 != -1 || iVar1 != -1) {
        uVar2 = uVar4;
      }
      bVar8 = (uVar4 & 0x7fffff) == 0;
      if (bVar8) {
        bVar8 = (uVar2 & 0x7fffff) == 0;
      }
      if (bVar8) {
        bVar8 = uVar4 == uVar2;
      }
      if (!bVar8) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (((param_1 ^ uVar2) & 0x7fffffff) != 0) {
      if (uVar4 == 0) {
        param_1 = uVar2;
      }
      return param_1;
    }
    if (param_1 != uVar2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar2 = param_1 << 1;
      if ((param_1 & 0x80000000) != 0) {
        uVar2 = uVar2 | 0x80000000;
      }
      return uVar2;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_0008186a:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar6 = param_4 - uVar4;
  bVar8 = uVar6 != 0;
  uVar5 = uVar4;
  if (bVar8 && uVar4 <= param_4) {
    uVar5 = uVar4 + uVar6;
  }
  if (bVar8 && uVar4 <= param_4) {
    uVar2 = uVar2 ^ param_1;
  }
  if (bVar8 && uVar4 <= param_4) {
    param_1 = param_1 ^ uVar2;
  }
  if (bVar8 && uVar4 <= param_4) {
    uVar2 = uVar2 ^ param_1;
  }
  if (param_4 < uVar4) {
    uVar6 = -uVar6;
  }
  if (0x19 < uVar6) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar3 = uVar2 & 0xffffff | 0x800000;
  if ((uVar2 & 0x80000000) != 0) {
    uVar3 = -uVar3;
  }
  if (uVar5 == uVar6) {
    uVar3 = uVar3 ^ 0x800000;
    if (uVar5 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar5 = 1;
    }
    else {
      uVar6 = uVar6 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar3 >> (uVar6 & 0xff));
  uVar3 = uVar3 << (0x20 - uVar6 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar8 = uVar3 != 0;
    uVar3 = -uVar3;
    uVar4 = -uVar4 - (uint)bVar8;
  }
  if (uVar4 < 0x800000) {
    uVar2 = uVar3 & 0x80000000;
    uVar3 = uVar3 << 1;
    uVar4 = uVar4 * 2 + (uint)(uVar2 != 0);
    uVar2 = uVar5 - 2;
    if ((uVar4 & 0x800000) == 0) {
      iVar7 = count_leading_zeroes(uVar4);
      uVar6 = iVar7 - 8;
      uVar4 = uVar4 << (uVar6 & 0xff);
      if ((int)uVar2 < (int)uVar6) {
        uVar4 = uVar4 >> (-(uVar2 - uVar6) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar2 - uVar6) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar2 = uVar5 - 1;
    if (0xffffff < uVar4) {
      uVar2 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      uVar3 = (uint)(uVar2 != 0) << 0x1f | uVar3 >> 1;
      uVar2 = uVar5;
      if (0xfd < uVar5) goto LAB_0008186a;
    }
  }
  uVar4 = uVar4 + uVar2 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


// FUN_00080ab8 0x00080ab8
void doNothing_00080ab8(void)
{
  return;
}
// FUN_00081734 0x00081734

uint FUNC_00081734(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = param_1 << 1;
  bVar7 = uVar3 == 0;
  if (!bVar7) {
    param_4 = param_2 << 1;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar3 == param_4;
  }
  iVar6 = (int)uVar3 >> 0x18;
  if (!bVar7) {
    bVar7 = iVar6 == -1;
  }
  if (!bVar7) {
    bVar7 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar7) {
    iVar1 = (int)(param_2 << 1) >> 0x18;
    if (iVar6 == -1 || iVar1 == -1) {
      uVar3 = param_2;
      if (iVar6 == -1) {
        uVar3 = param_1;
      }
      if (iVar6 != -1 || iVar1 != -1) {
        param_2 = uVar3;
      }
      bVar7 = (uVar3 & 0x7fffff) == 0;
      if (bVar7) {
        bVar7 = (param_2 & 0x7fffff) == 0;
      }
      if (bVar7) {
        bVar7 = uVar3 == param_2;
      }
      if (!bVar7) {
        uVar3 = uVar3 | 0x400000;
      }
      return uVar3;
    }
    if (((param_1 ^ param_2) & 0x7fffffff) != 0) {
      if (uVar3 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar3 & 0xff000000) == 0) {
      uVar3 = param_1 << 1;
      if ((param_1 & 0x80000000) != 0) {
        uVar3 = uVar3 | 0x80000000;
      }
      return uVar3;
    }
    if (uVar3 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_0008186a:
    return param_1 | 0x7f800000;
  }
  uVar3 = uVar3 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar5 = param_4 - uVar3;
  bVar7 = uVar5 != 0;
  uVar4 = uVar3;
  if (bVar7 && uVar3 <= param_4) {
    uVar4 = uVar3 + uVar5;
  }
  if (bVar7 && uVar3 <= param_4) {
    param_2 = param_2 ^ param_1;
  }
  if (bVar7 && uVar3 <= param_4) {
    param_1 = param_1 ^ param_2;
  }
  if (bVar7 && uVar3 <= param_4) {
    param_2 = param_2 ^ param_1;
  }
  if (param_4 < uVar3) {
    uVar5 = -uVar5;
  }
  if (0x19 < uVar5) {
    return param_1;
  }
  uVar3 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar3 = -uVar3;
  }
  uVar2 = param_2 & 0xffffff | 0x800000;
  if ((param_2 & 0x80000000) != 0) {
    uVar2 = -uVar2;
  }
  if (uVar4 == uVar5) {
    uVar2 = uVar2 ^ 0x800000;
    if (uVar4 == 0) {
      uVar3 = uVar3 ^ 0x800000;
      uVar4 = 1;
    }
    else {
      uVar5 = uVar5 - 1;
    }
  }
  uVar3 = uVar3 + ((int)uVar2 >> (uVar5 & 0xff));
  uVar2 = uVar2 << (0x20 - uVar5 & 0xff);
  param_1 = uVar3 & 0x80000000;
  if ((int)uVar3 < 0) {
    bVar7 = uVar2 != 0;
    uVar2 = -uVar2;
    uVar3 = -uVar3 - (uint)bVar7;
  }
  if (uVar3 < 0x800000) {
    uVar5 = uVar2 & 0x80000000;
    uVar2 = uVar2 << 1;
    uVar3 = uVar3 * 2 + (uint)(uVar5 != 0);
    uVar5 = uVar4 - 2;
    if ((uVar3 & 0x800000) == 0) {
      iVar6 = count_leading_zeroes(uVar3);
      uVar4 = iVar6 - 8;
      uVar3 = uVar3 << (uVar4 & 0xff);
      if ((int)uVar5 < (int)uVar4) {
        uVar3 = uVar3 >> (-(uVar5 - uVar4) & 0xff);
      }
      else {
        uVar3 = uVar3 + (uVar5 - uVar4) * 0x800000;
      }
      return uVar3 | param_1;
    }
  }
  else {
    uVar5 = uVar4 - 1;
    if (0xffffff < uVar3) {
      uVar5 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      uVar2 = (uint)(uVar5 != 0) << 0x1f | uVar2 >> 1;
      uVar5 = uVar4;
      if (0xfd < uVar4) goto LAB_0008186a;
    }
  }
  uVar3 = uVar3 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar2);
  if (uVar2 == 0x80000000) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  return uVar3 | param_1;
}


// FUN_00084728 0x00084728
void set_param_value_00084728(int *output_value, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined *param_data = PTR_DAT_0008474c;
  *(undefined4 *)PTR_DAT_0008474c = 0;
  int return_value = return_zero(param_2, param_3, param_4);
  if (return_value == -1 && (*(int *)param_data != 0)) {
    *output_value = *(int *)param_data;
    return;
  }
  return;
}
// FUN_00083c40 0x00083c40
uint process_input_data_00083c40(uint32_t parameter_1, uint32_t parameter_2, byte **data_pointer)
{
  uint function_result;
  int function_status;
  uint input_value;
  uint input_size;
  byte *output_data;
  byte local_input_buffer;
  byte input_buffer[3];
  if (-1 < (int)((uint)*(ushort *)(data_pointer + 3) << 0x12)) {
    *(ushort *)(data_pointer + 3) = *(ushort *)(data_pointer + 3) | 0x2000;
    data_pointer[0x19] = (byte *)((uint)data_pointer[0x19] | 0x2000);
  }
  input_size = getDatValue_00084298();
  if ((input_size == 1) && (parameter_2 - 1 < 0xff)) {
    input_value = parameter_2 & 0xff;
    local_input_buffer = (byte)input_value;
  }
  else {
    function_result = execute_function_with_parameters_0008456c(parameter_1, &local_input_buffer, parameter_2, data_pointer + 0x17);
    if (function_result == 0xffffffff) {
      *(ushort *)(data_pointer + 3) = *(ushort *)(data_pointer + 3) | 0x40;
      return 0xffffffff;
    }
    if (function_result == 0) {
      return parameter_2;
    }
    input_value = (uint)local_input_buffer;
  }
  function_result = 0;
  do {
    output_data = data_pointer[2] + -1;
    data_pointer[2] = output_data;
    if ((int)output_data < 0) {
      if ((int)data_pointer[6] <= (int)output_data) {
        **data_pointer = (byte)input_value;
        output_data = *data_pointer;
        input_value = (uint)*output_data;
        if (input_value != 10) goto LAB_00083c90;
      }
      function_status = process_input(parameter_1, input_value, data_pointer);
      if (function_status == -1) {
        return 0xffffffff;
      }
    }
    else {
      **data_pointer = (byte)input_value;
      output_data = *data_pointer;
LAB_00083c90:
      *data_pointer = output_data + 1;
    }
    if (input_size <= function_result + 1) {
      return parameter_2;
    }
    input_value = (uint)input_buffer[function_result];
    function_result = function_result + 1;
  } while(true);
}
// FUN_000805d0 0x000805d0

void FUNC_000805d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  
  puVar7 = PTR_DAT_0008089c;
  puVar9 = PTR_DAT_00080898;
  puVar8 = PTR_DAT_00080894;
  puVar3 = PTR_DAT_0008087c;
  puVar5 = PTR_DAT_00080878;
  puVar4 = PTR_DAT_00080874;
  puVar2 = PTR_DAT_00080834;
  puVar1 = PTR_DAT_00080830;
  if ((byte)*PTR_DAT_0008082c < 10) {
                    /* WARNING: Could not recover jumptable at 0x000805f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_000805f0::switchdataD_000805f4 +
              (uint)(&switchD_000805f0::switchdataD_000805f4)[(byte)*PTR_DAT_0008082c] * 2))();
    return;
  }
  iVar16 = *(int *)PTR_DAT_00080894;
  iVar15 = iVar16 - *(int *)PTR_DAT_00080874;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 0x3c;
  }
  *(int *)PTR_DAT_0008087c = iVar15;
  puVar6 = PTR_DAT_00080880;
  uVar11 = *(uint *)puVar9;
  iVar15 = uVar11 - *(int *)puVar5;
  *(int *)PTR_DAT_00080880 = iVar15;
  if (iVar15 < 0) {
    *(int *)puVar3 = *(int *)puVar3 + -1;
    *(int *)puVar6 = iVar15 + 0x3c;
  }
  iVar15 = *(int *)puVar3;
  iVar19 = *(int *)puVar6;
  *(short *)(puVar1 + 0x36) = (short)iVar15;
  *(short *)(puVar1 + 0x38) = (short)iVar19;
  if ((iVar15 == 0) && (iVar19 == 0)) {
    *(undefined4 *)PTR_DAT_00080868 = 1;
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)puVar5 = 0;
  }
  puVar6 = PTR_DAT_00080888;
  puVar3 = PTR_DAT_00080884;
  if (*(int *)PTR_DAT_00080884 == iVar16) {
    iVar15 = 1 - uVar11;
    if (1 < uVar11) {
      iVar15 = 0;
    }
    *(int *)PTR_DAT_00080888 = iVar15;
    if (iVar15 != 0) goto LAB_00080a08;
  }
  else {
LAB_00080a08:
    *(int *)puVar3 = iVar16;
    puVar3 = PTR_DAT_00080a50;
    *(uint *)puVar6 = uVar11;
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)puVar5 = 0;
    *(undefined4 *)puVar3 = 0;
  }
  puVar6 = PTR_DAT_0008088c;
  puVar3 = PTR_DAT_00080860;
  iVar15 = *(int *)puVar7;
  if (iVar15 == 0) {
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)puVar5 = 0;
    piVar17 = (int *)PTR_DAT_0008088c;
LAB_000808f2:
    *piVar17 = iVar15;
  }
  else {
    if (iVar15 != 1) goto LAB_000808f4;
    if (*(int *)PTR_DAT_0008088c < *(int *)PTR_DAT_00080860) {
      uVar11 = getStoredValue_thunk_00081714();
      puVar7 = PTR_DAT_00080890;
      if (*(uint *)PTR_DAT_00080890 < uVar11) {
        *(int *)puVar6 = *(int *)puVar6 + 1;
        iVar15 = getStoredValue_thunk_00081714();
        *(int *)puVar7 = iVar15 + 1000;
      }
    }
    if (*(int *)puVar6 < *(int *)puVar3) goto LAB_000808f4;
    *(int *)PTR_DAT_0008088c = *(int *)puVar3 + 1;
    piVar17 = (int *)PTR_DAT_00080a20;
    puVar3 = PTR_DAT_00080a1c;
    if (*(int *)puVar4 < *(int *)puVar8) {
      uVar11 = getStoredValue_thunk_00081714();
      puVar3 = PTR_DAT_00080890;
      if (*(uint *)PTR_DAT_00080890 < uVar11) {
        *(int *)puVar5 = *(int *)puVar5 + 1;
        iVar15 = getStoredValue_thunk_00081714();
        *(int *)puVar3 = iVar15 + 1000;
      }
    }
    else {
      if (*(int *)puVar4 != *(int *)puVar8) goto LAB_000808f4;
      if (*(int *)puVar9 < *(int *)puVar5) {
        iVar15 = 0;
        *(undefined4 *)PTR_DAT_00080a1c = 0;
        goto LAB_000808f2;
      }
      uVar11 = getStoredValue_thunk_00081714();
      puVar8 = PTR_DAT_00080a54;
      if (*(uint *)PTR_DAT_00080a54 < uVar11) {
        *(int *)puVar3 = *(int *)puVar3 + 1;
        iVar15 = getStoredValue_thunk_00081714();
        *(int *)puVar8 = iVar15 + 1000;
      }
    }
    if (0x3b < *(int *)puVar5) {
      *(undefined4 *)PTR_DAT_00080a1c = 0;
      *(int *)puVar4 = *(int *)puVar4 + 1;
    }
  }
LAB_000808f4:
  uVar11 = getStoredValue_thunk_00081714();
  puVar8 = PTR_DAT_00080a60;
  puVar3 = PTR_DAT_00080a5c;
  puVar5 = PTR_DAT_00080a58;
  puVar4 = PTR_DAT_00080a24;
  if (*(uint *)PTR_DAT_00080a58 < uVar11) {
    uVar12 = convertToQ31_32_0008189c(*(undefined4 *)PTR_DAT_00080a28);
    uVar12 = FUNC_00081730(uVar12,*(undefined4 *)PTR_DAT_00080a2c);
    *(undefined4 *)PTR_DAT_00080a30 = uVar12;
    puVar9 = PTR_DAT_00080a34;
    uVar18 = *(undefined4 *)PTR_DAT_00080a34;
    uVar13 = FUNC_00081734(uVar12,uVar18);
    uVar13 = FUNC_00081944(uVar13,*(undefined4 *)puVar8);
    puVar7 = PTR_DAT_00080a64;
    uVar13 = FUNC_00081734(uVar13,*(undefined4 *)PTR_DAT_00080a64);
    *(undefined4 *)puVar8 = uVar13;
    uVar18 = FUNC_00081730(uVar12,uVar18);
    uVar18 = FUNC_00081944(uVar18,*(undefined4 *)PTR_DAT_00080a38);
    puVar8 = PTR_DAT_00080a3c;
    uVar18 = FUNC_00081730(uVar18,*(undefined4 *)PTR_DAT_00080a3c);
    *(undefined4 *)PTR_DAT_00080a38 = uVar18;
    uVar14 = FUNC_00081944(uVar12,*(undefined4 *)PTR_DAT_00080a40);
    uVar14 = FUNC_00081734(uVar14,uVar13);
    FUNC_00081734(uVar14,uVar18);
    uVar14 = decodeValue_00081cd0();
    *(undefined4 *)PTR_DAT_00080a44 = uVar14;
    uVar14 = convertToQ31_32_0008189c();
    *(undefined4 *)puVar9 = uVar12;
    *(undefined4 *)puVar4 = uVar14;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)puVar7 = uVar13;
    *(undefined4 *)puVar8 = uVar18;
    iVar15 = getStoredValue_thunk_00081714();
    *(int *)puVar5 = iVar15 + *(int *)puVar2;
  }
  uVar12 = convertToQ31_32_0008189c(*(undefined4 *)puVar2);
  iVar15 = check_parameters_concatenation_00081ca8(*(undefined4 *)puVar4,uVar12);
  if (iVar15 != 0) {
    *(undefined4 *)PTR_DAT_00080a24 = uVar12;
  }
  iVar15 = concatenate_and_check_params_00081c94(*(undefined4 *)puVar4,0);
  if (iVar15 != 0) {
    *(undefined4 *)PTR_DAT_00080a24 = 0;
  }
  uVar10 = calculate_00081d1c(*(undefined4 *)puVar4);
  iVar15 = *(int *)puVar3;
  *(undefined2 *)(puVar1 + 0x2a) = uVar10;
  *(int *)puVar3 = iVar15 + 1;
  *(uint *)PTR_DAT_00080a4c = *(ushort *)PTR_DAT_00080a48 & 1 ^ 1;
  return;
}


// FUN_000813e4 0x000813e4
uint getDifferenceFromOffsets_000813e4(int param_1)
{
  int* offset1 = *(int *)(param_1 + 0x10) + 0x80;
  int* offset2 = *(int *)(param_1 + 0x10) + 0x84;
  int difference = *offset1 - *offset2;
  return difference & 0x7f;
}
// FUN_0008120c 0x0008120c
void doNothing_0008120c()
{
  return;
}
// FUN_00084290 0x00084290
undefined4 getConstantValue_00084290()
{
  return DAT_00084294;
}
// FUN_000846b4 0x000846b4
void set_flag_in_integer_000846b4(int *output_value, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined *param_data = PTR_DAT_000846d8;
  *(undefined4 *)PTR_DAT_000846d8 = 0;
  int return_value = set_flag_in_integer_000846b4(param_2, param_3, param_3, 0, param_4);
  if (return_value == -1 && (*(int *)param_data != 0)) {
    *output_value = *(int *)param_data;
    return;
  }
  return;
}
// FUN_000813a8 0x000813a8
int initialize_buffer_000813a8(int buffer_address)
{
  fill_memory_with_byte(buffer_address, 0, 0x80);
  *(undefined4 *)(buffer_address + 0x80) = 0;
  *(undefined4 *)(buffer_address + 0x84) = 0;
  return buffer_address;
}
// FUN_00083d9c 0x00083d9c

void FUNC_00083d9c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return;
  }
  doNothing_00082598();
  iVar8 = DAT_00083f24;
  uVar2 = *(uint *)(param_2 + -4);
  iVar5 = param_2 + -8;
  uVar4 = uVar2 & 0xfffffffe;
  iVar3 = iVar5 + uVar4;
  uVar7 = *(uint *)(iVar3 + 4) & 0xfffffffc;
  if (*(int *)(DAT_00083f24 + 8) == iVar3) {
    uVar7 = uVar7 + uVar4;
    if (-1 < (int)(uVar2 << 0x1f)) {
      iVar5 = iVar5 - *(int *)(param_2 + -8);
      iVar1 = *(int *)(iVar5 + 0xc);
      iVar3 = *(int *)(iVar5 + 8);
      uVar7 = uVar7 + *(int *)(param_2 + -8);
      *(int *)(iVar3 + 0xc) = iVar1;
      *(int *)(iVar1 + 8) = iVar3;
    }
    uVar2 = *DAT_00083f2c;
    *(uint *)(iVar5 + 4) = uVar7 | 1;
    *(int *)(iVar8 + 8) = iVar5;
    if (uVar2 <= uVar7) {
      adjust_memory_allocation_size_00083d00(param_1,*(undefined4 *)PTR_DAT_00083f30);
    }
  }
  else {
    uVar2 = uVar2 & 1;
    *(uint *)(iVar3 + 4) = uVar7;
    if (uVar2 == 0) {
      iVar5 = iVar5 - *(int *)(param_2 + -8);
      iVar1 = *(int *)(iVar5 + 8);
      uVar4 = uVar4 + *(int *)(param_2 + -8);
      if (iVar1 == iVar8 + 8) {
        uVar2 = 1;
      }
      else {
        iVar6 = *(int *)(iVar5 + 0xc);
        *(int *)(iVar1 + 0xc) = iVar6;
        *(int *)(iVar6 + 8) = iVar1;
      }
    }
    else {
      uVar2 = 0;
    }
    if (-1 < *(int *)(iVar3 + uVar7 + 4) << 0x1f) {
      uVar4 = uVar4 + uVar7;
      iVar1 = *(int *)(iVar3 + 8);
      if ((uVar2 == 0) && (iVar1 == DAT_00083f28)) {
        *(int *)(iVar8 + 0x14) = iVar5;
        *(int *)(iVar8 + 0x10) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(int *)(iVar5 + 8) = iVar1;
        *(uint *)(iVar5 + 4) = uVar4 | 1;
        *(uint *)(iVar5 + uVar4) = uVar4;
        goto LAB_00083e30;
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar1 + 0xc) = iVar3;
      *(int *)(iVar3 + 8) = iVar1;
    }
    *(uint *)(iVar5 + 4) = uVar4 | 1;
    *(uint *)(iVar5 + uVar4) = uVar4;
    if (uVar2 == 0) {
      if (uVar4 < 0x200) {
        uVar2 = *(uint *)(iVar8 + 4);
        iVar1 = iVar8 + (uVar4 & 0xfffffff8);
        iVar3 = *(int *)(iVar1 + 8);
        *(int *)(iVar5 + 8) = iVar3;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(uint *)(iVar8 + 4) = uVar2 | 1 << ((int)(uVar4 >> 3) >> 2 & 0xffU);
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar3 + 0xc) = iVar5;
        doNothing_0008259c(param_1);
        return;
      }
      uVar2 = uVar4 >> 9;
      if (uVar2 < 5) {
        iVar3 = (uVar4 >> 6) + 0x38;
        iVar1 = iVar3 * 2;
      }
      else if (uVar2 < 0x15) {
        iVar3 = uVar2 + 0x5b;
        iVar1 = iVar3 * 2;
      }
      else if (uVar2 < 0x55) {
        iVar3 = (uVar4 >> 0xc) + 0x6e;
        iVar1 = iVar3 * 2;
      }
      else if (uVar2 < 0x155) {
        iVar3 = (uVar4 >> 0xf) + 0x77;
        iVar1 = iVar3 * 2;
      }
      else if (uVar2 < 0x555) {
        iVar3 = (uVar4 >> 0x12) + 0x7c;
        iVar1 = iVar3 * 2;
      }
      else {
        iVar1 = 0xfc;
        iVar3 = 0x7e;
      }
      iVar8 = iVar8 + iVar1 * 4;
      iVar1 = *(int *)(iVar8 + 8);
      if (iVar1 == iVar8) {
        *(uint *)(DAT_00083f24 + 4) = *(uint *)(DAT_00083f24 + 4) | 1 << (iVar3 >> 2 & 0xffU);
        iVar8 = iVar1;
      }
      else {
        do {
          if ((*(uint *)(iVar1 + 4) & 0xfffffffc) <= uVar4) break;
          iVar1 = *(int *)(iVar1 + 8);
        } while (iVar8 != iVar1);
        iVar8 = *(int *)(iVar1 + 0xc);
      }
      *(int *)(iVar5 + 0xc) = iVar8;
      *(int *)(iVar5 + 8) = iVar1;
      *(int *)(iVar8 + 8) = iVar5;
      *(int *)(iVar1 + 0xc) = iVar5;
    }
  }
LAB_00083e30:
  doNothing_0008259c(param_1);
  return;
}


// FUN_00083c08 0x00083c08
void doNothing_00083c08()
{
  return;
}
// FUN_00081bf4 0x00081bf4
uint calculateChecksum_00081bf4(uint value1, uint value2)
{
  uint temp1 = value1 * 2;
  uint temp2 = value2 * 2;
  if (((int)temp1 >> 0x18 == -1 || (int)temp2 >> 0x18 == -1) && ((((int)temp1 >> 0x18 == -1 && ((value1 & 0x7fffff) != 0)) || (((int)temp2 >> 0x18 == -1 && ((value2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uint temp3 = temp1 | value2 & 0x7fffffff;
  bool isTemp3Zero = temp3 == 0;
  if (!isTemp3Zero) {
    temp3 = value1 ^ value2;
    isTemp3Zero = temp3 == 0;
  }
  bool isTemp4Negative = -1 < (int)temp3;
  if (isTemp4Negative) {
    value1 = temp1 + value2 * -2;
    isTemp3Zero = value1 == 0;
  }
  if ((isTemp4Negative && temp2 <= temp1) && !isTemp3Zero) {
    value1 = (int)value2 >> 0x1f;
  }
  if (!isTemp4Negative || temp2 > temp1) {
    value1 = ~((int)value2 >> 0x1f);
  }
  if (!isTemp3Zero) {
    value1 = value1 | 1;
  }
  return value1;
}
// FUN_00081d7c 0x00081d7c
void execute_functions_00081d7c(void)
{
  int function_count = (int)PTR_DAT_00081dbc - (int)PTR_DAT_00081dc0 >> 2;
  if (function_count != 0) {
    code **function_pointers = (code **)(PTR_DAT_00081dc0 + -4);
    int i = 0;
    do {
      i++;
      function_pointers++;
      (**function_pointers)();
    } while (function_count != i);
  }
  undefined *end_point = PTR_DAT_00081dc8;
  undefined *start_point = PTR_LAB_00081dc4;
  do_nothing();
  int function_count_2 = (int)start_point - (int)end_point >> 2;
  if (function_count_2 != 0) {
    code **function_pointers_2 = (code **)(end_point + -4);
    int i = 0;
    do {
      i++;
      function_pointers_2++;
      (**function_pointers_2)();
    } while (function_count_2 != i);
    return;
  }
  return;
}
// FUN_00081c5c 0x00081c5c
undefined8 concatenate_params_to_64bit_word_00081c5c(undefined4 param_1, undefined4 param_2)
{
  calculate_checksum();
  return CONCAT44(param_2, param_1);
}
// FUN_00081388 0x00081388
void decrementAndCallIfZero_00081388()
{
  int* counter = DAT_000813a0;
  if ((*counter != -1) && (--(*counter) == 0)) {
    (*DAT_000813a4)();
  }
  return;
}
// FUN_00082598 0x00082598
void doNothing_00082598()
{
  return;
}
// FUN_00082994 0x00082994
void copyString_00082994(uint* destination, uint* source)
{
  char character;
  ushort value;
  uint* tempSource;
  uint* tempDest;
  bool isValueShort;
  if ((((uint)source ^ (uint)destination) & 3) != 0) {
    do {
      character = *(char *)source;
      *(char *)destination = character;
      source = (uint *)((int)source + 1);
      destination = (uint *)((int)destination + 1);
    } while (character != '\0');
    return;
  }
  if (((uint)source & 3) != 0) {
    tempSource = source;
    if (((uint)source & 1) != 0) {
      tempSource = (uint *)((int)source + 1);
      character = *(char *)source;
      *(char *)destination = character;
      destination = (uint *)((int)destination + 1);
      if (character == '\0') {
        return;
      }
    }
    source = tempSource;
    if (((uint)tempSource & 2) != 0) {
      source = (uint *)((int)tempSource + 2);
      value = *(ushort *)tempSource;
      isValueShort = (value & 0xff) == 0;
      if (isValueShort) {
        *(char *)destination = (char)value;
      }
      else {
        *(ushort *)destination = value;
        isValueShort = (value & 0xff00) == 0;
        destination = (uint *)((int)destination + 2);
      }
      if (isValueShort) {
        return;
      }
    }
  }
  tempSource = source;
  uint value = *source;
  tempDest = destination;
  if (((uint)source & 4) != 0) {
    if ((value + 0xfefefeff & ~value & 0x80808080) != 0) goto LAB_000829f8;
    tempDest = destination + 1;
    *destination = value;
    tempSource = source + 2;
    value = source[1];
  }
  while( true ) {
    uint* nextSource = tempSource + 1;
    uint nextValue = *tempSource;
    destination = tempDest;
    if ((value + 0xfefefeff & ~value & 0x80808080) != 0) break;
    destination = tempDest + 1;
    *tempDest = value;
    value = nextValue;
    if ((nextValue + 0xfefefeff & ~nextValue & 0x80808080) != 0) break;
    tempSource = tempSource + 2;
    value = *nextSource;
    tempDest = tempDest + 2;
    *destination = nextValue;
  }
  do {
    *(char *)destination = (char)value;
    uint characterValue = value & 0xff;
    value = value >> 8 | value << 0x18;
    destination = (uint *)((int)destination + 1);
  } while (characterValue != 0);
  return;
}
// FUN_00080c0c 0x00080c0c
void initialize_memory_write_params_00080c0c(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  uint8_t* buffer1 = PTR_DAT_00080ca0;
  uint8_t* buffer2 = PTR_DAT_00080ca4;
  uint8_t* buffer3 = PTR_DAT_00080cac;
  uint8_t* buffer4 = PTR_DAT_00080cb0;
  uint8_t* buffer5 = PTR_DAT_00080cb4;
  uint8_t* buffer6 = PTR_DAT_00080cb8;
  uint8_t* buffer7 = PTR_DAT_00080cbc;
  uint8_t* buffer8 = PTR_DAT_00080cdc;
  initialize_buffer(buffer1);
  initialize_buffer(buffer2);
  initialize_buffer(buffer3);
  initialize_buffer(buffer4);
  initialize_buffer(buffer5);
  initialize_buffer(buffer6);
  initialize_buffer(buffer7);
  initialize_buffer(buffer8);
  initialize_memory_write_params_00080c0c(PTR_DAT_00080cc4, DAT_00080cc0, 0x11, 0x11, buffer2, buffer8);
  initialize_memory_write_params_00080c0c(PTR_DAT_00080ccc, DAT_00080cc8, 0x12, 0x12, buffer3, buffer6);
  initialize_memory_write_params_00080c0c(PTR_DAT_00080cd4, DAT_00080cd0, 0x14, 0x14, buffer5, buffer7);
  return;
}
// FUN_00080d2e 0x00080d2e
void updateValue_00080d2e(int memoryAddress, uint bitmask, uint value)
{
  uint result;
  *(uint *)(memoryAddress + 0x44) = value;
  switch(bitmask) {
    case 0:
    case 3:
    case 4:
    case 5:
      return;
    case 1:
      result = *(uint *)(memoryAddress + 0x70) & *(uint *)(memoryAddress + 0x70) & ~value;
      break;
    case 2:
      result = *(uint *)(memoryAddress + 0x70) | value;
      break;
    default:
      goto switchD_00080d34_caseD_6;
  }
  *(uint *)(memoryAddress + 0x70) = result;
  switchD_00080d34_caseD_6:
  *(uint *)(memoryAddress + 4) = value;
  return;
}
// FUN_00081944 0x00081944

uint FUNC_00081944(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar3 == 0xff;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff;
  }
  if (bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      bVar9 = param_1 == 0 || param_1 == 0x80000000;
      uVar2 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        bVar9 = param_2 == 0;
        uVar2 = param_1;
      }
      if (!bVar9) {
        bVar9 = param_2 == 0x80000000;
      }
      uVar8 = uVar2;
      if (((bVar9) || ((uVar3 == 0xff && ((uVar2 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar8 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar8 | 0x7fc00000;
      }
      uVar2 = uVar2 ^ param_2;
      goto LAB_00081a94;
    }
    bVar9 = (param_1 & 0x7fffffff) == 0;
    if (!bVar9) {
      bVar9 = (param_2 & 0x7fffffff) == 0;
    }
    if (bVar9) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar9 = uVar3 == 0;
    uVar2 = param_1 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_1 = param_1 << 1;
        bVar9 = (param_1 & 0x800000) == 0;
      }
      if (!bVar9) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar2;
    bVar9 = param_4 == 0;
    uVar2 = param_2 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_2 = param_2 << 1;
        bVar9 = (param_2 & 0x800000) == 0;
      }
      if (!bVar9) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar2;
  }
  iVar4 = uVar3 + param_4;
  uVar8 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_2 = param_2 << 9;
    bVar9 = param_2 == 0;
  }
  if (bVar9) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar2 = uVar8 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar10 = SBORROW4(iVar4,0x7f);
    iVar5 = iVar4 + -0x7f;
    bVar9 = iVar5 == 0;
    iVar7 = iVar5;
    if (!bVar9 && 0x7e < iVar4) {
      bVar10 = SBORROW4(0xff,iVar5);
      iVar7 = 0xff - iVar5;
      bVar9 = iVar5 == 0xff;
    }
    if (!bVar9 && iVar7 < 0 == bVar10) {
      uVar2 = uVar2 | iVar5 * 0x800000;
    }
    if (!bVar9 && iVar7 < 0 == bVar10) {
      return uVar2;
    }
    uVar2 = uVar2 | 0x800000;
    uVar6 = 0;
    bVar10 = SBORROW4(iVar5,1);
    uVar8 = iVar4 - 0x80;
    bVar9 = uVar8 == 0;
    uVar3 = uVar8;
  }
  else {
    lVar1 = (ulonglong)(uVar3 >> 5 | 0x8000000) * (ulonglong)(param_2 >> 5 | 0x8000000);
    uVar6 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar9 = uVar2 < 0x800000;
    if (bVar9) {
      uVar2 = uVar2 << 1;
    }
    if (bVar9) {
      uVar2 = uVar2 | uVar6 >> 0x1f;
      uVar6 = uVar6 << 1;
    }
    uVar2 = uVar8 & 0x80000000 | uVar2;
    uVar8 = (iVar4 + -0x7f) - (uint)bVar9;
    bVar10 = SBORROW4(uVar8,0xfd);
    bVar9 = uVar8 == 0xfd;
    uVar3 = uVar8 - 0xfd;
    if (uVar8 < 0xfe) {
      uVar2 = uVar2 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
      if (uVar6 == 0x80000000) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
  }
  if (bVar9 || (int)uVar3 < 0 != bVar10) {
    bVar9 = (int)(uVar8 + 0x19) < 0;
    if (uVar8 == 0xffffffe7 || bVar9 != SCARRY4(uVar8,0x19)) {
      uVar2 = uVar2 & 0x80000000;
    }
    if (uVar8 != 0xffffffe7 && bVar9 == SCARRY4(uVar8,0x19)) {
      uVar3 = (uVar2 << 1) >> (-uVar8 & 0xff);
      uVar8 = uVar2 << (uVar8 + 0x20 & 0xff);
      uVar3 = ((uint)((uVar2 & 0x80000000) != 0) << 0x1f | uVar3 >> 1) + (uint)((byte)uVar3 & 1);
      if ((uVar6 | uVar8 << 1) == 0) {
        uVar3 = uVar3 & ~(uVar8 >> 0x1f);
      }
      return uVar3;
    }
    return uVar2;
  }
LAB_00081a94:
  return uVar2 & 0x80000000 | 0x7f800000;
}


// FUN_000844c4 0x000844c4
uint process_input_000844c4(int data_address, uint input_value, uint32_t *status, uint32_t data_value)
{
  ushort parameter_value;
  uint parameter;
  undefined *data_pointer;
  int data_offset;
  if ((data_address != 0) && (*(int *)(data_address + 0x38) == 0)) {
    execute_skipped_function_00083b14();
  }
  parameter_value = *(ushort *)(status + 3);
  parameter = (uint)parameter_value;
  status[2] = status[6];
  if ((-1 < (int)(parameter << 0x1c)) || (data_offset = status[4], data_offset == 0)) {
    data_offset = check_parameter_and_update_data(data_address, status, parameter_value, parameter, data_value);
    if (data_offset != 0) {
      return 0xffffffff;
    }
    parameter_value = *(ushort *)(status + 3);
    data_offset = status[4];
    parameter = (uint)parameter_value;
  }
  input_value = input_value & 0xff;
  if ((int)(parameter << 0x12) < 0) {
    data_pointer = (undefined *)*status;
    data_offset = (int)data_pointer - data_offset;
    if (data_offset < (int)status[5]) {
      LAB_000844f6:
      data_offset = data_offset + 1;
      goto LAB_000844f8;
    }
  }
  else {
    status[0x19] = status[0x19] & 0xffffdfff;
    data_pointer = (undefined *)*status;
    *(ushort *)(status + 3) = parameter_value | 0x2000;
    data_offset = (int)data_pointer - data_offset;
    if (data_offset < (int)status[5]) goto LAB_000844f6;
  }
  data_offset = execute_skipped_function_00083adc(data_address, status);
  if (data_offset != 0) {
    return 0xffffffff;
  }
  data_pointer = (undefined *)*status;
  data_offset = 1;
  LAB_000844f8:
  status[2] = status[2] + -1;
  *status = data_pointer + 1;
  *data_pointer = (char)input_value;
  if (((status[5] == data_offset) || (((int)((uint)*(ushort *)(status + 3) << 0x1f) < 0 && (input_value == 10)))) && (data_offset = execute_skipped_function_00083adc(data_address, status), data_offset != 0)) {
    return 0xffffffff;
  }
  return input_value;
}
// FUN_0008189c 0x0008189c
uint convertToQ31_32_0008189c(uint input)
{
  int leadingZeroes = count_leading_zeroes(input);
  uint signBit = input & 0x80000000;
  uint absInput = input;
  if ((int)signBit < 0) {
    absInput = -input;
  }
  if (absInput == 0) {
    return 0;
  }
  uint shiftAmount = leadingZeroes - 8;
  int exponent = ((signBit | 0x4b000000) - 0x800000) + shiftAmount * -0x800000;
  if (leadingZeroes > 7) {
    uint fraction = 0 << (shiftAmount & 0xff);
    uint result = exponent + (absInput << (shiftAmount & 0xff)) + (0U >> (0x20 - shiftAmount & 0xff)) + (uint)(0x7fffffff < fraction);
    if (fraction == 0x80000000) {
      result = result & 0xfffffffe;
    }
    return result;
  }
  uint fraction = absInput << (leadingZeroes + 0x18U & 0xff);
  uint result = exponent + ((absInput >> (0x20 - (leadingZeroes + 0x18U) & 0xff)) - ((int)fraction >> 0x1f));
  if ((fraction & 0x7fffffff) == 0) {
    result = result & ~(fraction >> 0x1f);
  }
  return result;
}
// FUN_0008234c 0x0008234c

undefined4 * FUNC_0008234c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = param_1;
  if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
    if (param_3 < 8) {
      uVar5 = param_3 - 4;
      if (3 < param_3) {
        do {
          puVar1 = param_2;
          puVar3 = puVar2;
          bVar6 = uVar5 != 0;
          uVar5 = uVar5 - 1;
          *(undefined *)puVar3 = *(undefined *)puVar1;
          puVar2 = (undefined4 *)((int)puVar3 + 1);
          param_2 = (undefined4 *)((int)puVar1 + 1);
        } while (bVar6);
        *(undefined *)(undefined4 *)((int)puVar3 + 1) =
             *(undefined *)(undefined4 *)((int)puVar1 + 1);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)puVar1 + 2);
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)puVar1 + 3);
        return param_1;
      }
      goto LAB_000823d0;
    }
    if ((((uint)param_2 & 3) != 0) && (((uint)param_1 & 3) != 0)) {
      uVar5 = 4 - ((uint)param_1 & 3);
      param_3 = param_3 - uVar5;
      puVar1 = param_1;
      puVar3 = param_2;
      if (((uint)param_1 & 1) != 0) {
        puVar3 = (undefined4 *)((int)param_2 + 1);
        puVar1 = (undefined4 *)((int)param_1 + 1);
        *(undefined *)param_1 = *(undefined *)param_2;
      }
      puVar2 = puVar1;
      param_2 = puVar3;
      if ((uVar5 & 2) != 0) {
        param_2 = (undefined4 *)((int)puVar3 + 2);
        puVar2 = (undefined4 *)((int)puVar1 + 2);
        *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
      }
    }
  }
  while (0x3f < param_3) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    puVar2[4] = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    puVar2[7] = param_2[7];
    puVar2[8] = param_2[8];
    puVar2[9] = param_2[9];
    puVar2[10] = param_2[10];
    puVar2[0xb] = param_2[0xb];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = param_2[0xf];
    puVar2 = puVar2 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 - 0x40;
  }
  uVar4 = param_3 - 0x10;
  if (0xffffffcf < param_3 - 0x40) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      puVar2 = puVar2 + 4;
      param_2 = param_2 + 4;
      bVar6 = 0xf < uVar4;
      uVar4 = uVar4 - 0x10;
    } while (bVar6);
  }
  uVar5 = uVar4 + 0xc;
  puVar3 = puVar2;
  puVar1 = param_2;
  if (0xfffffff3 < uVar4) {
    do {
      param_2 = puVar1 + 1;
      *puVar3 = *puVar1;
      bVar6 = 3 < uVar5;
      uVar5 = uVar5 - 4;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      puVar1 = param_2;
    } while (bVar6);
  }
LAB_000823d0:
  if (uVar5 + 4 != 0) {
    puVar1 = puVar2;
    puVar3 = param_2;
    if ((uVar5 & 1) != 0) {
      puVar3 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      *(undefined *)puVar2 = *(undefined *)param_2;
    }
    if ((uVar5 + 4 & 2) != 0) {
      *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    }
  }
  return param_1;
}


// FUN_00080a68 0x00080a68
void process_data_and_add_to_buffer_00080a68(void)
{
  undefined *PTR_DAT_00080a94 = PTR_DAT_00080a94;
  process_input_string(PTR_DAT_00080a94, PTR_s__00080a98);
  add_param_to_buffer(PTR_DAT_00080a94, DAT_00080aa0, DAT_00080a9c);
  undefined *PTR_DAT_00080aa4 = PTR_DAT_00080aa4;
  PTR_DAT_00080aa4[4] = 0;
  PTR_DAT_00080aa4[5] = 0;
  PTR_DAT_00080aa4[6] = 6;
  *(undefined2 *)(PTR_DAT_00080aa4 + 0x56) = 1000;
  return;
}
// FUN_0008165c 0x0008165c
undefined4 process_data_0008165c(undefined4 *data, undefined4 string, undefined4 size)
{
  int function_status;
  function_status = check_and_execute_function(data, size);
  if (function_status == 0) {
    reset_data(data);
  }
  else {
    data[2] = size;
    copy_string(*data, string);
  }
  return data;
}
// FUN_000815f8 0x000815f8
uint combineBytes_000815f8(int byte1, uint byte2)
{
  return byte2 | byte1 << 8;
}
// FUN_00084384 0x00084384
uint* findCharInBuffer_00084384(uint* bufferStart, char targetChar, uint* bufferEnd)
{
  uint* currentPtr = bufferStart;
  if (((uint)bufferStart & 3) == 0) {
    while (bufferEnd > (uint*)0x3) {
      uint temp = *currentPtr ^ CONCAT22(CONCAT11(targetChar,targetChar),CONCAT11(targetChar,targetChar));
      if ((temp + 0xfefefeff & ~temp & 0x80808080) != 0) {
        break;
      }
      bufferEnd--;
      currentPtr++;
    }
    bufferStart = bufferEnd;
    char* lastChar = (char*)((int)bufferStart - 1);
    if (bufferStart != (uint*)0x0 && *currentPtr != targetChar) {
      char* currentChar = (char*)0x0;
      while (true) {
        currentPtr = (uint*)((int)currentPtr + 1);
        currentChar++;
        if (currentChar == lastChar) {
          return (uint*)0x0;
        }
        if (*(char*)currentPtr == targetChar) {
          break;
        }
      }
    }
  }
  else if (bufferEnd == (uint*)0x0) {
    bufferStart = (uint*)0x0;
  }
  else if (*bufferStart != targetChar) {
    currentPtr = (uint*)((int)bufferStart + 1);
    bufferEnd = (uint*)((int)bufferEnd - 1);
    while (true) {
      bufferStart = currentPtr;
      if (((uint)bufferStart & 3) == 0) {
        break;
      }
      if (bufferEnd == (uint*)0x0) {
        return (uint*)0x0;
      }
      currentPtr = (uint*)((int)currentPtr + 1);
      bufferEnd--;
      if (*(char*)bufferStart == targetChar) {
        return bufferStart;
      }
    }
    while (bufferEnd > (uint*)0x3) {
      uint temp = *currentPtr ^ CONCAT22(CONCAT11(targetChar,targetChar),CONCAT11(targetChar,targetChar));
      if ((temp + 0xfefefeff & ~temp & 0x80808080) != 0) {
        break;
      }
      bufferEnd--;
      currentPtr++;
    }
    bufferStart = bufferEnd;
    char* lastChar = (char*)((int)bufferStart - 1);
    if (bufferStart != (uint*)0x0 && *currentPtr != targetChar) {
      char* currentChar = (char*)0x0;
      while (true) {
        currentPtr = (uint*)((int)currentPtr + 1);
        currentChar++;
        if (currentChar == lastChar) {
          return (uint*)0x0;
        }
        if (*(char*)currentPtr == targetChar) {
          break;
        }
      }
    }
  }
  return bufferStart;
}
// FUN_00081034 0x00081034
void setBitInParam_00081034(int paramAddress, uint bitValue, uint bitPosition)
{
  uint* paramPtr = (uint*)(paramAddress + 4);
  uint currentValue = *paramPtr;
  uint updatedValue = currentValue | bitValue | (bitPosition & 1) << 7;
  *paramPtr = updatedValue;
  return;
}
// FUN_00083c0c 0x00083c0c
void doNothing_00083c0c()
{
  // This function does nothing.
  return;
}
// FUN_00083974 0x00083974
undefined4 add_data_to_list_00083974(undefined4 data)
{
  undefined *data_pointer = PTR_DAT_00083984;
  if (DAT_00083980 == 0) {
    return data;
  }
  int data_array = *(int *)PTR_DAT_0008396c;
  undefined4 *list = *(undefined4 **)(data_array + 0x148);
  if (list == (undefined4 *)0x0) {
    list = (undefined4 *)(data_array + 0x14c);
    *(undefined4 **)(data_array + 0x148) = list;
  }
  int current_index = list[1];
  if (current_index > 0x1f) {
    if ((DAT_00083970 == 0) || (execute_skipped_function_with_data_00081df4(400) == (undefined4 *)0x0)) {
      return 0xffffffff;
    }
    *list = *(undefined4 *)(data_array + 0x148);
    list[1] = 0;
    current_index = 0;
    *(undefined4 **)(data_array + 0x148) = list;
    list[0x62] = 0;
    list[99] = 0;
  }
  list[1] = current_index + 1;
  list[current_index + 2] = data_pointer;
  return 0;
}
// FUN_00084700 0x00084700
void set_param_to_zero_if_return_is_negative_00084700(int *output_value, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined *param_data = PTR_DAT_00084724;
  *(undefined4 *)PTR_DAT_00084724 = 0;
  int return_value = return_zero(param_2, param_3, param_4);
  if (return_value == -1 && (*(int *)param_data != 0)) {
    *output_value = *(int *)param_data;
    return;
  }
  return;
}
// thunk_FUN_00081714 0x00081208
undefined4 getStoredValue_thunk_00081714()
{
  return *(undefined4 *)PTR_DAT_0008171c;
}
// FUN_00081ca8 0x00081ca8
bool check_parameters_concatenation_00081ca8(void)
{
  bool carry_flag = false;
  bool zero_flag = false;
  concatenate_parameters_to_64bit_word_00081c54();
  if (carry_flag || !zero_flag) {
    return true;
  }
  else {
    return false;
  }
}
// FUN_00081318 0x00081318
void update_parameter_00081318(int parameter_index, int value, undefined4 param_3)
{
  uint8_t* parameter_flags = PTR_DAT_00081384;
  uint8_t* parameter_data = PTR_DAT_00081380;
  if (parameter_data[parameter_index * 0x1c + 0xc] != '\0') {
    if ((parameter_flags[parameter_index] & 0xf) == 5) {
      handle_parameter(parameter_index, 1, param_3, 5, parameter_index, value, param_3);
    }
    parameter_flags[parameter_index] = parameter_flags[parameter_index] & 0xf | (byte)(value << 4);
    int parameter_data_index = *(int *)(parameter_data + parameter_index * 0x1c);
    undefined4 parameter_data_value = *(undefined4 *)(parameter_data + parameter_index * 0x1c + 4);
    int flags_check = checkFlags_00080e04(parameter_data_index, parameter_data_value);
    if (flags_check == 0) {
      if (value != 0) {
        *(undefined4 *)(parameter_data_index + 100) = parameter_data_value;
        return;
      }
      *(undefined4 *)(parameter_data_index + 0x60) = parameter_data_value;
      return;
    }
    set_values_in_array(parameter_data_index, parameter_data_value, value, 0, 1);
  }
  return;
}
// FUN_00081714 0x00081714
undefined4 getStoredValue_00081714()
{
  return *(undefined4 *)PTR_DAT_0008171c;
}
// FUN_0008449c 0x0008449c
void update_parameter_value_0008449c(undefined4 param_1, int parameter_data_index)
{
  int parameter_value = *(short *)(parameter_data_index + 0xe);
  int result = set_param_to_zero_if_return_is_negative(param_1, parameter_value);
  ushort parameter_flags = *(ushort *)(parameter_data_index + 0xc);
  if (result == -1) {
    parameter_flags &= 0xefff;
  }
  else {
    parameter_flags |= 0x1000;
  }
  if (result != -1) {
    *(int *)(parameter_data_index + 0x50) = result;
  }
  *(ushort *)(parameter_data_index + 0xc) = parameter_flags;
  return;
}
// FUN_0008259c 0x0008259c
void doNothing_0008259c()
{
  // This function does nothing.
  return;
}
// FUN_0008477c 0x0008477c
void calculate_difference_and_remainder_0008477c(uint dividend, int divisor, uint multiplier_low, uint multiplier_high, int *output_values)
{
  longlong product = multiply_64bit_numbers(multiplier_low, multiplier_high);
  uint product_low = (uint)product;
  uint product_high = (uint)(product >> 0x20);
  output_values[0] = dividend - product_low;
  output_values[1] = (divisor - (int)(product_high)) - (uint)(dividend < product_low);
  return;
}
// FUN_000801b0 0x000801b0
int process_parameter_000801b0(int **parameter_array)
{
  bool is_overflow = false;
  undefined byte_index = 0;
  byte parameter_index = *(byte *)((int)parameter_array + 5);
  if (parameter_index < 4) {
    while (true) {
      int function_result = (**(code **)(**parameter_array + 8))();
      if (function_result == 0) {
        break;
      }
      byte current_byte_index = *(byte *)((int)parameter_array + 0x49);
      undefined byte_value = (**(code **)(**parameter_array + 0xc))();
      *(undefined *)((int)parameter_array + current_byte_index + 9) = byte_value;
      byte_index = current_byte_index + 1;
      *(byte *)((int)parameter_array + 0x49) = byte_index;
      if (byte_index > 0x3f) {
        is_overflow = true;
        break;
      }
    }
  }
  *(short *)(parameter_array + 0x14) = *(short *)(parameter_array + 0x14) + 1;
  char return_value;
  if (is_overflow) {
    return_value = -3;
    *(short *)(parameter_array + 0x15) = *(short *)(parameter_array + 0x15) + 1;
  }
  else {
    return_value = byte_index;
  }
  return (int)return_value;
}
// FUN_000813c2 0x000813c2
void addCharToBuffer_000813c2(int bufferAddress, undefined newChar)
{
  uint bufferIndex = *(uint*)(bufferAddress + 0x80) + 1U & 0x7f;
  if (bufferIndex != *(uint*)(bufferAddress + 0x84)) {
    *(undefined*)(bufferAddress + *(uint*)(bufferAddress + 0x80)) = newChar;
    *(uint*)(bufferAddress + 0x80) = bufferIndex;
  }
  return;
}
// FUN_000814e4 0x000814e4
void initializeMemoryWriteParams_000814e4(undefined4* paramsArray, undefined4 param2, undefined param3, undefined4 param4, undefined4 param5, undefined4 param6)
{
  paramsArray[1] = 0;
  paramsArray[2] = 1000;
  paramsArray[6] = param2;
  paramsArray[0] = (undefined*)PTR_PTR_writeToMemory_00081454_1_00081504;
  *(undefined *)(paramsArray + 7) = param3;
  paramsArray[4] = param5;
  paramsArray[8] = param4;
  paramsArray[5] = param6;
  return;
}
// FUN_00080d54 0x00080d54
void updateParamsArray_00080d54(undefined4* paramsArray, undefined4 newValue, uint paramFlags)
{
  bool isFlagSet = (int)(paramFlags << 0x1f) < 0;
  paramsArray[0x11] = newValue;
  if (isFlagSet) {
    paramsArray[0x19] = newValue;
  }
  if (!isFlagSet) {
    paramsArray[0x18] = newValue;
  }
  isFlagSet = (paramFlags & 10) != 0;
  if (isFlagSet) {
    paramsArray[8] = newValue;
  }
  if (!isFlagSet) {
    paramsArray[9] = newValue;
  }
  if (((int)(paramFlags << 0x1e) < 0) || ((int)(paramFlags << 0x1c) < 0)) {
    paramsArray[0x20] = newValue;
  }
  paramsArray[5] = newValue;
  *paramsArray = newValue;
  return;
}
// FUN_0008021c 0x0008021c
uint16_t calculateChecksum_0008021c(int bufferAddress, uint16_t bufferLength)
{
  uint16_t checksum = 0xffff;
  for (int i = bufferAddress; (i - bufferAddress & 0xffU) < bufferLength; i++) {
    checksum = checksum ^ *(byte *)(i + 9);
    char bitIndex = 8;
    do {
      uint16_t bit = checksum & 1;
      checksum = checksum >> 1;
      if (bit != 0) {
        checksum = checksum ^ 0xa001;
      }
      bitIndex--;
    } while (bitIndex != 0);
  }
  return (checksum & 0xff) << 8 | checksum >> 8;
}
// FUN_00082b38 0x00082b38

/* WARNING: Type propagation algorithm not settling */

byte * FUNC_00082b38(int param_1,int param_2,byte *******param_3,int **param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  byte ********ppppppppbVar9;
  int *piVar10;
  int iVar11;
  byte **ppbVar12;
  char cVar13;
  byte *******pppppppbVar14;
  uint uVar15;
  int **ppiVar16;
  uint uVar17;
  uint uVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ********ppppppppbVar21;
  byte *******pppppppbVar22;
  int *piVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  uint uVar26;
  int *piVar27;
  undefined4 uVar28;
  byte ********ppppppppbVar29;
  bool bVar30;
  longlong lVar31;
  byte *******local_dc;
  byte *******local_d4;
  int **local_c8;
  byte *local_c4;
  undefined *local_c0;
  char local_a1;
  undefined local_a0;
  undefined local_9f;
  byte ********local_9c;
  byte *******local_98;
  byte *******local_94;
  undefined local_90;
  char cStack_6a;
  undefined local_69;
  undefined local_68 [4];
  byte *******local_64 [16];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUNC_00083b14();
  }
  uVar17 = (uint)*(ushort *)(param_2 + 0xc);
  if (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x12)) {
    uVar17 = uVar17 | 0x2000;
    *(short *)(param_2 + 0xc) = (short)uVar17;
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffdfff;
  }
  if (((int)(uVar17 << 0x1c) < 0) && (*(int *)(param_2 + 0x10) != 0)) {
    if ((uVar17 & 0x1a) != 10) goto LAB_00082b8a;
  }
  else {
    iVar11 = check_parameter_and_update_data_00083808(param_1,param_2);
    if (iVar11 != 0) {
      return (byte *)0xffffffff;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x1a) != 10) goto LAB_00082b8a;
  }
  if (-1 < *(short *)(param_2 + 0xe)) {
    pbVar8 = (byte *)process_data_block_0008378c(param_1,param_2,param_3,param_4);
    return pbVar8;
  }
LAB_00082b8a:
  local_c0 = (undefined *)0x0;
  local_94 = (byte *******)0x0;
  local_98 = (byte *******)0x0;
  local_c4 = (byte *)0x0;
  ppppppppbVar9 = (byte ********)local_68;
  local_c8 = param_4;
  local_9c = (byte ********)local_68;
LAB_00082b9e:
  pppppppbVar14 = param_3;
  if ((*(byte *)param_3 != 0) && (*(byte *)param_3 != 0x25)) {
    do {
      pppppppbVar14 = (byte *******)((int)pppppppbVar14 + 1);
      if (*(byte *)pppppppbVar14 == 0) break;
    } while (*(byte *)pppppppbVar14 != 0x25);
    pppppppbVar25 = (byte *******)((int)pppppppbVar14 - (int)param_3);
    if (pppppppbVar25 != (byte *******)0x0) {
      local_98 = (byte *******)((int)local_98 + 1);
      local_94 = (byte *******)((int)local_94 + (int)pppppppbVar25);
      *ppppppppbVar9 = param_3;
      ppppppppbVar9[1] = pppppppbVar25;
      if ((int)local_98 < 8) {
        ppppppppbVar9 = ppppppppbVar9 + 2;
      }
      else {
        if (local_94 == (byte *******)0x0) {
          local_c4 = local_c4 + (int)pppppppbVar25;
          ppppppppbVar9 = (byte ********)local_68;
          local_98 = local_94;
          goto LAB_00082bee;
        }
        iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
        ppppppppbVar9 = (byte ********)local_68;
        if (iVar11 != 0) goto LAB_000833de;
      }
      local_c4 = local_c4 + (int)pppppppbVar25;
    }
  }
LAB_00082bee:
  if (*(byte *)pppppppbVar14 != 0) {
    local_a1 = '\0';
    uVar18 = (uint)*(byte *)((int)pppppppbVar14 + 1);
    uVar17 = 0;
    bVar5 = false;
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    bVar30 = false;
    pppppppbVar25 = (byte *******)0x0;
    local_d4 = (byte *******)0xffffffff;
    param_3 = (byte *******)((int)pppppppbVar14 + 1);
LAB_00082c12:
    param_3 = (byte *******)((int)param_3 + 1);
LAB_00082c16:
    switch(uVar18) {
    case 0x20:
      goto switchD_00082c20_caseD_20;
    default:
      if (uVar18 != 0) {
        local_dc = (byte *******)0x1;
        local_d4 = (byte *******)0x1;
        ppppppppbVar29 = (byte ********)&local_90;
        local_90 = (char)uVar18;
        goto LAB_00083012;
      }
      goto LAB_000833d0;
    case 0x23:
      bVar3 = true;
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2a:
      pppppppbVar25 = (byte *******)*local_c8;
      local_c8 = local_c8 + 1;
      if ((int)pppppppbVar25 < 0) {
        pppppppbVar25 = (byte *******)-(int)pppppppbVar25;
        goto switchD_00082c20_caseD_2d;
      }
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2b:
      uVar18 = (uint)*(byte *)param_3;
      local_a1 = '+';
      goto LAB_00082c12;
    case 0x2d:
switchD_00082c20_caseD_2d:
      uVar17 = uVar17 | 4;
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2e:
      uVar18 = (uint)*(byte *)param_3;
      pppppppbVar14 = (byte *******)((int)param_3 + 1);
      if (uVar18 == 0x2a) {
        uVar18 = (uint)*(byte *)((int)param_3 + 1);
        local_d4 = (byte *******)*local_c8;
        local_c8 = local_c8 + 1;
        param_3 = pppppppbVar14;
        if ((int)local_d4 < 0) {
          local_d4 = (byte *******)0xffffffff;
        }
        goto LAB_00082c12;
      }
      uVar15 = uVar18 - 0x30;
      if (uVar15 < 10) {
        uVar26 = 0;
        do {
          param_3 = (byte *******)((int)pppppppbVar14 + 1);
          uVar18 = (uint)*(byte *)pppppppbVar14;
          uVar26 = uVar15 + uVar26 * 10;
          uVar15 = uVar18 - 0x30;
          pppppppbVar14 = param_3;
        } while (uVar15 < 10);
        local_d4 = (byte *******)(uVar26 | (int)uVar26 >> 0x1f);
      }
      else {
        local_d4 = (byte *******)0x0;
        param_3 = pppppppbVar14;
      }
      goto LAB_00082c16;
    case 0x30:
      uVar17 = uVar17 | 0x80;
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_00082c20_caseD_31;
    case 0x44:
      bVar2 = true;
      if (bVar1 == false) goto LAB_00083028;
LAB_00082e98:
      local_c8 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      piVar23 = *local_c8;
      piVar27 = local_c8[1];
      local_c8 = local_c8 + 2;
      goto LAB_00082eac;
    case 0x4f:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082d42;
LAB_00082f2a:
      iVar11 = (uint)bVar2 << 4;
      iVar7 = (uint)bVar1 << 5;
      if ((bVar2 == 0) && (iVar7 = (uint)bVar30 << 6, bVar30 != 0)) {
        piVar23 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)0x0;
      }
      else {
        iVar11 = iVar7;
        piVar23 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)0x0;
      }
      break;
    case 0x55:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082e62;
LAB_00082f7c:
      if ((bVar2) || (bVar30 == false)) {
        iVar11 = 1;
        piVar23 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)0x0;
      }
      else {
        piVar27 = (int *)0x0;
        piVar23 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        iVar11 = 1;
      }
      break;
    case 0x58:
      local_c0 = PTR_s_0123456789ABCDEF_000830ec;
      if (bVar1 == false) goto LAB_00083196;
LAB_00082fb6:
      ppiVar16 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar16 + 2;
      piVar23 = *ppiVar16;
      piVar27 = ppiVar16[1];
      goto LAB_00082fca;
    case 99:
      piVar23 = *local_c8;
      local_c8 = local_c8 + 1;
      local_dc = (byte *******)0x1;
      local_90 = SUB41(piVar23,0);
      local_d4 = (byte *******)0x1;
      ppppppppbVar29 = (byte ********)&local_90;
      goto LAB_00083012;
    case 100:
    case 0x69:
      if (bVar1 != false) goto LAB_00082e98;
LAB_00083028:
      if ((bVar2 == false) && (bVar30 != false)) {
        piVar23 = (int *)(int)*(short *)local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)((int)piVar23 >> 0x1f);
      }
      else {
        piVar23 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)((int)piVar23 >> 0x1f);
      }
LAB_00082eac:
      if ((int)piVar27 < 0) {
        bVar30 = piVar23 != (int *)0x0;
        piVar23 = (int *)-(int)piVar23;
        piVar27 = (int *)(-(int)piVar27 - (uint)bVar30);
        local_a1 = '-';
        cVar4 = '-';
        iVar11 = 1;
        goto LAB_00082d6a;
      }
      if (-1 < (int)local_d4) {
        uVar17 = uVar17 & 0xffffff7f;
      }
      bVar5 = false;
      uVar18 = (uint)piVar23 | (uint)piVar27;
      iVar11 = 1;
      cVar4 = local_a1;
      goto joined_r0x00082d78;
    case 0x68:
      bVar30 = true;
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x6c:
      uVar18 = (uint)*(byte *)param_3;
      if (uVar18 == 0x6c) {
        bVar1 = true;
        uVar18 = (uint)*(byte *)((int)param_3 + 1);
        param_3 = (byte *******)((int)param_3 + 1);
      }
      else {
        bVar2 = true;
      }
      goto LAB_00082c12;
    case 0x6e:
      if (bVar1 == false) {
        if (bVar2 == false) {
          if (bVar30) {
            piVar23 = *local_c8;
            local_c8 = local_c8 + 1;
            *(short *)piVar23 = (short)local_c4;
          }
          else {
            ppbVar12 = (byte **)*local_c8;
            local_c8 = local_c8 + 1;
            *ppbVar12 = local_c4;
          }
        }
        else {
          ppbVar12 = (byte **)*local_c8;
          local_c8 = local_c8 + 1;
          *ppbVar12 = local_c4;
        }
      }
      else {
        ppbVar12 = (byte **)*local_c8;
        local_c8 = local_c8 + 1;
        *ppbVar12 = local_c4;
        ppbVar12[1] = (byte *)((int)local_c4 >> 0x1f);
      }
      goto LAB_00082b9e;
    case 0x6f:
      if (bVar1 == false) goto LAB_00082f2a;
LAB_00082d42:
      ppiVar16 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar16 + 2;
      piVar23 = *ppiVar16;
      piVar27 = ppiVar16[1];
      iVar11 = 0;
      break;
    case 0x70:
      local_c0 = PTR_s_0123456789abcdef_000833c4;
      piVar23 = *local_c8;
      local_c8 = local_c8 + 1;
      local_9f = 0x78;
      bVar5 = true;
      piVar27 = (int *)0x0;
      local_a0 = 0x30;
      iVar11 = 2;
      break;
    case 0x71:
      bVar1 = true;
      uVar18 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x73:
      ppppppppbVar29 = (byte ********)*local_c8;
      local_a1 = '\0';
      local_c8 = local_c8 + 1;
      if (ppppppppbVar29 != (byte ********)0x0) {
        if ((int)local_d4 < 0) {
          local_d4 = (byte *******)findNullTerminatorIndex_00082a50(ppppppppbVar29);
          pppppppbVar14 = (byte *******)0x0;
          cVar4 = local_a1;
        }
        else {
          pppppppbVar14 = (byte *******)findCharInBuffer_00084384(ppppppppbVar29,0,local_d4);
          cVar4 = local_a1;
          if (pppppppbVar14 != (byte *******)0x0) {
            pppppppbVar20 = (byte *******)((int)pppppppbVar14 - (int)ppppppppbVar29);
            if ((int)local_d4 <= (int)(byte *******)((int)pppppppbVar14 - (int)ppppppppbVar29)) {
              pppppppbVar20 = local_d4;
            }
            pppppppbVar14 = (byte *******)0x0;
            local_d4 = pppppppbVar20;
          }
        }
        goto LAB_00082da0;
      }
      if ((byte *******)0x5 < local_d4) {
        local_d4 = (byte *******)0x6;
      }
      local_dc = (byte *******)((uint)local_d4 & ~((int)local_d4 >> 0x1f));
      ppppppppbVar29 = (byte ********)PTR_s__null__00083784;
LAB_00083012:
      local_a1 = '\0';
      pppppppbVar14 = (byte *******)0x0;
      goto LAB_00082dba;
    case 0x75:
      if (!bVar1) goto LAB_00082f7c;
LAB_00082e62:
      ppiVar16 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar16 + 2;
      piVar23 = *ppiVar16;
      piVar27 = ppiVar16[1];
      iVar11 = 1;
      break;
    case 0x78:
      local_c0 = PTR_s_0123456789abcdef_000833c4;
      if (bVar1 != false) goto LAB_00082fb6;
LAB_00083196:
      if ((bVar2 == false) && (bVar30 != false)) {
        piVar27 = (int *)0x0;
        piVar23 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
      }
      else {
        piVar23 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar27 = (int *)0x0;
      }
LAB_00082fca:
      if ((bVar3) && (((uint)piVar23 | (uint)piVar27) != 0)) {
        bVar5 = true;
        local_a0 = 0x30;
        iVar11 = 2;
        local_9f = (char)uVar18;
      }
      else {
        iVar11 = 2;
      }
    }
    local_a1 = '\0';
    cVar4 = '\0';
LAB_00082d6a:
    if (-1 < (int)local_d4) {
      uVar17 = uVar17 & 0xffffff7f;
    }
    uVar18 = (uint)piVar23 | (uint)piVar27;
joined_r0x00082d78:
    lVar31 = CONCAT44(piVar27,piVar23);
    pppppppbVar14 = local_d4;
    if ((uVar18 == 0) && (local_d4 == (byte *******)0x0)) {
      ppppppppbVar29 = (byte ********)local_68;
      if ((iVar11 != 0) || (!bVar3)) goto LAB_00082da0;
      ppppppppbVar29 = (byte ********)(&cStack_6a + 1);
      local_69 = '0';
      goto LAB_00082d9a;
    }
    if (iVar11 == 1) {
      if (piVar27 != (int *)0x0 || (int *)0x9 < piVar23) {
        ppppppppbVar21 = (byte ********)(&cStack_6a + 1);
        do {
          ppppppppbVar29 = ppppppppbVar21;
          uVar28 = (undefined4)((ulonglong)lVar31 >> 0x20);
          cVar13 = '
';
          calculate_result_00084750((int)lVar31,uVar28,10,0);
          *(char *)ppppppppbVar29 = cVar13 + '0';
          lVar31 = calculate_result_00084750((int)lVar31,uVar28,10,0);
          ppppppppbVar21 = (byte ********)((int)ppppppppbVar29 + -1);
        } while (lVar31 != 0);
        local_d4 = (byte *******)((int)local_68 - (int)ppppppppbVar29);
        goto LAB_00082da0;
      }
      local_69 = (char)piVar23 + '0';
      ppppppppbVar29 = (byte ********)(&cStack_6a + 1);
      goto LAB_0008351e;
    }
    ppppppppbVar21 = (byte ********)(&cStack_6a + 1);
    if (iVar11 != 2) goto LAB_0008337e;
    do {
      ppppppppbVar29 = ppppppppbVar21;
      uVar18 = (uint)piVar23 & 0xf;
      piVar23 = (int *)((uint)piVar23 >> 4 | (int)piVar27 << 0x1c);
      piVar27 = (int *)((uint)piVar27 >> 4);
      *(undefined *)ppppppppbVar29 = local_c0[uVar18];
      ppppppppbVar21 = (byte ********)((int)ppppppppbVar29 + -1);
    } while (((uint)piVar23 | (uint)piVar27) != 0);
    local_d4 = (byte *******)((int)local_68 - (int)ppppppppbVar29);
    goto LAB_00082da0;
  }
LAB_000833d0:
  if (local_94 != (byte *******)0x0) {
    process_input_data_block_00082ac0(param_1,param_2,&local_9c);
  }
LAB_000833de:
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
    return (byte *)0xffffffff;
  }
  return local_c4;
LAB_0008337e:
  do {
    ppppppppbVar29 = ppppppppbVar21;
    piVar10 = (int *)((uint)piVar23 >> 3 | (int)piVar27 << 0x1d);
    piVar27 = (int *)((uint)piVar27 >> 3);
    iVar11 = ((uint)piVar23 & 7) + 0x30;
    *(char *)ppppppppbVar29 = (char)iVar11;
    ppppppppbVar21 = (byte ********)((int)ppppppppbVar29 + -1);
    piVar23 = piVar10;
  } while (((uint)piVar10 | (uint)piVar27) != 0);
  if (bVar3) {
    if (iVar11 == 0x30) {
LAB_00082d9a:
      local_d4 = (byte *******)((int)local_68 - (int)ppppppppbVar29);
    }
    else {
      *(undefined *)((int)ppppppppbVar29 + -1) = 0x30;
      ppppppppbVar29 = ppppppppbVar21;
      local_d4 = (byte *******)((int)local_68 - (int)ppppppppbVar21);
    }
  }
  else {
LAB_0008351e:
    local_d4 = (byte *******)((int)local_68 - (int)ppppppppbVar29);
  }
LAB_00082da0:
  local_dc = local_d4;
  if ((int)local_d4 < (int)pppppppbVar14) {
    local_dc = pppppppbVar14;
  }
  if (cVar4 != '\0') {
    local_dc = (byte *******)((int)local_dc + 1);
  }
LAB_00082dba:
  pppppppbVar20 = (byte *******)PTR_s__0123456789ABCDEF_000830e8;
  if (bVar5) {
    local_dc = (byte *******)((int)local_dc + 2);
  }
  if ((uVar17 == 0) &&
     (pppppppbVar22 = (byte *******)((int)pppppppbVar25 - (int)local_dc), 0 < (int)pppppppbVar22)) {
    if ((int)pppppppbVar22 < 0x11) {
      pppppppbVar19 = (byte *******)((int)local_98 + 1);
      pppppppbVar20 = (byte *******)PTR_s__0123456789ABCDEF_00083710;
    }
    else {
      do {
        pppppppbVar24 = pppppppbVar22;
        pppppppbVar22 = (byte *******)((int)local_98 + 1);
        local_94 = local_94 + 4;
        *ppppppppbVar9 = pppppppbVar20;
        ppppppppbVar9[1] = (byte *******)0x10;
        if ((int)pppppppbVar22 < 8) {
          pppppppbVar19 = (byte *******)((int)local_98 + 2);
          ppppppppbVar9 = ppppppppbVar9 + 2;
          local_98 = pppppppbVar22;
        }
        else if (local_94 == (byte *******)0x0) {
          pppppppbVar19 = (byte *******)0x1;
          ppppppppbVar9 = (byte ********)local_68;
          local_98 = local_94;
        }
        else {
          local_98 = pppppppbVar22;
          iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
          if (iVar11 != 0) goto LAB_000833de;
          pppppppbVar19 = (byte *******)((int)local_98 + 1);
          ppppppppbVar9 = (byte ********)local_68;
        }
        pppppppbVar22 = pppppppbVar24 + -4;
      } while (0x10 < (int)pppppppbVar22);
      pppppppbVar22 = pppppppbVar24 + -4;
    }
    local_94 = (byte *******)((int)local_94 + (int)pppppppbVar22);
    *ppppppppbVar9 = pppppppbVar20;
    ppppppppbVar9[1] = pppppppbVar22;
    local_98 = pppppppbVar19;
    if ((int)pppppppbVar19 < 8) {
      pppppppbVar19 = (byte *******)((int)pppppppbVar19 + 1);
      ppppppppbVar9 = ppppppppbVar9 + 2;
    }
    else if (local_94 == (byte *******)0x0) {
      pppppppbVar19 = (byte *******)0x1;
      local_98 = local_94;
      ppppppppbVar9 = (byte ********)local_68;
    }
    else {
      iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
      pppppppbVar19 = (byte *******)((int)local_98 + 1);
      ppppppppbVar9 = (byte ********)local_68;
    }
  }
  else {
    pppppppbVar19 = (byte *******)((int)local_98 + 1);
  }
  pppppppbVar20 = pppppppbVar19;
  if (local_a1 != '\0') {
    local_94 = (byte *******)((int)local_94 + 1);
    pppppppbVar20 = (byte *******)0x1;
    *ppppppppbVar9 = (byte *******)&local_a1;
    ppppppppbVar9[1] = (byte *******)0x1;
    if ((int)pppppppbVar19 < 8) {
      pppppppbVar20 = (byte *******)((int)pppppppbVar19 + 1);
      local_98 = pppppppbVar19;
      ppppppppbVar9 = ppppppppbVar9 + 2;
    }
    else {
      local_98 = local_94;
      ppppppppbVar9 = (byte ********)local_68;
      if (local_94 != (byte *******)0x0) {
        local_98 = pppppppbVar19;
        iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
        if (iVar11 != 0) goto LAB_000833de;
        pppppppbVar20 = (byte *******)((int)local_98 + 1);
      }
    }
  }
  pppppppbVar22 = pppppppbVar20;
  pppppppbVar19 = local_98;
  if (bVar5) {
    local_94 = (byte *******)((int)local_94 + 2);
    *ppppppppbVar9 = (byte *******)&local_a0;
    ppppppppbVar9[1] = (byte *******)0x2;
    if ((int)pppppppbVar20 < 8) {
      pppppppbVar22 = (byte *******)((int)pppppppbVar20 + 1);
      pppppppbVar19 = pppppppbVar20;
      ppppppppbVar9 = ppppppppbVar9 + 2;
    }
    else if (local_94 == (byte *******)0x0) {
      pppppppbVar22 = (byte *******)0x1;
      pppppppbVar19 = local_94;
      ppppppppbVar9 = (byte ********)local_68;
    }
    else {
      local_98 = pppppppbVar20;
      iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
      pppppppbVar22 = (byte *******)((int)local_98 + 1);
      pppppppbVar19 = local_98;
      ppppppppbVar9 = (byte ********)local_68;
    }
  }
  puVar6 = PTR_DAT_0008370c;
  pppppppbVar20 = pppppppbVar22;
  if ((uVar17 == 0x80) &&
     (pppppppbVar24 = (byte *******)((int)pppppppbVar25 - (int)local_dc), 0 < (int)pppppppbVar24)) {
    if (0x10 < (int)pppppppbVar24) {
      do {
        while( true ) {
          pppppppbVar20 = pppppppbVar24;
          local_98 = (byte *******)((int)pppppppbVar19 + 1);
          local_94 = local_94 + 4;
          *ppppppppbVar9 = (byte *******)puVar6;
          ppppppppbVar9[1] = (byte *******)0x10;
          if (7 < (int)local_98) break;
          pppppppbVar22 = (byte *******)((int)pppppppbVar19 + 2);
          ppppppppbVar9 = ppppppppbVar9 + 2;
LAB_0008348e:
          pppppppbVar19 = local_98;
          pppppppbVar24 = pppppppbVar20 + -4;
          if ((int)(pppppppbVar20 + -4) < 0x11) goto LAB_000834b4;
        }
        if (local_94 != (byte *******)0x0) {
          iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
          if (iVar11 == 0) {
            pppppppbVar22 = (byte *******)((int)local_98 + 1);
            ppppppppbVar9 = (byte ********)local_68;
            goto LAB_0008348e;
          }
          goto LAB_000833de;
        }
        pppppppbVar22 = (byte *******)0x1;
        pppppppbVar19 = local_94;
        pppppppbVar24 = pppppppbVar20 + -4;
        ppppppppbVar9 = (byte ********)local_68;
      } while (0x10 < (int)(pppppppbVar20 + -4));
LAB_000834b4:
      pppppppbVar24 = pppppppbVar20 + -4;
    }
    local_94 = (byte *******)((int)local_94 + (int)pppppppbVar24);
    *ppppppppbVar9 = (byte *******)puVar6;
    ppppppppbVar9[1] = pppppppbVar24;
    if ((int)pppppppbVar22 < 8) {
      pppppppbVar20 = (byte *******)((int)pppppppbVar22 + 1);
      pppppppbVar19 = pppppppbVar22;
      ppppppppbVar9 = ppppppppbVar9 + 2;
    }
    else if (local_94 == (byte *******)0x0) {
      pppppppbVar20 = (byte *******)0x1;
      pppppppbVar19 = local_94;
      ppppppppbVar9 = (byte ********)local_68;
    }
    else {
      local_98 = pppppppbVar22;
      iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
      pppppppbVar20 = (byte *******)((int)local_98 + 1);
      pppppppbVar19 = local_98;
      ppppppppbVar9 = (byte ********)local_68;
    }
  }
  puVar6 = PTR_DAT_000833c8;
  pppppppbVar14 = (byte *******)((int)pppppppbVar14 - (int)local_d4);
  ppppppppbVar21 = (byte ********)local_68;
  if ((int)pppppppbVar14 < 1) {
LAB_000832c6:
    local_94 = (byte *******)((int)local_94 + (int)local_d4);
    *ppppppppbVar9 = (byte *******)ppppppppbVar29;
    ppppppppbVar9[1] = local_d4;
    local_d4 = local_94;
    local_98 = pppppppbVar20;
    if ((int)pppppppbVar20 < 8) goto LAB_0008345a;
    local_98 = local_94;
    if ((local_94 != (byte *******)0x0) &&
       (local_98 = pppppppbVar20, iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c), iVar11 != 0))
    goto LAB_000833de;
  }
  else {
    if (0x10 < (int)pppppppbVar14) {
      do {
        while( true ) {
          pppppppbVar22 = pppppppbVar14;
          local_98 = (byte *******)((int)pppppppbVar19 + 1);
          local_94 = local_94 + 4;
          *ppppppppbVar9 = (byte *******)puVar6;
          ppppppppbVar9[1] = (byte *******)0x10;
          if (7 < (int)local_98) break;
          pppppppbVar20 = (byte *******)((int)pppppppbVar19 + 2);
          ppppppppbVar9 = ppppppppbVar9 + 2;
LAB_00083282:
          pppppppbVar19 = local_98;
          pppppppbVar14 = pppppppbVar22 + -4;
          if ((int)(pppppppbVar22 + -4) < 0x11) goto LAB_000832aa;
        }
        if (local_94 != (byte *******)0x0) {
          iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
          if (iVar11 == 0) {
            pppppppbVar20 = (byte *******)((int)local_98 + 1);
            ppppppppbVar9 = (byte ********)local_68;
            goto LAB_00083282;
          }
          goto LAB_000833de;
        }
        pppppppbVar20 = (byte *******)0x1;
        ppppppppbVar9 = (byte ********)local_68;
        pppppppbVar19 = local_94;
        pppppppbVar14 = pppppppbVar22 + -4;
      } while (0x10 < (int)(pppppppbVar22 + -4));
LAB_000832aa:
      pppppppbVar14 = pppppppbVar22 + -4;
    }
    local_94 = (byte *******)((int)local_94 + (int)pppppppbVar14);
    *ppppppppbVar9 = (byte *******)puVar6;
    ppppppppbVar9[1] = pppppppbVar14;
    if ((int)pppppppbVar20 < 8) {
      pppppppbVar20 = (byte *******)((int)pppppppbVar20 + 1);
      ppppppppbVar9 = ppppppppbVar9 + 2;
      goto LAB_000832c6;
    }
    if (local_94 != (byte *******)0x0) {
      local_98 = pppppppbVar20;
      iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
      pppppppbVar20 = (byte *******)((int)local_98 + 1);
      ppppppppbVar9 = (byte ********)local_68;
      goto LAB_000832c6;
    }
    local_64[0] = local_d4;
    local_98 = (byte *******)0x1;
    ppppppppbVar9 = (byte ********)local_68;
    local_68 = (undefined  [4])ppppppppbVar29;
LAB_0008345a:
    ppppppppbVar21 = ppppppppbVar9 + 2;
    local_94 = local_d4;
  }
  pppppppbVar14 = (byte *******)PTR_s__0123456789ABCDEF_000833cc;
  if (((uVar17 & 4) != 0) &&
     (pppppppbVar20 = (byte *******)((int)pppppppbVar25 - (int)local_dc), 0 < (int)pppppppbVar20)) {
    pppppppbVar22 = local_98;
    if ((int)pppppppbVar20 < 0x11) {
      pppppppbVar19 = (byte *******)((int)local_98 + 1);
      pppppppbVar14 = (byte *******)PTR_s__0123456789ABCDEF_00083788;
    }
    else {
      do {
        while( true ) {
          local_98 = (byte *******)((int)pppppppbVar22 + 1);
          local_94 = local_94 + 4;
          *ppppppppbVar21 = pppppppbVar14;
          ppppppppbVar21[1] = (byte *******)0x10;
          if (7 < (int)local_98) break;
          pppppppbVar19 = (byte *******)((int)pppppppbVar22 + 2);
          ppppppppbVar21 = ppppppppbVar21 + 2;
LAB_00083316:
          pppppppbVar20 = pppppppbVar20 + -4;
          pppppppbVar22 = local_98;
          if ((int)pppppppbVar20 < 0x11) goto LAB_0008333e;
        }
        if (local_94 != (byte *******)0x0) {
          iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
          if (iVar11 == 0) {
            pppppppbVar19 = (byte *******)((int)local_98 + 1);
            ppppppppbVar21 = (byte ********)local_68;
            goto LAB_00083316;
          }
          goto LAB_000833de;
        }
        pppppppbVar20 = pppppppbVar20 + -4;
        pppppppbVar19 = (byte *******)0x1;
        pppppppbVar22 = local_94;
        ppppppppbVar21 = (byte ********)local_68;
      } while (0x10 < (int)pppppppbVar20);
    }
LAB_0008333e:
    local_94 = (byte *******)((int)local_94 + (int)pppppppbVar20);
    *ppppppppbVar21 = pppppppbVar14;
    ppppppppbVar21[1] = pppppppbVar20;
    local_98 = pppppppbVar19;
    if (7 < (int)pppppppbVar19) {
      if (local_94 == (byte *******)0x0) {
        if ((int)local_dc < (int)pppppppbVar25) {
          local_dc = pppppppbVar25;
        }
        local_c4 = local_c4 + (int)local_dc;
        goto LAB_00083422;
      }
      iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
    }
  }
  if ((int)local_dc < (int)pppppppbVar25) {
    local_dc = pppppppbVar25;
  }
  local_c4 = local_c4 + (int)local_dc;
  if ((local_94 != (byte *******)0x0) &&
     (iVar11 = process_input_data_block_00082ac0(param_1,param_2,&local_9c), iVar11 != 0)) goto LAB_000833de;
LAB_00083422:
  local_98 = (byte *******)0x0;
  ppppppppbVar9 = (byte ********)local_68;
  goto LAB_00082b9e;
switchD_00082c20_caseD_31:
  uVar15 = uVar18 - 0x30;
  pppppppbVar25 = (byte *******)0x0;
  pppppppbVar14 = param_3;
  do {
    param_3 = (byte *******)((int)pppppppbVar14 + 1);
    uVar18 = (uint)*(byte *)pppppppbVar14;
    pppppppbVar25 = (byte *******)(uVar15 + (int)pppppppbVar25 * 10);
    uVar15 = uVar18 - 0x30;
    pppppppbVar14 = param_3;
  } while (uVar15 < 10);
  goto LAB_00082c16;
switchD_00082c20_caseD_20:
  uVar18 = (uint)*(byte *)param_3;
  if (local_a1 == '\0') {
    local_a1 = ' ';
  }
  goto LAB_00082c12;
}


// FUN_00081e04 0x00081e04
void execute_skipped_function_00081e04(int **DAT_00081e10, undefined4 param)
{
  FUNC_FUNCTION(*DAT_00081e10, param);
  return;
}
// FUN_00084750 0x00084750
int calculate_result_00084750(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      return -1;
    }
    else {
      return 0;
    }
  }
  else {
    int result = calculate_values();
    return result;
  }
}
// FUN_00080ae4 0x00080ae4
void initialize_system_00080ae4(void)
{
  uint *system_time = SYSTEM_TIME_PTR;
  initialize_registers();
  undefined4 *parameter_array = PARAMETER_ARRAY_PTR;
  parameter_array[1] = *system_time / 1000 - 1;
  *(undefined *)(MEMORY_PTR + 0x23) = 0xf0;
  parameter_array[2] = 0;
  *parameter_array = 7;
  execute_system_functions();
  for (int i = 0; i < 0x4f; i++) {
    update_parameter(i, 0);
  }
  int parameter_1 = PARAMETER_1_PTR;
  int parameter_2 = PARAMETER_2_PTR;
  int parameter_3 = PARAMETER_3_PTR;
  int parameter_4 = PARAMETER_4_PTR;
  *(undefined4 *)(parameter_1 + 0xa0) = -1;
  *(undefined4 *)(parameter_2 + 0xa0) = -1;
  *(undefined4 *)(parameter_3 + 0xa0) = -1;
  *(undefined4 *)(parameter_4 + 0xa0) = -1;
  handle_parameter(parameter_3, 1, 0x300, 0);
  update_parameter(0, 1);
  handle_parameter(parameter_3, 1, 0xc00, 0);
  handle_parameter(parameter_3, 1, 0x3000, 0);
  handle_parameter(parameter_2, 2, 0x30, 0);
  handle_parameter(parameter_4, 1, 0xc00, 0);
  handle_parameter(parameter_3, 1, 3, 0);
  handle_parameter(parameter_4, 1, 0xc000, 0);
  set_bit_in_memory(0x25);
  calculate_value(DAT_00080c08,*system_time,DAT_00080c04,0xc);
  set_values(DAT_00080c08, 0, 0x300000, 1);
  set_bit_in_parameter(DAT_00080c08, 0, 0);
  set_parameter_value(DAT_00080c08, -1);
  set_default_value(DAT_00080c08);
  return;
}
// FUN_00081d5c 0x00081d5c
undefined4 addParamToBuffer_00081d5c(undefined4 param1, undefined4 param2, undefined4 param3)
{
  uint bufferIndex;
  uint* bufferPtr = *(uint**)(DAT_0008396c + 0x148);
  if (bufferPtr == (uint*)0x0) {
    bufferPtr = (uint*)(DAT_0008396c + 0x14c);
    *(uint**)(DAT_0008396c + 0x148) = bufferPtr;
  }
  bufferIndex = bufferPtr[1];
  if (0x1f < (int)bufferIndex) {
    if ((DAT_00083970 == 0) ||
       ((bufferPtr = (uint*)allocateMemory(400)), bufferPtr == (uint*)0x0)) {
      return 0xffffffff;
    }
    *bufferPtr = *(uint*)(DAT_0008396c + 0x148);
    bufferPtr[1] = 0;
    bufferIndex = 0;
    *(uint**)(DAT_0008396c + 0x148) = bufferPtr;
    bufferPtr[0x62] = 0;
    bufferPtr[99] = 0;
  }
  uint bitMask = 1 << (bufferIndex & 0xff);
  bufferPtr[bufferIndex + 0x22] = param1;
  bufferPtr[0x62] = bufferPtr[0x62] | bitMask;
  bufferPtr[bufferIndex + 0x42] = param3;
  bufferPtr[99] = bitMask | bufferPtr[99];
  bufferPtr[1] = bufferIndex + 1;
  bufferPtr[bufferIndex + 2] = param2;
  return 0;
}
// FUN_00082970 0x00082970
void set_param_to_global_var_if_return_is_negative_00082970(int *output_value, undefined4 param)
{
  undefined *global_var = PTR_DAT_00082990;
  *(undefined4 *)PTR_DAT_00082990 = 0;
  int return_value = add_to_global_variable(param);
  if (return_value == -1 && (*(int *)global_var != 0)) {
    *output_value = *(int *)global_var;
    return;
  }
  return;
}
// FUN_000811be 0x000811be
uint8_t returnTrue_000811be()
{
  return 1;
}
// FUN_00084a80 0x00084a80

undefined8 FUNC_00084a80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar9 = count_leading_zeroes(param_3);
      if (uVar9 == 0) {
        param_2 = param_2 - param_3;
        uVar2 = param_3 >> 0x10;
        uVar4 = param_3 & 0xffff;
        uVar7 = 1;
      }
      else {
        param_3 = param_3 << (uVar9 & 0xff);
        uVar3 = param_2 >> (0x20 - uVar9 & 0xff);
        uVar2 = param_3 >> 0x10;
        uVar8 = uVar3 / uVar2;
        uVar4 = param_3 & 0xffff;
        uVar7 = uVar4 * uVar8;
        uVar5 = param_1 >> (0x20 - uVar9 & 0xff) | param_2 << (uVar9 & 0xff);
        uVar3 = uVar5 >> 0x10 | (uVar3 - uVar2 * uVar8) * 0x10000;
        param_1 = param_1 << (uVar9 & 0xff);
        uVar9 = uVar8;
        if (uVar3 <= uVar7 && uVar7 - uVar3 != 0) {
          bVar11 = CARRY4(uVar3,param_3);
          uVar3 = uVar3 + param_3;
          uVar9 = uVar8 - 1;
          if ((bVar11 == false) && (uVar3 <= uVar7 && uVar7 - uVar3 != 0)) {
            uVar9 = uVar8 - 2;
            uVar3 = uVar3 + param_3;
          }
        }
        uVar6 = (uVar3 - uVar7) / uVar2;
        uVar8 = uVar4 * uVar6;
        param_2 = uVar5 & 0xffff | ((uVar3 - uVar7) - uVar2 * uVar6) * 0x10000;
        uVar7 = uVar6;
        if (param_2 <= uVar8 && uVar8 - param_2 != 0) {
          bVar11 = CARRY4(param_2,param_3);
          param_2 = param_2 + param_3;
          uVar7 = uVar6 - 1;
          if ((bVar11 == false) && (param_2 <= uVar8 && uVar8 - param_2 != 0)) {
            uVar7 = uVar6 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar8;
        uVar7 = uVar7 | uVar9 << 0x10;
      }
      uVar8 = param_2 / uVar2;
      uVar3 = uVar4 * uVar8;
      uVar5 = param_1 >> 0x10 | (param_2 - uVar2 * uVar8) * 0x10000;
      uVar9 = uVar8;
      if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
        bVar11 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        uVar9 = uVar8 - 1;
        if ((bVar11 == false) && (uVar5 <= uVar3 && uVar3 - uVar5 != 0)) {
          uVar9 = uVar8 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar8 = (uVar5 - uVar3) / uVar2;
      uVar4 = uVar4 * uVar8;
      uVar5 = param_1 & 0xffff | ((uVar5 - uVar3) - uVar2 * uVar8) * 0x10000;
      uVar2 = uVar8;
      if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
        uVar2 = uVar8 - 1;
        if ((CARRY4(uVar5,param_3) == false) &&
           (uVar5 + param_3 <= uVar4 && uVar4 - (uVar5 + param_3) != 0)) {
          uVar2 = uVar8 - 2;
        }
      }
      return CONCAT44(uVar7,uVar2 | uVar9 << 0x10);
    }
    uVar9 = count_leading_zeroes(param_3);
    if (uVar9 != 0) {
      uVar7 = param_1 >> (0x20 - uVar9 & 0xff);
      param_3 = param_3 << (uVar9 & 0xff);
      param_1 = param_1 << (uVar9 & 0xff);
      param_2 = uVar7 | param_2 << (uVar9 & 0xff);
    }
    uVar7 = param_3 >> 0x10;
    uVar2 = param_2 / uVar7;
    uVar4 = (param_3 & 0xffff) * uVar2;
    uVar8 = param_1 >> 0x10 | (param_2 - uVar7 * uVar2) * 0x10000;
    uVar9 = uVar2;
    if (uVar8 <= uVar4 && uVar4 - uVar8 != 0) {
      bVar11 = CARRY4(uVar8,param_3);
      uVar8 = uVar8 + param_3;
      uVar9 = uVar2 - 1;
      if ((bVar11 == false) && (uVar8 <= uVar4 && uVar4 - uVar8 != 0)) {
        uVar9 = uVar2 - 2;
        uVar8 = uVar8 + param_3;
      }
    }
    uVar5 = (uVar8 - uVar4) / uVar7;
    uVar2 = (param_3 & 0xffff) * uVar5;
    uVar4 = param_1 & 0xffff | ((uVar8 - uVar4) - uVar7 * uVar5) * 0x10000;
    uVar7 = uVar5;
    if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
      uVar7 = uVar5 - 1;
      if ((CARRY4(uVar4,param_3) == false) &&
         (uVar4 + param_3 <= uVar2 && uVar2 - (uVar4 + param_3) != 0)) {
        uVar7 = uVar5 - 2;
      }
    }
    uVar9 = uVar7 | uVar9 << 0x10;
    uVar7 = 0;
  }
  else {
    if (param_2 < param_4) {
      return 0;
    }
    uVar9 = count_leading_zeroes(param_4);
    if (uVar9 == 0) {
      if ((param_4 < param_2) || (uVar7 = uVar9, param_3 <= param_1)) {
        return 1;
      }
    }
    else {
      uVar2 = 0x20 - uVar9;
      uVar7 = param_2 >> (uVar2 & 0xff);
      uVar4 = param_4 << (uVar9 & 0xff) | param_3 >> (uVar2 & 0xff);
      uVar8 = uVar4 >> 0x10;
      uVar6 = uVar7 / uVar8;
      uVar5 = (uVar4 & 0xffff) * uVar6;
      uVar3 = param_1 >> (uVar2 & 0xff) | param_2 << (uVar9 & 0xff);
      uVar2 = uVar3 >> 0x10 | (uVar7 - uVar8 * uVar6) * 0x10000;
      uVar7 = uVar6;
      if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
        bVar11 = CARRY4(uVar2,uVar4);
        uVar2 = uVar2 + uVar4;
        uVar7 = uVar6 - 1;
        if ((bVar11 == false) && (uVar2 <= uVar5 && uVar5 - uVar2 != 0)) {
          uVar7 = uVar6 - 2;
          uVar2 = uVar2 + uVar4;
        }
      }
      uVar6 = (uVar2 - uVar5) / uVar8;
      uVar10 = (uVar4 & 0xffff) * uVar6;
      uVar8 = uVar3 & 0xffff | ((uVar2 - uVar5) - uVar8 * uVar6) * 0x10000;
      uVar2 = uVar6;
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        bVar11 = CARRY4(uVar8,uVar4);
        uVar8 = uVar8 + uVar4;
        uVar2 = uVar6 - 1;
        if ((bVar11 == false) && (uVar8 <= uVar10 && uVar10 - uVar8 != 0)) {
          uVar2 = uVar6 - 2;
          uVar8 = uVar8 + uVar4;
        }
      }
      uVar2 = uVar2 | uVar7 << 0x10;
      lVar1 = (ulonglong)uVar2 * (ulonglong)(param_3 << (uVar9 & 0xff));
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar8 - uVar10 < uVar7) ||
         ((uVar8 - uVar10 == uVar7 && (param_1 << (uVar9 & 0xff) < (uint)lVar1)))) {
        uVar9 = uVar2 - 1;
        uVar7 = 0;
      }
      else {
        uVar9 = uVar2;
        uVar7 = 0;
      }
    }
  }
  return CONCAT44(uVar7,uVar9);
}


// FUN_00081c54 0x00081c54
void concatenate_parameters_to_64bit_word_00081c54(undefined4 parameter_1, undefined4 parameter_2)
{
  concatenate_params_to_64bit_word(parameter_2, parameter_1);
  return;
}
// FUN_0008163a 0x0008163a
undefined4 check_and_execute_function_0008163a(int *data_address, uint data_size)
{
  int function_status;
  if ((*data_address == 0) || ((uint)data_address[1] < data_size)) {
    function_status = execute_skipped_function(data_address, data_size);
    if (function_status == 0) {
      return 0;
    }
    if (data_address[2] == 0) {
      *(undefined *)*data_address = 0;
    }
  }
  return 1;
}
// FUN_000825a0 0x000825a0
void execute_skipped_function_with_two_data_points_000825a0(undefined4 data_point_1, undefined4 data_point_2)
{
  FUNC_FUNCTION(*DAT_000825ac, data_point_1, data_point_2);
  return;
}
// FUN_000815d4 0x000815d4
undefined4 initialize_memory_write_params_000815d4(undefined4 *memory_write_params, undefined4 memory_write_value)
{
  set_memory_write_params();
  *memory_write_params = PTR_PTR_writeToMemory_00081454_1_000815f4;
  memory_write_params[9] = memory_write_value;
  return memory_write_params;
}
// FUN_00081e14 0x00081e14

int * FUNC_00081e14(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  
  if (param_2 + 0xb < 0x17) {
    uVar15 = 0x10;
    if (0x10 < param_2) goto LAB_00081e7a;
  }
  else {
    uVar15 = param_2 + 0xb & 0xfffffff8;
    if (((int)uVar15 < 0) || (uVar15 < param_2)) {
LAB_00081e7a:
      *param_1 = 0xc;
      return (int *)0x0;
    }
  }
  doNothing_00082598(param_1);
  uVar1 = DAT_00082140;
  if (uVar15 < 0x1f8) {
    iVar13 = *(int *)(DAT_00082140 + uVar15 + 0xc);
    if ((iVar13 != DAT_00082140 + uVar15) ||
       (iVar4 = iVar13 + 8, iVar13 = *(int *)(iVar13 + 0x14), iVar4 != iVar13)) {
      iVar7 = *(int *)(iVar13 + 0xc);
      iVar9 = (*(uint *)(iVar13 + 4) & 0xfffffffc) + iVar13;
      uVar15 = *(uint *)(iVar9 + 4);
      iVar4 = *(int *)(iVar13 + 8);
      *(int *)(iVar4 + 0xc) = iVar7;
      *(int *)(iVar7 + 8) = iVar4;
      *(uint *)(iVar9 + 4) = uVar15 | 1;
      doNothing_0008259c(param_1);
      return (int *)(iVar13 + 8);
    }
    uVar18 = (uVar15 >> 3) + 2;
  }
  else {
    uVar18 = uVar15 >> 9;
    if (uVar18 == 0) {
      iVar4 = 0x7e;
      iVar13 = 0x3f;
    }
    else if (uVar18 < 5) {
      iVar13 = (uVar15 >> 6) + 0x38;
      iVar4 = iVar13 * 2;
    }
    else if (uVar18 < 0x15) {
      iVar13 = uVar18 + 0x5b;
      iVar4 = iVar13 * 2;
    }
    else if (uVar18 < 0x55) {
      iVar13 = (uVar15 >> 0xc) + 0x6e;
      iVar4 = iVar13 * 2;
    }
    else if (uVar18 < 0x155) {
      iVar13 = (uVar15 >> 0xf) + 0x77;
      iVar4 = iVar13 * 2;
    }
    else if (uVar18 < 0x555) {
      iVar13 = (uVar15 >> 0x12) + 0x7c;
      iVar4 = iVar13 * 2;
    }
    else {
      iVar4 = 0xfc;
      iVar13 = 0x7e;
    }
    iVar7 = DAT_00082140 + iVar4 * 4;
    for (iVar4 = *(int *)(iVar7 + 0xc); iVar7 != iVar4; iVar4 = *(int *)(iVar4 + 0xc)) {
      uVar18 = *(uint *)(iVar4 + 4) & 0xfffffffc;
      iVar9 = uVar18 - uVar15;
      if (0xf < iVar9) {
        iVar13 = iVar13 + -1;
        break;
      }
      if (-1 < iVar9) {
        iVar7 = uVar18 + iVar4;
        uVar15 = *(uint *)(iVar7 + 4);
        iVar9 = *(int *)(iVar4 + 0xc);
        iVar13 = *(int *)(iVar4 + 8);
        *(int *)(iVar13 + 0xc) = iVar9;
        *(int *)(iVar9 + 8) = iVar13;
        *(uint *)(iVar7 + 4) = uVar15 | 1;
        doNothing_0008259c(param_1);
        return (int *)(iVar4 + 8);
      }
    }
    uVar18 = iVar13 + 1;
  }
  iVar13 = *(int *)(DAT_00082140 + 0x10);
  iVar4 = DAT_00082140 + 8;
  if (iVar13 == iVar4) {
    uVar5 = *(uint *)(DAT_00082140 + 4);
  }
  else {
    uVar5 = *(uint *)(iVar13 + 4);
    uVar6 = uVar5 & 0xfffffffc;
    uVar8 = uVar6 - uVar15;
    if (0xf < (int)uVar8) {
      iVar7 = uVar15 + iVar13;
      *(uint *)(iVar13 + 4) = uVar15 | 1;
      *(int *)(uVar1 + 0x14) = iVar7;
      *(int *)(uVar1 + 0x10) = iVar7;
      *(int *)(iVar7 + 0xc) = iVar4;
      *(int *)(iVar7 + 8) = iVar4;
      *(uint *)(iVar7 + 4) = uVar8 | 1;
      *(uint *)(iVar7 + uVar8) = uVar8;
      doNothing_0008259c(param_1);
      return (int *)(iVar13 + 8);
    }
    *(int *)(DAT_00082140 + 0x14) = iVar4;
    *(int *)(uVar1 + 0x10) = iVar4;
    if (-1 < (int)uVar8) {
      *(uint *)(uVar6 + iVar13 + 4) = *(uint *)(uVar6 + iVar13 + 4) | 1;
      doNothing_0008259c(param_1);
      return (int *)(iVar13 + 8);
    }
    if (uVar6 < 0x200) {
      iVar9 = uVar1 + (uVar5 & 0xfffffff8);
      iVar7 = *(int *)(iVar9 + 8);
      uVar5 = 1 << ((int)(uVar5 >> 3) >> 2 & 0xffU) | *(uint *)(uVar1 + 4);
      *(int *)(iVar13 + 8) = iVar7;
      *(int *)(iVar13 + 0xc) = iVar9;
      *(uint *)(uVar1 + 4) = uVar5;
      *(int *)(iVar9 + 8) = iVar13;
      *(int *)(iVar7 + 0xc) = iVar13;
    }
    else {
      uVar8 = uVar5 >> 9;
      if (uVar8 < 5) {
        iVar9 = (uVar5 >> 6) + 0x38;
        iVar7 = iVar9 * 2;
      }
      else if (uVar8 < 0x15) {
        iVar9 = uVar8 + 0x5b;
        iVar7 = iVar9 * 2;
      }
      else if (uVar8 < 0x55) {
        iVar9 = (uVar5 >> 0xc) + 0x6e;
        iVar7 = iVar9 * 2;
      }
      else if (uVar8 < 0x155) {
        iVar9 = (uVar5 >> 0xf) + 0x77;
        iVar7 = iVar9 * 2;
      }
      else if (uVar8 < 0x555) {
        iVar9 = (uVar5 >> 0x12) + 0x7c;
        iVar7 = iVar9 * 2;
      }
      else {
        iVar7 = 0xfc;
        iVar9 = 0x7e;
      }
      iVar7 = uVar1 + iVar7 * 4;
      iVar12 = *(int *)(iVar7 + 8);
      if (iVar12 == iVar7) {
        uVar5 = *(uint *)(DAT_00082348 + 4) | 1 << (iVar9 >> 2 & 0xffU);
        *(uint *)(DAT_00082348 + 4) = uVar5;
        iVar9 = iVar12;
      }
      else {
        do {
          iVar9 = iVar12;
          if ((*(uint *)(iVar12 + 4) & 0xfffffffc) <= uVar6) break;
          iVar12 = *(int *)(iVar12 + 8);
          iVar9 = iVar12;
        } while (iVar7 != iVar12);
        iVar12 = *(int *)(iVar9 + 0xc);
        uVar5 = *(uint *)(uVar1 + 4);
      }
      *(int *)(iVar13 + 0xc) = iVar12;
      *(int *)(iVar13 + 8) = iVar9;
      *(int *)(iVar12 + 8) = iVar13;
      *(int *)(iVar9 + 0xc) = iVar13;
    }
  }
  uVar6 = 1 << ((int)uVar18 >> 2 & 0xffU);
  if (uVar6 <= uVar5) {
    if ((uVar5 & uVar6) == 0) {
      uVar18 = uVar18 & 0xfffffffc;
      do {
        uVar6 = uVar6 << 1;
        uVar18 = uVar18 + 4;
      } while ((uVar5 & uVar6) == 0);
    }
    do {
      piVar16 = (int *)(uVar1 + uVar18 * 8);
      piVar14 = piVar16;
      uVar5 = uVar18;
      do {
        for (piVar10 = (int *)piVar14[3]; piVar14 != piVar10; piVar10 = (int *)piVar10[3]) {
          uVar8 = piVar10[1] & 0xfffffffc;
          uVar17 = uVar8 - uVar15;
          if (0xf < (int)uVar17) {
            iVar9 = piVar10[2];
            iVar13 = piVar10[3];
            iVar7 = uVar15 + (int)piVar10;
            piVar10[1] = uVar15 | 1;
            *(int *)(iVar9 + 0xc) = iVar13;
            *(int *)(iVar13 + 8) = iVar9;
            *(int *)(uVar1 + 0x14) = iVar7;
            *(int *)(uVar1 + 0x10) = iVar7;
            *(int *)(iVar7 + 0xc) = iVar4;
            *(int *)(iVar7 + 8) = iVar4;
            *(uint *)(iVar7 + 4) = uVar17 | 1;
            *(uint *)(iVar7 + uVar17) = uVar17;
            doNothing_0008259c(param_1);
            return piVar10 + 2;
          }
          if (-1 < (int)uVar17) {
            iVar13 = piVar10[2];
            iVar4 = piVar10[3];
            *(uint *)((int)piVar10 + uVar8 + 4) = *(uint *)((int)piVar10 + uVar8 + 4) | 1;
            *(int *)(iVar13 + 0xc) = iVar4;
            *(int *)(iVar4 + 8) = iVar13;
            doNothing_0008259c(param_1);
            return piVar10 + 2;
          }
        }
        uVar5 = uVar5 + 1;
        piVar14 = piVar14 + 2;
      } while ((uVar5 & 3) != 0);
      do {
        uVar8 = uVar18 & 3;
        piVar14 = piVar16 + -2;
        uVar18 = uVar18 - 1;
        if (uVar8 == 0) {
          uVar8 = *(uint *)(uVar1 + 4) & ~uVar6;
          *(uint *)(uVar1 + 4) = uVar8;
          goto LAB_00082262;
        }
        piVar16 = (int *)*piVar16;
      } while (piVar16 == piVar14);
      uVar8 = *(uint *)(uVar1 + 4);
LAB_00082262:
      uVar6 = uVar6 * 2;
      if ((uVar8 <= uVar6 && uVar6 - uVar8 != 0) || (uVar18 = uVar5, uVar6 == 0)) break;
      for (; (uVar8 & uVar6) == 0; uVar6 = uVar6 << 1) {
        uVar18 = uVar18 + 4;
      }
    } while( true );
  }
  puVar2 = DAT_00082148;
  uVar18 = *(uint *)(uVar1 + 8);
  uVar5 = *(uint *)(uVar18 + 4) & 0xfffffffc;
  if ((uVar15 <= uVar5) && (uVar8 = uVar5 - uVar15, uVar6 = uVar18, 0xf < (int)uVar8))
  goto LAB_0008211e;
  uVar8 = uVar18 + uVar5;
  if (*DAT_00082148 == 0xffffffff) {
    uVar17 = uVar15 + *(int *)PTR_DAT_00082144 + 0x10;
  }
  else {
    uVar17 = uVar15 + *(int *)PTR_DAT_00082144 + 0x100f & 0xfffff000;
  }
  uVar6 = set_param_to_global_var_if_return_is_negative_00082970(param_1,uVar17);
  puVar3 = PTR_DAT_00082154;
  if ((uVar6 == 0xffffffff) || ((uVar6 < uVar8 && (uVar18 != uVar1)))) {
    uVar6 = *(uint *)(uVar1 + 8);
    uVar18 = *(uint *)(uVar6 + 4) & 0xfffffffc;
  }
  else {
    uVar11 = *(int *)PTR_DAT_00082154 + uVar17;
    *(uint *)PTR_DAT_00082154 = uVar11;
    if ((uVar8 == uVar6) && ((uVar8 & 0xfff) == 0)) {
      *(uint *)(*(int *)(uVar1 + 8) + 4) = uVar17 + uVar5 | 1;
    }
    else {
      if (*puVar2 == 0xffffffff) {
        *DAT_00082148 = uVar6;
      }
      else {
        *(uint *)puVar3 = uVar11 + (uVar6 - uVar8);
      }
      uVar8 = uVar6 & 7;
      if (uVar8 == 0) {
        iVar13 = 0x1000;
      }
      else {
        uVar6 = uVar6 + (8 - uVar8);
        iVar13 = 0x1008 - uVar8;
      }
      iVar13 = iVar13 - (uVar17 + uVar6 & 0xfff);
      iVar4 = set_param_to_global_var_if_return_is_negative_00082970(param_1,iVar13);
      if (iVar4 == -1) {
        uVar8 = 1;
        iVar13 = 0;
      }
      else {
        uVar8 = (iVar4 - uVar6) + iVar13 | 1;
      }
      uVar11 = *(int *)puVar3 + iVar13;
      *(uint *)(uVar1 + 8) = uVar6;
      *(uint *)puVar3 = uVar11;
      *(uint *)(uVar6 + 4) = uVar8;
      puVar3 = PTR_DAT_00082154;
      if (uVar18 != uVar1) {
        if (uVar5 < 0x10) {
          *(undefined4 *)(uVar6 + 4) = 1;
          uVar18 = 0;
          goto LAB_00082108;
        }
        uVar5 = uVar5 - 0xc & 0xfffffff8;
        *(uint *)(uVar18 + 4) = uVar5 | *(uint *)(uVar18 + 4) & 1;
        *(undefined4 *)(uVar18 + uVar5 + 4) = 5;
        *(undefined4 *)(uVar18 + uVar5 + 8) = 5;
        if (0xf < uVar5) {
          FUNC_00083d9c(param_1,uVar18 + 8);
          uVar11 = *(uint *)puVar3;
        }
      }
    }
    uVar6 = *(uint *)(uVar1 + 8);
    if (*(uint *)PTR_DAT_0008214c < uVar11) {
      *(uint *)PTR_DAT_0008214c = uVar11;
    }
    if (*(uint *)PTR_DAT_00082150 < uVar11) {
      *(uint *)PTR_DAT_00082150 = uVar11;
    }
    uVar18 = *(uint *)(uVar6 + 4) & 0xfffffffc;
  }
LAB_00082108:
  uVar8 = uVar18 - uVar15;
  if ((uVar18 < uVar15) || ((int)uVar8 < 0x10)) {
    doNothing_0008259c(param_1);
    return (int *)0x0;
  }
LAB_0008211e:
  *(uint *)(uVar6 + 4) = uVar15 | 1;
  *(uint *)(uVar1 + 8) = uVar15 + uVar6;
  *(uint *)(uVar15 + uVar6 + 4) = uVar8 | 1;
  doNothing_0008259c(param_1);
  return (int *)(uVar6 + 8);
}


// FUN_00080164 0x00080164
void process_data_00080164(int **data_array)
{
  undefined *function_pointer = FUNCTION_PTR;
  *data_array = (int *)FUNCTION_PTR;
  (**(code **)(*(int *)function_pointer + 0x18))(FUNCTION_PTR);
  byte parameter_index = *(byte *)((int)data_array + 6);
  if (parameter_index > 1) {
    handle_parameter(parameter_index, 1);
    update_parameter(parameter_index, 0);
  }
  int function_result;
  do {
    function_result = (**(code **)(**data_array + 0xc))();
  } while (function_result >= 0);
  *(undefined *)((int)data_array + 0x49) = 0;
  *(undefined *)((int)data_array + 0x4a) = 0;
  *(undefined2 *)(data_array + 0x15) = 0;
  *(undefined2 *)((int)data_array + 0x52) = 0;
  *(undefined2 *)(data_array + 0x14) = 0;
  return;
}
// FUN_000811cc 0x000811cc
uint32_t writeBytesToMemory_000811cc(uint32_t memoryAddress, int bufferAddress, uint32_t bufferLength)
{
  for (int i = 0; i < (int)bufferLength; i++) {
    // wait until previous write is complete
    while (-1 < *(int *)(DAT_000811ec + 0x14) << 0x1e);
    *(uint *)(DAT_000811ec + 0x1c) = (uint)*(byte *)(bufferAddress + i);
  }
  return bufferLength & ~((int)bufferLength >> 0x1f);
}
// FUN_000846dc 0x000846dc
void set_param_to_true_if_return_is_negative_000846dc(int *output_value, undefined4 param)
{
  undefined *param_data = PTR_DAT_000846fc;
  *(undefined4 *)PTR_DAT_000846fc = 0;
  int return_value = return_true(param);
  if (return_value == -1 && (*(int *)param_data != 0)) {
    *output_value = *(int *)param_data;
    return;
  }
  return;
}
// FUN_00081894 0x00081894
uint32_t convertToFixedPoint_00081894(uint32_t value)
{
  if (value == 0) {
    return 0;
  }
  int leadingZeros = count_leading_zeroes(value);
  uint32_t fractionalBitIndex = leadingZeros - 8;
  int32_t fixedPointValue = fractionalBitIndex * -0x800000 + 0x4a800000;
  if (7 < leadingZeros) {
    uint32_t fractionalPart = 0 << (fractionalBitIndex & 0xff);
    fixedPointValue += (value << (fractionalBitIndex & 0xff)) + (0U >> (0x20 - fractionalBitIndex & 0xff)) + (uint32_t)(0x7fffffff < fractionalPart);
    if (fractionalPart == 0x80000000) {
      fixedPointValue = fixedPointValue & 0xfffffffe;
    }
    return fixedPointValue;
  }
  uint32_t fractionalPart = value << (leadingZeros + 0x18U & 0xff);
  fixedPointValue += ((value >> (0x20 - (leadingZeros + 0x18U) & 0xff)) - ((int32_t)fractionalPart >> 0x1f));
  if ((fractionalPart & 0x7fffffff) == 0) {
    fixedPointValue = fixedPointValue & ~(fractionalPart >> 0x1f);
  }
  return fixedPointValue;
}
// FUN_000845bc 0x000845bc
uint32_t writeByteToMemory_000845bc(uint32_t* memoryAddress, uint8_t byteValue, uint32_t byteCount)
{
  if (byteCount == 0 || memoryAddress == NULL) {
    return 0;
  }
  if (byteCount < 0x100) {
    *memoryAddress = (uint32_t)byteValue;
    return 1;
  }
  *memoryAddress = 0x8a;
  return 0xffffffff;
}
// FUN_00085858 0x00085858
void doNothing_00085858()
{
  return;
}
// FUN_00082504 0x00082504
void fillMemoryWithByte_00082504(uint32_t* memoryAddress, uint8_t byteValue, uint32_t byteCount)
{
  if (((uint32_t)memoryAddress & 3) != 0) {
    if (byteCount == 0) {
      return;
    }
    while (true) {
      *memoryAddress = (uint32_t)byteValue;
      byteCount--;
      memoryAddress = (uint32_t*)((uint32_t)memoryAddress + 1);
      if (((uint32_t)memoryAddress & 3) == 0) {
        break;
      }
      if (byteCount == 0) {
        return;
      }
    }
  }
  if (byteCount >= 4) {
    uint32_t pattern = (byteValue << 24) | (byteValue << 16) | (byteValue << 8) | byteValue;
    uint32_t* endAddress = memoryAddress + (byteCount >> 2);
    while (memoryAddress != endAddress) {
      *memoryAddress = pattern;
      memoryAddress++;
    }
    byteCount &= 3;
  }
  if (byteCount != 0) {
    uint8_t* byteAddress = (uint8_t*)memoryAddress;
    while (byteCount != 0) {
      *byteAddress = byteValue;
      byteAddress++;
      byteCount--;
    }
  }
  return;
}
// FUN_000800f4 0x000800f4
uint32_t getParameterValue_000800f4(uint32_t parameter)
{
  if (*PTR_DAT_0008010c == 0) {
    if (DAT_00080110 != 0) {
      parameter = DAT_00080110;
    }
    *PTR_DAT_0008010c = 1;
  }
  return parameter;
}
// FUN_0008378c 0x0008378c
int process_data_block_0008378c(uint32_t parameter_1, int *data_block)
{
  int status;
  int is_data_valid;
  undefined *data_buffer[2];
  undefined2 data_flags;
  undefined *result_buffer;
  undefined4 data_size;
  undefined4 result_size;
  undefined4 data_type;
  undefined4 data_id;
  undefined auStack[1024];
  data_type = *(undefined4 *)(data_block + 7);
  data_id = *(undefined4 *)(data_block + 4);
  data_size = *(undefined4 *)(data_block + 6);
  result_size = *(undefined4 *)(data_block + 5);
  data_flags = *(undefined2 *)(data_block + 3) & 0xfffd;
  data_buffer[0] = auStack;
  data_buffer[1] = (undefined *)0x0;
  result_buffer = data_buffer[0];
  *(undefined4 *)(result_buffer + 0x400) = 0x400;
  *(undefined4 *)(result_buffer + 0x404) = 0x400;
  *(undefined4 *)(result_buffer + 0x408) = 0;
  data_buffer[1] = result_buffer;
  status = process_input_data_block(parameter_1, data_size, data_buffer);
  is_data_valid = is_data_valid_00083adc(parameter_1, data_buffer);
  if ((status >= 0) && (is_data_valid != 0)) {
    status = -1;
  }
  if ((int)((uint)data_flags << 0x19) < 0) {
    *(undefined2 *)(data_block + 3) = *(undefined2 *)(data_block + 3) | 0x40;
  }
  return status;
}
// FUN_00083adc 0x00083adc

undefined4 FUNC_00083adc(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  
  if ((param_1 != (int *)0x0) && (param_1[0xe] == 0)) {
    FUNC_00083b14();
  }
  if (*(short *)(param_2 + 3) == 0) {
    return 0;
  }
  uVar3 = *(ushort *)(param_2 + 3);
  if ((int)((uint)uVar3 << 0x1c) < 0) {
    iVar7 = param_2[4];
    if (iVar7 == 0) {
      return 0;
    }
    iVar2 = *param_2;
    if ((uVar3 & 3) == 0) {
      iVar5 = param_2[5];
    }
    else {
      iVar5 = 0;
    }
    *param_2 = iVar7;
    iVar2 = iVar2 - iVar7;
    param_2[2] = iVar5;
    do {
      if (iVar2 < 1) {
        return 0;
      }
      iVar5 = (*(code *)param_2[9])(param_1,param_2[7],iVar7,iVar2,unaff_r4);
      iVar2 = iVar2 - iVar5;
      iVar7 = iVar7 + iVar5;
    } while (0 < iVar5);
LAB_00083a54:
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    return 0xffffffff;
  }
  *(ushort *)(param_2 + 3) = uVar3 | 0x800;
  if ((param_2[1] < 1) && (param_2[0xf] < 1)) {
    return 0;
  }
  pcVar6 = (code *)param_2[10];
  if (pcVar6 == (code *)0x0) {
    return 0;
  }
  uVar4 = (uint)(uVar3 | 0x800);
  iVar7 = *param_1;
  *param_1 = 0;
  if ((uVar3 & 0x1000) == 0) {
    iVar2 = (*pcVar6)(param_1,param_2[7],uVar4 & 0x1000,1);
    if ((iVar2 == -1) && (iVar5 = *param_1, iVar5 != 0)) {
      if ((iVar5 == 0x1d) || (iVar5 == 0x16)) {
        *param_1 = iVar7;
        return 0;
      }
      goto LAB_00083a54;
    }
    uVar4 = (uint)*(ushort *)(param_2 + 3);
    pcVar6 = (code *)param_2[10];
  }
  else {
    iVar2 = param_2[0x14];
  }
  if (((int)(uVar4 << 0x1d) < 0) && (iVar2 = iVar2 - param_2[1], param_2[0xc] != 0)) {
    iVar2 = iVar2 - param_2[0xf];
  }
  iVar2 = (*pcVar6)(param_1,param_2[7],iVar2,0);
  if (iVar2 == -1) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      if ((iVar5 != 0x1d) && (iVar5 != 0x16)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        return 0xffffffff;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xf7ff;
      *param_2 = param_2[4];
      param_2[1] = 0;
      goto LAB_00083a00;
    }
    uVar3 = *(ushort *)(param_2 + 3) & 0xf7ff;
    param_2[1] = 0;
    *(ushort *)(param_2 + 3) = uVar3;
    *param_2 = param_2[4];
  }
  else {
    uVar3 = *(ushort *)(param_2 + 3) & 0xf7ff;
    *param_2 = param_2[4];
    *(ushort *)(param_2 + 3) = uVar3;
    param_2[1] = 0;
  }
  if ((int)((uint)uVar3 << 0x13) < 0) {
    param_2[0x14] = iVar2;
  }
LAB_00083a00:
  piVar1 = (int *)param_2[0xc];
  *param_1 = iVar7;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1 != param_2 + 0x10) {
    FUNC_00083d9c(param_1);
  }
  param_2[0xc] = 0;
  return 0;
}


// FUN_000825b0 0x000825b0

int * FUNC_000825b0(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUNC_00081e14(param_1,param_3);
    return piVar2;
  }
  doNothing_00082598();
  iVar4 = DAT_0008296c;
  uVar5 = param_2[-1];
  uVar7 = uVar5 & 0xfffffffc;
  piVar2 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar8 < 0) goto LAB_0008267c;
  }
  if (uVar8 < param_3) {
LAB_0008267c:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  if ((int)uVar7 < (int)uVar8) {
    iVar1 = (int)piVar2 + uVar7;
    iVar10 = *(int *)(DAT_0008296c + 8);
    if (iVar10 == iVar1) {
      uVar3 = *(uint *)(iVar10 + 4) & 0xfffffffc;
      iVar1 = iVar10;
      if ((int)(uVar8 + 0x10) <= (int)(uVar3 + uVar7)) {
        *(uint *)(DAT_0008296c + 8) = (int)piVar2 + uVar8;
        *(uint *)((int)piVar2 + uVar8 + 4) = (uVar3 + uVar7) - uVar8 | 1;
        param_2[-1] = uVar8 | param_2[-1] & 1U;
        doNothing_0008259c(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(iVar1 + 4) & 0xfffffffe) + iVar1 + 4) & 1) == 0) {
      uVar3 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)uVar8 <= (int)(uVar3 + uVar7)) {
        iVar10 = *(int *)(iVar1 + 0xc);
        iVar4 = *(int *)(iVar1 + 8);
        *(int *)(iVar4 + 0xc) = iVar10;
        *(int *)(iVar10 + 8) = iVar4;
        uVar7 = uVar3 + uVar7;
        goto LAB_0008268c;
      }
    }
    else {
      uVar3 = 0;
      iVar1 = 0;
    }
    if (-1 < (int)(uVar5 << 0x1f)) {
      piVar9 = (int *)((int)piVar2 - param_2[-2]);
      uVar5 = (piVar9[1] & 0xfffffffcU) + uVar7;
      if (iVar1 != 0) {
        if (iVar1 == iVar10) {
          if ((int)(uVar8 + 0x10) <= (int)(uVar3 + uVar5)) {
            piVar2 = piVar9 + 2;
            iVar1 = *piVar2;
            iVar10 = piVar9[3];
            uVar7 = uVar7 - 4;
            *(int *)(iVar1 + 0xc) = iVar10;
            *(int *)(iVar10 + 8) = iVar1;
            if (uVar7 < 0x25) {
              piVar6 = piVar2;
              if (0x13 < uVar7) {
                piVar9[2] = *param_2;
                piVar9[3] = param_2[1];
                if (uVar7 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar6 = piVar9 + 4;
                }
                else {
                  piVar9[4] = param_2[2];
                  piVar9[5] = param_2[3];
                  if (uVar7 == 0x24) {
                    piVar9[6] = param_2[4];
                    piVar6 = param_2 + 5;
                    param_2 = param_2 + 6;
                    piVar9[7] = *piVar6;
                    piVar6 = piVar9 + 8;
                  }
                  else {
                    param_2 = param_2 + 4;
                    piVar6 = piVar9 + 6;
                  }
                }
              }
              *piVar6 = *param_2;
              piVar6[1] = param_2[1];
              piVar6[2] = param_2[2];
            }
            else {
              copyMemory_00082438(piVar2,param_2);
            }
            *(uint *)(iVar4 + 8) = (int)piVar9 + uVar8;
            *(uint *)((int)piVar9 + uVar8 + 4) = (uVar3 + uVar5) - uVar8 | 1;
            piVar9[1] = uVar8 | piVar9[1] & 1U;
            doNothing_0008259c(param_1);
            return piVar2;
          }
        }
        else {
          uVar3 = uVar3 + uVar5;
          if ((int)uVar8 <= (int)uVar3) {
            iVar10 = *(int *)(iVar1 + 0xc);
            iVar4 = *(int *)(iVar1 + 8);
            *(int *)(iVar4 + 0xc) = iVar10;
            *(int *)(iVar10 + 8) = iVar4;
            piVar6 = piVar9 + 2;
            iVar4 = *piVar6;
            iVar1 = piVar9[3];
            uVar5 = uVar7 - 4;
            *(int *)(iVar4 + 0xc) = iVar1;
            *(int *)(iVar1 + 8) = iVar4;
            uVar7 = uVar3;
            if (uVar5 < 0x25) {
              piVar2 = piVar6;
              if (0x13 < uVar5) {
                piVar9[2] = *param_2;
                piVar9[3] = param_2[1];
                if (uVar5 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar2 = piVar9 + 4;
                }
                else {
                  piVar9[4] = param_2[2];
                  piVar9[5] = param_2[3];
                  if (uVar5 == 0x24) {
                    piVar9[6] = param_2[4];
                    piVar2 = param_2 + 5;
                    param_2 = param_2 + 6;
                    piVar9[7] = *piVar2;
                    piVar2 = piVar9 + 8;
                  }
                  else {
                    param_2 = param_2 + 4;
                    piVar2 = piVar9 + 6;
                  }
                }
              }
              *piVar2 = *param_2;
              piVar2[1] = param_2[1];
              piVar2[2] = param_2[2];
              uVar5 = piVar9[1];
              piVar2 = piVar9;
              param_2 = piVar6;
            }
            else {
              copyMemory_00082438(piVar6,param_2);
              uVar5 = piVar9[1];
              piVar2 = piVar9;
              param_2 = piVar6;
            }
            goto LAB_0008268c;
          }
        }
      }
      if ((int)uVar8 <= (int)uVar5) {
        piVar6 = piVar9 + 2;
        iVar4 = *piVar6;
        iVar1 = piVar9[3];
        uVar3 = uVar7 - 4;
        *(int *)(iVar4 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = iVar4;
        uVar7 = uVar5;
        if (uVar3 < 0x25) {
          piVar2 = piVar6;
          if (0x13 < uVar3) {
            piVar9[2] = *param_2;
            piVar9[3] = param_2[1];
            if (uVar3 < 0x1c) {
              param_2 = param_2 + 2;
              piVar2 = piVar9 + 4;
            }
            else {
              piVar9[4] = param_2[2];
              piVar9[5] = param_2[3];
              if (uVar3 == 0x24) {
                piVar9[6] = param_2[4];
                piVar2 = param_2 + 5;
                param_2 = param_2 + 6;
                piVar9[7] = *piVar2;
                piVar2 = piVar9 + 8;
              }
              else {
                param_2 = param_2 + 4;
                piVar2 = piVar9 + 6;
              }
            }
          }
          *piVar2 = *param_2;
          piVar2[1] = param_2[1];
          piVar2[2] = param_2[2];
          uVar5 = piVar9[1];
          piVar2 = piVar9;
          param_2 = piVar6;
        }
        else {
          copyMemory_00082438(piVar6,param_2);
          uVar5 = piVar9[1];
          piVar2 = piVar9;
          param_2 = piVar6;
        }
        goto LAB_0008268c;
      }
    }
    piVar9 = (int *)FUNC_00081e14(param_1,param_3);
    if (piVar9 == (int *)0x0) goto LAB_000826a4;
    uVar5 = param_2[-1];
    if (piVar9 + -2 != (int *)((uVar5 & 0xfffffffe) + (int)piVar2)) {
      uVar7 = uVar7 - 4;
      if (uVar7 < 0x25) {
        piVar2 = param_2;
        piVar6 = piVar9;
        if (0x13 < uVar7) {
          *piVar9 = *param_2;
          piVar9[1] = param_2[1];
          if (uVar7 < 0x1c) {
            piVar2 = param_2 + 2;
            piVar6 = piVar9 + 2;
          }
          else {
            piVar9[2] = param_2[2];
            piVar9[3] = param_2[3];
            if (uVar7 == 0x24) {
              piVar9[4] = param_2[4];
              piVar9[5] = param_2[5];
              piVar2 = param_2 + 6;
              piVar6 = piVar9 + 6;
            }
            else {
              piVar2 = param_2 + 4;
              piVar6 = piVar9 + 4;
            }
          }
        }
        *piVar6 = *piVar2;
        piVar6[1] = piVar2[1];
        piVar6[2] = piVar2[2];
      }
      else {
        copyMemory_00082438(piVar9,param_2);
      }
      FUNC_00083d9c(param_1,param_2);
      goto LAB_000826a4;
    }
    uVar7 = uVar7 + (piVar9[-1] & 0xfffffffcU);
  }
LAB_0008268c:
  uVar3 = uVar7 - uVar8;
  piVar9 = param_2;
  if (uVar3 < 0x10) {
    piVar2[1] = uVar5 & 1 | uVar7;
    *(uint *)((int)piVar2 + uVar7 + 4) = *(uint *)((int)piVar2 + uVar7 + 4) | 1;
  }
  else {
    piVar2[1] = uVar5 & 1 | uVar8;
    *(uint *)((int)piVar2 + uVar8 + 4) = uVar3 | 1;
    *(uint *)((int)piVar2 + uVar3 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar3 + uVar8 + 4) | 1;
    FUNC_00083d9c(param_1,(int)piVar2 + uVar8 + 8);
  }
LAB_000826a4:
  doNothing_0008259c(param_1);
  return piVar9;
}


// FUN_000803d4 0x000803d4
uint32_t checkValue_000803d4(int32_t value)
{
  int32_t byteValue = *(uint8_t*)(value + 10);
  if ((byteValue << 0x18) < 0) {
    *(int16_t*)(value + 0x54) = *(int16_t*)(value + 0x54) + 1;
    return 0xfb;
  }
  for (int i = 0; i < 8; i++) {
    if (PTR_DAT_0008040c[i] == byteValue) {
      return 0;
    }
  }
  *(int16_t*)(value + 0x54) = *(int16_t*)(value + 0x54) + 1;
  return 1;
}
// FUN_0008043e 0x0008043e
int process_data_0008043e(int **data_ptr)
{
  char error_code = '\0';
  uint function_result;
  int *stored_value_ptr;
  uint data_size;
  if (*(byte *)((int)data_ptr + 5) < 4) {
    function_result = (**(code **)(**data_ptr + 8))();
    data_size = function_result & 0xff;
  }
  stored_value_ptr = (int *)getStoredValue_thunk_00081714();
  if (data_ptr[0x17] < stored_value_ptr) {
    *(undefined *)(data_ptr + 2) = 0xff;
    *(undefined *)((int)data_ptr + 7) = 0;
    *(short *)(data_ptr + 0x15) = *(short *)(data_ptr + 0x15) + 1;
  }
  else if (data_size > 7) {
    process_parameter_000801b0(data_ptr);
    int check_result = checkValue_000803d4(data_ptr);
    if (check_result == 0) {
      if (*(byte *)((int)data_ptr + 10) - 3 < 2) {
        write_combined_bytes_to_memory_00080410(data_ptr);
      }
      *(undefined *)((int)data_ptr + 7) = 0;
      error_code = *(char *)((int)data_ptr + 0x49);
    }
    else {
      *(undefined *)((int)data_ptr + 7) = 0;
      error_code = (char)check_result;
    }
  }
  return (int)error_code;
}
// FUN_0008160c 0x0008160c
void reset_data_0008160c(int *data)
{
  if (*data != 0) {
    execute_skipped_function();
  }
  *data = 0;
  data[1] = 0;
  data[2] = 0;
  return;
}
// FUN_00080e18 0x00080e18
uint32_t setBitInMemory_00080e18(uint32_t bitIndex)
{
  if (bitIndex < 0x2d) {
    if (bitIndex < 0x20) {
      uint32_t bitMask = 1 << bitIndex;
      if ((bitMask & *(uint32_t*)(DAT_00080e58 + 0x18)) != bitMask) {
        *(uint32_t*)(DAT_00080e58 + 0x10) = bitMask;
      }
    }
    else {
      uint32_t bitMask = 1 << (bitIndex - 0x20);
      if ((bitMask & *(uint32_t*)(DAT_00080e58 + 0x108)) != bitMask) {
        *(uint32_t*)(DAT_00080e58 + 0x100) = bitMask;
      }
    }
    return 0;
  }
  return 1;
}
// FUN_00081184 0x00081184
void doNothing_00081184(void)
{
  return;
}
// FUN_00084298 0x00084298
uint32_t getDatValue_00084298(void)
{
  return *DAT_000842a0;
}
// FUN_00081066 0x00081066
void setDefaultValue_00081066(int32_t value)
{
  *(int32_t*)(value + 0x14) = -1;
  return;
}
// FUN_00081cd0 0x00081cd0
uint32_t decodeValue_00081cd0(uint32_t encodedValue)
{
  if (encodedValue << 1 < 0x7f000000) {
    return 0;
  }
  uint32_t shiftValue = (encodedValue << 1) >> 0x18;
  uint32_t difference = 0x9e - shiftValue;
  if (shiftValue < 0x9f && difference != 0) {
    uint32_t decodedValue = (encodedValue << 8 | 0x80000000) >> (difference & 0xff);
    if ((encodedValue & 0x80000000) != 0) {
      decodedValue = -decodedValue;
    }
    return decodedValue;
  }
  if ((difference == 0xffffff9f) && ((encodedValue & 0x7fffff) != 0)) {
    return 0;
  }
  encodedValue = encodedValue & 0x80000000;
  if (encodedValue == 0) {
    encodedValue = 0x7fffffff;
  }
  return encodedValue;
}
// FUN_00081df4 0x00081df4
void execute_skipped_function_with_data_00081df4(int *data, undefined4 value)
{
  FUNC_FUNCTION(*DAT_00081e00, value);
  return;
}
// FUN_00080410 0x00080410
void write_combined_bytes_to_memory_00080410(int memory_address, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  byte byte_index = 0;
  while (true) {
    uint index = (uint)byte_index;
    byte_index = byte_index + 1;
    if (*(byte *)(memory_address + 0xb) >> 1 <= index) {
      break;
    }
    int byte_address = (index * 2 + 3 & 0xff) + memory_address;
    int output_address = *(int *)(memory_address + 0x4c);
    undefined2 combined_bytes = combine_bytes(*(undefined *)(byte_address + 9), *(undefined *)(byte_address + 10), byte_address, *(byte *)(memory_address + 0xb), param_4);
    *(undefined2 *)(output_address + index * 2) = combined_bytes;
  }
  return;
}
// FUN_00080da0 0x00080da0
uint32_t handleParameter_00080da0(int32_t parameterAddress, int32_t parameterType, uint32_t parameterValue, void* DAT_00080df8, void* DAT_00080dfc)
{
  switch(parameterType) {
    case 1:
    case 2:
      (*DAT_00080df8)(parameterAddress, parameterType, parameterValue);
      bool isNegative = (int32_t)(parameterValue << 0x1f) < 0;
      *(uint32_t*)(parameterAddress + 0x44) = parameterValue;
      if (isNegative) {
        *(uint32_t*)(parameterAddress + 100) = parameterValue;
      }
      if (!isNegative) {
        *(uint32_t*)(parameterAddress + 0x60) = parameterValue;
      }
      break;
    case 3:
      (*DAT_00080dfc)(parameterAddress, parameterValue, parameterType, DAT_00080dfc, parameterAddress);
      break;
    case 4:
    case 5:
      (*DAT_00080e00)(parameterAddress, parameterValue, parameterType == 5, (parameterValue << 0x1d) >> 0x1f, parameterValue & 1, parameterType, parameterValue);
      break;
    default:
      return 0;
  }
  return 1;
}
// FUN_00080258 0x00080258
void update_data_00080258(int **data_array, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  byte checksum_index = *(byte *)((int)data_array + 0x49);
  uint checksum_value = (uint)checksum_index;
  undefined2 checksum = calculate_checksum(data_array,checksum_value,param_3,param_4,param_4);
  *(char *)((int)data_array + checksum_value + 9) = (char)((ushort)checksum >> 8);
  *(char *)((int)data_array + (checksum_value + 1 & 0xff) + 9) = (char)checksum;
  *(byte *)((int)data_array + 0x49) = checksum_index + 2;
  byte parameter_index = *(byte *)((int)data_array + 6);
  if (parameter_index > 1) {
    update_parameter(parameter_index, 1);
  }
  byte data_type = *(byte *)((int)data_array + 5);
  if (data_type < 4) {
    (**(code **)(**data_array + 4))(*data_array,(int)data_array + 9,*(undefined *)((int)data_array + 0x49));
  }
  if (parameter_index > 1) {
    update_parameter(parameter_index, 0);
  }
  if (data_type < 4) {
    int function_result;
    do {
      function_result = (**(code **)(**data_array + 0xc))();
    } while (function_result >= 0);
  }
  *(undefined *)((int)data_array + 0x49) = 0;
  int stored_value = get_stored_value_thunk();
  data_array[0x17] = (int *)(stored_value + (uint)*(ushort *)((int)data_array + 0x56));
  *(short *)((int)data_array + 0x52) = *(short *)((int)data_array + 0x52) + 1;
  return;
}
// FUN_00081622 0x00081622
int execute_skipped_function_00081622(int *data_address, int data_size, uint32_t parameter_1, uint32_t parameter_2)
{
  int function_result;
  function_result = execute_skipped_function_00081622_with_two_data_points_000825a0(*data_address, data_size + 1, parameter_1, parameter_2, parameter_2);
  if (function_result != 0) {
    *data_address = function_result;
    data_address[1] = data_size;
    function_result = 1;
  }
  return function_result;
}
// FUN_00082438 0x00082438
void copyMemory_00082438(void* destination, void* source, uint32_t size)
{
  if ((source < destination) && ((void*)((int)source + size) > destination)) {
    void* endOfSource = (void*)((int)source + size);
    void* endOfDestination = (void*)((int)destination + size);
    int32_t remainingSize = size - 1;
    if (size != 0) {
      do {
        endOfSource = (void*)((int)endOfSource - 1);
        remainingSize = remainingSize - 1;
        endOfDestination = (void*)((int)endOfDestination - 1);
        *(char*)endOfDestination = *(char*)endOfSource;
      } while (remainingSize != -1);
    }
    return;
  }
  if (size < 0x10) {
    if (size == 0) {
      return;
    }
  }
  else if ((((uint32_t)destination | (uint32_t)source) & 3) == 0) {
    void* endOfCopy = (void*)((int)destination + (size - 0x10 & 0xfffffff0) + 0x10);
    void* currentDestination = destination;
    void* currentSource = source;
    do {
      currentDestination = currentDestination + 16;
      *(int32_t*)(currentDestination - 16) = *(int32_t*)(currentSource - 16);
      *(int32_t*)(currentDestination - 12) = *(int32_t*)(currentSource - 12);
      *(int32_t*)(currentDestination - 8) = *(int32_t*)(currentSource - 8);
      *(int32_t*)(currentDestination - 4) = *(int32_t*)(currentSource - 4);
      currentSource = currentSource + 16;
    } while (currentDestination != endOfCopy);
    int32_t remainingSize = (size - 0x10 >> 4) + 1;
    uint32_t remainingBytes = size & 0xf;
    source = source + remainingSize * 4;
    destination = destination + remainingSize * 4;
    uint32_t i = remainingBytes;
    currentDestination = destination;
    currentSource = source;
    if (3 < remainingBytes) {
      do {
        i = i - 4;
        *(int32_t*)currentDestination = *(int32_t*)currentSource;
        currentDestination = currentDestination + 4;
        currentSource = currentSource + 4;
      } while (3 < i);
      int32_t remainingBytes = (remainingBytes - 4 & 0xfffffffc) + 4;
      destination = (void*)((int)destination + remainingBytes);
      source = (void*)((int)source + remainingBytes);
      remainingBytes = size & 3;
    }
    size = remainingBytes;
  }
  char* currentDestination = (char*)destination;
  do {
    char* nextDestination = currentDestination + 1;
    *(char*)currentDestination = *(char*)source;
    source = (void*)((int)source + 1);
    currentDestination = nextDestination;
  } while (currentDestination != (char*)(size + (int)destination));
  return;
}
// FUN_00081508 0x00081508
void initialize_data_structure_00081508(int data_structure_address, uint param_2, undefined4 param_3)
{
  set_bit_in_memory(*(undefined4 *)(data_structure_address + 0x20));
  undefined4 *data_structure = *(undefined4 **)(data_structure_address + 0x18);
  data_structure[0x48] = 0x202;
  *data_structure = 0xac;
  uint *DAT_00081570 = PTR_DAT_00081570;
  data_structure[1] = param_3;
  data_structure[8] = *DAT_00081570 / param_2 >> 4;
  data_structure[3] = 0xffffffff;
  data_structure[2] = 0x61;
  int bit_index = (uint)(int)(char)*(byte *)(data_structure_address + 0x1c) >> 5;
  *(int *)(DAT_00081574 + bit_index * 4) = 1 << (uint)(*(byte *)(data_structure_address + 0x1c) & 0x1f);
  int first_structure_address = *(int *)(data_structure_address + 0x10);
  *(undefined4 *)(first_structure_address + 0x84) = 0;
  *(undefined4 *)(first_structure_address + 0x80) = 0;
  int second_structure_address = *(int *)(data_structure_address + 0x14);
  *(undefined4 *)(second_structure_address + 0x84) = 0;
  *(undefined4 *)(second_structure_address + 0x80) = 0;
  *data_structure = 0x50;
  return;
}
// FUN_00083808 0x00083808
undefined4 check_parameter_and_update_data_00083808(uint32_t *status, int *data)
{
  uint32_t temp_value;
  int data_value;
  uint16_t parameter_value;
  parameter_value = *(uint16_t *)(data + 3);
  uint32_t parameter = (uint32_t)parameter_value;
  if ((*DAT_000838c8 != 0) && (*(int *)(*DAT_000838c8 + 0x38) == 0)) {
    execute_skipped_function_00083b14();
  }
  if ((int)(parameter << 0x1c) < 0) {
    data_value = data[4];
  }
  else {
    if (-1 < (int)(parameter << 0x1b)) {
      *status = 9;
      *(uint16_t *)(data + 3) = parameter_value | 0x40;
      return 0xffffffff;
    }
    if ((int)(parameter << 0x1d) < 0) {
      if ((int *)data[0xc] != (int *)0x0) {
        if ((int *)data[0xc] != data + 0x10) {
          execute_skipped_function_00083d9c(status);
          parameter_value = *(uint16_t *)(data + 3);
        }
        data[0xc] = 0;
      }
      data_value = data[4];
      parameter_value = parameter_value & 0xffdb;
      *data = data_value;
      data[1] = 0;
    }
    else {
      data_value = data[4];
    }
    *(uint16_t *)(data + 3) = parameter_value | 8;
    temp_value = (uint32_t)(parameter_value | 8);
  }
  if ((data_value == 0) && ((temp_value & 0x280) != 0x200)) {
    update_parameter(status, data);
    temp_value = (uint32_t)*(uint16_t *)(data + 3);
    data_value = data[4];
  }
  uint32_t odd_or_even = temp_value & 1;
  if (odd_or_even == 0) {
    if (-1 < (int)(temp_value << 0x1e)) {
      odd_or_even = data[5];
    }
    data[2] = odd_or_even;
  }
  else {
    data[6] = -data[5];
    data[2] = 0;
  }
  if ((data_value == 0) && ((int)((uint)*(uint16_t *)(data + 3) << 0x18) < 0)) {
    *(uint16_t *)(data + 3) = *(uint16_t *)(data + 3) | 0x40;
    return 0xffffffff;
  }
  return 0;
}
// FUN_000847e0 0x000847e0

undefined8 FUNC_000847e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if ((int)param_2 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2 - (uint)bVar13;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = 0;
  }
  if ((int)param_4 < 0) {
    uVar9 = ~uVar9;
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -param_4 - (uint)bVar13;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar5 = count_leading_zeroes(param_3);
      if (uVar5 != 0) {
        uVar2 = param_1 >> (0x20 - uVar5 & 0xff);
        param_3 = param_3 << (uVar5 & 0xff);
        param_1 = param_1 << (uVar5 & 0xff);
        param_2 = param_2 << (uVar5 & 0xff) | uVar2;
      }
      uVar2 = param_3 >> 0x10;
      uVar3 = param_2 / uVar2;
      uVar6 = (param_3 & 0xffff) * uVar3;
      uVar10 = param_1 >> 0x10 | (param_2 - uVar2 * uVar3) * 0x10000;
      uVar5 = uVar3;
      if (uVar10 <= uVar6 && uVar6 - uVar10 != 0) {
        bVar13 = CARRY4(uVar10,param_3);
        uVar10 = uVar10 + param_3;
        uVar5 = uVar3 - 1;
        if ((bVar13 == false) && (uVar10 <= uVar6 && uVar6 - uVar10 != 0)) {
          uVar5 = uVar3 - 2;
          uVar10 = uVar10 + param_3;
        }
      }
      uVar7 = (uVar10 - uVar6) / uVar2;
      uVar3 = (param_3 & 0xffff) * uVar7;
      uVar6 = param_1 & 0xffff | ((uVar10 - uVar6) - uVar2 * uVar7) * 0x10000;
      uVar2 = uVar7;
      if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
        uVar2 = uVar7 - 1;
        if ((CARRY4(uVar6,param_3) == false) &&
           (uVar6 + param_3 <= uVar3 && uVar3 - (uVar6 + param_3) != 0)) {
          uVar2 = uVar7 - 2;
        }
      }
      uVar3 = uVar2 | uVar5 << 0x10;
      uVar10 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar5 = count_leading_zeroes(param_3);
      if (uVar5 == 0) {
        param_2 = param_2 - param_3;
        uVar2 = param_3 >> 0x10;
        uVar12 = param_3 & 0xffff;
        uVar10 = 1;
      }
      else {
        param_3 = param_3 << (uVar5 & 0xff);
        uVar3 = param_2 >> (0x20 - uVar5 & 0xff);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar3 / uVar2;
        uVar12 = param_3 & 0xffff;
        uVar6 = uVar12 * uVar10;
        uVar7 = param_1 >> (0x20 - uVar5 & 0xff) | param_2 << (uVar5 & 0xff);
        uVar3 = uVar7 >> 0x10 | (uVar3 - uVar2 * uVar10) * 0x10000;
        param_1 = param_1 << (uVar5 & 0xff);
        uVar5 = uVar10;
        if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
          bVar13 = CARRY4(uVar3,param_3);
          uVar3 = uVar3 + param_3;
          uVar5 = uVar10 - 1;
          if ((bVar13 == false) && (uVar3 <= uVar6 && uVar6 - uVar3 != 0)) {
            uVar5 = uVar10 - 2;
            uVar3 = uVar3 + param_3;
          }
        }
        uVar8 = (uVar3 - uVar6) / uVar2;
        uVar4 = uVar12 * uVar8;
        param_2 = uVar7 & 0xffff | ((uVar3 - uVar6) - uVar2 * uVar8) * 0x10000;
        uVar10 = uVar8;
        if (param_2 <= uVar4 && uVar4 - param_2 != 0) {
          bVar13 = CARRY4(param_2,param_3);
          param_2 = param_2 + param_3;
          uVar10 = uVar8 - 1;
          if ((bVar13 == false) && (param_2 <= uVar4 && uVar4 - param_2 != 0)) {
            uVar10 = uVar8 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar4;
        uVar10 = uVar10 | uVar5 << 0x10;
      }
      uVar3 = param_2 / uVar2;
      uVar6 = uVar12 * uVar3;
      uVar7 = param_1 >> 0x10 | (param_2 - uVar2 * uVar3) * 0x10000;
      uVar5 = uVar3;
      if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
        bVar13 = CARRY4(uVar7,param_3);
        uVar7 = uVar7 + param_3;
        uVar5 = uVar3 - 1;
        if ((bVar13 == false) && (uVar7 <= uVar6 && uVar6 - uVar7 != 0)) {
          uVar5 = uVar3 - 2;
          uVar7 = uVar7 + param_3;
        }
      }
      uVar4 = (uVar7 - uVar6) / uVar2;
      uVar12 = uVar12 * uVar4;
      uVar3 = param_1 & 0xffff | ((uVar7 - uVar6) - uVar2 * uVar4) * 0x10000;
      uVar2 = uVar4;
      if (uVar3 <= uVar12 && uVar12 - uVar3 != 0) {
        uVar2 = uVar4 - 1;
        if ((CARRY4(uVar3,param_3) == false) &&
           (uVar3 + param_3 <= uVar12 && uVar12 - (uVar3 + param_3) != 0)) {
          uVar2 = uVar4 - 2;
        }
      }
      uVar3 = uVar2 | uVar5 << 0x10;
    }
  }
  else if (param_2 < param_4) {
    uVar3 = 0;
    uVar10 = 0;
  }
  else {
    uVar5 = count_leading_zeroes(param_4);
    if (uVar5 == 0) {
      if ((param_4 < param_2) || (uVar3 = uVar5, uVar10 = uVar5, param_3 <= param_1)) {
        uVar3 = 1;
        uVar10 = 0;
      }
    }
    else {
      uVar2 = 0x20 - uVar5;
      uVar6 = param_2 >> (uVar2 & 0xff);
      uVar4 = param_3 >> (uVar2 & 0xff) | param_4 << (uVar5 & 0xff);
      uVar7 = uVar4 >> 0x10;
      uVar3 = uVar6 / uVar7;
      uVar12 = (uVar4 & 0xffff) * uVar3;
      uVar10 = param_2 << (uVar5 & 0xff) | param_1 >> (uVar2 & 0xff);
      uVar6 = uVar10 >> 0x10 | (uVar6 - uVar7 * uVar3) * 0x10000;
      uVar2 = uVar3;
      if (uVar6 <= uVar12 && uVar12 - uVar6 != 0) {
        bVar13 = CARRY4(uVar6,uVar4);
        uVar6 = uVar6 + uVar4;
        uVar2 = uVar3 - 1;
        if ((bVar13 == false) && (uVar6 <= uVar12 && uVar12 - uVar6 != 0)) {
          uVar2 = uVar3 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar8 = (uVar6 - uVar12) / uVar7;
      uVar11 = (uVar4 & 0xffff) * uVar8;
      uVar6 = uVar10 & 0xffff | ((uVar6 - uVar12) - uVar7 * uVar8) * 0x10000;
      uVar3 = uVar8;
      if (uVar6 <= uVar11 && uVar11 - uVar6 != 0) {
        bVar13 = CARRY4(uVar6,uVar4);
        uVar6 = uVar6 + uVar4;
        uVar3 = uVar8 - 1;
        if ((bVar13 == false) && (uVar6 <= uVar11 && uVar11 - uVar6 != 0)) {
          uVar3 = uVar8 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar3 = uVar3 | uVar2 << 0x10;
      lVar1 = (ulonglong)uVar3 * (ulonglong)(param_3 << (uVar5 & 0xff));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar6 - uVar11 < uVar2) ||
         ((uVar10 = 0, uVar6 - uVar11 == uVar2 && (param_1 << (uVar5 & 0xff) < (uint)lVar1)))) {
        uVar3 = uVar3 - 1;
        uVar10 = 0;
      }
    }
  }
  if (uVar9 != 0) {
    bVar13 = uVar3 != 0;
    uVar3 = -uVar3;
    uVar10 = -uVar10 - (uint)bVar13;
  }
  return CONCAT44(uVar10,uVar3);
}


// FUN_0008105c 0x0008105c
void setBitInInteger_0008105c(int* integerPointer, uint8_t bitIndex)
{
  uint32_t bitMask = 1 << (bitIndex & 0xff);
  *integerPointer |= bitMask;
  return;
}
// FUN_0008456c 0x0008456c
void execute_function_with_parameters_0008456c(undefined4 *output_value, int input_value, undefined4 param_3, undefined4 *param_4)
{
  undefined4 constant_value = get_constant_value();
  code *function_pointer = *(code **)PTR_DAT_000845b8;
  int return_value;
  if (input_value == 0) {
    return_value = (*function_pointer)(output_value, auStack24, 0, constant_value, param_4);
  }
  else {
    return_value = (*function_pointer)(output_value, input_value, param_3, constant_value, param_4);
  }
  if (return_value == -1) {
    *param_4 = 0;
    *output_value = 0x8a;
  }
  return;
}
// FUN_00080aba 0x00080aba
void doNothing_00080aba(void)
{
  // This function does nothing
  return;
}
// FUN_00080abc 0x00080abc
void doNothing_00080abc(void)
{
  // This function does nothing
  return;
}
// FUN_000811b4 0x000811b4
undefined4 setFlagInInteger_000811b4(undefined4 integer, int flagIndex)
{
  *(undefined4 *)((int)integer + 4) = 0x2000;
  return 0;
}
// FUN_000816d4 0x000816d4
void setFlagInGlobalVariable_000816d4(void)
{
  *(undefined4 *)(DAT_000816dc + 4) = 0x8000;
  return;
}
// FUN_00083f34 0x00083f34

undefined4 FUNC_00083f34(undefined4 *param_1,uint *param_2,uint **param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_2c;
  
  if (param_3[2] != (uint *)0x0) {
    uVar3 = *(ushort *)(param_2 + 3);
    uVar4 = (uint)uVar3;
    if (((int)(uVar4 << 0x1c) < 0) && (param_2[4] != 0)) {
      puVar6 = *param_3;
      uVar2 = DAT_00084244;
    }
    else {
      iVar1 = check_parameter_and_update_data_00083808(param_1,param_2);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar3 = *(ushort *)(param_2 + 3);
      uVar4 = (uint)uVar3;
      puVar6 = *param_3;
      uVar2 = DAT_00084244;
    }
    DAT_00084244 = uVar2;
    if ((uVar3 & 2) == 0) {
      uVar2 = uVar4 & 2;
      uVar8 = uVar4 & 1;
      uVar7 = uVar2;
      uVar10 = uVar2;
      local_2c = uVar2;
      uVar9 = uVar8;
      if (uVar8 == 0) {
        while( true ) {
          while (uVar8 == 0) {
            uVar9 = *puVar6;
            puVar5 = puVar6 + 1;
            puVar6 = puVar6 + 2;
            uVar8 = *puVar5;
          }
          uVar2 = param_2[2];
          if ((int)(uVar4 << 0x16) < 0) {
            if (uVar8 < uVar2) {
              uVar4 = *param_2;
              uVar2 = uVar8;
            }
            else if ((uVar4 & 0x480) == 0) {
              uVar4 = *param_2;
            }
            else {
              iVar1 = *param_2 - param_2[4];
              uVar2 = iVar1 + 1 + uVar8;
              uVar7 = (int)(param_2[5] * 3) / 2;
              if (uVar2 <= uVar7) {
                uVar2 = uVar7;
              }
              if ((int)(uVar4 << 0x15) < 0) {
                uVar7 = FUNC_00081e14(param_1,uVar2);
                if (uVar7 == 0) {
                  *param_1 = 0xc;
                  uVar3 = *(ushort *)(param_2 + 3);
                  goto LAB_00084030;
                }
                FUNC_0008234c(uVar7,param_2[4],iVar1);
                *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
              }
              else {
                uVar7 = FUNC_000825b0(param_1);
                if (uVar7 == 0) {
                  FUNC_00083d9c(param_1,param_2[4]);
                  uVar3 = *(ushort *)(param_2 + 3) & 0xff7f;
                  *param_1 = 0xc;
                  goto LAB_00084030;
                }
              }
              uVar4 = uVar7 + iVar1;
              param_2[4] = uVar7;
              param_2[5] = uVar2;
              *param_2 = uVar4;
              param_2[2] = uVar2 - iVar1;
              uVar2 = uVar8;
            }
            copyMemory_00082438(uVar4,uVar9,uVar2);
            param_2[2] = param_2[2] - uVar2;
            *param_2 = *param_2 + uVar2;
            uVar2 = uVar8;
          }
          else if ((param_2[4] < *param_2) || (uVar4 = param_2[5], uVar8 < uVar4)) {
            if (uVar8 < uVar2) {
              uVar2 = uVar8;
            }
            copyMemory_00082438(*param_2,uVar9,uVar2);
            uVar4 = param_2[2];
            param_2[2] = uVar4 - uVar2;
            *param_2 = *param_2 + uVar2;
            if ((uVar4 - uVar2 == 0) && (iVar1 = FUNC_00083adc(param_1,param_2), iVar1 != 0))
            goto LAB_0008402e;
          }
          else {
            uVar2 = 0x7fffffff;
            if (uVar8 < 0x7fffffff) {
              uVar2 = uVar8;
            }
            uVar2 = (*(code *)param_2[9])(param_1,param_2[7],uVar9,(uVar2 / uVar4) * uVar4);
            if ((int)uVar2 < 1) goto LAB_0008402e;
          }
          puVar5 = param_3[2];
          uVar8 = uVar8 - uVar2;
          param_3[2] = (uint *)((int)puVar5 - uVar2);
          if ((uint *)((int)puVar5 - uVar2) == (uint *)0x0) break;
          uVar4 = (uint)*(ushort *)(param_2 + 3);
          uVar9 = uVar9 + uVar2;
        }
      }
      else {
        do {
          while (uVar2 == 0) {
            uVar10 = *puVar6;
            uVar2 = puVar6[1];
            local_2c = 0;
            puVar6 = puVar6 + 2;
          }
          if (local_2c == 0) {
            iVar1 = findCharInBuffer_00084384(uVar10,10,uVar2);
            if (iVar1 == 0) {
              uVar7 = uVar2 + 1;
              local_2c = 1;
            }
            else {
              uVar7 = (iVar1 + 1) - uVar10;
              local_2c = 1;
            }
          }
          uVar8 = *param_2;
          uVar4 = uVar7;
          if (uVar2 <= uVar7) {
            uVar4 = uVar2;
          }
          uVar9 = param_2[5];
          if ((param_2[4] < uVar8) && (uVar11 = param_2[2] + uVar9, (int)uVar11 < (int)uVar4)) {
            copyMemory_00082438(uVar8,uVar10,uVar11);
            *param_2 = *param_2 + uVar11;
            iVar1 = FUNC_00083adc(param_1,param_2);
            if (iVar1 != 0) goto LAB_0008402e;
          }
          else if ((int)uVar4 < (int)uVar9) {
            copyMemory_00082438(uVar8,uVar10,uVar4);
            param_2[2] = param_2[2] - uVar4;
            *param_2 = uVar4 + *param_2;
            uVar11 = uVar4;
          }
          else {
            uVar11 = (*(code *)param_2[9])(param_1,param_2[7],uVar10,uVar9);
            if ((int)uVar11 < 1) goto LAB_0008402e;
          }
          uVar7 = uVar7 - uVar11;
          if ((uVar7 == 0) && (iVar1 = FUNC_00083adc(param_1,param_2), local_2c = uVar7, iVar1 != 0))
          goto LAB_0008402e;
          puVar5 = param_3[2];
          uVar10 = uVar10 + uVar11;
          uVar2 = uVar2 - uVar11;
          param_3[2] = (uint *)((int)puVar5 - uVar11);
        } while ((uint *)((int)puVar5 - uVar11) != (uint *)0x0);
      }
    }
    else {
      uVar7 = 0;
      uVar4 = 0;
      do {
        while( true ) {
          uVar10 = uVar4;
          if (uVar2 <= uVar4) {
            uVar10 = uVar2;
          }
          if (uVar4 != 0) break;
          uVar7 = *puVar6;
          uVar4 = puVar6[1];
          puVar6 = puVar6 + 2;
        }
        iVar1 = (*(code *)param_2[9])(param_1,param_2[7],uVar7,uVar10);
        if (iVar1 < 1) {
LAB_0008402e:
          uVar3 = *(ushort *)(param_2 + 3);
LAB_00084030:
          *(ushort *)(param_2 + 3) = uVar3 | 0x40;
          return 0xffffffff;
        }
        puVar5 = param_3[2];
        uVar7 = uVar7 + iVar1;
        uVar4 = uVar4 - iVar1;
        param_3[2] = (uint *)((int)puVar5 - iVar1);
      } while ((uint *)((int)puVar5 - iVar1) != (uint *)0x0);
    }
  }
  return 0;
}


// FUN_00080d7a 0x00080d7a
void setValuesInArray_00080d7a(undefined4* array, undefined4 value, int index1, int index2, int index3)
{
  array[17] = value;
  if (index3 == 0) {
    array[24] = value;
  }
  else {
    array[25] = value;
  }
  if (index2 == 0) {
    array[21] = value;
  }
  else {
    array[20] = value;
  }
  if (index1 == 0) {
    array[13] = value;
  }
  else {
    array[12] = value;
  }
  array[4] = value;
  *array = value;
  return;
}
// FUN_00080e9c 0x00080e9c
void initializeRegisters_00080e9c(void)
{
  uint32_t* register1 = DAT_00080f08;
  *register1 = 0x400;
  register1[128] = 0x400;
  uint32_t* register2 = DAT_00080f0c;
  if (-1 < (*(int *)(register2 + 8) << 7)) {
    *(undefined4 *)(register2 + 8) = DAT_00080f14;
    do {
    } while (-1 < (*(int *)(register2 + 0x68) << 0x1f));
  }
  *(undefined4 *)(register2 + 8) = DAT_00080f10;
  do {
  } while (-1 < (*(int *)(register2 + 0x68) << 0xf));
  *(uint *)(register2 + 0xc) = (*(uint *)(register2 + 0xc) & 0xfffffffc) | 1;
  do {
  } while (-1 < (*(int *)(register2 + 0x68) << 0x1c));
  *(undefined4 *)(register2 + 0x10) = DAT_00080f18;
  do {
  } while (-1 < (*(int *)(register2 + 0x68) << 0x1e));
  *(uint *)(register2 + 0xc) = 0x11;
  do {
  } while (-1 < (*(int *)(register2 + 0x68) << 0x1c));
  *(uint *)(register2 + 0xc) = 0x12;
  do {
  } while (-1 < (*(int *)(register2 + 0x68) << 0x1c));
  *register6 = DAT_00080f1c;
  return;
}
// FUN_00084464 0x00084464
void write_bytes_to_memory_00084464(int* result, int parameter_data_index, undefined4 start_address, undefined4 end_address)
{
  ushort parameter_flags = *(ushort *)(parameter_data_index + 0xc);
  if ((int)((uint)parameter_flags << 0x17) < 0) {
    set_param_to_zero_if_return_is_negative(param_1, *(short *)(parameter_data_index + 0xe), 0, 2);
    parameter_flags = *(ushort *)(parameter_data_index + 0xc);
  }
  *(ushort *)(parameter_data_index + 0xc) = parameter_flags & 0xefff;
  int bytes_to_write = *(short *)(parameter_data_index + 0xe);
  *(undefined4 *)PTR_DAT_000845fc = 0;
  int write_result = write_bytes_to_memory_00084464(bytes_to_write, start_address, end_address);
  if ((write_result == -1) && (*(int *)PTR_DAT_000845fc != 0)) {
    *result = *(int *)PTR_DAT_000845fc;
    return;
  }
  return;
}
// FUN_000811ae 0x000811ae
uint32_t returnError_000811ae(void)
{
  return 0xffffffff;
}
// FUN_0008118c 0x0008118c
int addToGlobalVariable_0008118c(int value)
{
  undefined* globalVariableAddress = PTR_DAT_000811a0;
  if (*(int*)PTR_DAT_000811a0 == 0) {
    *(undefined4*)PTR_DAT_000811a0 = DAT_000811a4;
  }
  int currentValue = *(int*)globalVariableAddress;
  *(int*)globalVariableAddress = value + currentValue;
  return currentValue;
}
// FUN_00082a50 0x00082a50
int findNullTerminatorIndex_00082a50(uint32_t address)
{
  int index = -(address & 3);
  uint32_t word = *(uint32_t*)(address & 0xfffffffc);
  if ((address & 3) != 0) {
    word = word | 0xffffffffU >> ((index + 4U & 0x1f) << 3);
  }
  while ((word + 0xfefefeff & ~word & 0x80808080) == 0) {
    index = index + 4;
    word = *(uint32_t*)((address & 0xfffffffc) + index);
  }
  bool byte1 = (word & 0xff) == 0;
  if (!byte1) {
    index = index + 1;
    byte1 = (word & 0xff00) == 0;
  }
  if (!byte1) {
    index = index + 1;
    byte1 = (word & 0xff0000) == 0;
  }
  if (!byte1) {
    index = index + 1;
  }
  return index;
}
// FUN_0008106e 0x0008106e
void setParameterValue_0008106e(int parameterAddress, uint32_t parameterValue)
{
  *(uint32_t*)(parameterAddress + 0x28) = parameterValue;
  return;
}
// FUN_000811c2 0x000811c2
int returnZero_000811c2(void)
{
  return 0;
}
// FUN_000811c6 0x000811c6
int returnZero_000811c6(void)
{
  return 0;
}
// FUN_00083d00 0x00083d00
undefined4 adjust_memory_allocation_size_00083d00(undefined4 param_1, int bytes_to_allocate)
{
  int memory_block_start = DAT_00083d90;
  do_nothing();
  uint memory_block_size = *(uint *)(*(int *)(memory_block_start + 8) + 4) & 0xfffffffc;
  int new_block_size = ((memory_block_size - bytes_to_allocate) + 0xfef & 0xfffff000) - 0x1000;
  if (new_block_size > 0xfff) {
    int set_param_result = set_param_to_global_var_if_return_is_negative(param_1, 0);
    if (set_param_result == *(int *)(memory_block_start + 8) + memory_block_size) {
      set_param_result = set_param_to_global_var_if_return_is_negative(param_1, -new_block_size);
      undefined *memory_offset_ptr = PTR_DAT_00083d94;
      if (set_param_result != -1) {
        int ptr_offset = *(int *)memory_offset_ptr;
        *(uint *)(*(int *)(memory_block_start + 8) + 4) = memory_block_size - new_block_size | 1;
        *(int *)memory_offset_ptr = ptr_offset - new_block_size;
        do_nothing_2(param_1);
        return 1;
      }
      new_block_size = set_param_to_global_var_if_return_is_negative(param_1, 0);
      memory_offset_ptr = PTR_DAT_00083d94;
      uint ptr_diff = new_block_size - *(int *)(memory_block_start + 8);
      if (ptr_diff > 0xf) {
        int *DAT_00083d98 = DAT_00083d98;
        *(uint *)(*(int *)(memory_block_start + 8) + 4) = ptr_diff | 1;
        *(int *)memory_offset_ptr = new_block_size - *DAT_00083d98;
      }
    }
  }
  do_nothing_2(param_1);
  return 0;
}