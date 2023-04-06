
// FUN_08007246 0x08007246
void process_input_and_display_output_08007246(void)
{
  addByteToUintAndStoreResult_08003748();
  do_nothing_08007244();
  do_nothing();
  return;
}
// FUN_0800a042 0x0800a042
void assign_value_if_condition_met_0800a042(int *result, int input_value, undefined4 unused_param1, undefined4 unused_param2)
{
  short input_short = *(short *)(input_value + 0xe);
  int condition = (int)((uint)*(ushort *)(input_value + 0xc) << 0x17);
  if (condition < 0) {
    check_and_assign_value(result, input_short, 0, 2);
  }
  *(ushort *)(input_value + 0xc) &= 0xefff;
  int check_result = check_input_and_return(input_short, unused_param1, unused_param2, unused_param2, unused_param2, 0, 0, 0);
  if ((check_result == -1) && (*(int *)PTR_DAT_0800a0c8 != 0)) {
    *result = *(int *)PTR_DAT_0800a0c8;
  }
  return;
}
// FUN_08008694 0x08008694
void store_data_and_set_bits_08008694(int data, int index)
{
  if (index != 0)
  {
    byte byte_index = *(byte *)(index + 0x44);
    *(int *)(PTR_DAT_080086dc + (uint)byte_index * 4) = data;
    *(int *)(PTR_DAT_080086e0 + (uint)byte_index * 4) = index;
    int char_index = *(char *)(index + 0x5a);
    set_bits_08003f30(char_index, 0, 2);
    set_bit_at_index_08003f94(char_index);
    int ptr_index = *(byte *)(index + 0x44);
    set_data_0800688e(*(int *)(PTR_DAT_080086e4 + (uint)ptr_index * 4), *(int *)(index + 100) + (uint)*(ushort *)(index + 0x6a), 1);
    return;
  }
  return;
}
// FUN_08002ce0 0x08002ce0
void initialize_params_08002ce0(int param_address)
{
  set_param_value_0800314e(param_address + 0x40);
  int data_struct_address = param_address + 0x44;
  initialize_data_structure_080032bc(data_struct_address, param_address, 0x40);
  *(undefined *)(param_address + 0xc4) = 0;
  *(undefined4 *)(param_address + 200) = 0;
  *(undefined *)(param_address + 0x1f8) = 0;
  set_values_08003306(data_struct_address, 0xe0, execute_callback_if_available, 0);
  set_values_08003306(data_struct_address, 0x90, LAB_1, 0);
  set_values_08003306(data_struct_address, 0xc0, LAB_2, 0);
  set_values_08003306(data_struct_address, 0xd0, LAB_3, 0);
  set_values_08003306(data_struct_address, 0xf4, LAB_4, 0);
  set_values_08003306(data_struct_address, 0xf5, LAB_5, 0);
  set_values_if_param2_equals_113_08003366(data_struct_address, 0x71, LAB_6, 0);
  set_values_in_struct_08003370(data_struct_address, 0xf0, LAB_7, 0);
  update_params_if_valid_08003346(data_struct_address, 0x79, LAB_8, param_address);
  set_values_at_offsets_08003350(data_struct_address, 0xf9, LAB_9, param_address);
  set_values_at_offsets_08003350(data_struct_address, 0xff, LAB_10, 0);
  return;
}
// FUN_08005188 0x08005188
void process_data_and_return_result_08005188(void* data) {
  int data_ptr = *(int *)data;
  uint flags = *(uint *)(data_ptr + 0x14);
  uint input_flags = *(uint *)(data_ptr + 4);
  uint output_flags = *(uint *)(data_ptr + 0x18);
  char input_type = *(char *)((int)data + 0x3e);
  if (input_type == '\x10' || input_type == '@') {
    if ((flags & 0x10001) == 0 || (input_flags & 0x200) == 0) {
      if ((0x0000C0C0 & flags) == 0 || (input_flags & 0x200) == 0) {
        if ((0x00003030 & flags) != 0 && (input_flags & 0x200) != 0) {
          set_flags_based_on_conditions_080043a2(data);
        }
      }
      else {
        set_param_value_08004396(data);
      }
    }
    else {
      set_flag_based_on_conditions_0800430c(data);
    }
    if ((output_flags & 0x00000040) == 0) {
      if ((0x0000E0C0 & flags) != 0 && (input_flags & 0x400) != 0 && (0x0000C030 & flags) == 0) {
        set_bit_and_update_08004d6c(data);
        return;
      }
      if ((0x0000C030 & flags) != 0 && (input_flags & 0x200) != 0) {
        process_data_08004a76(data);
        return;
      }
    }
    else {
      if ((0x0000E000 & flags) != 0 && (input_flags & 0x400) != 0 && (0x0000C030 & flags) == 0) {
        process_input_08004b82(data);
        return;
      }
      if ((0x0000C030 & flags) != 0 && (input_flags & 0x200) != 0) {
        execute_command_08004ccc(data);
        return;
      }
    }
  }
  else {
    if ((0x00003030 & flags) != 0 && (input_flags & 0x200) != 0) {
      process_input_08004ac2();
      return;
    }
    if ((0x00006060 & flags) != 0 && (input_flags & 0x200) != 0) {
      execute_command(data);
      return;
    }
    if ((output_flags & 0x00000040) == 0) {
      if ((0x0000E0C0 & flags) != 0 && (input_flags & 0x400) != 0 && (0x0000C030 & flags) == 0) {
        process_data_0800459c(data);
        return;
      }
      if ((0x0000C030 & flags) != 0 && (input_flags & 0x200) != 0) {
        process_data(data);
      }
    }
    else {
      if ((0x0000E000 & flags) != 0 && (input_flags & 0x400) != 0 && (0x0000C030 & flags) == 0) {
        process_input_data_08004a24(data);
        return;
      }
      if ((0x0000C030 & flags) != 0 && (input_flags & 0x200) != 0) {
        extract_byte_from_data_0800457c(data);
        return;
      }
    }
  }
  return;
}
// FUN_08007244 0x08007244
void do_nothing_08007244(void)
{
  return;
}
// FUN_08009db0 0x08009db0
int * allocate_and_initialize_block_08009db0(int *error_code, int size, int fill_value, int param_4)
{
  int *block_pointer;
  int *current_block_pointer;
  int allocation_size;
  int **next_block_pointer_ptr;
  
  allocation_size = *(int *)PTR_PTR_DAT_08009e24;
  if (*(int *)(allocation_size + 0x18) == 0) {
    initialize_allocation_system(allocation_size);
  }
  next_block_pointer_ptr = (int **)(allocation_size + 0x48);
  do {
    current_block_pointer = next_block_pointer_ptr[2];
    block_pointer = next_block_pointer_ptr[1];
    while (block_pointer = (int *)((int)block_pointer + -1), -1 < (int)block_pointer) {
      if (*(short *)(current_block_pointer + 3) == 0) {
        *(undefined2 *)((int)current_block_pointer + 0xe) = 0xffff;
        current_block_pointer[0x19] = 0;
        *(undefined2 *)(current_block_pointer + 3) = 1;
        *current_block_pointer = 0;
        current_block_pointer[2] = 0;
        current_block_pointer[1] = 0;
        current_block_pointer[4] = 0;
        current_block_pointer[5] = 0;
        current_block_pointer[6] = 0;
        fill_memory_with_value(current_block_pointer + 0x17, size, 8, fill_value, param_4);
        current_block_pointer[0xd] = 0;
        current_block_pointer[0xe] = 0;
        current_block_pointer[0x12] = 0;
        current_block_pointer[0x13] = 0;
        return current_block_pointer;
      }
      current_block_pointer = current_block_pointer + 0x1a;
    }
    if (*next_block_pointer_ptr == (int *)0x0) {
      block_pointer = (int *)allocate_and_initialize_block_08009db0_08009d24(error_code, 4);
      *next_block_pointer_ptr = block_pointer;
      if (block_pointer == (int *)0x0) {
        *error_code = 0xc;
        return (int *)0x0;
      }
    }
    next_block_pointer_ptr = (int **)*next_block_pointer_ptr;
  } while( true );
}
// FUN_08002c2c 0x08002c2c
void execute_callback_if_available_08002c2c(undefined4 callback_ptr, undefined4 param_1, undefined4 param_2, undefined4 param_3) {
  code *callback_func = *(code **)PTR_DAT_08002c3c;
  if (callback_func != (code *)0x0) {
    (*callback_func)(param_1, param_2, param_3, callback_func, callback_ptr);
  }
  return;
}
// FUN_08001bf8 0x08001bf8
void copy_input_data_to_buffer_08001bf8(uint buffer_address, uint input_data, uint input_data_size, uint buffer_size)
{
  uint PTR_DAT_08001c00;
  uint *PTR_DAT_08001c04;
  int result;
  uint buffer_used_size;
  
  PTR_DAT_08001c04 = PTR_DAT_08001c04;
  PTR_DAT_08001c00 = *PTR_DAT_08001c00;
  if (PTR_DAT_08001c00 == 0) {
    result = copy_input_data_to_buffer_08001bf8(buffer_address + 0x14, &input_data, input_data_size & 0xffff, buffer_size);
    if (result != 0) {
      return;
    }
    else {
      return;
    }
  }
  else {
    buffer_size = (*PTR_DAT_08001c08 + 1) & 0xff;
    buffer_used_size = (*PTR_DAT_08001c0c) & 0xff;
    if (buffer_used_size < buffer_size + input_data_size) {
      if (buffer_size + input_data_size < 0x20) {
        buffer_size = 0x20;
      }
      else {
        buffer_size = buffer_size + input_data_size;
      }
      result = allocate_and_copy_data(PTR_DAT_08001c08, buffer_size);
      *PTR_DAT_08001c04 = result;
      if (result == 0) {
        return;
      }
      else {
        *PTR_DAT_08001c0c = buffer_size;
      }
    }
    PTR_DAT_08001c04 = PTR_DAT_08001c10;
    if (*PTR_DAT_08001c08 == 0) {
      *(uint *)(buffer_address + 4) = 1;
      return;
    }
    else {
      copy_input_data_to_buffer_08001bf8((uint)PTR_DAT_08001c04 + *(int *)PTR_DAT_08001c08, &input_data, input_data_size);
      buffer_used_size = buffer_used_size + input_data_size;
      *PTR_DAT_08001c04 = buffer_used_size;
      *PTR_DAT_08001c0c = buffer_used_size;
      return;
    }
  }
}
// FUN_080072f0 0x080072f0
void check_bit_and_return_if_set_080072f0(undefined4 bit_array_address, undefined2 bit_index, undefined4 param_1, undefined4 param_2)
{
  bool is_bit_set = is_bit_set_080042d4(bit_array_address, bit_index);
  if (is_bit_set)
  {
    return;
  }
  else
  {
    set_bit_080042e0(bit_array_address, bit_index);
    return;
  }
}
// FUN_08000178 0x08000178
char* find_string_end_08000178(char* str) {
  char* current_char = str;
  while (*current_char != '\0') {
    current_char++;
  }
  return current_char;
}
// FUN_080069ec 0x080069ec
void process_input_080069ec(uint **input_data) {
  uint *input_flags = *input_data;
  uint input_flag_1 = *input_flags;
  uint input_flag_2 = input_flags[3];
  if ((input_flag_1 & 0xf) == 0 && (input_flag_1 & 0x20) != 0 && (input_flag_2 & 0x20) != 0) {
    process_input_080069ec_string_0800694c(input_data);
    return;
  }
  if ((input_flag_1 & 0xf) == 0 || (input_flags[5] & 1) == 0 && (input_flag_2 & 0x120) == 0) {
    if ((input_flag_1 & 0x80) != 0 && (input_flag_2 & 0x80) != 0) {
      decode_message_080064cc(input_data);
      return;
    }
    if ((input_flag_1 & 0x40) != 0 && (input_flag_2 & 0x40) != 0) {
      process_selected_item_and_clear_flag(input_data);
    }
  }
  else {
    if ((input_flag_1 & 1) != 0 && (input_flag_2 & 0x100) != 0) {
      input_data[15] = (uint *)((uint)input_data[15] | 1);
    }
    if ((input_flag_1 & 4) != 0 && (input_flags[5] & 1) != 0) {
      input_data[15] = (uint *)((uint)input_data[15] | 2);
    }
    if ((input_flag_1 & 2) != 0 && (input_flags[5] & 1) != 0) {
      input_data[15] = (uint *)((uint)input_data[15] | 4);
    }
    if ((input_flag_1 & 8) != 0 && (input_flags[5] & 1) != 0) {
      input_data[15] = (uint *)((uint)input_data[15] | 8);
    }
    if (input_data[15] != (uint *)0x0) {
      if ((input_flag_1 & 0x20) != 0 && (input_flag_2 & 0x20) != 0) {
        process_input_080069ec_string_0800694c(input_data);
      }
      if (((uint)input_data[15] & 8) == 0 && (input_flags[0][5] & 0x40) == 0) {
        doNothing_0800877c(input_data);
        input_data[15] = (uint *)0x0;
        return;
      }
      clear_flags_080064b0(input_data);
      uint *input_data_ptr = *input_data;
      if ((input_data_ptr[5] & 0x40) == 0) {
        doNothing_0800877c(input_data);
        return;
      }
      input_data_ptr[5] = input_data_ptr[5] & 0xffffffbf;
      if (input_data[13] == (uint *)0x0) {
        doNothing_0800877c(input_data);
        return;
      }
      input_data[13][13] = (uint)PTR_LAB_08006b0c_1_08006b08;
      int value = get_value_from_pointer_08004050(input_data[13]);
      if (value != 0) {
        (*(code *)input_data[13][13])();
        return;
      }
    }
  }
  return;
}
// FUN_0800a168 0x0800a168
void processReturnValue_0800a168(int *outputValue, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined *pointerToData = PTR_DAT_0800a188;
  *(undefined4 *)PTR_DAT_0800a188 = 0;
  int returnValue = returnZero_08008858(param_2, param_3, param_4, param_4, param_4);
  if ((returnValue == -1) && (*(int *)pointerToData != 0)) {
    *outputValue = *(int *)pointerToData;
  }
  return;
}
// FUN_080067ac 0x080067ac
int check_if_valid_input_080067ac(int *input_array, ushort *input_string, int string_length, undefined4 pointer_value)
{
  undefined4 pointer_value_copy;
  int return_value;
  char first_char_of_input_array = *(char *)((int)input_array + 0x39);

  if (first_char_of_input_array == ' ')
  {
    if (input_string == (ushort *)0x0 || string_length == 0)
    {
      return_value = 1;
    }
    else if (*(char *)(input_array + 0xe) == '\x01')
    {
      return_value = 2;
    }
    else
    {
      *(undefined *)(input_array + 0xe) = 1;
      input_array[0xf] = 0;
      *(undefined *)((int)input_array + 0x39) = 0x21;
      pointer_value_copy = get_pointer_value_08003760();
      *(short *)(input_array + 9) = (short)string_length;
      *(short *)((int)input_array + 0x26) = (short)string_length;
      while (*(short *)((int)input_array + 0x26) != 0)
      {
        *(short *)((int)input_array + 0x26) = *(short *)((int)input_array + 0x26) + -1;
        if (input_array[2] == 0x1000)
        {
          return_value = check_flags_and_values_080066e8(input_array,0x80,0,pointer_value_copy,pointer_value);
          if (return_value != 0)
          {
            return 3;
          }
          *(uint *)(*input_array + 4) = *input_string & 0x1ff;
          if (input_array[4] == 0)
          {
            input_string = input_string + 1;
          }
          else
          {
            input_string = (ushort *)((int)input_string + 1);
          }
        }
        else
        {
          return_value = check_flags_and_values_080066e8(input_array,0x80,0,pointer_value_copy,pointer_value);
          if (return_value != 0)
          {
            return 3;
          }
          *(uint *)(*input_array + 4) = (uint)*(byte *)input_string;
          input_string = (ushort *)((int)input_string + 1);
        }
      }
      return_value = check_flags_and_values_080066e8(input_array,0x40,0,pointer_value_copy,pointer_value);
      if (return_value == 0)
      {
        *(undefined *)((int)input_array + 0x39) = 0x20;
        *(undefined *)(input_array + 0xe) = 0;
      }
      else
      {
        return_value = 3;
      }
    }
  }
  else
  {
    return_value = 2;
  }
  return return_value;
}
// FUN_0800735a 0x0800735a
int find_param_in_array_0800735a(int search_param, char* array) {
  while (*array != -1) {
    if (*array == search_param) {
      return *(int *)(array + 8);
    }
    array += 0xc;
  }
  return -1;
}
// FUN_08008c20 0x08008c20
void initialize_data_structures_08008c20(int DAT_structure_address) {
  int* DAT_structure_pointer = (int*)(DAT_structure_address + 0x130);
  *DAT_structure_pointer = DAT_structure_address + 0x11;
  short* short_PTR_1 = (short*)(DAT_structure_address + 0x134);
  *short_PTR_1 = 0;
  short* short_PTR_2 = (short*)(DAT_structure_address + 0x136);
  *short_PTR_2 = 0;
  int* int_pointer = (int*)(DAT_structure_address + 0x138);
  *int_pointer = DAT_structure_address + 0x51;
  short* short_PTR_3 = (short*)(DAT_structure_address + 0x13c);
  *short_PTR_3 = 0;
  short* short_PTR_4 = (short*)(DAT_structure_address + 0x13e);
  *short_PTR_4 = 0;
}

// FUN_08000a64 0x08000a64
void check_for_skipped_chars_08000a64()
{
  int index = 0;
  uint8_t char_value = 0;
  for (index = 0; index < 0x3c; index++) {
    if (PTR_DAT_08000ad8[index] == -1) {
      char_value = 0;
    }
    else {
      int find_index = find_char_index_080036ac((int)(char)PTR_DAT_08000ad8[index]);
      if (find_index == 0) {
        char_value = 0;
      }
      else if (find_index == 1) {
        char_value = 0;
      }
      else {
        int PTR_DAT_08000adc = compare_values_0800738a((int)(char)PTR_DAT_08000ad8[index],PTR_DAT_08000adc);
        if (PTR_DAT_08000adc == 0) {
          int PTR_DAT_08000ae0 = compare_values_0800738a((int)(char)PTR_DAT_08000ad8[index],PTR_DAT_08000ae0);
          if (PTR_DAT_08000ae0 == 0) {
            char_value = 0;
          }
        }
      }
    }
    if (char_value != 0) {
      FUNC_080005f8(index,6);
    }
  }
  *PTR_DAT_08000ae4 = 1;
  initialize_data_08002a26(PTR_DAT_08000ae8);
}

// FUN_0800723c 0x0800723c
void get_pointer_value_and_return_0800723c(void)
{
  // Call function to get pointer value
  get_pointer_value_08003760();
  return;
}
// FUN_080043a2 0x080043a2
uint32_t set_flags_based_on_conditions_080043a2(uint32_t **PTR_array) {
  uint32_t *flag_ptr;
  flag_ptr = PTR_array[11];
  if ((*(char *)((int)PTR_array + 0x3d) == '"') && ((PTR_array[20] != (uint32_t *)0x0 || (*(char *)((int)PTR_array + 0x3e) != '@')))) {
    if ((PTR_array[20] == (uint32_t *)0x0) && (PTR_array[4] == (uint32_t *)0xc000)) {
      **PTR_array = **PTR_array | 0x100;
      PTR_array[20] = (uint32_t *)((int)PTR_array[20] + 1);
    }
    else {
      if (*(short *)((int)PTR_array + 0x2a) == 0) {
        **PTR_array = **PTR_array | 0x200;
      }
      else if (*(short *)((int)PTR_array + 0x2a) == 1) {
        if (flag_ptr == (uint32_t *)0xffff0000) {
          **PTR_array = **PTR_array & 0xfffffbff;
          flag_ptr = *PTR_array;
          if ((flag_ptr[1] & 0x800) == 0) {
            *flag_ptr = *flag_ptr | 0x200;
          }
          else {
            *flag_ptr = *flag_ptr & 0xfffffbff;
          }
        }
        else if (((flag_ptr == (uint32_t *)0x4) || (flag_ptr == (uint32_t *)0x8)) || (PTR_array[12] == (uint32_t *)0x12)) {
          **PTR_array = **PTR_array & 0xfffffbff;
          **PTR_array = **PTR_array | 0x200;
        }
        else if (PTR_array[11] == (uint32_t *)0x2) {
          **PTR_array = **PTR_array | 0x400;
        }
        else {
          **PTR_array = **PTR_array & 0xfffffbff;
        }
      }
      else if (*(short *)((int)PTR_array + 0x2a) == 2) {
        if (PTR_array[11] == (uint32_t *)0x2) {
          **PTR_array = **PTR_array | 0x400;
        }
        else {
          **PTR_array = **PTR_array | 0x800;
          **PTR_array = **PTR_array & 0xfffffbff;
        }
        flag_ptr = *PTR_array;
        if ((flag_ptr[1] & 0x800) != 0) {
          flag_ptr[1] = flag_ptr[1] | 0x1000;
        }
      }
      else {
        **PTR_array = **PTR_array | 0x400;
        flag_ptr = *PTR_array;
        if ((flag_ptr[1] & 0x800) != 0) {
          flag_ptr[1] = flag_ptr[1] | 0x1000;
        }
      }
      PTR_array[20] = (uint32_t *)0x0;
    }
  }
  return 0;
}
// FUN_0800694c 0x0800694c
int process_input_string_0800694c(int *input_array)
{
  byte *byte_pointer;
  short remaining_input_length;
  undefined *undefined_pointer;

  if (*(char *)((int)input_array + 0x3a) != '"') {
    return 2;
  }
  if (input_array[2] == 0x1000) {
    if (input_array[4] == 0) {
      *(ushort *)input_array[10] = (ushort)((uint)(*(int *)(*input_array + 4) << 0x17) >> 0x17);
      input_array[10] = input_array[10] + 2;
    }
    else {
      *(ushort *)input_array[10] = (ushort)*(undefined4 *)(*input_array + 4) & 0xff;
      input_array[10] = input_array[10] + 1;
    }
  }
  else if (input_array[4] == 0) {
    undefined_pointer = (undefined *)input_array[10];
    input_array[10] = (int)(undefined_pointer + 1);
    *undefined_pointer = (char)*(undefined4 *)(*input_array + 4);
  }
  else {
    byte_pointer = (byte *)input_array[10];
    input_array[10] = (int)(byte_pointer + 1);
    *byte_pointer = (byte)*(undefined4 *)(*input_array + 4) & 0x7f;
  }
  remaining_input_length = *(short *)((int)input_array + 0x2e) + -1;
  *(short *)((int)input_array + 0x2e) = remaining_input_length;
  if (remaining_input_length != 0) {
    return 0;
  }
  *(uint *)(*input_array + 0xc) &= 0xffffffdf;
  *(uint *)(*input_array + 0xc) &= 0xfffffeff;
  *(uint *)(*input_array + 0x14) &= 0xfffffffe;
  *(undefined *)((int)input_array + 0x3a) = 0x20;
  execute_operation_0800870c();
  return 0;
}
// FUN_08006280 0x08006280
int set_bit_and_update_flags_08006280(uint **data, uint bit_index) {
  uint *data_ptr = *data;
  switch(bit_index) {
    case 0:
      data_ptr[3] |= 2;
      break;
    case 4:
      data_ptr[3] |= 4;
      break;
    case 8:
      data_ptr[3] |= 8;
      break;
    case 0xc:
      data_ptr[3] |= 0x10;
  }
  set_bit_at_index(data_ptr, bit_index);
  if (data_ptr == PTR_080062f0) {
    data_ptr[0x11] |= 0x8000;
  }
  **data = **data | 1;
  return 0;
}
// FUN_08007258 0x08007258
void set_flag_and_update_data_08007258(uint8_t flag_value, uint32_t data_1, uint32_t data_2) {
  uint32_t flag = set_flag(flag_value);
  uint16_t bit_mask = 1 << (data_1 & 0xf) & 0xffff;
  uint32_t data_3 = 3;
  *(uint32_t *)(DAT_080072d0 + 0x18) = *(uint32_t *)(DAT_080072d0 + 0x18) | 1;
  if ((data_1 - 0xd & 0xff) < 2) {
    *(uint32_t *)(DAT_080072d4 + 4) = *(uint32_t *)(DAT_080072d4 + 4) & 0xf8ffffff | 0x4000000;
  }
  if (((data_1 == 0xf) || (data_1 == 0x13)) || (data_1 == 0x14)) {
    *(uint32_t *)(DAT_080072d4 + 4) = *(uint32_t *)(DAT_080072d4 + 4) & 0xf8ffffff | 0x2000000;
  }
  uint32_t data_4 = data_2;
  uint32_t data_5 = data_3;
  FUNC_080040e8(flag, &bit_mask);
  return;
}
// FUN_0800a0ec 0x0800a0ec
void set_permission_and_copy_data_0800a0ec(int *result, void *addr, size_t len, int prot, off_t offset)
{
  void *data_copy = NULL;
  int set_mem_perm_res;

  data_copy = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
  if (data_copy == MAP_FAILED) {
    return;
  }
  memcpy(data_copy, addr, len);
  set_mem_perm_res = mprotect(data_copy, len, prot);
  if (set_mem_perm_res == -1) {
    if (result != NULL && *result != 0) {
      *result = *(int *)PTR_DAT_0800a10c;
    }
  }
  else {
    *result = (int)data_copy + offset;
  }
  return;
}
// FUN_08008df8 0x08008df8
void set_data_in_memory_08008df8(undefined4 *memory_address, undefined data_byte_1, undefined data_byte_2, undefined data_byte_3, undefined data_byte_4)
{
  *memory_address = PTR_PTR_LAB_08008dbe_1_08008e10;
  *(undefined *)(memory_address + 1) = data_byte_1;
  *(undefined *)((int)memory_address + 5) = data_byte_2;
  *(undefined *)((int)memory_address + 6) = data_byte_3;
  *(undefined *)((int)memory_address + 7) = data_byte_4;
  return;
}
// FUN_08009f4a 0x08009f4a
void do_nothing_08009f4a(void) {
  return;
}
// FUN_08006c7c 0x08006c7c
int find_parameter_value_08006c7c(int param_value, int* param_list, int list_size, int default_value1, int default_value2) {
  int index = find_param_index(param_value, param_list, list_size, default_value1, default_value2);
  uint shift_amount = (uint)(index << 0xc) >> 0x1b;
  if (shift_amount == 3) {
    return 8;
  }
  if (shift_amount != 4) {
    if (shift_amount != 2) {
      return 0;
    }
    return 4;
  }
  return 0xc;
}
// FUN_08006b5c 0x08006b5c
DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ update_bit_08006b5c(DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_,DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_<DAT_PDAT_TDAT_RDAT__DAT_<DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_8DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_>DAT_PDAT_TDAT_RDAT__DAT_>DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_kDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_~DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_<DAT_PDAT_TDAT_RDAT__DAT_<DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_&DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_&DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_kDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
// FUN_08007376 0x08007376
int find_param_08007376(int param_index) {
  int param_value;
  if (param_index == -1) {
    return -1;
  }
  param_value = find_param_08007376_in_array_0800735a();
  return param_value;
}
// FUN_08000188 0x08000188
void interruptSoftwareCall_08000188(void)
{
  software_interrupt(0x3f);
  return;
}
// FUN_08004f3c 0x08004f3c
void execute_param_08004f3c(uint **param)
{
  int value;
  uint *ptr1;
  uint *ptr2;
  
  if (*(byte *)((int)param + 0x3d) - 0x29 < 2)) {
    param[0xc] = NULL;
    *(undefined *)((int)param + 0x3d) = 0x28;
  }
  else {
    if ((*(char *)((int)param + 0x3d) != '`') && (((*param)[1] & 0x800) == 0)) {
      *(undefined *)((int)param + 0x3d) = 0x20;
    }
    param[0xc] = NULL;
    *(undefined *)((int)param + 0x3e) = 0;
  }
  **param = **param & 0xfffff7ff;
  ptr2 = *param;
  if ((ptr2[1] & 0x800) == 0) {
    if (*(char *)((int)param + 0x3d) == '`') {
      *(undefined *)((int)param + 0x3d) = 0x20;
      param[0x10] = NULL;
      if ((ptr2[5] & 0x40) != 0) {
        ptr1 = param[9];
        param[9] = (uint *)((int)ptr1 + 1);
        *(char *)ptr1 = (char)ptr2[4];
      }
      **param = **param & 0xfffffffe;
      doNothing(param);
    }
    else {
      if ((ptr2[5] & 0x40) != 0) {
        ptr1 = param[9];
        param[9] = (uint *)((int)ptr1 + 1);
        *(char *)ptr1 = (char)ptr2[4];
      }
      check_and_set_values_for_input(param);
    }
  }
  else {
    ptr2[1] = ptr2[1] & 0xfffff7ff;
    if (*(char *)((int)param[0xd] + 0x21) == '\x01') {
      param[0xe][0xd] = (uint)PTR_LAB_080053cc_1_0800507c;
      value = get_value_from_pointer(param[0xe]);
      if (value != 0) {
        if (((*param)[5] & 0x40) != 0) {
          ptr2 = param[9];
          param[9] = (uint *)((int)ptr2 + 1);
          *(char *)ptr2 = (char)(*param)[4];
        }
        **param = **param & 0xfffffffe;
        *(undefined *)((int)param + 0x3d) = 0x20;
        (*(code *)param[0xe][0xd])();
      }
    }
    else {
      param[0xd][0xd] = (uint)PTR_LAB_080053cc_1_0800507c;
      value = get_value_from_pointer(param[0xd]);
      if (value != 0) {
        **param = **param & 0xfffffffe;
        *(undefined *)((int)param + 0x3d) = 0x20;
        (*(code *)param[0xd][0xd])();
      }
    }
  }
  if ((*(char *)((int)param + 0x3d) == '(') && (((uint)param[0x10] & 4) != 0)) {
    param[0xb] = DAT_08005080;
    param[0xc] = NULL;
    *(undefined *)((int)param + 0x3d) = 0x20;
    *(undefined *)((int)param + 0x3e) = 0;
    execute_command_and_update_values(param);
  }
  return;
}
// FUN_080033cc 0x080033cc
void process_input_080033cc(int input_ptr, uint arg1, uint arg2, uint arg3)
{
  char first_char = *(char *)(input_ptr + 4);
  char *input_str = *(char **)(input_ptr + 4);
  if (first_char == 'q') {
    if (*(int *)(input_ptr + 0x68) != 0) {
      int shifted_bits = copy_and_shift_bits(input_ptr, *(int *)(input_ptr + 0x18) - 1, input_str + 1, input_str, arg3);
      process_input_080033cc_08003376(input_ptr, 0, shifted_bits + 1);
      (**(void (**)(void))(input_ptr + 0x68))(*(uint *)(input_ptr + 0x40), *(int *)(input_ptr + 4) + 1);
      return;
    }
  }
  else if (first_char == 'y') {
    if (*(void (**)(void))(input_ptr + 0x70) != (void (*)(void))0x0) {
      if (*(uint *)(input_ptr + 0x18) < 3) {
        (**(void (**)(void))(input_ptr + 0x70))(*(uint *)(input_ptr + 0x34), 0, 0);
        return;
      }
      int shifted_bits = copy_and_shift_bits(input_ptr, *(uint *)(input_ptr + 0x18) - 3, input_str + 3, input_str, arg3);
      process_input_080033cc_08003376(input_ptr, 0, shifted_bits + 3);
      int input_ptr_4 = *(int *)(input_ptr + 4);
      (**(void (**)(void))(input_ptr + 0x70))(*(uint *)(input_ptr + 0x34), *(char *)(input_ptr_4 + 1), *(char *)(input_ptr_4 + 2), input_ptr_4 + 3);
      return;
    }
  }
  else if (*(void (**)(void))(input_ptr + 0x6c) != (void (*)(void))0x0) {
    (**(void (**)(void))(input_ptr + 0x6c))(*(uint *)(input_ptr + 0x44), first_char, *(int *)(input_ptr + 0x18) - 1, input_str + 1);
  }
  return;
}
// FUN_08003de4 0x08003de4
int check_if_pointer_is_valid_08003de4(int input_ptr)
{
  int is_valid = 0;
  char is_pointer_valid = *(char *)(input_ptr + 0x24);
  if (is_pointer_valid == '\x01') {
    is_valid = 2;
  }
  else {
    *(char *)(input_ptr + 0x24) = '\x01';
    is_valid = check_if_pointer_is_valid_08003de4_08003b8c();
    *(uint *)(input_ptr + 0x28) = (*(uint *)(input_ptr + 0x28) & 0xffffeefe) | 1;
    *(char *)(input_ptr + 0x24) = 0;
  }
  return is_valid;
}
// FUN_08004f3a 0x08004f3a
void doNothing_08004f3a(void)
{
  return;
}
// FUN_08000500 0x08000500
void process_servo_data_08000500(int servo_index, int input_type, int input_value, undefined4 param_4)
{
  byte servo_count = *PTR_DAT_0800056c;
  if (servo_count > 11) {
    process_data_and_return_result(PTR_DAT_08000584,PTR_s_Max_servos_attached_08000580,input_value,param_4,param_4);
    return;
  }
  byte last_servo_index = *PTR_DAT_08000570;
  if (last_servo_index == 0) {
    PTR_DAT_08000578[servo_index] = servo_count;
    *PTR_DAT_0800056c = servo_count + 1;
  }
  else {
    PTR_DAT_08000578[servo_index] = last_servo_index - 1;
    *PTR_DAT_08000570 = last_servo_index - 1;
  }
  if ((input_type > 0) && (input_value > 0)) {
    process_input(PTR_DAT_0800057c + (uint)(byte)PTR_DAT_08000578[servo_index] * 3,servo_index,input_type,input_value);
    return;
  }
  process_input_with_params(PTR_DAT_0800057c + (uint)(byte)PTR_DAT_08000578[servo_index] * 3,servo_index);
  return;
}
// FUN_08009d24 0x08009d24
undefined4* allocate_and_initialize_block_08009d24(int block_size, int num_elements) {
  undefined4* block_ptr;
  int total_size = (num_elements - 1) * 0x68;
  block_ptr = (undefined4*)allocate_memory_block(block_size, total_size + 0x74);
  if (block_ptr != (undefined4*)0x0) {
    *block_ptr = 0;
    block_ptr[1] = num_elements;
    block_ptr[2] = block_ptr + 3;
    fill_memory_with_value_080091c6(block_ptr + 3, total_size + 0x68);
  }
  return block_ptr;
}
// FUN_0800344a 0x0800344a
void initialize_data_structures_0800344a(int data_structure_address) {
  uint index = 0;
  *(undefined4 *)(data_structure_address + 0x10) = 0;
  *(undefined *)(data_structure_address + 0xc) = 0;
  *(undefined *)(data_structure_address + 0xd) = 0;
  for (index = 0; index < *(uint *)(data_structure_address + 8); index++) {
    *(undefined *)(*(int *)(data_structure_address + 4) + index) = 0;
  }
  *(undefined *)(data_structure_address + 0x14) = 0;
  *(undefined4 *)(data_structure_address + 0x18) = 0;
  if (*(code **)(data_structure_address + 0x78) != (code *)0x0) {
    (**(code **)(data_structure_address + 0x78))(*(undefined4 *)(data_structure_address + 0x48));
  }
  return;
}
// FUN_080071e4 0x080071e4
void check_and_update_flags_080071e4(uint32_t param) {
  int parameter_value = get_parameter_value_08007320(param, PTR_DAT_08007238);
  if ((parameter_value != 0) && is_valid_parameter_value(param)) {
    uint32_t flag_value = find_param_08007376(param, PTR_DAT_08007238);
    if ((flag_value & 0x100000) == 0) {
      update_flags_if_needed_080063c0(parameter_value, parameter_type);
    }
    else {
      clear_bit_and_check_for_updates(parameter_value, parameter_type);
    }
    clear_flags_if_conditions_met(parameter_value);
  }
  return;
}
// FUN_08008e72 0x08008e72
void execute_function_pointer_08008e72(void *function_pointer) {
  (**(void (**)(void))function_pointer)();
  return;
}
// FUN_080022f8 0x080022f8
void process_device_data_080022f8(void)
{
  bool is_valid_char;
  int char_index;
  int device_parameter;
  int input_data_length;
  int expected_output_length;
  uint32_t input_data;
  uint32_t PTR_DAT_080023e0 = get_PTR_DAT_080023e0();
  while (execute_function(PTR_DAT_080023e0) != 0) {
    execute_code(PTR_DAT_080023e0);
  }
  int device_data_value = get_pointer_value_and_return();
  *(int *)PTR_DAT_080023e0 = device_data_value;
  if (*(uint *)(PTR_DAT_080023e0 + 4) < (uint)(device_data_value - *(int *)(PTR_DAT_080023e0 + 8))) {
    *(uint *)(PTR_DAT_080023e0 + 8) = *(int *)(PTR_DAT_080023e0 + 8) + *(uint *)(PTR_DAT_080023e0 + 12);
    for (uint i = 0; i < 0x3c; i++) {
      if (i < 0xe) {
        int char_value = -1;
        if (i < 0x3c) {
          char_value = (int)(char)PTR_DAT_080023f4[i];
        }
        char_index = find_char_index(char_value);
        if (char_index == 0) {
          is_valid_char = false;
        }
        else if (char_index == 1) {
          is_valid_char = false;
        }
        else if (get_value_at_offset(PTR_DAT_080023e0, i) == 2) {
          is_valid_char = true;
        }
        else {
          is_valid_char = false;
        }
      }
      else {
        is_valid_char = false;
      }
      if (is_valid_char && ((*(int *)(PTR_DAT_080023e0 + 16) >> (i - 0x2e) & 1U) != 0)) {
        device_parameter = get_device_parameter(i);
        send_data(PTR_DAT_080023e0, i, device_parameter);
      }
    }
    if (-1 < (char)*PTR_DAT_080023f8) {
      for (uint i = 0; (int)i < (char)*PTR_DAT_080023f8 + 1; i++) {
        int input_data_offset = i * 0xc;
        input_data_length = PTR_DAT_080023fc[input_data_offset + 4];
        expected_output_length = PTR_DAT_080023fc[input_data_offset + 8];
        input_data = PTR_DAT_080023fc[input_data_offset + 9];
        process_input_data_and_return_result(PTR_DAT_080023e0, input_data_length, expected_output_length, input_data);
      }
    }
  }
  return;
}
// FUN_080072fa 0x080072fa
void initialize_device_and_validate_input_080072fa(void)
{
  update_and_validate_input();
  initialize_device_settings();
  return;
}
// FUN_08005084 0x08005084
uint execute_command_08005084(uint **command_data) {
  char current_char = *(char *)((int)command_data + 0x3d);
  (*command_data)[1] &= 0xfffff8ff;
  **command_data |= 1;
  **command_data &= 0xfffffbff;
  uint *command = *command_data;
  if ((command[1] & 0x800) != 0) {
    if ((*(char *)((int)command_data + 0x3d) == '"') || (*(char *)((int)command_data + 0x3d) == '*')) {
      *(short *)((int)command_data + 0x2a) = (short)*(undefined4 *)(*command[0xe] + 4);
    }
    else {
      *(short *)((int)command_data + 0x2a) = (short)*(undefined4 *)(*command[0xd] + 4);
    }
  }
  if (*(short *)((int)command_data + 0x2a) != 0) {
    if ((command[5] & 4) != 0) {
      uint *command_buffer = command_data[9];
      command_data[9] = (uint *)((int)command_buffer + 1);
      *(char *)command_buffer = (char)command[4];
      *(short *)((int)command_data + 0x2a) -= 1;
    }
    if (((*command_data)[5] & 0x40) != 0) {
      uint *command_buffer = command_data[9];
      command_data[9] = (uint *)((int)command_buffer + 1);
      *(char *)command_buffer = (char)(*command_data)[4];
      *(short *)((int)command_data + 0x2a) -= 1;
    }
    command_data[0x10] = (uint *)((uint)command_data[0x10] | 4);
  }
  if (command_data[0x10] == (uint *)0x0) {
    if (((current_char == '(') || (current_char == '*')) || (current_char == ')')) {
      command_data[0xb] = command_data[0x5184];
      command_data[0xc] = (uint *)0x0;
      *(undefined *)((int)command_data + 0x3d) = 0x20;
      *(undefined *)((int)command_data + 0x3e) = 0;
      execute_command_08005084_and_update_values();
    }
    else if ((command_data[0xc] == (uint *)0x22) || (current_char == '"')) {
      command_data[0xc] = (uint *)0x0;
      *(undefined *)((int)command_data + 0x3d) = 0x20;
      *(undefined *)((int)command_data + 0x3e) = 0;
      do_nothing();
    }
  }
  else {
    execute_param();
  }
  return 0;
}
// FUN_0800291c 0x0800291c
void set_default_values_0800291c(undefined4 *params) {
  params[0] = PTR_PTR_copy_data_to_buffer_0800288c_1_08002940;
  params[1] = 0;
  params[2] = 1000;
  *(undefined *)(params + 0x1b) = PTR_DAT_08002944[0xe];
  *(undefined *)((int)params + 0x6d) = PTR_DAT_08002944[0xf];
  return;
}
// FUN_08002ac0 0x08002ac0
void update_value_at_address_08002ac0(uint32_t address, uint32_t value, uint32_t size, uint32_t flags) {
  check_and_update_value(address, 1, size, value, flags);
  return;
}
// FUN_08003346 0x08003346
void update_params_if_valid_08003346(int base_addr, int param_value, undefined4 new_param1, undefined4 new_param2)
{
  if (param_value == 0x79) {
    *(undefined4 *)(base_addr + 0x70) = new_param1;
    *(undefined4 *)(base_addr + 0x34) = new_param2;
  }
  return;
}
// FUN_080032bc 0x080032bc
void initialize_data_structure_080032bc(int* data_structure, int param_2, int param_3) {
  memset(data_structure, 0, 112);
  int leading_zeroes = __builtin_clz(param_2);
  data_structure[0] = (char)(leading_zeroes >> 5);
  return;
}
// FUN_08003106 0x08003106
void encode_and_send_data_08003106(undefined4 *dataPtr, undefined4 param_2, undefined4 dataLength, undefined4 param_4)
{
  undefined4 *funcPtr;
  funcPtr = (undefined4 *)*dataPtr;
  if (funcPtr != (undefined4 *)0x0) {
    (**(code **)*funcPtr)(funcPtr,0xf0);
    (***(code ***)(undefined4 *)*dataPtr)((undefined4 *)*dataPtr,0x6f);
    (***(code ***)(undefined4 *)*dataPtr)((undefined4 *)*dataPtr,param_2);
    encode_data_0800307a(dataPtr,dataLength,param_4,dataLength);
    (***(code ***)(undefined4 *)*dataPtr)((undefined4 *)*dataPtr,0xf7);
  }
  return;
}
// FUN_080077b0 0x080077b0

void FUNC_080077b0(int *param_1,int param_2,int param_3,int param_4,undefined param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  if (param_1 != (int *)0x0) {
    piVar9 = param_1 + 1;
    iVar2 = get_parameter_value_08007320((int)*(char *)(param_1 + 0x16),PTR_DAT_08007a74);
    iVar3 = get_parameter_value_08007320((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08007a78);
    if ((iVar2 == 0) || (iVar3 == 0)) {
      initialize_and_call_function_080098d8(PTR_s_ERROR__at_least_one_I2C_pin_has_n_08007a88);
    }
    else {
      iVar3 = compare_and_return_080073ae(iVar2,iVar3);
      *param_1 = iVar3;
      iVar2 = DAT_08007a7c;
      if (iVar3 == 0) {
        initialize_and_call_function_080098d8(PTR_s_ERROR__I2C_pins_mismatch_08007a8c);
      }
      else {
        if (iVar3 == DAT_08007a7c) {
          *(uint *)(DAT_08007a7c + 0x1bc1c) = *(uint *)(DAT_08007a7c + 0x1bc1c) | 0x200000;
          *(uint *)(iVar2 + 0x1bc10) = *(uint *)(iVar2 + 0x1bc10) | 0x200000;
          *(uint *)(iVar2 + 0x1bc10) = *(uint *)(iVar2 + 0x1bc10) & 0xffdfffff;
          *(undefined *)((int)param_1 + 0x5a) = 0x1f;
          *(undefined *)((int)param_1 + 0x5b) = 0x20;
          *(int **)PTR_DAT_08007a90 = piVar9;
        }
        iVar2 = DAT_08007a80;
        if (*param_1 == DAT_08007a80) {
          *(uint *)(DAT_08007a80 + 0x1b81c) = *(uint *)(DAT_08007a80 + 0x1b81c) | 0x400000;
          *(uint *)(iVar2 + 0x1b810) = *(uint *)(iVar2 + 0x1b810) | 0x400000;
          *(uint *)(iVar2 + 0x1b810) = *(uint *)(iVar2 + 0x1b810) & 0xffbfffff;
          *(undefined *)((int)param_1 + 0x5a) = 0x21;
          *(undefined *)((int)param_1 + 0x5b) = 0x22;
          *(int **)(PTR_DAT_08007a90 + 4) = piVar9;
        }
        uVar4 = set_flag_08006bb8((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        puVar1 = PTR_DAT_08007a78;
        local_38 = 1 << ((int)*(char *)((int)param_1 + 0x59) & 0xfU) & 0xffff;
        uVar5 = find_param_08007376((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08007a78);
        uVar6 = find_param_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
        local_34 = (uVar5 >> 3 & 1) << 4 | uVar6 & 7;
        local_2c = 3;
        iVar2 = find_param_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
        local_30 = (uint)(iVar2 << 0x1a) >> 0x1e;
        iVar3 = find_param_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
        iVar2 = DAT_08007a84;
        uVar7 = *(uint *)(DAT_08007a84 + 0x18) | 1;
        *(uint *)(DAT_08007a84 + 0x18) = uVar7;
        uVar6 = DAT_08007d4c;
        uVar5 = DAT_08007a94;
        uVar8 = *(uint *)(iVar2 + 0x18) & 1;
        switch((uint)(iVar3 << 0x11) >> 0x19) {
        case 1:
          uVar8 = *(uint *)(DAT_08007a94 + 4) | 0x7000001;
          *(uint *)(DAT_08007a94 + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 2:
          uVar8 = *(uint *)(DAT_08007a94 + 4) & 0xfffffffe | 0x7000000;
          *(uint *)(DAT_08007a94 + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 3:
          uVar8 = *(uint *)(DAT_08007a94 + 4) | 0x7000002;
          *(uint *)(DAT_08007a94 + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 4:
          uVar8 = *(uint *)(DAT_08007a94 + 4) & 0xfffffffd | 0x7000000;
          *(uint *)(DAT_08007a94 + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 5:
          uVar8 = *(uint *)(DAT_08007a94 + 4) | 0x7000004;
          *(uint *)(DAT_08007a94 + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 6:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffffb | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 7:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000008;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 8:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffff7 | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 9:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000030;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 10:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffffcf | 0x7000010;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xb:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffffcf | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xc:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x70000c0;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xd:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffff3f | 0x7000040;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xe:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffff3f | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xf:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000300;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x10:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffcff | 0x7000200;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x11:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffcff | 0x7000100;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x12:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffcff | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x13:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000c00;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x14:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffff3ff | 0x7000800;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x15:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffff3ff | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x16:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7001000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x17:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffefff | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x1b:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7008000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x1c:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffff7fff | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x21:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xf8ffffff;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x22:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xf8ffffff | 0x1000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x23:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xf8ffffff | 0x2000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x24:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xf8ffffff | 0x4000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar6;
        }
        FUNC_080040e8(uVar4,&local_38,uVar7,uVar8);
        uVar4 = set_flag_08006bb8((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        puVar1 = PTR_DAT_08007a74;
        local_38 = 1 << ((int)*(char *)(param_1 + 0x16) & 0xfU) & 0xffff;
        uVar5 = find_param_08007376((int)*(char *)(param_1 + 0x16),PTR_DAT_08007a74);
        uVar6 = find_param_08007376((int)*(char *)(param_1 + 0x16),puVar1);
        local_34 = (uVar5 >> 3 & 1) << 4 | uVar6 & 7;
        local_2c = 3;
        iVar2 = find_param_08007376((int)*(char *)(param_1 + 0x16),puVar1);
        local_30 = (uint)(iVar2 << 0x1a) >> 0x1e;
        iVar3 = find_param_08007376((int)*(char *)(param_1 + 0x16),puVar1);
        iVar2 = DAT_08007a84;
        uVar7 = *(uint *)(DAT_08007a84 + 0x18) | 1;
        *(uint *)(DAT_08007a84 + 0x18) = uVar7;
        uVar6 = DAT_08007e70;
        uVar5 = DAT_08007d4c;
        uVar8 = *(uint *)(iVar2 + 0x18) & 1;
        switch((uint)(iVar3 << 0x11) >> 0x19) {
        case 1:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000001;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 2:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffffe | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 3:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000002;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 4:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffffd | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 5:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000004;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 6:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffffb | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 7:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000008;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 8:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xfffffff7 | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 9:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x7000030;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 10:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffffcf | 0x7000010;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 0xb:
          uVar8 = *(uint *)(DAT_08007d4c + 4) & 0xffffffcf | 0x7000000;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 0xc:
          uVar8 = *(uint *)(DAT_08007d4c + 4) | 0x70000c0;
          *(uint *)(DAT_08007d4c + 4) = uVar8;
          uVar7 = uVar5;
          break;
        case 0xd:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xffffff3f | 0x7000040;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xe:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xffffff3f | 0x7000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0xf:
          uVar8 = *(uint *)(DAT_08007e70 + 4) | 0x7000300;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x10:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xfffffcff | 0x7000200;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x11:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xfffffcff | 0x7000100;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x12:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xfffffcff | 0x7000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x13:
          uVar8 = *(uint *)(DAT_08007e70 + 4) | 0x7000c00;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x14:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xfffff3ff | 0x7000800;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x15:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xfffff3ff | 0x7000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x16:
          uVar8 = *(uint *)(DAT_08007e70 + 4) | 0x7001000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x17:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xffffefff | 0x7000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x1b:
          uVar8 = *(uint *)(DAT_08007e70 + 4) | 0x7008000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x1c:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xffff7fff | 0x7000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x21:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xf8ffffff;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x22:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xf8ffffff | 0x1000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x23:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xf8ffffff | 0x2000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
          break;
        case 0x24:
          uVar8 = *(uint *)(DAT_08007e70 + 4) & 0xf8ffffff | 0x4000000;
          *(uint *)(DAT_08007e70 + 4) = uVar8;
          uVar7 = uVar6;
        }
        FUNC_080040e8(uVar4,&local_38,uVar7,uVar8);
        param_1[1] = *param_1;
        param_1[2] = param_2;
        param_1[3] = 0;
        param_1[4] = param_4;
        param_1[7] = 0xff;
        param_1[5] = param_3;
        param_1[6] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined *)((int)param_1 + 0x41) = 0;
        set_bits_08003f30((int)*(char *)((int)param_1 + 0x5a),0,1);
        set_bit_at_index_08003f94((int)*(char *)((int)param_1 + 0x5a));
        set_bits_08003f30((int)*(char *)((int)param_1 + 0x5b),0,1);
        set_bit_at_index_08003f94((int)*(char *)((int)param_1 + 0x5b));
        calculate_and_set_parameters_080045c0(piVar9);
        *(undefined *)((int)param_1 + 0x5d) = param_5;
      }
    }
    return;
  }
  return;
}


// FUN_08007708 0x08007708
void set_flags_based_on_value_08007708(void)
{
  // Set flags based on some value
  return;
}
// FUN_0800018c 0x0800018c
int send_software_interrupt_0800018c(int interrupt_number, int parameter1, int parameter2, int parameter3, int parameter4)
{
  int interrupt_result;
  if (*(int *)PTR_DAT_080001a4 != 0) {
    return 0;
  }
  interrupt_result = software_interrupt_call_08000188(interrupt_number, parameter1, parameter2, parameter3, parameter4);
  return interrupt_result;
}
// FUN_08003f94 0x08003f94
void set_bit_at_index_08003f94(uint index) {
  if (index >= 0) {
    int* data_ptr = (int*)(DAT_08003fac + (index >> 5) * 4);
    int bit_mask = 1 << (index & 0x1f);
    *data_ptr = bit_mask;
  }
  return;
}
// FUN_08008c44 0x08008c44
void process_assertion_08008c44(int assertion_data, undefined4 assertion_type, byte assertion_flags) {
  uint assertion_flag_3 = assertion_flags & 7;
  int assertion_flag_2 = 0;
  if (assertion_flag_3 == 4) {
    assertion_flag_2 = 7;
  }
  else if (assertion_flag_3 == 6) {
    assertion_flag_2 = 8;
  }
  else if (assertion_flag_3 == 2) {
    assertion_flag_2 = 6;
  }

  if ((assertion_flags & 0x30) == 0x30) {
    *(undefined4 *)(assertion_data + 0x128) = 0x600;
    assertion_flag_2++;
  }
  else if ((assertion_flags & 0x20) == 0) {
    *(undefined4 *)(assertion_data + 0x128) = 0;
  }
  else {
    *(undefined4 *)(assertion_data + 0x128) = 0x400;
    assertion_flag_2++;
  }

  if ((assertion_flags & 8) == 0) {
    *(undefined4 *)(assertion_data + 0x124) = 0;
  }
  else {
    *(undefined4 *)(assertion_data + 0x124) = 0x2000;
  }

  if (assertion_flag_2 == 8) {
    *(undefined4 *)(assertion_data + 0x120) = 0;
  }
  else if (assertion_flag_2 == 9) {
    *(undefined4 *)(assertion_data + 0x120) = 0x1000;
  }

  if (assertion_flag_2 != 0) {
    initialize_data_structure(assertion_data + 0xd4);
    add_combination_to_data_structure(assertion_data + 0xd4, uRam08008cf0);
    return;
  }

  code *UNRECOVERED_JUMPTABLE = (code *)0x8008cee;
  process_assertion_08008c44_data(uRam08008cfc,299,uRam08008cf8,uRam08008cf4);
  if (extraout_r1 < 0x3c) {
    uRam0000012d = PTR_DAT_08008d14[extraout_r1];
  }
  else {
    uRam0000012d = 0xff;
  }

  (*UNRECOVERED_JUMPTABLE)(0,extraout_r1,&stack0x00000148);
  return;
}
// FUN_08002a26 0x08002a26
void initialize_data_08002a26(int data_pointer, uint8_t input_value)
{
  int memory_size = 0x4000;
  int index_offset = data_pointer + 0x14;
  uint8_t is_special_case = 0;
  uint8_t *PTR_DAT_080029ec = PTR_DAT_080029ec;
  uint8_t *PTR_DAT_080029f0 = PTR_DAT_080029f0;
  int **(int *)PTR_DAT_080029f4 = *(int **)PTR_DAT_080029f4;
  uint8_t memory_value = 0;
  uint8_t *PTR_DAT_080029f8 = PTR_DAT_080029f8;
  uint8_t *PTR_DAT_080029fc = PTR_DAT_080029fc;
  uint8_t *PTR_DAT_08002a00 = PTR_DAT_08002a00;
  int **(int *)PTR_DAT_08002a04 = *(int **)PTR_DAT_08002a04;
  uint8_t *PTR_DAT_08002a08 = PTR_DAT_08002a08;
  uint8_t *PTR_DAT_08002a0c = PTR_DAT_08002a0c;
  uint8_t PTR_LAB_08002774_1_08002a14 = input_value & 0x7f;
  uint8_t index_offset_value = PTR_LAB_08002774_1_08002a14 << 1;
  *(char *)(data_pointer + 0x10) = index_offset_value;
  *(undefined *)(data_pointer + 0x11) = (input_value == 0x33) ? 1 : 0;
  if (*(char *)(data_pointer + 0x11) == 0) {
    is_special_case = 1;
  }
  *PTR_DAT_080029ec = 0;
  *PTR_DAT_080029f0 = 0;
  if (**(int *)PTR_DAT_080029f4 != 0) {
    clear_and_initialize_data_08002a26_08002968(**(int *)PTR_DAT_080029f4, memory_value, *PTR_DAT_080029f8);
  }
  *PTR_DAT_080029fc = 0;
  *PTR_DAT_08002a00 = 0;
  if (**(int *)PTR_DAT_08002a04 != 0) {
    clear_and_initialize_data_08002a26_08002968(**(int *)PTR_DAT_08002a04, memory_value, *PTR_DAT_08002a08);
  }
  *PTR_DAT_08002a0c = 0;
  clear_and_initialize_data_08002a26_08002968(index_offset, memory_value, memory_size, index_offset_value, *(undefined *)(data_pointer + 0x11));
  if (is_special_case == 0) {
    set_PTR_LAB_08002774_1_08002a14_if_not_null(index_offset, PTR_LAB_08002774_1_08002a14);
    update_param_2_if_param_1_not_null(index_offset, PTR_LAB_08002b00_1_08002a18);
  }
}

// FUN_0800430c 0x0800430c
int set_flag_based_on_conditions_0800430c(int *ptr_param_1)
{
    int flag;
    if (*(char *)((int)ptr_param_1 + 0x3e) == '@') {
        if (ptr_param_1[0x14] == 0) {
            flag = ptr_param_1[0x11] & 0xfe;
        }
        else {
            flag = ptr_param_1[0x11] & 0xffU | 1;
        }
    }
    else if (ptr_param_1[4] == 0x4000) {
        if (*(char *)((int)ptr_param_1 + 0x3d) == '!') {
            flag = ptr_param_1[0x11] & 0xfe;
        }
        else {
            flag = ptr_param_1[0x11] & 0xffU | 1;
        }
    }
    else if (ptr_param_1[0x14] == 0) {
        flag = (uint)(ptr_param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf0;
    }
    else if (ptr_param_1[0x14] == 1) {
        flag = (uint)(ptr_param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf1;
    }
    return flag;
}
// FUN_08006060 0x08006060
int check_and_update_registers_08006060(unsigned int *register_values)
{
    if (register_values != NULL) {
        if (*(char *)((int)register_values + 0x3d) == '\0') {
            *(unsigned int *)(register_values + 0xf) = 0;
            set_flags_based_on_value_08007708();
        }
        *(char *)((int)register_values + 0x3d) = 2;
        update_registers_08005fe8(*register_values, register_values + 1);
        *(char *)((int)register_values + 0x3d) = 1;
        return 0;
    }
    return 1;
}
// FUN_08003350 0x08003350
void set_values_at_offsets_08003350(int base_address, int offset, int value1, int value2)
{
  if (offset == 0xf9) {
    *(int *)(base_address + 0x74) = value1;
    *(int *)(base_address + 0x38) = value2;
    return;
  }
  if (offset != 0xff) {
    return;
  }
  *(int *)(base_address + 0x78) = value1;
  *(int *)(base_address + 0x48) = value2;
  return;
}
// FUN_08009698 0x08009698

uint FUNC_08009698(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint **ppuVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint local_24 [2];
  
  bVar1 = *(byte *)(param_2 + 6);
  puVar11 = (undefined *)((int)param_2 + 0x43);
  if (bVar1 != 0x6e) {
    if (bVar1 < 0x6f) {
      if (bVar1 != 99) {
        if (bVar1 < 100) {
          if (bVar1 == 0) goto LAB_08009852;
          if (bVar1 != 0x58) goto LAB_080096c8;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          puVar5 = PTR_s_0123456789ABCDEF_080098d4;
LAB_080097e2:
          uVar6 = *param_2;
          puVar3 = *param_5;
          *param_5 = puVar3 + 1;
          if (((uVar6 & 0x80) == 0) && ((int)(uVar6 << 0x19) < 0)) {
            uVar8 = (uint)*(ushort *)puVar3;
          }
          else {
            uVar8 = *puVar3;
          }
          if ((int)(uVar6 << 0x1f) < 0) {
            *param_2 = uVar6 | 0x20;
          }
          if (uVar8 == 0) {
            *param_2 = *param_2 & 0xffffffdf;
          }
          uVar6 = 0x10;
LAB_08009778:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_080096c8;
          uVar8 = *param_2;
          puVar3 = *param_5;
          if ((uVar8 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar8 & 0x40) == 0) goto LAB_080096e8;
            uVar8 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_080096e8:
            uVar8 = *puVar3;
          }
          if ((int)uVar8 < 0) {
            uVar8 = -uVar8;
            *(undefined *)((int)param_2 + 0x43) = 0x2d;
          }
          uVar6 = 10;
          puVar5 = PTR_s_0123456789ABCDEF_080098d4;
        }
        uVar9 = param_2[1];
        param_2[2] = uVar9;
        puVar10 = puVar11;
        if ((int)uVar9 < 0) {
          if (uVar8 != 0) goto LAB_08009816;
LAB_080098c4:
          *(undefined *)((int)param_2 + 0x42) = *puVar5;
          puVar10 = (undefined *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar8 == 0) {
            if (uVar9 != 0) goto LAB_080098c4;
          }
          else {
LAB_08009816:
            do {
              uVar9 = uVar8 / uVar6;
              puVar10 = puVar10 + -1;
              *puVar10 = puVar5[uVar8 - uVar6 * uVar9];
              uVar8 = uVar9;
            } while (uVar9 != 0);
          }
        }
        if (((uVar6 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4]))
        {
          puVar10[-1] = 0x30;
          puVar10 = puVar10 + -1;
        }
        param_2[4] = (int)puVar11 - (int)puVar10;
        puVar11 = puVar10;
        goto LAB_080097be;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08009728:
      puVar11 = (undefined *)((int)param_2 + 0x42);
      uVar8 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_0800974e:
            uVar8 = *param_2;
            puVar3 = *param_5;
            if ((uVar8 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar8 & 0x40) == 0) goto LAB_0800975c;
              uVar8 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_0800975c:
              uVar8 = *puVar3;
            }
            puVar5 = PTR_s_0123456789ABCDEF_080098d4;
            if (bVar1 == 0x6f) {
              uVar6 = 8;
            }
            else {
              uVar6 = 10;
            }
            goto LAB_08009778;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_0800970e:
            puVar5 = PTR_s_0123456789abcdef_080098d0;
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            goto LAB_080097e2;
          }
        }
        else {
          if (bVar1 == 0x75) goto LAB_0800974e;
          if (bVar1 == 0x78) goto LAB_0800970e;
        }
LAB_080096c8:
        *(byte *)((int)param_2 + 0x42) = bVar1;
        goto LAB_08009728;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      puVar11 = (undefined *)*puVar3;
      iVar2 = find_character_08009f2c(puVar11,0,param_2[1]);
      if (iVar2 != 0) {
        param_2[1] = iVar2 - (int)puVar11;
      }
      uVar8 = param_2[1];
    }
    param_2[4] = uVar8;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_080097be;
  }
  uVar8 = *param_2;
  ppuVar7 = (uint **)*param_5;
  uVar6 = param_2[5];
  if ((uVar8 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
    if ((uVar8 & 0x40) == 0) goto LAB_0800983e;
    *(short *)puVar3 = (short)uVar6;
  }
  else {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
LAB_0800983e:
    *puVar3 = uVar6;
  }
LAB_08009852:
  param_2[4] = 0;
LAB_080097be:
  iVar2 = get_length_of_data_to_write_080095a8(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,puVar11,param_2[4]), iVar2 == -1)) {
LAB_080097d2:
    uVar8 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_080097d2;
      }
    }
    uVar8 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar8 = local_24[0];
    }
  }
  return uVar8;
}


// FUN_08006186 0x08006186
int update_flags_08006186(int *data, int flags, int value)
{
  if (*(char *)(data + 0xf) != '\x01') {
    *(char *)(data + 0xf) = 1;
    *(char *)((int)data + 0x3d) = 2;
    switch(flags) {
    case 0:
      update_data_08005cec(*data);
      *(uint *)(*data + 0x18) |= 8;
      *(uint *)(*data + 0x18) &= 0xfffffffb;
      *(uint *)(*data + 0x18) |= *(uint *)(value + 0x10);
      break;
    case 4:
      update_data_080060c4(*data);
      *(uint *)(*data + 0x18) |= 0x800;
      *(uint *)(*data + 0x18) &= 0xfffffbff;
      *(uint *)(*data + 0x18) |= *(int *)(value + 0x10) << 8;
      break;
    case 8:
      clear_bit(*data);
      *(uint *)(*data + 0x1c) |= 8;
      *(uint *)(*data + 0x1c) &= 0xfffffffb;
      *(uint *)(*data + 0x1c) |= *(uint *)(value + 0x10);
      break;
    case 0xc:
      update_flags_08006186(*data);
      *(uint *)(*data + 0x1c) |= 0x800;
      *(uint *)(*data + 0x1c) &= 0xfffffbff;
      *(uint *)(*data + 0x1c) |= *(int *)(value + 0x10) << 8;
    }
    *(char *)((int)data + 0x3d) = 1;
    *(char *)(data + 0xf) = 0;
    return 0;
  }
  return 2;
}
// FUN_08007710 0x08007710
void set_flags_based_on_parameter_08007710(void)
{
  set_flags();
  return;
}
// FUN_08003474 0x08003474

void FUNC_08003474(int param_1,uint param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (param_2 != 0xf7) {
      process_input_08003376(param_1,param_2,*(undefined4 *)(param_1 + 0x18));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    *(undefined *)(param_1 + 0x14) = 0;
    process_input_080033cc();
    return;
  }
  if ((*(int *)(param_1 + 0x10) == 0) || (0x7f < (int)param_2)) {
    if ((int)param_2 < 0xf0) {
      *(byte *)(param_1 + 0xd) = (byte)param_2 & 0xf;
      param_2 = param_2 & 0xf0;
    }
    if (param_2 == 0xf0) {
      *(undefined *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    if (param_2 < 0xf1) {
      if (param_2 != 0xc0) {
        if (param_2 < 0xc1) {
          if (param_2 != 0x90) {
            return;
          }
        }
        else {
          if (param_2 == 0xd0) goto LAB_0800359c;
          if (param_2 != 0xe0) {
            return;
          }
        }
LAB_08003586:
        *(undefined4 *)(param_1 + 0x10) = 2;
        *(char *)(param_1 + 0xc) = (char)param_2;
        return;
      }
LAB_0800359c:
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(char *)(param_1 + 0xc) = (char)param_2;
      return;
    }
    if (param_2 != 0xf9) {
      if (0xf9 < param_2) {
        if (param_2 == 0xff) {
          initialize_data_structures_0800344a(param_1);
          return;
        }
        return;
      }
      if (1 < param_2 - 0xf4) {
        return;
      }
      goto LAB_08003586;
    }
    if (*(code **)(param_1 + 0x74) != (code *)0x0) {
      (**(code **)(param_1 + 0x74))(*(undefined4 *)(param_1 + 0x38));
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    process_input_08003376();
    if ((*(int *)(param_1 + 0x10) == 0) && (bVar1 = *(byte *)(param_1 + 0xc), bVar1 != 0)) {
      if (bVar1 == 0xd0) {
        if (*(code **)(param_1 + 0x58) != (code *)0x0) {
          (**(code **)(param_1 + 0x58))
                    (*(undefined4 *)(param_1 + 0x28),*(undefined *)(param_1 + 0xd),
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 < 0xd1) {
        if (bVar1 == 0x90) {
          if (*(code **)(param_1 + 0x50) != (code *)0x0) {
            (**(code **)(param_1 + 0x50))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined *)(param_1 + 0xd),
                       (uint)(*(byte **)(param_1 + 4))[1] + (uint)**(byte **)(param_1 + 4) * 0x80);
          }
        }
        else if ((bVar1 == 0xc0) && (*(code **)(param_1 + 0x54) != (code *)0x0)) {
          (**(code **)(param_1 + 0x54))
                    (*(undefined4 *)(param_1 + 0x24),*(undefined *)(param_1 + 0xd),
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 == 0xf4) {
        if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
          (**(code **)(param_1 + 0x5c))
                    (*(undefined4 *)(param_1 + 0x2c),(*(undefined **)(param_1 + 4))[1],
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 == 0xf5) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))
                    (*(undefined4 *)(param_1 + 0x30),(*(undefined **)(param_1 + 4))[1],
                     **(undefined **)(param_1 + 4));
        }
      }
      else if ((bVar1 == 0xe0) && (*(code **)(param_1 + 0x4c) != (code *)0x0)) {
        (**(code **)(param_1 + 0x4c))
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined *)(param_1 + 0xd),
                   (uint)(*(byte **)(param_1 + 4))[1] + (uint)**(byte **)(param_1 + 4) * 0x80);
      }
      *(undefined *)(param_1 + 0xc) = 0;
      return;
    }
  }
  return;
}


// FUN_08006b7c 0x08006b7c
int get_data_by_index_08006b7c(int index) {
  switch(index) {
    case 0:
      return DAT_08006ba4;
    case 1:
      return DAT_08006bb4;
    case 2:
      return DAT_08006ba8;
    case 3:
      return DAT_08006bac;
    case 4:
      return DAT_08006bb0;
    default:
      return 0;
  }
}
// FUN_08008e7c 0x08008e7c
undefined4 convert_base_08008e7c(int *param_array, uint num, uint base)
{
  char digit;
  undefined4 result;
  uint quotient;
  uint remainder;
  char reversed[9];
  reversed[1] = 0;
  if ((int)base < 2) {
    base = 10;
  }
  char *current_digit = reversed + 1;
  do {
    quotient = num / base;
    remainder = (num & 0xff) - (quotient * base & 0xff) & 0xff;
    current_digit = current_digit + -1;
    digit = (char)remainder;
    if (remainder < 10) {
      digit = digit + '0';
    }
    else {
      digit = digit + '7';
    }
    *current_digit = digit;
    num = quotient;
  } while (quotient != 0);
  if (current_digit == (char *)0x0) {
    result = 0;
  }
  else {
    uint length = find_string_end_08000178(current_digit);
    result = (**(code **)(*param_array + 4))(param_array,current_digit,length);
  }
  return result;
}
// FUN_08003aa0 0x08003aa0
int activate_device_if_not_activated_before_08003aa0(undefined4 *device)
{
  int activation_status;
  int *device_type;
  int *device_flags;
  int *global_device;

  if (*(char *)(device + 9) != '\x01') {
    *(char *)(device + 9) = 1;
    activation_status = activate_device_08003a20();
    if (activation_status == 0) {
      device_flags = device + 10;
      *device_flags = *device_flags & 0xfffffcfe | 0x100;
      global_device = (int *)*device;
      if ((global_device == DAT_08003b84) && ((DAT_08003b84[-0xff] & 0xf0000) != 0)) {
        *device_flags = *device_flags | 0x100000;
        device_type = (int *)DAT_08003b88;
        if ((*device_type & 0x400) != 0) {
          *device_flags = *device_flags & 0xffffcfff | 0x1000;
        }
      }
      else {
        *device_flags = *device_flags & 0xffefffff;
        if ((global_device[1] & 0x400) != 0) {
          *device_flags = *device_flags & 0xffffcfff | 0x1000;
        }
      }
      if ((*device_flags & 0x1000) == 0) {
        device[0xb] = 0;
      }
      else {
        device[0xb] = device[0xb] & 0xfffffff9;
      }
      *(char *)(device + 9) = 0;
      *global_device = 0xfffffffd;
      device = (int *)*device;
      if (((device[2] & 0xe0000) == 0xe0000) && ((device != DAT_08003b84 || ((DAT_08003b84[-0xff] & 0xf0000) == 0)))) {
        device[2] = device[2] | 0x500000;
      }
      else {
        device[2] = device[2] | 0x100000;
      }
    }
    else {
      *(char *)(device + 9) = 0;
    }
    return activation_status;
  }
  return 2;
}
// FUN_08003ce8 0x08003ce8
int deactivate_memory_region_08003ce8(int *memory_region)
{
  int status;

  if (memory_region == NULL) {
    status = 1;
  }
  else {
    memory_region[10] |= 2;
    status = check_memory_region_is_valid();
    if (status == 0) {
      *(int *)*memory_region = -32;
      *(uint *)(*memory_region + 4) &= DAT_08003ddc;
      *(uint *)(*memory_region + 8) &= DAT_08003de0;
      *(uint *)(*memory_region + 0xc) &= 0xff000000;
      *(uint *)(*memory_region + 0x10) &= 0xc0000000;
      *(uint *)(*memory_region + 0x14) &= 0xfffff000;
      *(uint *)(*memory_region + 0x18) &= 0xfffff000;
      *(uint *)(*memory_region + 0x1c) &= 0xfffff000;
      *(uint *)(*memory_region + 0x20) &= 0xfffff000;
      *(uint *)(*memory_region + 0x24) &= 0xfffff000;
      *(uint *)(*memory_region + 0x28) &= 0xfffff000;
      *(uint *)(*memory_region + 0x2c) &= 0xff000000;
      *(uint *)(*memory_region + 0x2c) &= 0xff000000;
      *(uint *)(*memory_region + 0x30) &= 0xc0000000;
      *(uint *)(*memory_region + 0x34) &= 0xc0000000;
      *(uint *)(*memory_region + 0x38) &= 0xffc00000;
      *(uint *)(*memory_region + 0x38) &= 0xffc00000;
      update_memory_region_permissions(memory_region);
      memory_region[0xb] = 0;
      memory_region[10] = 0;
    }
    *(char *)(memory_region + 9) = 0;
  }
  return status;
}
// FUN_08005fe8 0x08005fe8
void update_registers_08005fe8(uint *reg_values, uint *new_values)
{
  uint current_value = *reg_values;
  bool is_special_reg = (reg_values == DAT_0800605c || reg_values == PTR_SPECIAL_REG_2 || reg_values == DAT_0800605c + -0x4a00 || reg_values == DAT_0800605c + -0x4900);
  if (is_special_reg) {
    current_value = current_value & 0xffffff8f | new_values[1];
  }
  if (is_special_reg || reg_values == PTR_GENERAL_REG_1 || reg_values == PTR_GENERAL_REG_2 || reg_values == PTR_GENERAL_REG_3 || reg_values == PTR_GENERAL_REG_4) {
    current_value = current_value & 0xfffffcff | new_values[3];
  }
  *reg_values = current_value & 0xffffff7f | new_values[5];
  reg_values[11] = new_values[2];
  reg_values[10] = *new_values;
  if (reg_values == DAT_0800605c) {
    reg_values[12] = new_values[4];
  }
  reg_values[5] = 1;
  return;
}
// FUN_08008804 0x08008804
int calculate_offset_08008804(int offset_value)
{
  int current_offset;
  undefined *stack_pointer;
  
  if (*(int *)PTR_DAT_08008834 == 0) {
    *(undefined **)PTR_DAT_08008834 = PTR_DAT_08008838;
  }
  current_offset = *(int *)PTR_DAT_08008834;
  stack_pointer = (undefined *)(offset_value + current_offset);
  if (stack_pointer <= &stack0x00000000) {
    *(undefined **)PTR_DAT_08008834 = stack_pointer;
    return current_offset;
  }
  *(undefined4 *)PTR_DAT_0800883c = 0xc;
  return -1;
}
// FUN_0800738a 0x0800738a
DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ compare_values_0800738a(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_,DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_hDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_-DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_wDAT_PDAT_TDAT_RDAT__DAT_hDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_!DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_-DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_kDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_bDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_!DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_-DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
// FUN_08004e3c 0x08004e3c
uint32_t process_data_08004e3c(uint32_t **data)
{
  uint32_t *ptr1;
  ptr1 = data[11];
  if (*(uint16_t *)((int)data + 42) == 3) {
    if (((ptr1 == (uint32_t *)0x4) || (ptr1 == (uint32_t *)0x8)) || (ptr1 == (uint32_t *)0xffff0000)) {
      **data = **data & 0xfffffbff;
    }
    uint32_t *ptr2 = data[9];
    data[9] = (uint32_t *)((int)ptr2 + 1);
    *(char *)ptr2 = (char)(*data)[4];
    *(uint16_t *)((int)data + 42) = *(uint16_t *)((int)data + 42) - 1;
  }
  else if (*(uint16_t *)((int)data + 42) == 2) {
    if (((ptr1 == (uint32_t *)0x4) || (ptr1 == (uint32_t *)0x8)) || (ptr1 == (uint32_t *)0xffff0000)) {
      (*data)[1] = (*data)[1] & 0xfffffcff;
      **data = **data | 0x200;
    }
    else {
      if (ptr1 == (uint32_t *)0x2) {
        **data = **data | 0x400;
      }
      else {
        **data = **data & 0xfffffbff;
      }
      (*data)[1] = (*data)[1] & 0xfffffcff;
    }
    uint32_t *ptr2 = data[9];
    data[9] = (uint32_t *)((int)ptr2 + 1);
    *(char *)ptr2 = (char)(*data)[4];
    *(uint16_t *)((int)data + 42) = *(uint16_t *)((int)data + 42) - 1;
    ptr2 = data[9];
    data[9] = (uint32_t *)((int)ptr2 + 1);
    *(char *)ptr2 = (char)(*data)[4];
    *(undefined *)((int)data + 61) = 0x20;
    data[12] = (uint32_t *)0x0;
    if (*(char *)((int)data + 62) == '@') {
      *(undefined *)((int)data + 62) = 0;
      do_nothing_08004d6a();
    }
    else {
      *(undefined *)((int)data + 62) = 0;
      do_nothing_08004a20();
    }
  }
  else {
    uint32_t *ptr2 = data[9];
    data[9] = (uint32_t *)((int)ptr2 + 1);
    *(char *)ptr2 = (char)(*data)[4];
    *(uint16_t *)((int)data + 42) = *(uint16_t *)((int)data + 42) - 1;
  }
  return 0;
}
// FUN_080091a0 0x080091a0
void add_element_to_list_at_head_080091a0(int *element)
{
  int **PTR_PTR_DAT_080091ac = (int **)PTR_PTR_DAT_080091ac;
  add_to_linked_list_080091d8(*PTR_PTR_DAT_080091ac, element);
  return;
}
// FUN_08002a1c 0x08002a1c
void initialize_data_08002a1c(int data_pointer, uint8_t input_value)
{
  int memory_size = 0x4000;
  int index_offset = data_pointer + 0x14;
  uint8_t is_special_case = 0;
  uint8_t *PTR_DAT_080029ec = PTR_DAT_080029ec;
  uint8_t *PTR_DAT_080029f0 = PTR_DAT_080029f0;
  int **(int *)PTR_DAT_080029f4 = *(int **)PTR_DAT_080029f4;
  uint8_t memory_value = 0;
  uint8_t *PTR_DAT_080029f8 = PTR_DAT_080029f8;
  uint8_t *PTR_DAT_080029fc = PTR_DAT_080029fc;
  uint8_t *PTR_DAT_08002a00 = PTR_DAT_08002a00;
  int **(int *)PTR_DAT_08002a04 = *(int **)PTR_DAT_08002a04;
  uint8_t *PTR_DAT_08002a08 = PTR_DAT_08002a08;
  uint8_t *PTR_DAT_08002a0c = PTR_DAT_08002a0c;
  uint8_t param_2 = input_value & 0x7f;
  uint8_t index_offset_value = param_2 << 1;
  *(char *)(data_pointer + 0x10) = index_offset_value;
  *(undefined *)(data_pointer + 0x11) = (input_value == 0x33) ? 1 : 0;
  if (*(char *)(data_pointer + 0x11) == 0) {
    is_special_case = 1;
  }
  *PTR_DAT_080029ec = 0;
  *PTR_DAT_080029f0 = 0;
  if (**(int *)PTR_DAT_080029f4 != 0) {
    fill_memory_with_value(**(int *)PTR_DAT_080029f4, memory_value, *PTR_DAT_080029f8);
  }
  *PTR_DAT_080029fc = 0;
  *PTR_DAT_08002a00 = 0;
  if (**(int *)PTR_DAT_08002a04 != 0) {
    fill_memory_with_value(**(int *)PTR_DAT_08002a04, memory_value, *PTR_DAT_08002a08);
  }
  *PTR_DAT_08002a0c = 0;
  fill_memory_with_value(index_offset, memory_value, memory_size, index_offset_value, *(undefined *)(data_pointer + 0x11));
  if (is_special_case == 0) {
    set_PTR_LAB_08002774_1_08002a14_if_not_null(index_offset, PTR_LAB_08002774_1_08002a14);
    update_param_2_if_param_1_not_null(index_offset, PTR_LAB_08002b00_1_08002a18);
  }
}

// FUN_08007718 0x08007718
int subtract_four_08007718(int num)
{
  return num - 4;
}
// FUN_08002948 0x08002948
void set_default_values_if_param_is_one_and_param2_is_0xffff_08002948(int param1, int param2) {
  if (param1 != 1) {
    return;
  }
  if (param2 == 0xffff) {
    set_default_values_0800291c(PTR_DAT_08002964);
  }
  return;
}
// FUN_08009e64 0x08009e64
int check_permission_and_copy_data_08009e64(uint16_t *file_permissions, int file_descriptor, uint32_t *permission_status, uint32_t *file_type)
{
    int set_permission_result;
    uint32_t local_flags;
    if (*(file_permissions + 7) < 0 || (set_permission_result = set_permission_and_copy_data(file_permissions, (int)*(file_permissions + 7), &local_flags)) < 0) {
        *file_type = 0;
        if ((int)((uint)*(file_permissions + 6) << 0x18) < 0) {
            *permission_status = 0x40;
            return 0;
        }
    }
    else {
        *file_type = (local_flags & 0xf000) == 0x2000;
    }
    *permission_status = 0x400;
    return 0;
}
// FUN_08002acc 0x08002acc
void allocate_and_update_data_08002acc(uint minimum_size, uint default_size, undefined4 input_value_1, uint input_value_2)
{
  undefined *data_pointer = PTR_DAT_08002afc;
  uint current_size = (uint)(byte)*PTR_DAT_08002af8;
  if (current_size < minimum_size) {
    if (minimum_size < 0x20) {
      minimum_size = 0x20;
    }
    int allocated_size = allocate_and_copy_data_08009908(*(undefined4 *)data_pointer, minimum_size, input_value_1, current_size, input_value_2);
    *(int *)data_pointer = allocated_size;
    if (allocated_size == 0) {
      *PTR_DAT_08002af8 = 0;
    }
    else {
      *PTR_DAT_08002af8 = (undefined)minimum_size;
    }
  }
  return;
}
// FUN_08002a30 0x08002a30
void initialize_data_08002a30(int data_value, int data_flag) {
  *PTR_DAT_08002a48 = 1;
  *PTR_DAT_08002a4c = (char)(data_value << 1);
  *PTR_DAT_08002a50 = 0;
  *PTR_DAT_08002a54 = 0;
  return;
}
// FUN_0800932c 0x0800932c
uint process_byte_0800932c(int param_1, byte byte_to_process, byte **byte_array_ptr){
  int block_initialized = 0;
  byte *byte_array = *byte_array_ptr;
  byte *last_byte_ptr = (*byte_array_ptr)[2] - 1;
  (*byte_array_ptr)[2] = last_byte_ptr;
  if ((last_byte_ptr >= -1) || ((byte_array_ptr[6] <= last_byte_ptr) && (byte_to_process != 0xa))){
    *byte_array = byte_to_process;
    *byte_array_ptr = byte_array + 1;
    return (uint)byte_to_process;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    initialize_blocks_08009d50();
    block_initialized = 1;
  }
  if (byte_array_ptr == (byte **)PTR_DAT_08009a74) {
    byte_array_ptr = *(byte ***)(param_1 + 4);
  }
  else if (byte_array_ptr == (byte **)PTR_DAT_08009a78) {
    byte_array_ptr = *(byte ***)(param_1 + 8);
  }
  else if (byte_array_ptr == (byte **)PTR_DAT_08009a7c) {
    byte_array_ptr = *(byte ***)(param_1 + 0xc);
  }
  byte_array_ptr[2] = byte_array_ptr[6];
  byte *next_byte_ptr = (byte *)(uint)*(ushort *)(byte_array_ptr + 3);
  int shift = 0x1c;
  int next_byte_ptr_sign = (int)next_byte_ptr << shift;
  if (((next_byte_ptr_sign < 0) && ((next_byte_ptr = byte_array_ptr[4]) != (byte *)0x0)) || (process_data_08009a80(param_1, byte_array_ptr, next_byte_ptr_sign, next_byte_ptr, byte_array) == 0)){
    return 0xffffffff;
  }
  int byte_diff = (int)*byte_array_ptr - (int)byte_array_ptr[4];
  if ((byte_diff < (int)byte_array_ptr[5]) || (process_data_08009c7c(param_1,byte_array_ptr) == 0)){
    *byte_array = byte_to_process;
    *byte_array_ptr = byte_array + 1;
    if ((byte_array_ptr[5] - (byte *)(byte_diff + 1)) != 0){
      if (next_byte_ptr_sign >= 0) {
        return (uint)byte_to_process;
      }
      if (byte_to_process != 10) {
        return (uint)byte_to_process;
      }
    }
    if (process_data_08009c7c(param_1, byte_array_ptr) == 0){
      return (uint)byte_to_process;
    }
  }
  return 0xffffffff;
}
// FUN_0800322c 0x0800322c
void execute_commands_on_object_0800322c(undefined4 *object_ptr, undefined4 command1, undefined4 command2)
{
  undefined4 *command_ptr;
  command_ptr = (undefined4 *)*object_ptr;
  if (command_ptr != (undefined4 *)0x0) {
    (**(code **)*command_ptr)(command_ptr, 0xf9);
    (***(code ***)(undefined4 *)*object_ptr)((undefined4 *)*object_ptr, command1);
    (***(code ***)(undefined4 *)*object_ptr)((undefined4 *)*object_ptr, command2);
    return;
  }
  return;
}
// FUN_080099a4 0x080099a4
char* find_substring_080099a4(char* str, char* substr) {
    char* str_ptr = str;
    char* substr_ptr = substr;
    
    if (*str_ptr == '\0') {
        if (*substr_ptr != '\0') {
            str_ptr = NULL;
        }
        return str_ptr;
    }
    
    while (true) {
        char* str_start = str_ptr;
        if (*str_start == '\0') {
            return NULL;
        }
        
        char* substr_start = substr_ptr - 1;
        char* str_temp = str_start - 1;
        
        while (*++substr_start == *++str_temp) {
            if (*substr_start == '\0') {
                return str_start;
            }
        }
        
        str_ptr++;
    }
}
// FUN_08005a1c 0x08005a1c
get_value_from_pointer_08005a1c() {
  int *PTR_DAT_08005a24 = (int *)PTR_DAT_08005a24;
  return *PTR_DAT_08005a24;
}
// FUN_08001cd0 0x08001cd0

void FUNC_08001cd0(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  puVar5 = PTR_DAT_080022e8;
  puVar4 = PTR_DAT_08002044;
  switch(param_1) {
  case 0x69:
    execute_function_pointer_08002f1e(PTR_DAT_080022e8,0xf0);
    execute_function_pointer_08002f1e(puVar5,0x6a);
    for (uVar12 = 0; uVar12 < 0x3c; uVar12 = uVar12 + 1 & 0xff) {
      uVar13 = uVar12 - 0x2e & 0xff;
      if (uVar13 < 0xe) {
        if (uVar12 < 0x3c) {
          iVar9 = (int)(char)PTR_DAT_080022e4[uVar12];
        }
        else {
          iVar9 = -1;
        }
        iVar9 = find_char_index_080036ac(iVar9);
        if (iVar9 == 0) {
          uVar13 = 0x7f;
        }
        else {
          if (uVar12 < 0x3c) {
            iVar9 = (int)(char)PTR_DAT_080022e4[uVar12];
          }
          else {
            iVar9 = -1;
          }
          iVar9 = find_char_index_080036ac(iVar9);
          if (iVar9 == 1) {
            uVar13 = 0x7f;
          }
        }
      }
      else {
        uVar13 = 0x7f;
      }
      execute_function_pointer_08002f1e(PTR_DAT_080022e8,uVar13);
    }
    execute_function_pointer_08002f1e(PTR_DAT_080022e8,0xf7);
    break;
  case 0x6b:
    execute_function_pointer_08002f1e(PTR_DAT_08002044,0xf0);
    execute_function_pointer_08002f1e(puVar4,0x6c);
    for (uVar12 = 0; uVar12 < 0x3c; uVar12 = uVar12 + 1 & 0xff) {
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          bVar15 = false;
        }
        else {
          iVar9 = find_char_index_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = find_char_index_080036ac((int)(char)PTR_DAT_08002060[uVar12]);
            if (iVar9 == 1) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
          }
        }
      }
      else {
        bVar15 = false;
      }
      puVar4 = PTR_DAT_08002044;
      if (bVar15) {
        execute_function_pointer_08002f1e(PTR_DAT_08002044,0);
        execute_function_pointer_08002f1e(puVar4,1);
        execute_function_pointer_08002f1e(puVar4,0xb);
        execute_function_pointer_08002f1e(puVar4,1);
        execute_function_pointer_08002f1e(puVar4,1);
        execute_function_pointer_08002f1e(puVar4,1);
      }
      if ((uVar12 - 0x2e & 0xff) < 0xe) {
        if (uVar12 < 0x3c) {
          iVar9 = (int)(char)PTR_DAT_08002060[uVar12];
        }
        else {
          iVar9 = -1;
        }
        iVar9 = find_char_index_080036ac(iVar9);
        if (iVar9 == 0) {
          bVar15 = false;
        }
        else {
          if (uVar12 < 0x3c) {
            iVar9 = (int)(char)PTR_DAT_08002060[uVar12];
          }
          else {
            iVar9 = -1;
          }
          iVar9 = find_char_index_080036ac(iVar9);
          if (iVar9 == 1) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
        }
      }
      else {
        bVar15 = false;
      }
      puVar4 = PTR_DAT_080022e8;
      if (bVar15) {
        execute_function_pointer_08002f1e(PTR_DAT_080022e8,2);
        execute_function_pointer_08002f1e(puVar4,10);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          iVar9 = 0;
        }
        else {
          iVar9 = find_char_index_080036ac();
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = find_char_index_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
            if (iVar9 == 1) {
              iVar9 = 0;
            }
            else {
              iVar9 = compare_values_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022ec);
            }
          }
        }
      }
      else {
        iVar9 = 0;
      }
      puVar4 = PTR_DAT_080022e8;
      if (iVar9 != 0) {
        execute_function_pointer_08002f1e(PTR_DAT_080022e8,3);
        execute_function_pointer_08002f1e(puVar4,8);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          bVar15 = false;
        }
        else {
          iVar9 = find_char_index_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = find_char_index_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
            if (iVar9 == 1) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
          }
        }
      }
      else {
        bVar15 = false;
      }
      puVar4 = PTR_DAT_080022e8;
      if (bVar15) {
        execute_function_pointer_08002f1e(PTR_DAT_080022e8,4);
        execute_function_pointer_08002f1e(puVar4,0xe);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          iVar9 = 0;
        }
        else {
          iVar9 = find_char_index_080036ac();
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = find_char_index_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
            if (iVar9 == 1) {
              iVar9 = 0;
            }
            else {
              iVar9 = compare_values_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022f0);
              if (iVar9 == 0) {
                iVar9 = compare_values_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022f4);
              }
            }
          }
        }
      }
      else {
        iVar9 = 0;
      }
      puVar4 = PTR_DAT_080022e8;
      if (iVar9 != 0) {
        execute_function_pointer_08002f1e(PTR_DAT_080022e8,6);
        execute_function_pointer_08002f1e(puVar4,1);
      }
      execute_function_pointer_08002f1e(PTR_DAT_080022e8,0x7f);
    }
    execute_function_pointer_08002f1e(PTR_DAT_080022e8,0xf7);
    return;
  case 0x6d:
    if (param_2 != 0) {
      bVar1 = *param_3;
      execute_function_pointer_08002f1e(PTR_DAT_080022e8,0xf0);
      execute_function_pointer_08002f1e(puVar5,0x6e);
      execute_function_pointer_08002f1e(puVar5,bVar1);
      if (bVar1 < 0x3c) {
        uVar6 = get_value_at_offset_08002fa0(puVar5,bVar1);
        execute_function_pointer_08002f1e(puVar5,uVar6);
        uVar12 = get_value_at_offset_08002fba(puVar5,bVar1);
        execute_function_pointer_08002f1e(puVar5,uVar12 & 0x7f);
        uVar12 = get_value_at_offset_08002fba(puVar5,bVar1);
        if ((uVar12 & 0xff80) != 0) {
          iVar9 = get_value_at_offset_08002fba(puVar5,bVar1);
          execute_function_pointer_08002f1e(puVar5,(uint)(iVar9 << 0x12) >> 0x19);
        }
        uVar12 = get_value_at_offset_08002fba(PTR_DAT_080022e8,bVar1);
        puVar4 = PTR_DAT_080022e8;
        if ((uVar12 & 0xc000) != 0) {
          iVar9 = get_value_at_offset_08002fba(PTR_DAT_080022e8,bVar1);
          execute_function_pointer_08002f1e(puVar4,(uint)(iVar9 << 0xb) >> 0x19);
        }
      }
      execute_function_pointer_08002f1e(PTR_DAT_080022e8,0xf7);
      return;
    }
    break;
  case 0x6f:
    if (1 < param_2) {
      uVar12 = (uint)param_3[1];
      if (2 < param_2) {
        uVar12 = uVar12 | (uint)param_3[2] << 7;
      }
      if (3 < param_2) {
        uVar12 = uVar12 | (uint)param_3[3] << 0xe;
      }
      process_value_08000214(*param_3,uVar12);
      return;
    }
    break;
  case 0x70:
    if (4 < param_2) {
      uVar12 = (uint)*param_3;
      bVar1 = param_3[1];
      bVar7 = param_3[2];
      bVar2 = param_3[3];
      bVar3 = param_3[4];
      if (uVar12 < 0x3c) {
        if (PTR_DAT_08002060[uVar12] == -1) {
          bVar15 = false;
        }
        else {
          iVar9 = find_char_index_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = find_char_index_080036ac((int)(char)PTR_DAT_08002060[uVar12]);
            if (iVar9 == 1) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
          }
        }
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if ((byte)PTR_DAT_08002064[uVar12] < 0xc) {
          iVar9 = calculate_index_from_input_080026f8(PTR_DAT_08002068 + (uint)(byte)PTR_DAT_08002064[uVar12] * 3);
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          process_input_and_update_state_08000588(uVar12);
        }
        process_servo_data_08000500(uVar12,(uint)bVar1 + (uint)bVar7 * 0x80,(uint)bVar2 + (uint)bVar3 * 0x80);
        FUNC_080005f8(uVar12,4);
        return;
      }
    }
    break;
  case 0x76:
    bVar1 = param_3[1];
    bVar7 = bVar1 & 0x18;
    if ((bVar1 & 0x20) != 0) {
      process_data_and_return_result_08002f14(PTR_DAT_08002044,PTR_s_10_bit_addressing_not_supported_08002040,bVar7,bVar1,
                   param_4);
      return;
    }
    bVar2 = *param_3;
    bVar15 = (bVar1 & 0x40) == 0;
    if (bVar7 < 0x19) {
      switch(bVar7) {
      case 0:
        initialize_data_08002a30(PTR_DAT_08002048,bVar2);
        for (uVar12 = 2; (int)uVar12 < param_2; uVar12 = uVar12 + 2 & 0xff) {
          copy_input_data_to_buffer_08001bf8(param_3[uVar12 + 1] * -0x80 + param_3[uVar12]);
        }
        update_value_at_address_08002ac0(PTR_DAT_08002048);
        return;
      case 8:
        if (param_2 == 6) {
          iVar9 = (uint)param_3[2] + (uint)param_3[3] * 0x80;
          cVar8 = param_3[4] + param_3[5] * -0x80;
        }
        else {
          cVar8 = param_3[2] + param_3[3] * -0x80;
          iVar9 = -1;
        }
        process_input_data_and_return_result_08001c18(bVar2,iVar9,cVar8);
        return;
      case 0x10:
        cVar8 = *PTR_DAT_0800204c;
        if (cVar8 + 1 < 8) {
          if (param_2 == 6) {
            iVar9 = (uint)param_3[2] + (uint)param_3[3] * 0x80;
            cVar11 = param_3[4] + param_3[5] * -0x80;
          }
          else {
            cVar11 = param_3[2] + param_3[3] * -0x80;
            iVar9 = -1;
          }
          *PTR_DAT_0800204c = cVar8 + '\x01';
          puVar4 = PTR_DAT_08002050;
          iVar10 = (char)(cVar8 + '\x01') * 0xc;
          PTR_DAT_08002050[iVar10] = bVar2;
          *(int *)(puVar4 + iVar10 + 4) = iVar9;
          puVar4[iVar10 + 8] = cVar11;
          puVar4[iVar10 + 9] = bVar15;
          return;
        }
        process_data_and_return_result_08002f14(PTR_DAT_08002044,PTR_s_too_many_queries_08002054,(int)cVar8,bVar15,param_4);
        return;
      case 0x18:
        cVar8 = *PTR_DAT_0800204c;
        if (cVar8 < 1) {
          *PTR_DAT_0800204c = 0xff;
          return;
        }
      }
      for (uVar12 = 0; iVar9 = cVar8 + 1, (int)uVar12 < iVar9; uVar12 = uVar12 + 1 & 0xff) {
        if (bVar2 == PTR_DAT_08002050[uVar12 * 0xc]) goto LAB_08001e66;
      }
      uVar12 = 0;
LAB_08001e66:
      for (; puVar4 = PTR_DAT_08002050, (int)uVar12 < iVar9; uVar12 = uVar12 + 1 & 0xff) {
        if (uVar12 < 8) {
          iVar10 = (uVar12 + 1) * 0xc;
          iVar14 = uVar12 * 0xc;
          PTR_DAT_08002050[iVar14] = PTR_DAT_08002050[iVar10];
          *(undefined4 *)(puVar4 + iVar14 + 4) = *(undefined4 *)(puVar4 + iVar10 + 4);
          puVar4[iVar14 + 8] = puVar4[iVar10 + 8];
          puVar4[iVar14 + 9] = puVar4[iVar10 + 9];
        }
      }
      *PTR_DAT_0800204c = cVar8 + -1;
      return;
    }
    break;
  case 0x78:
    iVar9 = (uint)*param_3 + (uint)param_3[1] * 0x80;
    if ((1 < param_2) && (iVar9 != 0)) {
      *(int *)PTR_DAT_08002058 = iVar9;
    }
    if (*PTR_DAT_0800205c == '\0') {
      check_for_skipped_chars_08000a64();
      return;
    }
    break;
  case 0x7a:
    if ((1 < param_2) &&
       (iVar9 = (uint)*param_3 + (uint)param_3[1] * 0x80, *(int *)PTR_DAT_0800206c = iVar9,
       iVar9 == 0)) {
      *(undefined4 *)PTR_DAT_0800206c = 1;
      return;
    }
  }
  return;
}


// FUN_08003760 0x08003760
get_pointer_value_08003760() {
    return *(undefined4 *)PTR_DAT_08003768;
}
// FUN_08007320 0x08007320
int get_parameter_value_08007320(int parameter_id)
{
  int parameter_value = 0;
  if (parameter_id != -1) {
    parameter_value = find_parameter_value_08007306();
  }
  return parameter_value;
}
// FUN_08000be8 0x08000be8
void execute_function_08000be8(int function_id, uint16_t bitmask, int flag, undefined4 param_4)
{
  uint16_t* function_ptr = (uint16_t*)((byte)function_id & bitmask);
  uint16_t* flag_ptr = function_id != 0 || function_ptr != (uint16_t*)(uint)(byte)PTR_DAT_08000c10[function_id] ? (uint16_t*)(uint)(byte)PTR_DAT_08000c10[function_id] : NULL;
  if (flag != 0 || function_ptr != flag_ptr) {
    execute_function_08000be8_with_params(PTR_DAT_08000c14, function_id, function_ptr, flag_ptr, param_4);
    PTR_DAT_08000c10[function_id] = (char)function_ptr;
  }
  return;
}
// FUN_08003fd8 0x08003fd8
int validate_input_08003fd8(unsigned int input) {
  unsigned int *DAT_08003ffc = DAT_08003ffc;
  if (input - 1U < 0x1000000) {
    DAT_08003ffc[1] = input - 1U;
    *(unsigned char *)(DAT_08004000 + 0x23) = 0xf0;
    DAT_08003ffc[2] = 0;
    *DAT_08003ffc = 7;
    return 0;
  }
  return 1;
}
// FUN_0800307a 0x0800307a
void encode_data_0800307a(uint32_t *encoder, uint data_length, uint8_t *data, uint max_length) {
  uint8_t current_byte = (uint8_t)*data;
  if (max_length == 0) {
    max_length = 0xffffffff;
  }
  uint bit_position = 0;
  uint encoded_length = 0;
  uint current_value = 0;
  while ((encoded_length < data_length) && (bit_position < max_length)) {
    (***(code ***)(uint32_t *)*encoder)((uint32_t *)*encoder,((uint)data[encoded_length] << (bit_position & 0xff) | current_byte) & 0x7f);
    current_byte = (uint8_t)(uint)data[encoded_length] >> (7 - bit_position & 0xff) & 0xff;
    bit_position++;
    while ((encoded_length = encoded_length + 1, 6 < bit_position && (encoded_length < max_length))) {
      (***(code ***)(uint32_t *)*encoder)((uint32_t *)*encoder,current_byte & 0x7f);
      current_byte = current_byte >> 7;
      bit_position = bit_position - 7;
    }
  }
  if ((bit_position != 0) && (encoded_length < max_length)) {
    (***(code ***)(uint32_t *)*encoder)((uint32_t *)*encoder,(1 << (bit_position & 0xff)) - 1U & current_byte);
  }
  return;
}
// FUN_08004b80 0x08004b80
void doNothing_08004b80(void)
{
  return;
}
// FUN_0800319e 0x0800319e
void execute_function_if_not_null_0800319e(uint32_t *function_ptr, uint32_t param_2, uint16_t param_3) {
  uint32_t *function_address;
  uint16_t local_param_3;
  function_address = (uint32_t *)*function_ptr;
  if (function_address != NULL) {
    local_param_3 = param_3;
    (**(code **)function_address)(function_address, param_2 & 0xf | 0x90);
    encode_data_0800307a(function_ptr, 2, &local_param_3);
  }
  return;
}
// FUN_08008d00 0x08008d00
void set_value_at_address_based_on_index_08008d00(int address, uint index) {
  undefined value;
  code *jump_table;
  if (index < 0x3c) {
    value = PTR_DAT_08008d14[index];
  }
  else {
    value = 0xff;
  }
  *(undefined *)(address + 0x12d) = value;
  (*jump_table)();
  return;
}
// FUN_08009190 0x08009190
void allocate_memory_08009190(uint32_t block_size) {
  uint32_t** memory_block = *(uint32_t***)PTR_PTR_DAT_0800919c;
  allocate_memory_08009190_block_08009270(memory_block, block_size);
  return;
}
// FUN_08004b82 0x08004b82
uint32_t process_input_08004b82(uint32_t **input)
{
  char current_char = *(char *)((int)input + 0x3d);
  uint32_t *ptr_to_11th_element = input[0xb];
  if ((*(short *)(input + 10) == 0) && (current_char == '!')) {
    if ((ptr_to_11th_element == (uint32_t *)0x4) || ((ptr_to_11th_element == (uint32_t *)0x8 || (ptr_to_11th_element == (uint32_t *)0xffff0000)))) {
      (*input)[1] = (*input)[1] & 0xfffff8ff;
      **input = **input | 0x200;
      input[0xc] = (uint32_t *)0x0;
      *(undefined *)((int)input + 0x3d) = 0x20;
      if (*(char *)((int)input + 0x3e) == '@') {
        *(undefined *)((int)input + 0x3e) = 0;
        PTR_FUN_08004b80();
      }
      else {
        *(undefined *)((int)input + 0x3e) = 0;
        PTR_DAT_0804a1e0();
      }
    }
    else {
      (*input)[1] = (*input)[1] & 0xfffff8ff;
      input[0xc] = (uint32_t *)0x11;
      *(undefined *)((int)input + 0x3e) = 0;
      *(undefined *)((int)input + 0x3d) = 0x20;
      PTR_DAT_0804a1e0();
    }
  }
  else if ((current_char == '!') || ((*(char *)((int)input + 0x3e) == '@' && (current_char == '"')))) {
    if (*(short *)((int)input + 0x2a) == 0) {
      (*input)[1] = (*input)[1] & 0xfffffbff;
    }
    else if (*(char *)((int)input + 0x3e) == '@') {
      if (input[0x14] == (uint32_t *)0x0) {
        if (input[0x13] == (uint32_t *)0x1) {
          (*input)[4] = (uint32_t)input[0x12] & 0xff;
          input[0x14] = (uint32_t *)((int)input[0x14] + 2);
        }
        else {
          (*input)[4] = (uint32_t)((int)input[0x12] << 0x10) >> 0x18;
          input[0x14] = (uint32_t *)((int)input[0x14] + 1);
        }
      }
      else if (input[0x14] == (uint32_t *)0x1) {
        (*input)[4] = (uint32_t)input[0x12] & 0xff;
        input[0x14] = (uint32_t *)((int)input[0x14] + 1);
      }
      else if (input[0x14] == (uint32_t *)0x2) {
        if (*(char *)((int)input + 0x3d) == '"') {
          **input = **input | 0x100;
        }
        else if (*(char *)((int)input + 0x3d) == '!') {
          uint32_t *ptr_to_9th_element = input[9];
          input[9] = (uint32_t *)((int)ptr_to_9th_element + 1);
          (*input)[4] = (uint32_t)*(byte *)ptr_to_9th_element;
          *(short *)((int)input + 0x2a) = *(short *)((int)input + 0x2a) + -1;
        }
      }
    }
    else {
      uint32_t *ptr_to_9th_element = input[9];
      input[9] = (uint32_t *)((int)ptr_to_9th_element + 1);
      (*input)[4] = (uint32_t)*(byte *)ptr_to_9th_element;
      *(short *)((int)input + 0x2a) = *(short *)((int)input + 0x2a) + -1;
    }
  }
  return 0;
}
// FUN_0800997e 0x0800997e
int find_last_occurrence_of_character_in_string_0800997e(int *string, int string_length, int character_to_find, undefined4 param_4)
{
  int last_occurrence_index = 0;
  if (string_length != 0) {
    int current_index = 0;
    while (current_index = find_character_in_string(string, string_length, character_to_find, current_index, param_4), current_index != 0) {
      string = current_index + 1;
      last_occurrence_index = current_index;
    }
    return last_occurrence_index;
  }
  last_occurrence_index = find_character_in_string(string, string_length, character_to_find, 0, param_4);
  return last_occurrence_index;
}
// FUN_08002dbc 0x08002dbc
void initialize_if_first_time_08002dbc(int is_first_time, int param)
{
  if (is_first_time != 1) {
    return;
  }
  if (param == 0xffff) {
    initialize_params_08002ce0(PTR_DAT_08002dd8);
  }
  return;
}
// FUN_08002e44 0x08002e44
void create_new_element_in_list_08002e44(int list_pointer, int string_pointer, undefined first_char, undefined second_char)
{
  int substring_index = find_substring(string_pointer, "cpp");
  int last_slash_index = find_last_occurrence_of_character_in_string(string_pointer, 0x2f);
  if (last_slash_index == 0) {
    last_slash_index = find_last_occurrence_of_character_in_string(string_pointer, 0x5c);
  }
  if (last_slash_index != 0) {
    string_pointer = last_slash_index + 1;
  }
  if (substring_index == 0) {
    char string_end = find_string_end(string_pointer);
    *(char *)(list_pointer + 196) = string_end + 2;
  }
  else {
    *(char *)(list_pointer + 196) = ((char)substring_index - (char)string_pointer) + 2;
  }
  add_element_to_list_at_head(*(int *)(list_pointer + 200));
  byte string_length = *(byte *)(list_pointer + 196);
  undefined *new_string_pointer = (undefined *)allocate_memory(string_length + 1);
  *(undefined **)(list_pointer + 200) = new_string_pointer;
  new_string_pointer[string_length] = 0;
  *new_string_pointer = first_char;
  new_string_pointer[1] = second_char;
  copy_string(new_string_pointer + 2, string_pointer, *(byte *)(list_pointer + 196) - 2);
  return;
}
// FUN_0800242c 0x0800242c
void initialize_timer_with_callback_0800242c(void* callback_function, int time_in_ms, int callback_arg, void* arg){
  initialize_timer_08007648(callback_function, time_in_ms, callback_arg, PTR_LAB_08002444_1_08002440, arg);
  return;
}
// FUN_080058d2 0x080058d2
int validate_and_set_input_080058d2(uint *input, uint input_length)
{
  uint *DAT_08005a10 = (uint *)DAT_08005a10;
  uint *DAT_08005a0c = (uint *)DAT_08005a0c;
  uint value;
  if ((*input & 2) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffff0f | input[2];
  }
  if ((*input & 1) != 0) {
    uint type = input[1];
    if (type == 1) {
      if ((DAT_08005a10[0] & 0x20000) == 0) {
        return 1;
      }
    }
    else if ((type != 2) && ((DAT_08005a10[0] & 2) == 0)) {
      return 1;
    }
    DAT_08005a10[1] = type | DAT_08005a10[1] & 0xfffffffc;
    uint start_time = get_current_time();
    if (type == 1) {
      while ((DAT_08005a10[1] & 0xc) != 4) {
        uint current_time = get_current_time();
        if (5000 < (current_time - start_time)) {
          return 3;
        }
      }
    }
    else if (type == 2) {
      while ((DAT_08005a10[1] & 0xc) != 8) {
        uint current_time = get_current_time();
        if (5000 < (current_time - start_time)) {
          return 3;
        }
      }
    }
    else {
      while ((DAT_08005a10[1] & 0xc) != 0) {
        uint current_time = get_current_time();
        if (5000 < (current_time - start_time)) {
          return 3;
        }
      }
    }
  }
  if ((input_length < (*DAT_08005a0c & 7)) && (*DAT_08005a0c = *DAT_08005a0c & 0xfffffff8 | input_length, input_length != (*DAT_08005a0c & 7))) {
    return 1;
  }
  if ((*input & 4) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xfffff8ff | input[3];
  }
  if ((*input & 8) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffc7ff | input[4] << 3;
  }
  value = calculate_value();
  *(uint *)PTR_DAT_08005a18 = value >> PTR_DAT_08005a14[(DAT_08005a10[1] << 0x18) >> 0x1c];
  validate_and_set_input_080058d2_080036d8(0xf);
  return 0;
}
// FUN_08002c00 0x08002c00
void process_data_and_return_08002c00()
{
  process_data();
  return;
}
// FUN_08003f30 0x08003f30
void set_bits_08003f30(uint bit_offset, uint mask, uint value)
{
  uint shift_amount = (*(int *)(DAT_08003f8c + 0xc) << 0x15) >> 0x1d;
  uint inverted_shift_amount = 7 - shift_amount;
  if (inverted_shift_amount > 3) {
    inverted_shift_amount = 4;
  }
  if (shift_amount + 4 < 7) {
    shift_amount = 0;
  }
  else {
    shift_amount = shift_amount - 3;
  }
  uint shifted_mask = (mask & (1 << (inverted_shift_amount & 0xff)) - 1U) << (shift_amount & 0xff);
  uint shifted_value = (value & ((1 << (shift_amount & 0xff)) - 1U));
  uint final_value = shifted_mask | shifted_value;
  if ((int)bit_offset < 0) {
    *(char *)(DAT_08003f90 + (bit_offset & 0xf)) = (char)(final_value << 4);
  }
  else {
    *(char *)(bit_offset + 0xe000e400) = (char)(final_value << 4);
  }
  return;
}
// FUN_08007f78 0x08007f78
int subtract_four_from_input_08007f78(int input) {
  int result = input - 4;
  return result;
}
// FUN_08006b28 0x08006b28
uint read_bit_at_position_08006b28(uint num, int pos) {
    uint* PTR_ = (uint*)(pos + ((num << 0x18) >> 0x1c) * 4);
    uint DAT_ = *PTR_ >> (num & 0xf) & 1;
    return DAT_;
}
// FUN_080085dc 0x080085dc
bool is_combination_valid_080085dc(int index)
{
  uint16_t combined_bytes = combine_two_bytes(PTR_DAT_080085fc(index));
  return (combined_bytes & 0x21) == 0x21;
}
// FUN_08006b1c 0x08006b1c
byte combine_two_bytes_08006b1c(int address)
{
  byte first_byte = *(byte *)(address + 0x3a);
  byte second_byte = *(byte *)(address + 0x39);
  return first_byte | second_byte;
}
// FUN_08008ed6 0x08008ed6
void convert_base_if_not_zero_08008ed6(uint32_t *function_pointer, uint32_t length, uint32_t parameter, uint32_t additional_parameter) {
  if (parameter != 0) {
    convert_base(function_pointer, length, parameter & 0xff);
    return;
  }
  (**(code **)*function_pointer)(function_pointer, length & 0xff, 0, *(code **)*function_pointer, additional_parameter);
  return;
}
// FUN_0800a130 0x0800a130
void check_and_assign_value_0800a130(int *result, undefined4 arg2, undefined4 arg3, undefined4 arg4)
{
  undefined *data_pointer = PTR_DAT_0800a150;
  *(undefined4 *)PTR_DAT_0800a150 = 0;
  int return_value = return_zero_08008854(arg2, arg3, arg4, arg4, arg4);
  if ((return_value == -1) && (*(int *)data_pointer != 0)) {
    *result = *(int *)data_pointer;
  }
  return;
}
// FUN_08008f3c 0x08008f3c
char get_bit_position_08008f3c(uint number) {
  char bit_position = 0;
  while (number != 1) {
    number = number >> 1;
    bit_position = bit_position + 1;
  }
  return bit_position;
}
// FUN_08002ef2 0x08002ef2
void send_data_08002ef2(int data_offset, uint32_t data_size, uint16_t data_type, uint32_t param_4) {
  send_encoded_data_if_possible_08003158(data_offset + 0x40, data_size, data_type, param_4, param_4);
  return;
}
// FUN_08007332 0x08007332
int find_value_by_key_08007332(int key, char *dictionary) {
  while (true) {
    int current_key = *(int *)(dictionary + 4);
    if (current_key == 0) {
      return -1;
    }
    if (current_key == key) {
      return (int)(*dictionary);
    }
    dictionary = dictionary + 0xc;
  }
}
// FUN_08006128 0x08006128
int update_and_return_status_08006128(uint *data, uint data_length, uint operation)
{
  uint *flags = (uint *)data;
  uint status = 0;
  if (*(char *)(data + 0xf) != '\x01') {
    *(char *)(data + 0xf) = 1;
    *(char *)((int)data + 0x3d) = 2;
    switch(operation) {
      case 0:
        PTR_08005cec(*data);
        break;
      case 4:
        PTR_080060c4(*data);
        break;
      case 8:
        PTR_08005d48(*data);
        break;
      case 0xc:
        PTR_08005dac(*data);
        break;
    }
    *(char *)((int)data + 0x3d) = 1;
    *(char *)(data + 0xf) = 0;
    status = 0;
  }
  else {
    status = 2;
  }
  return status;
}
// FUN_08003658 0x08003658
void copy_data_and_clear_buffers_08003658(void)
{
  int index;
  undefined4 *data_ptr;
  code *jump_table;
  for (index = 0; PTR_DAT_08003690 + index < PTR_DAT_08003694; index += 4) {
    *(undefined4 *)(PTR_DAT_08003690 + index) = *(undefined4 *)(DAT_0800368c + index);
  }
  for (data_ptr = (undefined4 *)PTR_DAT_08003698; data_ptr < PTR_DAT_0800369c; data_ptr++) {
    *data_ptr = 0;
  }
  set_flags();
  execute_all_functions();
  jump_table = (code *)0x800368a;
  process_data_and_calculate_shift();
  (*jump_table)();
  return;
}
// FUN_08009a80 0x08009a80
uint process_data_08009a80(uint *output, uint *input)
{
  uint result;
  ushort flags;
  int data_ptr;
  data_ptr = *(int *)PTR_PTR_DAT_08009b4c;
  if ((data_ptr != 0) && (*(int *)(data_ptr + 0x18) == 0)) {
    cleanup_data(data_ptr);
  }
  if (input == (uint *)PTR_DAT_08009b50) {
    input = *(uint **)(data_ptr + 4);
  }
  else if (input == (uint *)PTR_DAT_08009b54) {
    input = *(uint **)(data_ptr + 8);
  }
  else if (input == (uint *)PTR_DAT_08009b58) {
    input = *(uint **)(data_ptr + 0xc);
  }
  flags = *(ushort *)(input + 3);
  result = (uint)flags;
  if (-1 < (int)(result << 0x1c)) {
    if (-1 < (int)(result << 0x1b)) {
      *output = 9;
      goto LAB_08009ab0;
    }
    if ((int)(result << 0x1d) < 0) {
      if ((uint *)input[0xd] != (uint *)0x0) {
        if ((uint *)input[0xd] != input + 0x11) {
          add_to_linked_list_080091d8(output);
        }
        input[0xd] = 0;
      }
      *(ushort *)(input + 3) = *(ushort *)(input + 3) & 0xffdb;
      input[1] = 0;
      *input = input[4];
    }
    *(ushort *)(input + 3) = *(ushort *)(input + 3) | 8;
  }
  if ((input[4] == 0) && ((flags & 0x280) != 0x200)) {
    check_and_allocate_memory_block_08009eac(output, input);
  }
  flags = *(ushort *)(input + 3);
  result = flags & 1;
  if ((flags & 1) == 0) {
    if (-1 < (int)((uint)flags << 0x1e)) {
      result = input[5];
    }
    input[2] = result;
  }
  else {
    input[2] = 0;
    input[6] = -input[5];
  }
  if (input[4] == 0) {
    flags = *(ushort *)(input + 3);
    result = (int)(short)flags & 0x80;
    if (result != 0) {
      *(ushort *)(input + 3) = flags | 0x40;
      return 0xffffffff;
    }
  }
  else {
    result = 0;
  }
  return result;
}
// FUN_08004a74 0x08004a74
void doNothing_08004a74(void)
{
  // This function does nothing.
  return;
}
// FUN_080062f4 0x080062f4
uint32_t set_bits_and_clear_flags_080062f4(uint32_t **bits, uint32_t flag) {
  uint32_t *bit_array = *bits;
  switch(flag) {
    case 0:
      bit_array[3] &= 0xfffffffd;
      break;
    case 4:
      bit_array[3] &= 0xfffffffb;
      break;
    case 8:
      bit_array[3] &= 0xfffffff7;
      break;
    case 0xc:
      bit_array[3] &= 0xffffffef;
  }
  set_bit(bit_array, flag, 0);
  if (((bit_array == PTR_DAT_0800638c) && ((bit_array[8] & 0x1111) == 0)) && ((bit_array[8] & 0x444) == 0)) {
    bit_array[0x11] &= 0xffff7fff;
  }
  if (((bit_array[8] & 0x1111) == 0) && ((bit_array[8] & 0x444) == 0)) {
    *bit_array &= 0xfffffffe;
  }
  return 0;
}
// FUN_080073e8 0x080073e8
void wait_forever_080073e8(void)
{
  while(true)
  {
    // Do nothing block with infinite loop
  }
}
// FUN_08004a76 0x08004a76
int process_data_08004a76(int *data){
  char flag = *(char *)((int)data + 0x3d);
  if (*(short *)((int)data + 0x2a) != 0) {
    undefined *current_position = (undefined *)data[9];
    data[9] = (int)(current_position + 1);
    *current_position = (char)*(undefined4 *)(*data + 0x10);
    *(short *)((int)data + 0x2a) = *(short *)((int)data + 0x2a) + -1;
    if ((*(short *)((int)data + 0x2a) == 0) && (flag == '*')) {
      *(uint *)(*data + 4) = *(uint *)(*data + 4) & 0xfffffbff;
      data[0xc] = 0x22;
      *(undefined *)((int)data + 0x3d) = 0x28;
      doNothing_08004a74();
    }
  }
  return 0;
}
// FUN_0800877c 0x0800877c
void doNothing_0800877c(void)
{
  return;
}
// FUN_0800267c 0x0800267c
void set_value_based_on_conditions_0800267c(byte *input_array, int value)
{
  int first_calculation;
  if (*input_array < 0xc) {
    first_calculation = (0x88 - (char)input_array[1]) * 4;
    if ((first_calculation - value == 0 || first_calculation < value) &&
        (value == (600 - (char)input_array[2]) * 4 || value + (600 - (char)input_array[2]) * -4 < 0 != SBORROW4(value, (600 - (char)input_array[2]) * 4)))
    {
      first_calculation = value;
    }
    *(int *)(PTR_DAT_080026ac + (uint)*input_array * 8 + 4) = first_calculation;
  }
  return;
}
// FUN_080047f4 0x080047f4
uint32_t send_message_080047f4(uint32_t **message_data, uint32_t *param_2, uint32_t *param_3, uint16_t message_type)
{
  uint32_t result;
  uint32_t *current_message;
  uint32_t message_count;
  if (*(char *)((int)message_data + 0x3d) == ' ')
  {
    message_count = (uint32_t)((uint64_t)DAT_080048c0 * (uint64_t)(*(uint32_t *)PTR_DAT_080048bc >> 3) >> 0x28) * 0x19;
    do
    {
      if (message_count == 0)
      {
        message_data[0xc] = (uint32_t *)0x0;
        *(undefined *)((int)message_data + 0x3d) = 0x20;
        *(undefined *)(message_data + 0xf) = 0;
        return 3;
      }
      current_message = *message_data;
      message_count = message_count + -1;
    } while ((current_message[6] & 2) != 0);
    if (*(char *)(message_data + 0xf) == '\x01')
    {
      result = 2;
    }
    else
    {
      *(undefined *)(message_data + 0xf) = 1;
      if ((*current_message & 1) == 0)
      {
        *current_message = *current_message | 1;
      }
      **message_data = **message_data & 0xfffff7ff;
      *(undefined *)((int)message_data + 0x3d) = 0x22;
      *(undefined *)((int)message_data + 0x3e) = 0x10;
      result = 0;
      message_data[0x10] = (uint32_t *)0x0;
      message_data[9] = param_3;
      *(uint16_t *)((int)message_data + 0x2a) = message_type;
      message_data[0xb] = DAT_080048c4;
      *(uint16_t *)(message_data + 10) = *(uint16_t *)((int)message_data + 0x2a);
      message_data[0x11] = param_2;
      **message_data = **message_data | 0x400;
      **message_data = **message_data | 0x100;
      *(undefined *)(message_data + 0xf) = 0;
      (*message_data)[1] = (*message_data)[1] | 0x700;
    }
  }
  else
  {
    result = 2;
  }
  return result;
}
// FUN_0800376c 0x0800376c
int check_and_process_data_0800376c(uint **data_ptr, uint data_size) {
  int pointer_value = get_pointer_value();
  uint *data = *data_ptr;
  if ((data[2] & 0x100) == 0) {
    if (((data[1] & 0x100) == 0) && ((data[0xb] & 0xf00000) == 0)) {
      while ((**data_ptr & 2) == 0) {
        if ((data_size != 0xffffffff) && ((data_size != 0) && (get_pointer_value() - pointer_value > data_size))) {
          (*data_ptr)[10] |= 4;
          *(undefined *)(data_ptr + 9) = 0;
          return 3;
        }
      }
      (*data_ptr)[10] |= 4;
      *(undefined *)(data_ptr + 9) = 0;
      return 3;
    }
    else {
      uint uVar6 = *(uint *)PTR_DAT_080038c8;
      uint shifted_value = get_shifted_value(2);
      if (((data[4] & DAT_080038cc) == 0) && ((data[3] & DAT_080038cc + 0xdc000000) == 0)) {
        if ((data[4] & DAT_080038d0) == 0) {
          if ((data[3] & DAT_080038d4) == 0) {
            iVar3 = 0x14;
          }
          else {
            iVar3 = 0x29;
          }
        }
        else {
          iVar3 = 0x29;
        }
      }
      else if (((data[4] & DAT_080038d0) == 0) && ((data[3] & DAT_080038d0 + 0xee000000) == 0)) {
        iVar3 = 0x54;
      }
      else if ((DAT_080038d8 & data[4]) == 0) {
        if ((DAT_080038d8 & data[3]) == 0) {
          iVar3 = 0x54;
        }
        else {
          iVar3 = 0xfc;
        }
      }
      else {
        iVar3 = 0xfc;
      }
      uint uVar2 = (uVar6 / shifted_value) * iVar3;
      while ((local_1c <= uVar2) && (uVar2 - local_1c != 0)) {
        if ((data_size != 0xffffffff) && ((data_size != 0) && (get_pointer_value() - pointer_value > data_size))) {
          (*data_ptr)[10] |= 4;
          *(undefined *)(data_ptr + 9) = 0;
          return 3;
        }
        local_1c++;
      }
      **data_ptr = 0xffffffed;
      (*data_ptr)[10] |= 0x200;
      if (((*data_ptr)[2] & 0xe0000) == 0xe0000) {
        if (data_ptr[3] == (uint *)0x0) {
          (*data_ptr)[10] &= 0xfffffeff;
          if (((*data_ptr)[10] & 0x1000) == 0) {
            (*data_ptr)[10] |= 1;
            return 0;
          }
          else {
            return 0;
          }
        }
        else {
          return 0;
        }
      }
      else {
        return 0;
      }
    }
  }
  else {
    (*data_ptr)[10] |= 0x20;
    *(undefined *)(data_ptr + 9) = 0;
    return 1;
  }
}
// FUN_08003e20 0x08003e20
int check_and_activate_device_08003e20(int *data_ptr) {
  int is_valid = check_if_pointer_is_valid();
  if (is_valid == 0) {
    data_ptr[10] = (data_ptr[10] & 0xffffeefd) | 2;
    uint divisor = *(uint *)PTR_DAT_08003f08;
    uint shifted_value = get_shifted_value_08005bb8(2);
    int counter = divisor / shifted_value << 1;
    while (counter != 0) {
      counter--;
    }
    activate_device_08003a20(data_ptr);
    *(uint *)(*data_ptr + 8) |= 8;
    int start_time = get_pointer_value_08003760();
    while ((*(uint *)(*data_ptr + 8) & 8) != 0) {
      int current_time = get_pointer_value_08003760();
      if (current_time - start_time > 10) {
        data_ptr[10] = (data_ptr[10] & 0xffffffed) | 0x10;
        *(undefined *)(data_ptr + 9) = 0;
        return 1;
      }
    }
    *(uint *)(*data_ptr + 8) |= 4;
    start_time = get_pointer_value_08003760();
    while ((*(uint *)(*data_ptr + 8) & 4) != 0) {
      int current_time = get_pointer_value_08003760();
      if (current_time - start_time > 10) {
        data_ptr[10] = (data_ptr[10] & 0xffffffed) | 0x10;
        *(undefined *)(data_ptr + 9) = 0;
        return 1;
      }
    }
    data_ptr[10] = (data_ptr[10] & 0xfffffffc) | 1;
  }
  return is_valid;
}
// FUN_08005a48 0x08005a48
uint get_shifted_value_from_pointer_08005a48(void)
{
  uint shifted_value = get_value_from_pointer_08005a1c();
  int* DAT_08005a60 = DAT_08005a60 + 4;
  int data_value = *DAT_08005a60 << 0x12;
  uint shifted_amount = data_value >> 0x1d;
  uint shifted_result = shifted_value >> PTR_DAT_08005a64[shifted_amount];
  return shifted_result;
}
// FUN_080033a8 0x080033a8
void copy_and_shift_bits_080033a8(byte* dest, const byte* src, const uint num_bytes) {
  byte current_byte;
  uint src_index = 0;
  uint dest_index = 0;
  for (uint i = 0; i < num_bytes; i += 2) {
    current_byte = *(src + src_index);
    *(dest + dest_index) = current_byte;
    *(dest + dest_index + 1) = *(src + src_index + 1) << 7 | current_byte;
    dest_index++;
    src_index += 2;
  }
  return;
}
// FUN_08002c14 0x08002c14
void process_and_return_data_08002c14(void)
{
  process_data();
  return_data();
}
// FUN_08008d18 0x08008d18
void setByteAtOffset_08008d18(int offset, uint8_t value)
{
  uint8_t byte;
  if (value < 0x3c) {
    byte = PTR_DAT_08008d2c[value];
  }
  else {
    byte = 0xff;
  }
  *(uint8_t *)(offset + 300) = byte;
  return;
}
// FUN_08009084 0x08009084
void execute_function_08009084(int function_param) {
  int bit_position = get_bit_position_08008f3c();
  if (*(int *)(function_param + 8) != 0) {
    (**(code **)(function_param + 0xc))();
    return;
  }
  update_pointers_and_call();
  if (*(int *)(PTR_DAT_080090b0 + bit_position * 0x14 + 0xc) != 0) {
    execute_function_08009084(function_param);
  }
  return;
}
// FUN_0800a020 0x0800a020
void processReturnValueAndUpdateValues_0800a020(undefined4 processReturnValue, int paramOffset)
{
  int returnValue = processReturnValue(processReturnValue, (int)*(short *)(paramOffset + 0xe));
  bool isReturnValuePositive = returnValue >= 0;
  uint updatedValue;
  if (isReturnValuePositive) {
    updatedValue = *(int *)(paramOffset + 0x54) + returnValue;
  }
  else {
    updatedValue = *(ushort *)(paramOffset + 0xc) & 0xffffefff;
  }
  if (isReturnValuePositive) {
    *(uint *)(paramOffset + 0x54) = updatedValue;
  }
  if (!isReturnValuePositive) {
    *(short *)(paramOffset + 0xc) = (short)updatedValue;
  }
  return;
}
// FUN_08005840 0x08005840
uint calculate_value_08005840(void)
{
  uint value = 0;
  uint flag = *(uint *)(DAT_080058a0 + 4);
  uint factor = DAT_080058a8;
  byte buffer[4];
  uint constant = *(uint *)(PTR_DAT_0800589c + 8);
  uint address2 = *(uint *)(PTR_DAT_0800589c + 4);
  uint address1 = *(uint *)PTR_DAT_0800589c;
  uint offset = *(uint *)(PTR_DAT_0800589c + 0x10);
  
  if ((flag & 0xc) == 8) {
    if ((flag & 0x10000) == 0) {
      value = DAT_080058a4 * (uint)buffer[(flag << 10) >> 0x1c];
    }
    else {
      value = (DAT_080058a8 * buffer[(flag << 10) >> 0x1c]) / (uint)*(byte *)((int)&offset - ((*(int *)(DAT_080058a0 + 4) << 0xe) >> 0x1f));
    }
  }
  return value;
}
// FUN_08007f7c 0x08007f7c
DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ update_param_2_if_param_1_not_null_08007f7c(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_,DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_wDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_!DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_wDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_!DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_6DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_wDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_8DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_4DAT_PDAT_TDAT_RDAT__DAT_9DAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_4DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_\DAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
// FUN_08006d80 0x08006d80
undefined2 process_device_parameter_08006d80(undefined4 device_param)
{
  int param_value;
  uint value_from_pointer;
  undefined2 result = 0;
  uint param_index;
  undefined4 ptr;
  undefined4 ptr2;
  undefined4 ptr3;
  undefined4 ptr4;
  undefined4 ptr5;
  undefined4 ptr6;
  undefined4 ptr7;
  undefined4 ptr8;
  undefined4 ptr9;
  undefined4 PTR_DAT_08006e64;
  undefined4 ptr11;
  undefined4 ptr12;
  undefined4 ptr13;
  undefined4 ptr14;
  undefined4 ptr15;
  undefined4 ptr16;
  undefined4 ptr17;
  undefined4 ptr18;
  undefined4 ptr19;
  undefined4 ptr20;
  undefined4 ptr21;
  undefined4 ptr22;
  fill_memory_with_value_080091c6(&param_value,0,0x30);
  ptr = get_parameter_value_08007320(device_param, 0x08006e60);
  if (ptr == 0) {
    result = 0;
  }
  else {
    ptr2 = 0;
    ptr3 = 0;
    ptr4 = 0;
    ptr5 = 0;
    ptr6 = 0xe0000;
    ptr7 = 0;
    ptr8 = 1;
    ptr9 = 0;
    *PTR_DAT_08006e64 = (char)device_param;
    if (check_and_update_pointer(&ptr) == 0) {
      param_index = find_param_index_08006c60(device_param);
      if (param_index < 0x12) {
        ptr2 = 1;
        ptr3 = 2;
        if (set_param_value_080038e4(&ptr,&param_index) == 0) {
          if (check_and_activate_device(&ptr) == 0) {
            if (activate_device_if_not_activated_before_08003aa0(&ptr) == 0) {
              if (check_and_process_data(&ptr,10) == 0) {
                value_from_pointer = get_value_from_pointer_08003a1c(&ptr);
                if ((value_from_pointer & 0x200) != 0) {
                  result = get_value_from_pointer_08003a1c(&ptr);
                }
                if (check_if_pointer_is_valid_08003de4(&ptr) == 0) {
                  if (deactivate_memory_region_08003ce8(&ptr) != 0) {
                    result = 0;
                  }
                }
                else {
                  result = 0;
                }
              }
              else {
                result = 0;
              }
            }
            else {
              result = 0;
            }
          }
          else {
            result = 0;
          }
        }
        else {
          result = 0;
        }
      }
      else {
        result = 0;
      }
    }
    else {
      result = 0;
    }
  }
  return result;
}
// FUN_08006c60 0x08006c60
uint find_param_index_08006c60(uint param_val, uint* param_array, uint array_size, uint param_3, uint param_4) {
  int index = find_param_08007376(param_val, param_array, param_3, param_4, param_4);
  uint shifted_index = (uint)(index << 12) >> 27;
  if (shifted_index > 15) {
    shifted_index = 0;
  }
  return shifted_index;
}
// FUN_08003306 0x08003306
void set_values_08003306(int obj_ptr, uint8_t obj_id, uint32_t value_a, uint32_t value_b) {
    switch(obj_id) {
        case 0x90:
            *(uint32_t *)(obj_ptr + 0x50) = value_a;
            *(uint32_t *)(obj_ptr + 0x20) = value_b;
            break;
        case 0xc0:
            *(uint32_t *)(obj_ptr + 0x54) = value_a;
            *(uint32_t *)(obj_ptr + 0x24) = value_b;
            break;
        case 0xd0:
            *(uint32_t *)(obj_ptr + 0x58) = value_a;
            *(uint32_t *)(obj_ptr + 0x28) = value_b;
            break;
        case 0xe0:
            *(uint32_t *)(obj_ptr + 0x4c) = value_a;
            *(uint32_t *)(obj_ptr + 0x1c) = value_b;
            break;
        case 0xf4:
            *(uint32_t *)(obj_ptr + 0x5c) = value_a;
            *(uint32_t *)(obj_ptr + 0x2c) = value_b;
            break;
        case 0xf5:
            *(uint32_t *)(obj_ptr + 0x60) = value_a;
            *(uint32_t *)(obj_ptr + 0x30) = value_b;
            break;
        default:
            break;
    }
}
// FUN_08002578 0x08002578
void update_timer_status_08002578() {
  update_timer_status_08002578_080076e0();
  return;
}
// FUN_08006932 0x08006932
void process_selected_item_and_clear_flag_08006932(int *selected_item_ptr)
{
  uint *selected_item_ptr_offset_c = (uint *)(*selected_item_ptr + 0xc);
  *selected_item_ptr_offset_c = (*selected_item_ptr_offset_c) & 0xffffffbf;
  undefined *selected_item_ptr_offset_39 = (undefined *)((int)selected_item_ptr + 0x39);
  *selected_item_ptr_offset_39 = 0x20;
  PTR_DAT_08008730();
  return;
}
// FUN_080060c4 0x080060c4
void update_data_080060c4(int data_address, int *data_values)
{
  uint data_mask_1 = *(uint *)(data_address + 0x20) & 0xffffffef;
  uint data_mask_2 = *(uint *)(data_address + 4);
  int data_value_1 = *data_values;
  uint data_value_2 = ( *(uint *)(data_address + 0x20) & 0xffffffdf ) | ( data_values[2] << 4 );
  if (data_address == DAT_08006124) {
    data_value_2 = (data_value_2 & 0xffffff7f) | (data_values[3] << 4);
    data_mask_2 = (data_mask_2 & 0xfffff3ff) | (data_values[5] << 2) | (data_values[6] << 2);
  }
  *(uint *)(data_address + 4) = data_mask_2;
  *(uint *)(data_address + 0x18) = *(uint *)(data_address + 0x18) & 0xffff8cff | (data_value_1 << 8);
  *(int *)(data_address + 0x38) = data_values[1];
  *(uint *)(data_address + 0x20) = data_value_2;
  return;
}
// FUN_08009eac 0x08009eac
int check_and_allocate_memory_block_08009eac(int device_id, int *device_data_ptr) {
  ushort permission_result;
  int data_size;
  int *data_ptr;
  if ((uint)(*(ushort *)(device_data_ptr + 3)) << 0x1e < 0x80000000) {
    permission_result = check_permission_and_copy_data(device_id, device_data_ptr, &data_size, &data_ptr);
    int memory_block = allocate_memory_block(device_id, data_size);
    if (memory_block != 0) {
      *(undefined **)(device_id + 0x28) = PTR_LAB_08009cd0_1_08009f28;
      *device_data_ptr = memory_block;
      *(ushort *)(device_data_ptr + 3) |= 0x80;
      device_data_ptr[4] = memory_block;
      device_data_ptr[5] = data_size;
      if (data_ptr != NULL) {
        int function_result = set_value_from_function_result(device_id, *(short *)((int)device_data_ptr + 0xe));
        if (function_result != 0) {
          *(ushort *)(device_data_ptr + 3) &= 0xfffc | 1;
        }
      }
      *(ushort *)(device_data_ptr + 3) |= permission_result;
      return 1;
    }
    else if ((int)(short)*(ushort *)(device_data_ptr + 3) << 0x16 >= 0) {
      *(ushort *)(device_data_ptr + 3) &= 0xfffc | 2;
    }
  }
  else {
    *device_data_ptr = (int)device_data_ptr + 0x47;
    device_data_ptr[4] = (int)device_data_ptr + 0x47;
    device_data_ptr[5] = 1;
  }
  return 0;
}
// FUN_080072d8 0x080072d8
void set_parameter_value_based_on_condition_080072d8(uint *parameter_value, uint16_t *parameter_type, int condition, uint *param_4)
{
  if (condition == 0) {
    set_parameter_value_080042e2(parameter_value, parameter_type, 0, param_4, param_4);
    return;
  }
  set_parameter_value_080042e2(parameter_value, parameter_type, 1, param_4, param_4);
  return;
}
// FUN_080045c0 0x080045c0
int calculate_and_set_parameters_080045c0(uint **parameter_array)
{
  if (parameter_array == NULL) {
    return 1;
  }
  if (*(char *)((int)parameter_array + 0x3d) == '\0') {
    *(undefined *)(parameter_array + 0xf) = 0;
    do_nothing();
  }
  *(undefined *)((int)parameter_array + 0x3d) = 0x24;
  **parameter_array = **parameter_array & 0xfffffffe;
  uint shifted_value = get_shifted_value_from_pointer();
  bool condition = false;
  if (DAT_08004714 < parameter_array[1]) {
    condition = shifted_value <= DAT_08004720;
  }
  else if (DAT_08004718 < shifted_value) {
    condition = false;
  }
  else {
    condition = true;
  }
  if (condition) {
    return 1;
  }
  uint calculated_value = (uint)((ulonglong)DAT_0800471c * (ulonglong)shifted_value >> 0x32);
  (*parameter_array)[1] = calculated_value;
  if (DAT_08004714 < parameter_array[1]) {
    calculated_value = (uint)((ulonglong)DAT_08004724 * (ulonglong)(calculated_value * 300) >> 0x26);
  }
  (*parameter_array)[8] = calculated_value + 1;
  uint *second_parameter = parameter_array[1];
  if (DAT_08004714 < second_parameter) {
    uint divisor = parameter_array[2] == NULL ? 3 : 0x19;
    uint divisor_result = (shifted_value - 1) / (uint)((int)second_parameter * divisor) + 1 & 0xfff;
    uint leading_zeroes = count_leading_zeroes(divisor_result);
    if (leading_zeroes >> 5 == 0) {
      divisor_result |= parameter_array[2] == NULL ? 0x8000 : 0xc000;
    }
    else {
      divisor_result = 1;
    }
    (*parameter_array)[7] = divisor_result;
  }
  else {
    uint divisor = (int)second_parameter << 1;
    uint divisor_result = (shifted_value - 1) / divisor + 1 & 0xfff;
    if (divisor_result < 4) {
      divisor_result = 4;
    }
    (*parameter_array)[7] = divisor_result;
  }
  **parameter_array = (uint)parameter_array[7] | (uint)parameter_array[8];
  (*parameter_array)[2] = (uint)parameter_array[4] | (uint)parameter_array[3];
  (*parameter_array)[3] = (uint)parameter_array[5] | (uint)parameter_array[6];
  **parameter_array = **parameter_array | 1;
  parameter_array[0x10] = NULL;
  *(undefined *)((int)parameter_array + 0x3d) = 0x20;
  parameter_array[0xc] = NULL;
  *(undefined *)((int)parameter_array + 0x3e) = 0;
  return 0;
}
// FUN_08007e74 0x08007e74
int check_and_update_value_08007e74(int value_offset, uint param_2, uint param_3, uint param_4)
{
  int initial_pointer_value = get_pointer_value_08003760();
  uint difference = 0;
  int return_value = 2;
  do {
    int current_value = value_offset + 4;
    int check_result = check_and_update_08004728(current_value, param_2, param_3, param_4, param_4);
    if (check_result == 0) {
      return_value = 0;
      int loop_condition = 0;
      while ((loop_condition = get_character_at_offset_0800542a(current_value)) != 0x20 && (return_value == 0)) {
        int pointer_value = get_pointer_value_08003760();
        difference = pointer_value - initial_pointer_value;
        if (difference < 0x65) {
          int value_at_offset = get_value_from_offset_08005430(current_value);
          if (value_at_offset != 0) {
            return_value = 2;
          }
        }
        else {
          return_value = 1;
        }
      }
    }
    int value_at_offset = get_value_from_offset_08005430(current_value);
  } while ((value_at_offset == 4) && (difference < 100));
  return return_value;
}
// FUN_08002efe 0x08002efe
void execute_function_with_params_08002efe(int base_offset, undefined4 param_2, undefined2 param_3, undefined4 param_4)
{
  int function_offset = base_offset + 0x40;
  execute_function_if_not_null_0800319e(function_offset, param_2, param_3, param_4, param_4);
  return;
}
// FUN_08002f84 0x08002f84
void save_value_if_max_08002f84(uint8_t value, int max_value, uint32_t *PTR_DAT_08002f90) {
  if (value == max_value) {
    *PTR_DAT_08002f90 = value;
  }
  return;
}
// FUN_08002ddc 0x08002ddc
void executeCommandsOnObject_08002ddc(int objectAddress, int commandType, int commandArg1, int commandArg2, int commandArg3) {
  execute_commands_on_object_0800322c(objectAddress + 0x40, commandType, commandArg1, commandArg2, commandArg3);
  return;
}
// FUN_08009094 0x08009094
void execute_if_bit_set_08009094() {
  int bit_position = get_bit_position_08008f3c();
  int* ptr = PTR_DAT_080090b0_DAT_080090b0 + bit_position * 0x14 + 0xc;
  if (*ptr != 0) {
    execute_function_08009084();
  }
  return;
}
// FUN_08009f2c 0x08009f2c
char* find_character_08009f2c(char* string, char target, int length) {
  char* current_char = string;
  while (current_char != string + length) {
    if (*current_char == target) {
      return current_char;
    }
    current_char++;
  }
  return NULL;
}
// FUN_0800a154 0x0800a154
int calculate_value_0800a154(int ptr_value,int ptr_offset)
{
  int value = *(int *)(ptr_offset - 4) + -4;
  if (*(int *)(ptr_offset - 4) < 0) {
    value += *(int *)(ptr_offset + value);
  }
  return value;
}
// FUN_08002580 0x08002580
void increment_and_set_08002580(byte *output_byte)
{
  byte current_byte_count = *PTR_DAT_080025a4;
  if (current_byte_count > 11) {
    *output_byte = 0xff;
    return;
  }
  *PTR_DAT_080025a4 = current_byte_count + 1;
  *output_byte = current_byte_count;
  *(undefined4 *)(PTR_DAT_080025a8 + (uint)current_byte_count * 8 + 4) = 0x5dc;
  return;
}
// FUN_08007f8e 0x08007f8e
void set_param_value_if_not_null_08007f8e(int param_value, int param_address) {
  if (param_address != 0) {
    if (param_value != 0) {
      *(int *)(param_address + 100) = param_value;
      set_and_update_values_080049e0(param_address + 4);
    }
    return;
  }
  return;
}
// FUN_08006b3e 0x08006b3e
void set_bit_at_index_08006b3e(uint index, int* array) {
  uint shifted_index = (index << 0x18) >> 0x1c;
  uint* target = (uint*)(array + shifted_index * 4);
  uint mask = 1 << (index & 0xf);
  *target |= mask;
  return;
}
// FUN_08006262 0x08006262
void set_bit_08006262(uint32_t *bit_array, uint32_t bit_position, uint32_t bit_value) {
  uint32_t mask = ~(1 << (bit_position & 0xff));
  *bit_array = (*bit_array & mask) | (bit_value << (bit_position & 0xff));
  return;
}
// FUN_08007110 0x08007110
void set_flags_based_on_parameter_08007110(void)
{
  set_flags_based_on_param_080074e0();
  return;
}
// FUN_08007594 0x08007594
int check_timer_08007594(uint timer_value) {
  if (timer_value == UINT32_MAX) {
    return 0;
  }
  if (timer_value == DAT_080075d0) {
    return 1;
  }
  if (DAT_080075d0 < timer_value) {
    if (timer_value == DAT_080075d0 + 0x12400) {
      return 2;
    }
    if (timer_value == DAT_080075d0 + 0x12400 + 0x12400) {
      return 3;
    }
  }
  else if (timer_value == 0x40000000) {
    return 1;
  }
  initialize_and_call_timer_function(PTR_s_TIM__Unknown_timer_instance_080075d8);
  return 0;
}
// FUN_080073ec 0x080073ec
void set_flags_080073ec(void)
{
  uint *DAT_0800742c;
  DAT_0800742c = DAT_0800742c;
  *DAT_0800742c |= 1;
  DAT_0800742c[1] &= DAT_08007430;
  *DAT_0800742c &= 0xfef6ffff;
  *DAT_0800742c &= 0xfffbffff;
  DAT_0800742c[1] &= 0xff80ffff;
  DAT_0800742c[2] = 0x9f0000;
  *(undefined4 *)(DAT_08007434 + 8) = 0x8000000;
  return;
}
// FUN_08008ef4 0x08008ef4
int calculate_new_value_08008ef4(int initial_value, int initial_range_start, int initial_range_end, int new_range_start, int new_range_end) {
    int initial_range = initial_range_end - initial_range_start;
    int new_range = new_range_end - new_range_start;
    int value_in_initial_range = initial_value - initial_range_start;
    return (value_in_initial_range * new_range) / initial_range + new_range_start;
}
// FUN_08002df6 0x08002df6
void encode_data_from_pointer_08002df6(int pointer_address)
{
  byte* data = (byte*) *(pointer_address + 200);
  byte data_size = *(byte*)(pointer_address + 0xc4);
  if (data_size == 0) {
    return;
  }
  byte* encoded_data = (byte*) (pointer_address + 0x40);
  byte data_size_minus_two = data_size - 2;
  byte* data_offset = data + 2;
  encode_data_080031ce(encoded_data, data, data[1], data_size_minus_two, data_offset);
  return;
}
// FUN_080045bc 0x080045bc
void do_nothing_080045bc(void) {
  return;
}
// FUN_08007118 0x08007118
void update_flags_and_registers_08007118(uint8_t source, uint frequency, int value, uint8_t flag, char enable_interrupts) {
  uint clock_source = check_clock_source();
  int divisor = clock_source / frequency - 1;
  int parameter_value = value + -1;
  uint bit_mask = 0;
  uint flag_mask = 0x60;
  uint parameter = get_parameter_value_08007320(source, PTR_DAT_080071dc);
  if (parameter != 0) {
    uint parameter_type = find_parameter_value_08006c7c(source);
    if ((((parameter_type == 0) || (parameter_type == 4)) || (parameter_type == 8)) || ((parameter_type == 0xc || (parameter_type == 0x18)))) {
      uint8_t interrupt_flag = 0;
      uint8_t register_flag = 0;
      uint8_t set_flag = 0;
      uint8_t set_bit = 0;
      if (enable_interrupts == '\x01') {
        *PTR_DAT_080071e0 = (char)source;
        int register_check = check_and_update_registers_08006092(&parameter);
        if (register_check != 0) {
          return;
        }
      }
      flag_mask = 0x60;
      set_flag = 0;
      interrupt_flag = 0;
      register_flag = 0;
      bit_mask = flag;
      parameter_value = value + -1;
      divisor = clock_source / frequency - 1;
      parameter = PTR_DAT_080071dc_1;
      int flag_check = update_flags_08006186(&parameter, &flag_mask, parameter_type);
      if (flag_check == 0) {
        uint parameter_check = find_param_08007376(source, PTR_DAT_080071dc);
        if ((parameter_check & 0x100000) == 0) {
          set_bit_and_update_08006390(&parameter, parameter_type);
        }
        else {
          set_flag_and_enable_interrupts_0800643c(&parameter, parameter_type);
        }
      }
    }
  }
  return;
}
// FUN_08009fe8 0x08009fe8
int process_input_08009fe8(uint input_size)
{
  int* error_ptr = *(int**)global_error_ptr;
  if (input_size > 31) {
    *error_ptr = 22;
    return -1;
  }
  int* function_ptr = error_ptr[17];
  if (function_ptr != 0 && function_ptr[input_size] != (code*)0) {
    if (function_ptr[input_size] != (code*)1) {
      if (function_ptr[input_size] == (code*)-1) {
        *error_ptr = 22;
        return 1;
      }
      function_ptr[input_size] = 0;
      (*(code*)function_ptr[input_size])(input_size);
    }
    return 0;
  }
  undefined* error_ptr_copy = global_error_ptr;
  int function_result = return_one(input_size, error_ptr);
  undefined* error_ptr_copy2 = global_data_ptr;
  *(undefined4*)global_data_ptr = 0;
  int initialization_result = initialize_value(function_result, input_size, input_size, 0, error_ptr_copy, 0, 0, 0);
  if (initialization_result == -1 && *(int*)error_ptr_copy2 != 0) {
    *error_ptr = *(int*)error_ptr_copy2;
  }
  return initialization_result;
}
// FUN_08002c1e 0x08002c1e
void set_default_values_if_param_is_one_and_param2_is_0xffff_08002c1e(uint8_t is_param_one, uint16_t param2, uint32_t* ptr_param3, uint32_t* ptr_param4)
{
  if (is_param_one == 1 && param2 == 0xffff) {
    *ptr_param3 = 0;
    *ptr_param4 = 0;
  }
  return;
}
// FUN_08005a68 0x08005a68
void extract_data_08005a68(uint32_t *data_out, uint32_t *data_in)
{
  // Extract data from input
  data_out[0] = 0xf;
  uint32_t *ptr_data = (uint32_t*)(&DAT_08005a9c);
  data_out[1] = ptr_data[1] & 3;
  data_out[2] = ptr_data[1] & 0xf0;
  data_out[3] = ptr_data[1] & 0x700;
  data_out[4] = ptr_data[1] >> 3 & 0x700;
  // Extract data from global variable
  *data_in = *DAT_08005aa0 & 7;
}
// FUN_08008f78 0x08008f78
void initialize_data_08008f78(int param_1, int param_2, undefined4 param_3, undefined4 param_4) {
  undefined *data_ptr = PTR_DAT_08009018;
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    data_ptr[0] = 6;
    *(undefined4 *)(data_ptr + 0xc) = 0;
    data_ptr[0x14] = 7;
    *(undefined4 *)(data_ptr + 0x20) = 0;
    data_ptr[0x28] = 8;
    *(undefined4 *)(data_ptr + 0x34) = 0;
    data_ptr[0x3c] = 9;
    *(undefined4 *)(data_ptr + 0x48) = 0;
    data_ptr[0x50] = 10;
    *(undefined4 *)(data_ptr + 0x5c) = 0;
    data_ptr[100] = 0x17;
    *(undefined4 *)(data_ptr + 0x70) = 0;
    data_ptr[0x78] = 0x17;
    *(undefined4 *)(data_ptr + 0x84) = 0;
    data_ptr[0x8c] = 0x17;
    *(undefined4 *)(data_ptr + 0x98) = 0;
    data_ptr[0xa0] = 0x17;
    *(undefined4 *)(data_ptr + 0xac) = 0;
    data_ptr[0xb4] = 0x17;
    *(undefined4 *)(data_ptr + 0xc0) = 0;
    data_ptr[200] = 0x28;
    *(undefined4 *)(data_ptr + 0xd4) = 0;
    data_ptr[0xdc] = 0x28;
    *(undefined4 *)(data_ptr + 0xe8) = 0;
    data_ptr[0xf0] = 0x28;
    *(undefined4 *)(data_ptr + 0xfc) = 0;
    data_ptr[0x104] = 0x28;
    *(undefined4 *)(data_ptr + 0x110) = 0;
    data_ptr[0x118] = 0x28;
    *(undefined4 *)(data_ptr + 0x124) = 0;
    data_ptr[300] = 0x28;
    *(undefined4 *)(data_ptr + 0x138) = 0;
    combine_values(0, PTR_LAB_08008f50_1_08009020, PTR_DAT_0800901c, data_ptr, param_4);
  }
  return;
}
// FUN_08008d30 0x08008d30
undefined4* initialize_data_structure_and_set_defaults_08008d30(undefined4 *data_structure, undefined4 key, undefined4 value1, undefined4 value2)
{
  data_structure[1] = 0;
  data_structure[2] = 1000;
  *data_structure = PTR_PTR_LAB_08008ba4_1_08008d7c;
  if (data_structure == (undefined4 *)PTR_DAT_08008d80) {
    set_value_at_address_based_on_index_08008d00(data_structure, 0, value1, PTR_DAT_08008d80, value2);
    setByteAtOffset_08008d18(data_structure, 1);
  }
  else {
    undefined found_value = find_value_if_key_not_null_0800734a(key, PTR_DAT_08008d84);
    *(undefined *)((int)data_structure + 0x12d) = found_value;
    found_value = find_value_if_key_not_null_0800734a(key, PTR_DAT_08008d88);
    *(undefined *)(data_structure + 0x4b) = found_value;
  }
  initialize_data_structures_08008c20(data_structure);
  return data_structure;
}
// FUN_08002f94 0x08002f94
void store_parameter_in_memory_location_08002f94(undefined4 parameter_value, undefined4* *PTR_DAT_08002f9c){
  **PTR_DAT_08002f9c = parameter_value;
  return;
}
// FUN_0800734a 0x0800734a
int find_value_if_key_not_null_0800734a(int key_address) {
  if (key_address != 0) {
    int value = find_value_by_key_08007332();
    return value;
  }
  return -1;
}
// FUN_08000aec 0x08000aec
void clear_data_and_reset_flags_08000aec(void)
{
  bool is_valid_char;
  int char_value;
  int char_index;
  int i;
  uint8_t input_char;
  uint8_t valid_chars[14] = {0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E};
  *PTR_DAT_08000bc0 = 1;
  if (*PTR_DAT_08000bc4 != 0x00) {
    clear_memory_080005e0();
  }
  for (i = 0; i < 5; i++) {
    PTR_DAT_08000bc8[i] = 0;
    PTR_DAT_08000bcc[i] = 0;
    PTR_DAT_08000bd0[i] = 0;
  }
  for (i = 0; i < 0x3c; i++) {
    if ((i - 0x2e) < 0xe) {
      if (i < 0x3c) {
        char_value = (int)(char)PTR_DAT_08000bd4[i];
      }
      else {
        char_value = -1;
      }
      char_index = find_char_index(char_value);
      if (char_index == 0) {
        is_valid_char = false;
      }
      else {
        if (i < 0x3c) {
          char_value = (int)(char)PTR_DAT_08000bd4[i];
        }
        else {
          char_value = -1;
        }
        char_index = find_char_index(char_value);
        if (char_index == 1) {
          is_valid_char = false;
        }
        else {
          is_valid_char = true;
        }
      }
    }
    else {
      is_valid_char = false;
    }
    if (is_valid_char) {
      input_char = 2;
      send_data(i, input_char);
    }
    else {
      if (i < 0x3c) {
        if ((PTR_DAT_08000bd4[i] != -1) && (find_char_index(PTR_DAT_08000bd4[i]) != 0) && (find_char_index(PTR_DAT_08000bd4[i]) != 1)) {
          input_char = 1;
          send_data(i, input_char);
        }
      }
    }
    PTR_DAT_08000bd8[i] = 0xff;
  }
  *(int *)PTR_DAT_08000bdc = 0;
  *PTR_DAT_08000be0 = 0;
  *PTR_DAT_08000be4 = 0;
  *PTR_DAT_08000bc0 = 0;
  return;
}
// FUN_08008eec 0x08008eec
void convert_base_if_not_zero_08008eec(void)
{
  bool should_convert = check_if_base_should_be_converted();
  if (should_convert) {
    convert_base();
  }
  return;
}
// FUN_080068d6 0x080068d6
int set_params_080068d6(int *param_list, int param_2, int param_3) {
  if (*(char *)((int)param_list + 0x3a) != ' ') {
    return 2;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(char *)(param_list + 0xe) != '\x01') {
    param_list[10] = param_2;
    *(short *)(param_list + 0xb) = (short)param_3;
    *(short *)((int)param_list + 0x2e) = (short)param_3;
    param_list[0xf] = 0;
    *(undefined *)((int)param_list + 0x3a) = 0x22;
    *(undefined *)(param_list + 0xe) = 0;
    *(uint *)(*param_list + 0xc) |= 0x100;
    *(uint *)(*param_list + 0x14) |= 1;
    *(uint *)(*param_list + 0xc) |= 0x20;
    return 0;
  }
  return 2;
}
// FUN_080032a2 0x080032a2
void process_string_data_if_not_empty_080032a2(void* destination, void* source, void* additional_data)
{
  void* string_end = find_string_end_08000178(source);
  int data_type = 0x71;
  process_data(destination, data_type, string_end, source, additional_data);
  return;
}
// FUN_08001b48 0x08001b48
void initialize_device_08001b48(void)
{
  undefined *device_ptr;
  device_ptr = PTR_DAT_08001bc0;
  create_new_element_in_list(PTR_DAT_08001bc0, PTR_s__home_bo_p2im_p2im_real_firmware_08001bc4, 2, 5);
  set_value_at_address(device_ptr, 0xe0, PTR_process_value_08000214_1_08001bc8);
  set_value_at_address(device_ptr, 0x90, PTR_LAB_080002ec_1_08001bcc);
  set_value_at_address(device_ptr, 0xc0, DAT_08001bd0);
  set_value_at_address(device_ptr, 0xd0, PTR_LAB_08000c18_1_08001bd4);
  set_value_at_address(device_ptr, 0xf4, DAT_08001bd8);
  set_value_at_address(device_ptr, 0xf5, PTR_LAB_080001a8_1_08001bdc);
  store_parameter_in_memory_location(device_ptr, 0xf0, PTR_FUNC_08001cd0_1_08001be0);
  save_value_if_max(device_ptr, 0xff, DAT_08001be4);
  execute_device_commands_and_write_data_to_device(device_ptr, 0xe100);
  clear_data_and_reset_flags_08000aec();
  send_software_interrupt_0800018c(0);
  return;
}
// FUN_08006390 0x08006390
int set_bit_and_update_08006390(uint** bit_array, uint bit_index) {
  uint* current_array = *bit_array;
  set_bit(current_array, bit_index, 1);

  if (current_array == PTR_DAT_080063bc) {
    current_array[17] |= 0x8000;
  }

  **bit_array |= 1;
  return 0;
}
// FUN_08009f48 0x08009f48
void do_nothing_08009f48() {
  return;
}
// FUN_08004d6a 0x08004d6a
void do_nothing_08004d6a() {
  return;
}
// FUN_08008730 0x08008730
void process_selected_item_08008730(void)
{
  uint selected_item_index = find_number_080086e8();
  int selected_item_data = *(int *)(PTR_DAT_08008770 + selected_item_index * 4);
  if ((selected_item_index < 5) && (selected_item_data != -1)) {
    uint item_effect_index = (uint)*(byte *)(selected_item_data + ITEM_EFFECT_INDEX_OFFSET) * 4;
    int item_effect_value = *(int *)(selected_item_data + ITEM_EFFECT_VALUE_OFFSET) + (uint)*(ushort *)(selected_item_data + ITEM_EFFECT_ADDITIONAL_VALUE_OFFSET);
    set_data(item_effect_index, item_effect_value, 1);
  }
  return;
}
// FUN_08005df4 0x08005df4
void set_flags_and_clear_flag_if_appropriate_08005df4(uint **selected_item_ptr)
{
  uint *item_ptr = *selected_item_ptr;
  *(undefined *)((int)selected_item_ptr + 0x3d) = 2;
  if ((item_ptr[8] & 0x1111) == 0 && (item_ptr[8] & 0x444) == 0) {
    *item_ptr &= 0xfffffffe;
  }
  set_flags_based_on_parameter_08007710(selected_item_ptr);
  *(undefined *)((int)selected_item_ptr + 0x3d) = 0;
  *(undefined *)(selected_item_ptr + 0xf) = 0;
  return;
}
// FUN_08009148 0x08009148
void execute_all_functions_08009148(void)
{
  uint function_count = (uint)(PTR_DAT_08009184 - PTR_DAT_08009180);
  uint i;
  for (i = 0; i < function_count; i++) {
    (*(void (**)(void))(PTR_DAT_08009180 + i * 4))();
  }
  do_nothing_0800a424();
  uint function_count_2 = (uint)(PTR_DAT_0800918c - PTR_DAT_08009188);
  for (i = 0; i < function_count_2; i++) {
    (*(void (**)(void))(PTR_DAT_08009188 + i * 4))();
  }
  return;
}
// FUN_08005460 0x08005460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUNC_08005460(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  puVar1 = DAT_08005720;
  if ((*param_1 & 1) != 0) {
    if (((DAT_08005720[1] & 0xc) == 4) ||
       (((DAT_08005720[1] & 0xc) == 8 && ((DAT_08005720[1] & 0x10000) != 0)))) {
      if (((*DAT_08005720 & 0x20000) != 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      uVar6 = param_1[1];
      if (uVar6 == 0x10000) {
        *DAT_08005720 = *DAT_08005720 | 0x10000;
      }
      else if (uVar6 == 0) {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      else if (uVar6 == 0x50000) {
        _DAT_40021000 = _DAT_40021000 | 0x50000;
      }
      else {
        *DAT_08005720 = *DAT_08005720 & 0xfffeffff;
        *puVar1 = *puVar1 & 0xfffbffff;
      }
      if (param_1[1] == 0) {
        iVar3 = get_pointer_value_08003760();
        while ((*DAT_08005720 & 0x20000) != 0) {
          iVar4 = get_pointer_value_08003760();
          if (100 < (uint)(iVar4 - iVar3)) {
            return 3;
          }
        }
      }
      else {
        iVar3 = get_pointer_value_08003760();
        while ((*DAT_08005720 & 0x20000) == 0) {
          iVar4 = get_pointer_value_08003760();
          if (100 < (uint)(iVar4 - iVar3)) {
            return 3;
          }
        }
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (((DAT_08005720[1] & 0xc) == 0) ||
       (((DAT_08005720[1] & 0xc) == 8 && ((DAT_08005720[1] & 0x10000) == 0)))) {
      if (((*DAT_08005720 & 2) != 0) && (param_1[4] != 1)) {
        return 1;
      }
      *DAT_08005720 = *DAT_08005720 & 0xffffff07 | param_1[5] << 3;
    }
    else if (param_1[4] == 0) {
      *DAT_08005724 = 0;
      iVar3 = get_pointer_value_08003760();
      while ((*DAT_08005720 & 2) != 0) {
        iVar4 = get_pointer_value_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005724 = 1;
      iVar3 = get_pointer_value_08003760();
      while ((*DAT_08005720 & 2) == 0) {
        iVar4 = get_pointer_value_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
      *DAT_08005720 = *DAT_08005720 & 0xffffff07 | param_1[5] << 3;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[6] == 0) {
      *DAT_08005728 = 0;
      iVar3 = get_pointer_value_08003760();
      while ((DAT_08005720[9] & 2) != 0) {
        iVar4 = get_pointer_value_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005728 = 1;
      iVar3 = get_pointer_value_08003760();
      while ((DAT_08005720[9] & 2) == 0) {
        iVar4 = get_pointer_value_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
      count_down_08005434(1);
    }
  }
  if ((*param_1 & 4) != 0) {
    bVar7 = (DAT_08005720[7] & 0x10000000) == 0;
    if (bVar7) {
      DAT_08005720[7] = DAT_08005720[7] | 0x10000000;
    }
    if ((*DAT_0800572c & 0x100) == 0) {
      *DAT_0800572c = *DAT_0800572c | 0x100;
      iVar3 = get_pointer_value_08003760();
      while ((*DAT_0800572c & 0x100) == 0) {
        iVar4 = get_pointer_value_08003760();
        if (100 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    puVar2 = DAT_08005838;
    puVar1 = DAT_08005720;
    uVar6 = param_1[3];
    if (uVar6 == 1) {
      DAT_08005720[8] = DAT_08005720[8] | 1;
    }
    else if (uVar6 == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    else if (uVar6 == 5) {
      DAT_08005838[8] = DAT_08005838[8] | 4;
      puVar2[8] = puVar2[8] | 1;
    }
    else {
      DAT_08005720[8] = DAT_08005720[8] & 0xfffffffe;
      puVar1[8] = puVar1[8] & 0xfffffffb;
    }
    if (param_1[3] == 0) {
      iVar3 = get_pointer_value_08003760();
      while ((DAT_08005838[8] & 2) != 0) {
        iVar4 = get_pointer_value_08003760();
        if (5000 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      iVar3 = get_pointer_value_08003760();
      while ((DAT_08005720[8] & 2) == 0) {
        iVar4 = get_pointer_value_08003760();
        if (5000 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    if (bVar7) {
      DAT_08005838[7] = DAT_08005838[7] & 0xefffffff;
    }
  }
  if (param_1[7] == 0) {
    uVar5 = 0;
  }
  else if ((DAT_08005838[1] & 0xc) == 8) {
    uVar5 = 1;
  }
  else if (param_1[7] == 2) {
    *DAT_0800583c = 0;
    iVar3 = get_pointer_value_08003760();
    do {
      if ((*DAT_08005838 & 0x2000000) == 0) {
        if (param_1[8] == 0x10000) {
          DAT_08005838[1] = DAT_08005838[1] & 0xfffdffff | param_1[2];
        }
        DAT_08005838[1] = DAT_08005838[1] & 0xffc2ffff | param_1[8] | param_1[9];
        *DAT_0800583c = 1;
        iVar3 = get_pointer_value_08003760();
        do {
          if ((*DAT_08005838 & 0x2000000) != 0) {
            return 0;
          }
          iVar4 = get_pointer_value_08003760();
        } while ((uint)(iVar4 - iVar3) < 3);
        return 3;
      }
      iVar4 = get_pointer_value_08003760();
    } while ((uint)(iVar4 - iVar3) < 3);
    uVar5 = 3;
  }
  else {
    *DAT_0800583c = 0;
    iVar3 = get_pointer_value_08003760();
    do {
      if ((*DAT_08005838 & 0x2000000) == 0) {
        return 0;
      }
      iVar4 = get_pointer_value_08003760();
    } while ((uint)(iVar4 - iVar3) < 3);
    uVar5 = 3;
  }
  return uVar5;
}


// FUN_08008854 0x08008854
int32_t return_zero_08008854(void) { 
    return 0; 
}
// FUN_080064cc 0x080064cc
int decode_message_080064cc(int *message_ptr) {
  char message_type = *(char *)((int)message_ptr + 0x39);
  if (message_type != '!') {
    return 2;
  }
  int message_length = message_ptr[2];
  int *message_data_ptr = (int *)*message_ptr;
  if (message_length == 0x1000) {
    uint16_t *data_ptr = (uint16_t *)message_ptr[8];
    message_data_ptr[1] = *data_ptr & 0x1ff;
    if (message_ptr[4] == 0) {
      message_ptr[8] = message_ptr[8] + 2;
    }
    else {
      message_ptr[8] = message_ptr[8] + 1;
    }
  }
  else {
    uint8_t *data_ptr = (uint8_t *)message_ptr[8];
    message_data_ptr[1] = (uint32_t)*data_ptr;
    message_ptr[8] = (int)(data_ptr + 1);
  }
  short remaining_attempts = *(short *)((int)message_ptr + 0x26) - 1;
  *(short *)((int)message_ptr + 0x26) = remaining_attempts;
  if (remaining_attempts == 0) {
    message_data_ptr[3] = message_data_ptr[3] & 0xffffff7f;
    message_data_ptr[3] = message_data_ptr[3] | 0x40;
    return 0;
  }
  return 0;
}
// FUN_08004d6c 0x08004d6c
int set_bit_and_update_08004d6c(uint** bit_array, uint bit_index) {
  uint* current_array = *bit_array;
  set_bit(current_array, bit_index, 1);

  if (current_array == PTR_DAT_080063bc) {
    current_array[17] |= 0x8000;
  }

  **bit_array |= 1;
  return 0;
}
// FUN_08004ac2 0x08004ac2
void process_input_08004ac2(uint* input_ptr, uint input_size, uint flags, uint output)
{
  uint input_flags = *(uint *)(*input_ptr + 0x18);
  uint input_value;
  if ((input_flags & 0x80) == 0) {
    input_value = *(uint *)(input_ptr + 3);
  }
  else {
    input_value = *(uint *)(input_ptr + 6);
  }
  bool is_input_valid = (*(uint *)(*input_ptr + 0x18) & 4) == 0;
  process_input_08004ac2_08007fa0(input_ptr, is_input_valid, (undefined2)input_value, input_flags, output);
  return;
}
// FUN_08008850 0x08008850
int returnOne_08008850(void) {
  int result = 1;
  return result;
}
// FUN_08006ca8 0x08006ca8
void set_flag_and_update_08006ca8(uint *flag_array, undefined4 flag_value) {
  uint current_flag = *flag_array;
  uint updated_flag;
  uint flag_mask;

  if (current_flag == DAT_08006d14) {
    flag_mask = *(uint *)(DAT_08006d20 + 0x18) | 0x200;
    *(uint *)(DAT_08006d20 + 0x18) = flag_mask;
    updated_flag = *(uint *)(DAT_08006d20 + 0x18) & 0x200;
  }
  else if (current_flag == DAT_08006d18) {
    flag_mask = *(uint *)(DAT_08006d20 + 0x18) | 0x400;
    *(uint *)(DAT_08006d20 + 0x18) = flag_mask;
    updated_flag = *(uint *)(DAT_08006d20 + 0x18) & 0x400;
  }

  uint8_t flag_index = *(uint8_t *)(PTR_DAT_08006d1c);
  uint flag_bit = 1 << (flag_index & 0xf) & 0xffff;
  uint flag_masked = set_flag_08006bb8((uint)((int)(char)*PTR_DAT_08006d1c << 0x18) >> 0x1c, flag_value, flag_mask, updated_flag);
  FUNC_080040e8(flag_masked, &flag_bit);
}
// FUN_08002fc2 0x08002fc2
void set_value_at_index_08002fc2(int array_base, int index, int value) {
  *(int *)(array_base + (index + 0x42) * 4) = value;
  return;
}
// FUN_08008afa 0x08008afa
ushort calculate_shift_amount_08008afa(int address) {
    short* ptr_1 = (short*)(address + 0x134);
    short* ptr_2 = (short*)(address + 0x136);
    short value_1 = *ptr_1;
    short value_2 = *ptr_2;
    return (ushort)(((value_1 + 0x40) - value_2) & 0x3f);
}
// FUN_08003048 0x08003048
void executeDeviceCommandsAndWriteDataToDevice_08003048(void *deviceData, void *deviceParameter, int parameterSize, void *assertionData){
  void *PTR_DAT_08003068 = PTR_DAT_08003068;
  processAssertion(assertionData, deviceParameter, 6, parameterSize, parameterSize);
  write_data_to_device_08003002(deviceData);
  setParameterAndExecuteCommands_08002e26(deviceData, PTR_DAT_08003068);
  return;
}
// FUN_0800937c 0x0800937c

int FUNC_0800937c(int param_1,undefined *param_2,byte *param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int unaff_r9;
  int iVar7;
  int *local_8c;
  uint local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_74;
  byte local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_45;
  undefined4 local_30;
  
  local_8c = param_4;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    initialize_blocks_08009d50();
  }
  if (param_2 == PTR_DAT_08009588) {
    param_2 = *(undefined **)(param_1 + 4);
  }
  else if (param_2 == PTR_DAT_08009590) {
    param_2 = *(undefined **)(param_1 + 8);
  }
  else if (param_2 == PTR_DAT_08009594) {
    param_2 = *(undefined **)(param_1 + 0xc);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x1c)) || (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar7 = process_data_08009a80(param_1,param_2), iVar7 != 0)) {
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar5 = param_3;
LAB_080093be:
  pbVar6 = pbVar5;
  if (*pbVar6 != 0) goto LAB_08009474;
  goto LAB_080093c8;
LAB_08009474:
  pbVar5 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_080093be;
LAB_080093c8:
  iVar7 = (int)pbVar6 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = process_data_08009358(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_08009568:
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar6 == 0) goto LAB_08009568;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar5 = pbVar6 + 1;
  while( true ) {
    iVar7 = find_character_08009f2c(PTR_s___0__0800958c,*pbVar5);
    puVar1 = PTR_DAT_08009598;
    param_3 = pbVar5 + 1;
    if (iVar7 == 0) break;
    local_88 = 1 << (iVar7 - (int)PTR_s___0__0800958c & 0xffU) | local_88;
    pbVar5 = param_3;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar5 == 0x2a) {
    piVar3 = local_8c + 1;
    iVar7 = *local_8c;
    local_8c = piVar3;
    if (-1 < iVar7) goto LAB_08009498;
    local_7c = -iVar7;
    local_88 = local_88 | 2;
  }
  else {
    bVar4 = false;
    iVar7 = local_7c;
    param_3 = pbVar5;
    while( true ) {
      if (9 < *param_3 - 0x30) break;
      iVar7 = iVar7 * 10 + (*param_3 - 0x30);
      bVar4 = true;
      param_3 = param_3 + 1;
    }
    if (bVar4) {
LAB_08009498:
      local_7c = iVar7;
    }
  }
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      param_3 = param_3 + 2;
      piVar3 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar3;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar4 = false;
      iVar7 = 0;
      local_84 = 0;
      while( true ) {
        param_3 = param_3 + 1;
        if (9 < *param_3 - 0x30) break;
        iVar7 = iVar7 * 10 + (*param_3 - 0x30);
        bVar4 = true;
      }
      if (bVar4) {
        local_84 = iVar7;
      }
    }
  }
  iVar7 = find_character_08009f2c(PTR_DAT_08009598,*param_3,3);
  if (iVar7 != 0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << (iVar7 - (int)puVar1 & 0xffU);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar7 = find_character_08009f2c(PTR_s_efgEFG_0800959c,local_70,6);
  if (iVar7 == 0) {
    iVar7 = FUNC_08009698(param_1,&local_88,param_2,DAT_080095a4,&local_8c);
  }
  else {
    iVar7 = param_1;
    if (DAT_080095a0 == 0) {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
      iVar7 = unaff_r9;
      goto LAB_0800951a;
    }
  }
  if (iVar7 == -1) goto LAB_08009568;
LAB_0800951a:
  local_74 = local_74 + iVar7;
  pbVar5 = param_3;
  unaff_r9 = iVar7;
  goto LAB_080093be;
}


// FUN_08000214 0x08000214
void process_value_08000214(uint index, uint value, uint arg1, uint arg2)
{
  bool found_char;
  int char_index;
  if (index > 59) {
    return;
  }
  int value_type = get_value_type_at_index_08002fa0(PTR_DAT_080002d8, index, arg1, arg2, arg2);
  if (value_type == 3) {
    if (index < 60 && PTR_DAT_080002dc[index] != -1) {
      char_index = find_char_index_080036ac();
      if (char_index != 0) {
        char_index = find_char_index_080036ac((int)(char)PTR_DAT_080002dc[index]);
        if (char_index == 0) {
          found_char = false;
        }
        else {
          found_char = compare_values_0800738a((int)(char)PTR_DAT_080002dc[index], PTR_DAT_080002e8) != 0;
        }
      }
      else {
        found_char = false;
      }
    }
    else {
      found_char = false;
    }
    if (found_char) {
      process_bit_080088e0(index, value);
    }
    set_value_at_index_08002fc2(PTR_DAT_080002d8, index, value);
  }
  else if (value_type == 4) {
    if (index < 60 && PTR_DAT_080002dc[index] != -1) {
      char_index = find_char_index_080036ac();
      if (char_index != 0) {
        char_index = find_char_index_080036ac((int)(char)PTR_DAT_080002dc[index]);
        if (char_index == 0) {
          found_char = false;
        }
        else {
          found_char = true;
        }
      }
      else {
        found_char = false;
      }
    }
    else {
      found_char = false;
    }
    if (found_char) {
      set_value_based_on_conditions_080026b0(PTR_DAT_080002e4 + (uint)(byte)PTR_DAT_080002e0[index] * 3, value);
    }
    set_value_at_index_08002fc2(PTR_DAT_080002d8, index, value);
  }
  return;
}
// FUN_08003724 0x08003724
void update_and_validate_input_08003724(void)
{
  *DAT_08003744 |= 0x10;
  updateParameter_08003f0c(3);
  validate_and_set_input_080036d8(0xf);
  do_nothing_080036d4();
  return;
}
// FUN_080038dc 0x080038dc
int getValueFromPointer_080038dc(int *pointerToValue)
{
    int offset = 0x4c;
    int *addressOfValue = *pointerToValue + offset;
    int value = *addressOfValue;
    return value;
}
// FUN_080025ac 0x080025ac
byte process_input_080025ac(byte *input_buffer, uint buffer_length, int param_3, int param_4)
{
  uint input_length = (uint)*input_buffer;
  if (input_length < 0xc) {
    process_bit_08008990(buffer_length, 1, param_3, input_length, param_4);
    uint ptr_dat_08002628 = (byte)PTR_DAT_08002628[input_length * 8] & 0xffffffc0 | buffer_length & 0x3f;
    PTR_DAT_08002628[input_length * 8] = (char)ptr_dat_08002628;
    int timer_value = -param_3 + 0x220;
    if (timer_value < 0) {
      timer_value = -param_3 + 0x223;
    }
    input_buffer[1] = (byte)((uint)(timer_value << 0x16) >> 0x18);
    int data_value = -param_4 + 0x960;
    if (data_value < 0) {
      data_value = -param_4 + 0x963;
    }
    input_buffer[2] = (byte)((uint)(data_value << 0x16) >> 0x18);
    uint DAT_0800262c = DAT_0800262c;
    uint uVar3 = (uint)((ulonglong)DAT_0800262c * (ulonglong)*input_buffer >> 0x23);
    int is_valid = is_valid_input_08002400(uVar3,ptr_dat_08002628,input_length,(int)((ulonglong)DAT_0800262c * (ulonglong)*input_buffer));
    if (is_valid == 0) {
      PTR_DAT_08002630[0x44] = (char)uVar3;
      initialize_timer_with_callback_0800242c();
    }
    PTR_DAT_08002628[input_length * 8] = PTR_DAT_08002628[input_length * 8] | 0x40;
  }
  return *input_buffer;
}
// FUN_08002634 0x08002634
void process_input_with_params_08002634(void* input, int input_size, int param1, int param2, void* param3)
{
  process_input(input, input_size, param1, param2, param3);
  return;
}
// FUN_08002f0a 0x08002f0a
void process_data_and_offset_08002f0a(int data_offset)
{
  int data_start = data_offset + 0x40;
  process_data_0800325a(data_start);
  return;
}
// FUN_08005bb8 0x08005bb8
uint get_shifted_value_08005bb8(uint shift_value)
{
  uint result = 0;
  uint value1 = *(uint *)(PTR_DAT_08005ca0);
  uint value2 = *(uint *)(PTR_DAT_08005ca0 + 4);
  uint value3 = *(uint *)(PTR_DAT_08005ca0 + 8);
  uint value4 = *(ushort *)(PTR_DAT_08005ca0 + 0x10);
  if (shift_value == 2) {
    result = get_shifted_value_08005bb8_from_pointer() / ((((DAT_08005ca4[1] << 0x10) >> 0x1e) + 1) * 2);
  }
  else if (shift_value == 16) {
    if ((*DAT_08005ca4 & 0x1000000) == 0) {
      result = 0;
    }
    else {
      result = DAT_08005cb0;
      if ((DAT_08005ca4[1] & 0x10000) != 0) {
        result = DAT_08005ca8 / *(byte *)((int)&value4 - ((int)(DAT_08005ca4[1] << 0xe) >> 0x1f));
      }
      result = result * DAT_08005ca4[4 + (DAT_08005ca4[1] >> 6 & 3)];
      if ((DAT_08005ca4[1] & 0x400000) == 0) {
        result = (uint)((ulonglong)DAT_08005cac * (ulonglong)(result * 2) >> 0x21);
      }
    }
  }
  else if (shift_value == 1) {
    if ((DAT_08005ca4[0x20] & 0x302) == 0x102) {
      result = 0x8000;
    }
    else {
      uint value5 = DAT_08005ca4[0x20] & 0x300;
      if ((value5 == 0x200) && ((DAT_08005ca4[0x21] & 2) != 0)) {
        result = 32000;
      }
      else if (value5 == 0x300) {
        if ((*DAT_08005ca4 & 0x20000) == 0) {
          result = 0;
        }
        else {
          result = 62500;
        }
      }
      else {
        result = 0;
      }
    }
  }
  return result;
}
// FUN_08007648 0x08007648
void initialize_timer_08007648(uint32_t *timer_registers, uint32_t timer_start_value, uint32_t timer_type, uint32_t timer_interrupt_value)
{
  uint32_t clock_source_value;
  uint32_t *register_pointer;
  uint32_t timer_value_1 = 0;
  uint32_t timer_value_2 = 0;
  uint32_t timer_value_3 = 0;
  uint32_t timer_value_4 = 0;
  uint32_t timer_value_5 = 0;
  uint32_t timer_value_6 = 0;
  uint32_t timer_value_7 = 0;
  
  timer_value_1 = 0x40000000;
  timer_value_2 = 0x40000000;
  timer_value_5 = timer_start_value;
  clock_source_value = check_clock_source();
  timer_value_3 = (uint32_t)(((uint64_t)timer_interrupt_value * (uint64_t)clock_source_value) >> 0x32) - 1;
  timer_registers[0] = timer_value_1;
  timer_registers[1] = timer_value_2;
  timer_registers[2] = timer_value_3;
  timer_registers[3] = 0;
  timer_registers[4] = timer_type;
  timer_registers[5] = timer_value_5;
  timer_registers[6] = timer_value_6;
  timer_registers[7] = timer_value_7;
  set_timer_type_bits(timer_registers);
  if (check_and_update_registers(timer_registers + 1) == 0)
  {
    if (update_and_return_status(timer_registers + 1, &timer_value_4, 0) == 0)
    {
      set_bit_and_update_flags(timer_registers + 1, 0);
    }
  }
}

// FUN_08008858 0x08008858
int returnZero_08008858(void) {
  return 0;
}
// FUN_08004a20 0x08004a20
void do_nothing_08004a20(void)
{
  return;
}
// FUN_080063c0 0x080063c0
void update_flags_if_needed_080063c0(uint **flags, uint flag_value) {
  uint *flag_array = *flags;
  set_bit_08006262(flag_array, flag_value, 0);

  if (flag_array == DAT_0800641c && (flag_array[8] & 0x555) == 0) {
    flag_array[0x11] &= 0xffff7fff;
  }

  if ((flag_array[8] & 0x555) == 0) {
    *flag_array &= 0xfffffffe;
  }

  *(undefined *)((int)flags + 0x3d) = 1;
}
// FUN_08004a24 0x08004a24
void process_input_data_08004a24(int *input_data) {
  char current_char = *(char *)(input_data + 0x3d);

  if (*(short *)(input_data + 0x2a) != 0) {
    byte *data_ptr = (byte *)input_data[9];
    input_data[9] = (int)(data_ptr + 1);
    uint data_value = (uint)*data_ptr;
    *(uint *)(*input_data + 0x10) = data_value;
    *(short *)(input_data + 0x2a) = *(short *)(input_data + 0x2a) - 1;

    if ((*(short *)(input_data + 0x2a) == 0) && (current_char == ')')) {
      *(uint *)(*input_data + 4) &= 0xfffffbff;
      input_data[0xc] = 0x21;
      *(undefined *)(input_data + 0x3d) = 0x28;
      do_nothing();
    }
  }
}
// FUN_08004a22 0x08004a22
void doNothing_08004a22(void)
{
  return;
}
// FUN_08002fba 0x08002fba
int get_value_at_offset_08002fba(int base_address, int offset)
{
  int* *PTR_ = (int*)(base_address + (offset + 0x42) * 4);
  return **PTR_;
}
// FUN_080090cc 0x080090cc
void process_assertion_data_080090cc(undefined4 count, undefined4 size, undefined *data, undefined4 data_type) {
  undefined4 data_offset = *(undefined4 *)(*(int *)assertion_data_ptr + 0xc);
  undefined *assertion_str = assertion_string_ptr;
  undefined4 data_type_copy = data_type;
  if (data == (undefined *)0x0) goto LAB_END;
  do {
    process_data(data_offset, assertion_str, data_type_copy, count, size, assertion_str, data, data_type_copy);
    undefined8 random_value = get_random_value();
    size = (undefined4)((ulonglong)random_value >> 0x20);
    data_offset = (undefined4)random_value;
LAB_END:
    data = assertion_string_ptr;
    assertion_str = assertion_string_ptr;
  } while(true);
}
// FUN_080049e0 0x080049e0
int set_and_update_values_080049e0(uint **data_ptr) {
  uint *data = *data_ptr;
  if (data[15] != ' ') {
    return 2;
  }
  data[15] = '(';
  if ((data[0] & 1) == 0) {
    data[0] |= 1;
  }
  *data |= 0x400;
  data[1] |= 0x300;
  return 0;
}
// FUN_08006d24 0x08006d24
void update_permissions_08006d24(int *permission_level) {
  int DAT_08006d7c = DAT_08006d7c;
  if (*permission_level != DAT_08006d74) {
    if (*permission_level == DAT_08006d78) {
      uint *(uint *)(DAT_08006d7c + 0xc) = (uint *)(DAT_08006d7c + 0xc);
      *(uint *)(DAT_08006d7c + 0xc) |= 0x400;
      *(uint *)(DAT_08006d7c + 0xc) &= 0xfffffbff;
      *(uint *)(DAT_08006d7c + 0x18) &= 0xfffffbff;
      *(uint *)(DAT_08006d7c + 0x18) &= 0xfffffbff;
    }
    return;
  }
  uint *(uint *)(DAT_08006d7c + 0xc) = (uint *)(DAT_08006d7c + 0xc);
  *(uint *)(DAT_08006d7c + 0xc) |= 0x200;
  *(uint *)(DAT_08006d7c + 0xc) &= 0xfffffdff;
  *(uint *)(DAT_08006d7c + 0x18) &= 0xfffffdff;
  return;
}
// FUN_080098d8 0x080098d8
void initialize_and_call_function_080098d8(int param1, int param2, int param3, int param4)
{
  int block_ptr = *(int *)PTR_PTR_DAT_08009904;
  undefined4 arg1 = param1;
  undefined4 arg2 = param2;
  undefined4 arg3 = param3;
  undefined4 arg4 = param4;
  if ((block_ptr != 0) && (*(int *)(block_ptr + 0x18) == 0)) {
    initialize_blocks_08009d50(block_ptr);
  }
  FUNC_0800937c(block_ptr, *(undefined4 *)(block_ptr + 8), param1, &arg2, arg1, &arg3);
  return;
}
// FUN_08009270 0x08009270
uint allocate_memory_block_08009270(uint *block_start, uint block_size)
{
  uint aligned_block_size = (block_size + 3 & 0xfffffffc) + 8;
  if (aligned_block_size < 0xc) {
    aligned_block_size = 0xc;
  }
  if (((int)aligned_block_size < 0) || (aligned_block_size < block_size)) {
    *block_start = 0xc;
  }
  else {
    do_nothing_08009f48();
    uint *current_block = *(uint **)PTR_DAT_08009324;
    uint *previous_block = *(uint **)PTR_DAT_08009324;
    while (current_block != (uint *)0x0) {
      uint block_diff = *current_block - aligned_block_size;
      if (-1 < (int)block_diff) {
        if (block_diff < 0xc) {
          if (previous_block == current_block) {
            uint next_block_start = previous_block[1];
            *(uint *)PTR_DAT_08009324 = next_block_start;
          }
          else {
            uint next_block_start = current_block[1];
          }
          if (previous_block != current_block) {
            previous_block[1] = next_block_start;
            previous_block = current_block;
          }
        }
        else {
          *current_block = block_diff;
          *(uint *)((int)current_block + block_diff) = aligned_block_size;
          previous_block = (uint *)((int)current_block + block_diff);
        }
        goto LAB_080092d4;
      }
      previous_block = current_block;
      current_block = (uint *)current_block[1];
    }
    if (*(int *)PTR_DAT_08009328 == 0) {
      uint result = check_and_set_offset_08009918(block_start);
      *(uint *)PTR_DAT_08009328 = result;
    }
    uint *new_block_start = (uint *)check_and_set_offset_08009918(block_start, aligned_block_size);
    if ((new_block_start != (uint *)0xffffffff) && ((previous_block = (uint *)((int)new_block_start + 3U & 0xfffffffc), new_block_start == previous_block || (int)check_and_set_offset_08009918(block_start,(int)previous_block - (int)new_block_start) != -1))) {
      *previous_block = aligned_block_size;
LAB_080092d4:
      do_nothing_08009f4a(block_start);
      uint aligned_block_end = (int)previous_block + 0xbU & 0xfffffff8;
      int padding_size = aligned_block_end - (int)(previous_block + 1);
      if (padding_size != 0) {
        *(int *)((int)previous_block + padding_size) = -padding_size;
        return aligned_block_end;
      }
      return aligned_block_end;
    }
    *block_start = 0xc;
    do_nothing_08009f4a(block_start);
  }
  return 0;
}
// FUN_08005e6c 0x08005e6c
void doNothing_08005e6c(void)
{
  return;
}
// FUN_08008500 0x08008500
uint check_valid_input_08008500(uint input, uint param) {
  int ptr_val1 = get_pointer_value();
  char char_val1 = PTR_DAT_080085a8[1];
  int param_val1 = get_parameter_value((int)char_val1, PTR_DAT_080085ac);
  if (param_val1 == 0) {
    return 0;
  }
  uint uVar1 = 0;
  while ((uVar1 < 5 && ((*(int *)(PTR_DAT_080085b0 + uVar1 * 4) == 0 || ((param_val1 = get_parameter_value((int)char_val1, PTR_DAT_080085ac)), **(int **)(PTR_DAT_080085b0 + uVar1 * 4) != param_val1))))) {
    uVar1 = uVar1 + 1 & 0xff;
  }
  if (4 < uVar1) {
    if ((4 < (byte)PTR_DAT_080085b4[0x44]) && (process_parameter(), 4 < (byte)PTR_DAT_080085b4[0x44])) {
      return 0;
    }
    uVar1 = (uint)(byte)PTR_DAT_080085b4[0x44];
  }
  do {
    param_val1 = check_if_valid_input(*(undefined4 *)(PTR_DAT_080085b0 + uVar1 * 4), input, param & 0xffff, 1000);
    if (param_val1 == 0) {
      return param;
    }
    param_val1 = get_pointer_value();
  } while ((uint)(param_val1 - ptr_val1) < 1000);
  return 0;
}
// FUN_080048c8 0x080048c8
int validate_input_080048c8(uint **input_ptr, uint *input_data, int input_len, uint *input_flags){
  int result = 0;
  uint *data_ptr;
  if (*(char *)((int)input_ptr + 0x3d) == '(') {
    if (input_data == NULL) {
      result = 1;
    }
    else if (input_len == 0) {
      result = 1;
    }
    else if (*(char *)(input_ptr + 0xf) == '\x01') {
      result = 2;
    }
    else {
      *(undefined *)(input_ptr + 0xf) = 1;
      data_ptr = *input_ptr;
      if ((*data_ptr & 1) == 0) {
        *data_ptr |= 1;
      }
      **input_ptr &= 0xfffff7ff;
      *(undefined *)((int)input_ptr + 0x3d) = 0x29;
      *(undefined *)((int)input_ptr + 0x3e) = 0x20;
      result = 0;
      input_ptr[0x10] = NULL;
      input_ptr[9] = input_data;
      *(short *)((int)input_ptr + 0x2a) = (short)input_len;
      input_ptr[0xb] = input_flags;
      *(undefined2 *)(input_ptr + 10) = *(undefined2 *)((int)input_ptr + 0x2a);
      *(undefined *)(input_ptr + 0xf) = 0;
      (*input_ptr)[1] |= 0x700;
    }
  }
  else {
    result = 2;
  }
  return result;
}
// FUN_08009954 0x08009954
void copy_string_08009954(char *destination, char *source, int max_length)
{
  char current_character;
  int remaining_length;
  char *current_destination;
  
  do {
    current_destination = destination;
    remaining_length = max_length;
    if (remaining_length == 0) {
      return;
    }
    current_character = *source;
    destination = current_destination + 1;
    *current_destination = current_character;
    source = source + 1;
    max_length = remaining_length - 1;
  } while (current_character != '\0');
  for (; destination != current_destination + remaining_length; destination = destination + 1) {
    *destination = '\0';
  }
  return;
}
// FUN_08005aa4 0x08005aa4
int update_settings_08005aa4(uint *settings)
{
  bool is_bit_set = (*settings & 1) != 0;

  if (is_bit_set) {
    bool is_bit_set2 = (*(uint *)(DAT_08005bac + 0x1c) & 0x10000000) == 0;

    if (is_bit_set2) {
      *(uint *)(DAT_08005bac + 0x1c) |= 0x10000000;
    }

    if ((*DAT_08005bb0 & 0x100) == 0) {
      *DAT_08005bb0 |= 0x100;
      int start_time = get_pointer_value_08003760();

      while ((*DAT_08005bb0 & 0x100) == 0) {
        int current_time = get_pointer_value_08003760();

        if (100 < (uint)(current_time - start_time)) {
          return 3;
        }
      }
    }

    uint *settings_ptr = DAT_08005bb4;
    int settings_memory = DAT_08005bac;
    uint settings_value = *(uint *)(DAT_08005bac + 0x20) & 0x300;

    if ((settings_value != 0) && (settings_value != (settings[1] & 0x300))) {
      settings_value = *(uint *)(DAT_08005bac + 0x20);
      *settings_ptr = 1;
      *settings_ptr = 0;
      *(uint *)(settings_memory + 0x20) = settings_value & 0xfffffcff;

      if ((settings_value & 1) != 0) {
        int start_time2 = get_pointer_value_08003760();

        while ((*(uint *)(DAT_08005bac + 0x20) & 2) == 0) {
          int current_time2 = get_pointer_value_08003760();

          if (5000 < (uint)(current_time2 - start_time2)) {
            return 3;
          }
        }
      }
    }

    *(uint *)(DAT_08005bac + 0x20) = *(uint *)(DAT_08005bac + 0x20) & 0xfffffcff | settings[1];

    if (is_bit_set2) {
      *(uint *)(settings_memory + 0x1c) &= 0xefffffff;
    }
  }

  if ((*settings & 2) != 0) {
    *(uint *)(DAT_08005bac + 4) = *(uint *)(DAT_08005bac + 4) & 0xffff3fff | settings[2];
  }

  if ((*settings & 0x10) != 0) {
    *(uint *)(DAT_08005bac + 4) = *(uint *)(DAT_08005bac + 4) & 0xffbfffff | settings[3];
  }

  return 0;
}
// FUN_08005e6e 0x08005e6e
void process_flags_08005e6e(int *flag_ptr)
{
  int current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 2) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 2) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xfffffffd;
    *(undefined *)(flag_ptr + 7) = 1;
    if ((*(uint *)(*flag_ptr + 0x18) & 3) == 0) {
      execute_callback_if_flag_set_0800771c();
      doNothing_08005e6a_08005e6a(flag_ptr);
    }
    else {
      do_nothing_08005e68_08005e68();
    }
    *(undefined *)(flag_ptr + 7) = 0;
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 4) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 4) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xfffffffb;
    *(undefined *)(flag_ptr + 7) = 2;
    if ((*(uint *)(*flag_ptr + 0x18) & 0x300) == 0) {
      execute_callback_if_flag_set_0800771c(flag_ptr);
      do_nothing_080064ae_08005e6a(flag_ptr);
    }
    else {
      doNothing_08005e6c_08005e68(flag_ptr);
    }
    *(undefined *)(flag_ptr + 7) = 0;
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 8) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 8) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xfffffff7;
    *(undefined *)(flag_ptr + 7) = 4;
    if ((*(uint *)(*flag_ptr + 0x1c) & 3) == 0) {
      execute_callback_if_flag_set_0800771c(flag_ptr);
      do_nothing_080064ac_08005e6a(flag_ptr);
    }
    else {
      perform_nothing_08005e68(flag_ptr);
    }
    *(undefined *)(flag_ptr + 7) = 0;
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 0x10) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 0x10) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xffffffef;
    *(undefined *)(flag_ptr + 7) = 8;
    if ((*(uint *)(*flag_ptr + 0x1c) & 0x300) == 0) {
      execute_callback_if_flag_set_0800771c(flag_ptr);
      perform_nothing_08005e6a(flag_ptr);
    }
    else {
      perform_nothing_08005e68(flag_ptr);
    }
    *(undefined *)(flag_ptr + 7) = 0;
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 1) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 1) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xfffffffe;
    execute_subtract_four_result_08007736_08007736(flag_ptr);
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 0x80) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 0x80) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xffffff7f;
    perform_nothing_080064ae(flag_ptr);
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 0x40) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 0x40) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xffffffbf;
    perform_nothing_08005e6c(flag_ptr);
  }
  current_flag_ptr = *flag_ptr;
  if (((*(uint *)(current_flag_ptr + 0x10) & 0x20) != 0) && ((*(uint *)(current_flag_ptr + 0xc) & 0x20) != 0)) {
    *(undefined4 *)(current_flag_ptr + 0x10) = 0xffffffdf;
    perform_nothing_080064ac(flag_ptr);
  }
  return;
}
// FUN_08004024 0x08004024
void set_flag_08004024(int flag_value) {
  if (flag_value != 4) {
    *DAT_08004040 = *DAT_08004040 & 0xfffffffb;
    return;
  }
  *DAT_08004040 = *DAT_08004040 | 4;
  return;
}
// FUN_08005e6a 0x08005e6a
void doNothing_08005e6a(void)
{
  return;
}
// FUN_08002400 0x08002400
int is_valid_input_08002400(int input_index) {
  int index = 0;
  while (index <= 11) {
    if ((PTR_DAT_08002428[(input_index * 0xc + index) * 8] & 0x40) != 0) {
      return 1;
    }
    index++;
  }
  return 0;
}
// FUN_08004a1e 0x08004a1e
void doNothing_08004a1e(void)
{
  return;
}
// FUN_08000588 0x08000588
void process_input_and_update_state_08000588(int input_index) {
  char current_input_char;
  char current_char;
  undefined *input_array;
  input_array = PTR_DAT_080005cc;
  process_input_08002644(PTR_DAT_080005d0 + (uint)(byte)PTR_DAT_080005cc[input_index] * 3);
  current_input_char = input_array[input_index];
  current_char = *PTR_DAT_080005d4;
  if ((current_input_char == current_char) && (current_char != '\0')) {
    *PTR_DAT_080005d4 = current_char + -1;
  }
  else if (current_char != '\0') {
    char next_char = *PTR_DAT_080005d8;
    *PTR_DAT_080005d8 = next_char + 1U;
    PTR_DAT_080005dc[(byte)(next_char + 1U) - 1] = current_input_char;
  }
  input_array[input_index] = 0xff;
  return;
}
// FUN_08002644 0x08002644
void process_input_08002644(byte *input_buffer, uint input_length, uint timer_value, uint timer_status) {
  byte first_byte = input_buffer[0];
  byte modified_byte = PTR_DAT_08002670[first_byte * 8] & 0xbf;
  PTR_DAT_08002670[first_byte * 8] = modified_byte;
  int is_input_valid = is_valid_input_08002400((uint)((ulonglong)DAT_08002674 * (ulonglong)first_byte >> 0x23), input_length, modified_byte, (int)((ulonglong)DAT_08002674 * (ulonglong)first_byte), timer_status);
  if (is_input_valid == 0) {
    update_timer_status_08002578(PTR_DAT_08002678);
  }
  return;
}
// FUN_08008868 0x08008868
void wait_forever_08008868(void)
{
  while(true);
}
// FUN_080036ac 0x080036ac
uint find_char_index_080036ac(int input_char)
{
  uint index = 0;
  if ((uint)(input_char << 0x18) >> 0x1c < 5) {
    for (index = 0; (index < 0x3c && (input_char != (char)PTR_DAT_080036d0[index])); index = index + 1)
    {
    }
  }
  else {
    index = 0xffffffff;
  }
  return index;
}
// FUN_08002f1e 0x08002f1e
void execute_function_pointer_08002f1e(int param_address)
{
  void (*function_pointer)() = *(void (**)(void))(param_address + 0xc0);
  function_pointer();
  return;
}
// FUN_0800885c 0x0800885c
void check_input_and_return_0800885c(undefined4 input1, undefined4 input2, undefined4 input3, undefined4 input4)
{
  check_valid_input(input2, input3, input3, input4, input4);
  return;
}
// FUN_0800643c 0x0800643c
void set_flag_and_enable_interrupts_0800643c(uint **flag_ptr, uint flag_index)
{
  set_bit_in_uint_at_index_08006420(*flag_ptr, flag_index, 4);
  (*flag_ptr)[0x11] |= 0x8000;
  **flag_ptr |= 1;
  return;
}
// FUN_08002fca 0x08002fca
void write_bits_to_device_08002fca(int device_id, int device_data_ptr, int num_bits, int high_bit_value, int low_bit_value) {
  uint bit_index;
  for (bit_index = 0; bit_index < num_bits; bit_index++) {
    wait_for_device_response(high_bit_value);
    set_bit_value(device_data_ptr, 1);
    wait_for_device_response(low_bit_value);
    set_bit_value(device_data_ptr, 0);
  }
  return;
}
// FUN_08009c7c 0x08009c7c
uint32_t process_data_08009c7c(uint32_t *data, int *params) {
  uint32_t result;
  int *param_ptr;
  uint32_t value;
  uint16_t flags;
  int offset;
  int count;
  int block_size;
  code *callback;
  int read_result;
  uint32_t original_data;
  bool is_valid;
  
  if (params[4] == 0) {
    return 0;
  }
  
  if (data == NULL) {
    return 0;
  }
  
  if (data[6] != 0) {
    return 0;
  }
  
  if (params == (int *)PTR_DAT_08009cc4) {
    param_ptr = (int *)data[1];
  }
  else if (params == (int *)PTR_DAT_08009cc8) {
    param_ptr = (int *)data[2];
  }
  else if (params == (int *)PTR_DAT_08009ccc) {
    param_ptr = (int *)data[3];
  }
  else {
    return 0;
  }
  
  flags = *(uint16_t *)(param_ptr + 3);
  
  if (flags == 0) {
    return 0;
  }
  
  block_size = params[4];
  callback = (code *)param_ptr[11];
  
  if (flags & 0x1000) {
    read_result = params[21];
  }
  else {
    original_data = *data;
    *data = 0;
    read_result = (*callback)(data, param_ptr[8], flags & 0x1000, 1);
    if ((read_result == -1) && (*data != 0)) {
      if ((*data != 0x1d) && (*data != 0x16)) {
        *(uint16_t *)(param_ptr + 3) |= 0x40;
        return (*UNRECOVERED_JUMPTABLE_00)();
      }
      *data = original_data;
      goto LAB_08009b86;
    }
  }
  
  if ((flags & 0x4000) && (read_result == 0)) {
    *(uint16_t *)(param_ptr + 3) |= 0x40;
    return (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
  }
  
  if ((flags & 0x8000) && (read_result == 0)) {
    return 0;
  }
  
  count = params[1];
  offset = params[16];
  is_valid = params[13] != 0;
  
  if (is_valid) {
    count -= params[16];
    if (params[13] != 0) {
      count -= params[19];
    }
  }
  
  while (count > 0) {
    if (is_valid) {
      block_size = params[4];
      if (params[13] != 0) {
        block_size -= params[19];
      }
    }
    
    read_result = (*callback)(data, param_ptr[8], block_size, count, unaff_r4, unaff_r5);
    if (read_result < 1) {
      *(uint16_t *)(param_ptr + 3) |= 0x40;
      return (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
    }
    
    count -= read_result;
    offset += read_result;
  }
  
LAB_08009b86:
  *(uint16_t *)(param_ptr + 3) &= 0x3fff;
  params[1] = 0;
  *params = params[4];
  
  if ((flags & 0x2000) && (read_result != -1)) {
    params[21] = read_result;
  }
  
  if ((flags & 0x400) && (read_result != -1 || (*data == 0))) {
    params[21] = read_result;
  }
  
  if (params[13] != 0) {
    param_ptr[13] = 0;
    if (param_ptr[13] != param_ptr + 17) {
      add_to_linked_list_080091d8(data);
    }
    param_ptr[13] = 0;
    return (*UNRECOVERED_JUMPTABLE_00)();
  }
  
  return (*UNRECOVERED_JUMPTABLE_00)(0);
}
// FUN_08009b5c 0x08009b5c

void FUNC_08009b5c(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar11;
  undefined8 uVar12;
  
  process_input_08009fe8(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x8009b6b;
  uVar12 = wait_forever_08008868(1);
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  puVar1 = (uint *)uVar12;
  uVar6 = *(ushort *)(piVar3 + 3);
  uVar5 = (uint)uVar6;
  if ((int)(uVar5 << 0x1c) < 0) {
    iVar2 = piVar3[4];
    if (iVar2 != 0) {
      iVar7 = uVar5 << 0x1e;
      bVar11 = iVar7 != 0;
      if (bVar11) {
        iVar7 = 0;
      }
      iVar9 = *piVar3;
      if (!bVar11) {
        iVar7 = piVar3[5];
      }
      *piVar3 = iVar2;
      piVar3[2] = iVar7;
      for (iVar9 = iVar9 - iVar2; 0 < iVar9; iVar9 = iVar9 - iVar7) {
        iVar7 = (*(code *)piVar3[10])(puVar1,piVar3[8],iVar2,iVar9);
        if (iVar7 < 1) {
          uVar6 = *(ushort *)(piVar3 + 3);
          goto LAB_08009c62;
        }
        iVar2 = iVar2 + iVar7;
      }
    }
  }
  else if (((0 < piVar3[1]) || (0 < piVar3[0x10])) &&
          (pcVar8 = (code *)piVar3[0xb], pcVar8 != (code *)0x0)) {
    uVar10 = *puVar1;
    *puVar1 = 0;
    if ((uVar6 & 0x1000) == 0) {
      iVar2 = (*pcVar8)(puVar1,piVar3[8],uVar5 & 0x1000,1);
      if ((iVar2 == -1) && (uVar5 = *puVar1, uVar5 != 0)) {
        if ((uVar5 != 0x1d) && (uVar5 != 0x16)) {
          *(ushort *)(piVar3 + 3) = *(ushort *)(piVar3 + 3) | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        *puVar1 = uVar10;
        goto LAB_08009b86;
      }
    }
    else {
      iVar2 = piVar3[0x15];
    }
    if (((int)((uint)*(ushort *)(piVar3 + 3) << 0x1d) < 0) &&
       (iVar2 = iVar2 - piVar3[1], piVar3[0xd] != 0)) {
      iVar2 = iVar2 - piVar3[0x10];
    }
    iVar2 = (*(code *)piVar3[0xb])(puVar1,piVar3[8],iVar2,0);
    uVar6 = *(ushort *)(piVar3 + 3);
    if ((iVar2 == -1) &&
       ((0x1d < *puVar1 || (-1 < (int)((DAT_08009c78 >> (*puVar1 & 0xff)) << 0x1f))))) {
LAB_08009c62:
      *(ushort *)(piVar3 + 3) = uVar6 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
      return;
    }
    piVar3[1] = 0;
    *piVar3 = piVar3[4];
    if (((int)((uint)uVar6 << 0x13) < 0) && ((iVar2 != -1 || (*puVar1 == 0)))) {
      piVar3[0x15] = iVar2;
    }
    piVar4 = (int *)piVar3[0xd];
    *puVar1 = uVar10;
    if (piVar4 != (int *)0x0) {
      if (piVar4 != piVar3 + 0x11) {
        add_to_linked_list_080091d8(puVar1);
      }
      piVar3[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08009c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
LAB_08009b86:
                    /* WARNING: Could not recover jumptable at 0x08009b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


// FUN_0800021a 0x0800021a
void process_value_0800021a(uint index, uint value, uint param1, uint param2)
{
  bool is_value_valid;
  int char_index;
  int compare_result;
  
  int value_type = get_value_at_offset_08002fa0(PTR_DAT_080002d8, index, param1, param2, param2);
  if (value_type == 3) {
    if (index < 0x3c) {
      if (PTR_DAT_080002dc[index] == -1) {
        is_value_valid = false;
      }
      else {
        char_index = find_char_index_080036ac();
        if (char_index == 0) {
          is_value_valid = false;
        }
        else {
          char_index = find_char_index_080036ac((int)(char)PTR_DAT_080002dc[index]);
          if (char_index == 1) {
            is_value_valid = false;
          }
          else {
            compare_result = compare_values_0800738a((int)(char)PTR_DAT_080002dc[index], PTR_DAT_080002e8);
            is_value_valid = (compare_result != 0);
          }
        }
      }
    }
    else {
      is_value_valid = false;
    }
    if (is_value_valid) {
      process_bit(index, value);
    }
    set_value_at_index_08002fc2(PTR_DAT_080002d8, index, value);
  }
  else if (value_type == 4) {
    if (index < 0x3c) {
      if (PTR_DAT_080002dc[index] == -1) {
        is_value_valid = false;
      }
      else {
        char_index = find_char_index_080036ac();
        if (char_index == 0) {
          is_value_valid = false;
        }
        else {
          char_index = find_char_index_080036ac((int)(char)PTR_DAT_080002dc[index]);
          if (char_index == 1) {
            is_value_valid = false;
          }
          else {
            is_value_valid = true;
          }
        }
      }
    }
    else {
      is_value_valid = false;
    }
    if (is_value_valid) {
      set_value_based_on_conditions_080026b0(PTR_DAT_080002e4 + (uint)(byte)PTR_DAT_080002e0[index] * 3, value);
    }
    set_value_at_index_08002fc2(PTR_DAT_080002d8, index, value);
    return;
  }
  return;
}
// FUN_08008a6c 0x08008a6c
char check_bit_and_return_if_set_08008a6c(uint bit_data, uint bit_position)
{
  uint bit_mask = 1 << (bit_position & 0xf) & 0xffff;
  if (bit_data & bit_mask) {
    return 1;
  }
  return 0;
}
// FUN_080026f8 0x080026f8
uint calculate_index_from_input_080026f8(byte *input) {
  uint input_value = (uint)*input;
  uint index = input_value * 8;
  uint byte_value = (uint)(byte)PTR_DAT_08002708[index];
  uint shifted_value = byte_value << 0x19;
  uint result = shifted_value >> 0x1f;
  return result;
}
// FUN_080085b8 0x080085b8
bool check_combination_080085b8(int index)
{
  uint combined_value = combine_two_bytes(*(undefined4 *)(PTR_DAT_080085d8 + (uint)*(byte *)(index + 0x44) * 4));
  return (combined_value & 0x22) == 0x22;
}
// FUN_08001c08 0x08001c08
uint8_t readNextByte_08001c08(void)
{
  uint8_t nextByte = get_next_byte_08002720(PTR_DAT_08001c14);
  return nextByte;
}
// FUN_080075dc 0x080075dc
int check_clock_source_080075dc(uint8_t clock_source)
{
  uint16_t extracted_data1;
  uint16_t extracted_data2;
  uint16_t extracted_data3;
  uint16_t extracted_data4;
  uint16_t local_var1 = 0;
  uint16_t local_var2 = 0;
  uint16_t local_var3 = 0;
  uint16_t local_var4 = 0;
  uint16_t local_var5 = 0;
  extract_data(&extracted_data1, &extracted_data2);
  int timer_status = check_timer_status(clock_source);
  uint16_t shifted_value = 0;
  if (timer_status == 1) {
    shifted_value = get_shifted_value_from_pointer_08005a28();
  }
  else if (timer_status == 2) {
    shifted_value = get_shifted_value_from_pointer_08005a48();
    local_var4 = local_var5;
  }
  else {
    initialize_and_call_function(PTR_s_TIM__Unknown_clock_source_08007644);
    shifted_value = 0;
    local_var4 = 0;
  }
  if (local_var4 != 0x500) {
    if (local_var4 < 0x501) {
      if (local_var4 != 0x400) {
        return shifted_value;
      }
    }
    else if ((local_var4 != 0x600) && (local_var4 != 0x700)) {
      return shifted_value;
    }
  }
  return shifted_value << 1;
}
// FUN_08007544 0x08007544
int determine_timer_type_08007544(uint32_t timer_value) {
  if (timer_value == 0xffffffff) {
    return 0;
  }
  if (timer_value == DAT_08007588) {
    return 0x1d;
  }
  if (DAT_08007588 < timer_value) {
    if (timer_value == DAT_0800758c) {
      return 0x1e;
    }
    if (timer_value == DAT_0800758c + 0x12400) {
      return 0x19;
    }
  }
  else if (timer_value == 0x40000000) {
    return 0x1c;
  }
  initialize_and_call_function(PTR_s_TIM__Unknown_timer_IRQn_08007590);
  return 0;
}
// FUN_08007ff0 0x08007ff0
void execute_command_and_update_values_08007ff0(uint input_value)
{
  int command_result = subtract_four_from_input();
  bool is_valid_command = (*(code **)(command_result + COMMAND_FUNCTION_OFFSET) != (code *)0x0) && (*(char *)(command_result + COMMAND_VALID_FLAG_OFFSET) == DAT_08007f7c) && (*(char *)(command_result + COMMAND_CHAR_OFFSET) != ' ');
  if (is_valid_command) {
    (**(code **)(command_result + COMMAND_FUNCTION_OFFSET))(command_result + COMMAND_ARGUMENT_OFFSET);
  }
  set_and_update_values(input_value);
  return;
}
// FUN_08008990 0x08008990
void process_bit_08008990(uint bit_index, uint operation_type, uint update_value, uint *data_array)
{
  int flag_index;
  uint *PTR_DAT_08008a14;
  int bit_value;

  if (bit_index < 0x3c) {
    flag_index = (int)(char)PTR_DAT_08008a14[bit_index];
    PTR_DAT_08008a14 = PTR_DAT_08008a14;
  }
  else {
    flag_index = -1;
    PTR_DAT_08008a14 = data_array;
  }

  if (flag_index != -1) {
    bit_value = read_bit_at_position_08006b28(flag_index, PTR_DAT_08008a14, update_value, data_array);
    if (bit_value != 0) {
      bit_value = compare_values_0800738a(flag_index, PTR_DAT_08008a14);
      if (bit_value != 0) {
        check_and_update_flags(flag_index);
      }
      update_bit_08006b5c(flag_index, PTR_DAT_08008a14);
    }

    switch (operation_type) {
      case 0:
        set_flag_and_update_data_08007258(flag_index, 0);
        break;
      case 1:
        set_flag_and_update_data_08007258(flag_index, 1, 0);
        break;
      case 2:
        set_flag_and_update_data_08007258(flag_index, 0, 1);
        break;
      case 3:
        set_flag_and_update_data_08007258(flag_index, 0, 2);
        break;
    }

    set_bit_at_index_08006b3e(flag_index, PTR_DAT_08008a14);
  }
  return;
}
// FUN_08008078 0x08008078

void FUNC_08008078(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (param_1 != (int *)0x0) {
    iVar2 = get_parameter_value_08007320((int)*(char *)(param_1 + 0x16),PTR_DAT_08008330);
    iVar3 = get_parameter_value_08007320((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08008334);
    if ((iVar3 == 0) || (iVar2 == 0)) {
      initialize_and_call_function_080098d8(PTR_s_ERROR__at_least_one_UART_pin_has_08008348,iVar3);
    }
    else {
      iVar4 = compare_and_return_080073ae(iVar2);
      *param_1 = iVar4;
      iVar1 = DAT_08008340;
      iVar3 = DAT_0800833c;
      iVar2 = DAT_08008338;
      if (iVar4 == 0) {
        initialize_and_call_function_080098d8(PTR_s_ERROR__U_S_ART_pins_mismatch_0800834c);
      }
      else {
        if (iVar4 == DAT_08008338) {
          *(uint *)(DAT_08008338 + 0xd80c) = *(uint *)(DAT_08008338 + 0xd80c) | 0x4000;
          *(uint *)(iVar2 + 0xd80c) = *(uint *)(iVar2 + 0xd80c) & 0xffffbfff;
          *(uint *)(iVar2 + 0xd818) = *(uint *)(iVar2 + 0xd818) | 0x4000;
          *(undefined *)(param_1 + 0x11) = 0;
          *(undefined *)((int)param_1 + 0x5a) = 0x25;
        }
        else if (iVar4 == DAT_0800833c) {
          *(uint *)(DAT_0800833c + 0x1cc10) = *(uint *)(DAT_0800833c + 0x1cc10) | 0x20000;
          *(uint *)(iVar3 + 0x1cc10) = *(uint *)(iVar3 + 0x1cc10) & 0xfffdffff;
          *(uint *)(iVar3 + 0x1cc1c) = *(uint *)(iVar3 + 0x1cc1c) | 0x20000;
          *(undefined *)(param_1 + 0x11) = 1;
          *(undefined *)((int)param_1 + 0x5a) = 0x26;
        }
        else if (iVar4 == DAT_08008340) {
          *(uint *)(DAT_08008340 + 0x1c810) = *(uint *)(DAT_08008340 + 0x1c810) | 0x40000;
          *(uint *)(iVar1 + 0x1c810) = *(uint *)(iVar1 + 0x1c810) & 0xfffbffff;
          *(uint *)(iVar1 + 0x1c81c) = *(uint *)(iVar1 + 0x1c81c) | 0x40000;
          *(undefined *)(param_1 + 0x11) = 2;
          *(undefined *)((int)param_1 + 0x5a) = 0x27;
        }
        uVar5 = set_flag_08006bb8((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        uVar6 = find_param_08007376((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08008334);
        local_20 = 1 << (*(byte *)((int)param_1 + 0x59) & 0xf) & 0xffff;
        local_1c = (uVar6 >> 3 & 1) << 4 | uVar6 & 7;
        local_18 = (uVar6 << 0x1a) >> 0x1e;
        *(uint *)(DAT_08008344 + 0x18) = *(uint *)(DAT_08008344 + 0x18) | 1;
        switch((uVar6 << 0x11) >> 0x19) {
        case 1:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) | 0x7000001;
          break;
        case 2:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) & 0xfffffffe | 0x7000000;
          break;
        case 3:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) | 0x7000002;
          break;
        case 4:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) & 0xfffffffd | 0x7000000;
          break;
        case 5:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) | 0x7000004;
          break;
        case 6:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) & 0xfffffffb | 0x7000000;
          break;
        case 7:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) | 0x7000008;
          break;
        case 8:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) & 0xfffffff7 | 0x7000000;
          break;
        case 9:
          *(uint *)(DAT_08008350 + 4) = *(uint *)(DAT_08008350 + 4) | 0x7000030;
          break;
        case 10:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffffffcf | 0x7000010;
          break;
        case 0xb:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffffffcf | 0x7000000;
          break;
        case 0xc:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) | 0x70000c0;
          break;
        case 0xd:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffffff3f | 0x7000040;
          break;
        case 0xe:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffffff3f | 0x7000000;
          break;
        case 0xf:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) | 0x7000300;
          break;
        case 0x10:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xfffffcff | 0x7000200;
          break;
        case 0x11:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xfffffcff | 0x7000100;
          break;
        case 0x12:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xfffffcff | 0x7000000;
          break;
        case 0x13:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) | 0x7000c00;
          break;
        case 0x14:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xfffff3ff | 0x7000800;
          break;
        case 0x15:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xfffff3ff | 0x7000000;
          break;
        case 0x16:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) | 0x7001000;
          break;
        case 0x17:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffffefff | 0x7000000;
          break;
        case 0x1b:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) | 0x7008000;
          break;
        case 0x1c:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xffff7fff | 0x7000000;
          break;
        case 0x21:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xf8ffffff;
          break;
        case 0x22:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xf8ffffff | 0x1000000;
          break;
        case 0x23:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xf8ffffff | 0x2000000;
          break;
        case 0x24:
          *(uint *)(DAT_080084ac + 4) = *(uint *)(DAT_080084ac + 4) & 0xf8ffffff | 0x4000000;
        }
        local_14 = 3;
        FUNC_080040e8(uVar5,&local_20);
        uVar5 = set_flag_08006bb8((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        uVar6 = find_param_08007376((int)*(char *)(param_1 + 0x16),PTR_DAT_08008330);
        local_20 = 1 << (*(byte *)(param_1 + 0x16) & 0xf) & 0xffff;
        local_1c = (uVar6 >> 3 & 1) << 4 | uVar6 & 7;
        local_18 = (uVar6 << 0x1a) >> 0x1e;
        FUNC_080040e8(uVar5,&local_20);
        *(int **)(PTR_DAT_08008354 + (uint)*(byte *)(param_1 + 0x11) * 4) = param_1 + 1;
        param_1[1] = *param_1;
        param_1[2] = param_1[0x12];
        param_1[3] = param_1[0x13];
        param_1[4] = param_1[0x14];
        param_1[5] = param_1[0x15];
        param_1[6] = 0xc;
        param_1[7] = 0;
        param_1[8] = 0;
        check_and_set_value_0800674e(param_1 + 1);
      }
    }
    return;
  }
  return;
}


// FUN_08004396 0x08004396
DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_oDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_dDAT_PDAT_TDAT_RDAT__DAT_ set_param_value_08004396(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_3DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_3DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT_[DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_]DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_3DAT_PDAT_TDAT_RDAT__DAT_2DAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_yDAT_PDAT_TDAT_RDAT__DAT_[DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_]DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_&DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
// FUN_08003fb0 0x08003fb0
void set_bit_in_array_08003fb0(uint index) {
  if (index >= 0) {
    int array_index = (index >> 5) + 0x20;
    int* array_ptr = (int *)(DAT_08003fd4 + array_index * 4);
    int bit_index = index & 0x1f;
    int bit_mask = 1 << bit_index;
    *array_ptr = bit_mask;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}
// FUN_080052f0 0x080052f0
void check_and_execute_command_080052f0(uint **command_data_ptr) {
  uint *command_data = *command_data_ptr;
  uint command_flags = command_data[5];
  uint command_status = command_data[1];

  if (((command_flags & DAT_080053c8) != 0) && ((command_status & COMMAND_STATUS_B) != 0)) {
    command_data_ptr[COMMAND_PTR_OFFSET] = (uint *)((uint)command_data_ptr[COMMAND_PTR_OFFSET] | COMMAND_FLAG_C);
    command_data[5] = 0xfffffeff;
    **command_data_ptr = **command_data_ptr | COMMAND_STATUS_D;
  }

  if (((command_flags & COMMAND_FLAG_E) != 0) && ((command_status & COMMAND_STATUS_B) != 0)) {
    command_data_ptr[COMMAND_PTR_OFFSET] = (uint *)((uint)command_data_ptr[COMMAND_PTR_OFFSET] | COMMAND_FLAG_F);
    (*command_data_ptr)[5] = 0xfffffdff;
  }

  if (((command_flags & COMMAND_FLAG_G) != 0) && ((command_status & COMMAND_STATUS_B) != 0)) {
    char command_char = *(char *)((int)command_data_ptr + 0x3d);
    if (((*(char *)((int)command_data_ptr + 0x3e) == ' ') && (*(short *)((int)command_data_ptr + 0x2a) == 0)) && (((command_char == '!' || (command_char == ')')) || ((command_char == '(' && (command_data_ptr[0xc] == (uint *)0x21)))))) {
      execute_update_command(command_data_ptr);
    }
    else {
      command_data_ptr[COMMAND_PTR_OFFSET] = (uint *)((uint)command_data_ptr[COMMAND_PTR_OFFSET] | COMMAND_FLAG_H);
      if (*(char *)((int)command_data_ptr + 0x3e) == '\x10') {
        **command_data_ptr = **command_data_ptr | COMMAND_STATUS_I;
      }
      (*command_data_ptr)[5] = 0xfffffbff;
    }
  }

  if (((command_flags & COMMAND_FLAG_J) != 0) && ((command_status & COMMAND_STATUS_B) != 0)) {
    command_data_ptr[COMMAND_PTR_OFFSET] = (uint *)((uint)command_data_ptr[COMMAND_PTR_OFFSET] | COMMAND_FLAG_K);
    (*command_data_ptr)[5] = 0xfffff7ff;
  }

  if (command_data_ptr[COMMAND_PTR_OFFSET] != (uint *)0x0) {
    execute_param_08004f3c(command_data_ptr);
  }
  return;
}
// FUN_08008f0c 0x08008f0c
void doNothing_08008f0c(void)
{
  return;
}
// FUN_08002ec4 0x08002ec4
void execute_function_08002ec4(int param){
    void (*function_pointer)() = (**(code **)(**(int **)(param + 0xc0) + 8));
    function_pointer();
    return;
}
// FUN_08007306 0x08007306
DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ find_parameter_value_08007306(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_gDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_,DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_hDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_wDAT_PDAT_TDAT_RDAT__DAT_hDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_!DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_-DAT_PDAT_TDAT_RDAT__DAT_1DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_fDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_gDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_vDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_{DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_*DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_(DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_4DAT_PDAT_TDAT_RDAT__DAT_)DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_pDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_aDAT_PDAT_TDAT_RDAT__DAT_mDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT__DAT_PDAT_TDAT_RDAT__DAT_lDAT_PDAT_TDAT_RDAT__DAT_iDAT_PDAT_TDAT_RDAT__DAT_sDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_+DAT_PDAT_TDAT_RDAT__DAT_=DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_xDAT_PDAT_TDAT_RDAT__DAT_cDAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_eDAT_PDAT_TDAT_RDAT__DAT_tDAT_PDAT_TDAT_RDAT__DAT_uDAT_PDAT_TDAT_RDAT__DAT_rDAT_PDAT_TDAT_RDAT__DAT_nDAT_PDAT_TDAT_RDAT__DAT_ DAT_PDAT_TDAT_RDAT__DAT_0DAT_PDAT_TDAT_RDAT__DAT_;DAT_PDAT_TDAT_RDAT__DAT_
DAT_PDAT_TDAT_RDAT__DAT_}DAT_PDAT_TDAT_RDAT__DAT_
// FUN_08008f0e 0x08008f0e
void initialize_device_and_validate_input_08008f0e()
{
  updateParameter_08003f0c(3);
  validate_input();
  return;
}
// FUN_08002f2c 0x08002f2c
void set_value_at_address_08002f2c(uint8_t value, uint16_t address) {
  switch(address) {
    case 0x90:
      *(uint8_t*)PTR_DAT_08002f74 = value;
      break;
    case 0xc0:
      *(uint8_t*)PTR_DAT_08002f70 = value;
      break;
    case 0xd0:
      *(uint8_t*)PTR_DAT_08002f78 = value;
      break;
    case 0xe0:
      *(uint8_t*)PTR_DAT_08002f6c = value;
      break;
    case 0xf4:
      *(uint8_t*)PTR_DAT_08002f7c = value;
      break;
    case 0xf5:
      *(uint8_t*)PTR_DAT_08002f80 = value;
      break;
  }
}
// FUN_08004954 0x08004954
int process_input_08004954(uint **input_pointer, uint *input_data, int input_length, uint *output_data) {
  int result;
  uint *pointer_to_input_data;
  if (*(char *)((int)input_pointer + 0x3d) == '(') {
    if (input_data == NULL) {
      result = 1;
    }
    else if (input_length == 0) {
      result = 1;
    }
    else if (*(char *)(input_pointer + 0xf) == '\x01') {
      result = 2;
    }
    else {
      *(undefined *)(input_pointer + 0xf) = 1;
      pointer_to_input_data = *input_pointer;
      if ((*pointer_to_input_data & 1) == 0) {
        *pointer_to_input_data = *pointer_to_input_data | 1;
      }
      **input_pointer = **input_pointer & 0xfffff7ff;
      *(undefined *)((int)input_pointer + 0x3d) = 0x2a;
      *(undefined *)((int)input_pointer + 0x3e) = 0x20;
      result = 0;
      input_pointer[0x10] = NULL;
      input_pointer[9] = input_data;
      *(short *)((int)input_pointer + 0x2a) = (short)input_length;
      input_pointer[0xb] = output_data;
      *(undefined2 *)(input_pointer + 10) = *(undefined2 *)((int)input_pointer + 0x2a);
      *(undefined *)(input_pointer + 0xf) = 0;
      (*input_pointer)[1] = (*input_pointer)[1] | 0x700;
    }
  }
  else {
    result = 2;
  }
  return result;
}
// FUN_08005cec 0x08005cec
void update_data_08005cec(int data_index, uint *data_array)
{
  uint updated_flags;
  uint old_flags;
  uint new_flags;

  old_flags = *(uint *)(data_index + 0x20);
  *(uint *)(data_index + 0x20) = old_flags & 0xfffffffe;
  new_flags = (old_flags & 0xfffffffd) | data_array[2];
  if (data_index == DAT_08005d44) {
    new_flags = (new_flags & 0xfffffff7) | data_array[3];
    updated_flags = (*(uint *)(data_index + 4) & 0xfffffcff) | data_array[5] | data_array[6];
  }
  else {
    updated_flags = *(uint *)(data_index + 4);
  }
  *(uint *)(data_index + 4) = updated_flags;
  *(uint *)(data_index + 0x18) = (*(uint *)(data_index + 0x18) & 0xffffff8c) | data_array[0];
  *(uint *)(data_index + 0x34) = data_array[1];
  *(uint *)(data_index + 0x20) = new_flags;
  return;
}
// FUN_0800886c 0x0800886c
void initialize_ptr_dat_value_0800886c(void)
{
  int new_value = 22;
  int* PTR_DAT_08008878 = (int*)PTR_DAT_08008878;
  *PTR_DAT_08008878 = new_value;
}
// FUN_08003748 0x08003748
void addByteToUintAndStoreResult_08003748(void)
{
  uint *(uint *)PTR_DAT_08003758 = (uint *)PTR_DAT_08003758;
  byte *(byte *)PTR_DAT_0800375c = *(byte *)PTR_DAT_0800375c;
  int *(int *)PTR_DAT_08003758 = (int *)PTR_DAT_08003758;
  *(uint *)PTR_DAT_08003758 = (uint)*(byte *)PTR_DAT_0800375c + *(int *)PTR_DAT_08003758;
  return;
}
// FUN_080040e8 0x080040e8

void FUNC_080040e8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = 0;
  uVar5 = 0;
  do {
    if (0xf < uVar5) {
      return;
    }
    uVar3 = 1 << (uVar5 & 0xff);
    uVar4 = *param_2 & uVar3;
    if (uVar3 == uVar4) {
      uVar6 = param_2[1];
      if (uVar6 == 0x12) {
        uVar7 = param_2[3] + 0xc;
      }
      else if (uVar6 < 0x13) {
        if (uVar6 == 2) {
          uVar7 = param_2[3] + 8;
        }
        else if (uVar6 < 3) {
          if (uVar6 == 0) goto LAB_0800423a;
          if (uVar6 == 1) {
            uVar7 = param_2[3];
          }
        }
        else if (uVar6 == 3) {
          uVar7 = 0;
        }
        else if (uVar6 == 0x11) {
          uVar7 = param_2[3] + 4;
        }
      }
      else {
        if (uVar6 != DAT_080042c8) {
          if (DAT_080042c8 < uVar6) {
            if (uVar6 == DAT_080042cc) goto LAB_0800423a;
            uVar9 = DAT_080042cc + 0x10000;
            uVar2 = DAT_080042cc;
          }
          else {
            uVar9 = DAT_080042c8 - 0x100000;
            uVar2 = DAT_080042c8;
          }
          if ((uVar6 != uVar9) && (uVar6 != uVar2 - 0xf0000)) goto LAB_080040fe;
        }
LAB_0800423a:
        if (param_2[2] == 0) {
          uVar7 = 4;
        }
        else if (param_2[2] == 1) {
          param_1[4] = uVar3;
          uVar7 = 8;
        }
        else {
          param_1[5] = uVar3;
          uVar7 = 8;
        }
      }
LAB_080040fe:
      uVar3 = uVar5;
      puVar1 = param_1;
      if (0xff < uVar4) {
        uVar3 = uVar5 - 8;
        puVar1 = param_1 + 1;
      }
      *puVar1 = *puVar1 & ~(0xf << (uVar3 << 2 & 0xff)) | uVar7 << (uVar3 << 2 & 0xff);
      if ((param_2[1] & 0x10000000) != 0) {
        *(uint *)(DAT_080042bc + 0x18) = *(uint *)(DAT_080042bc + 0x18) | 1;
        iVar8 = (uVar5 & 3) << 2;
        if (param_1 == DAT_080042d0) {
          iVar10 = 0;
        }
        else if (param_1 == DAT_080042d0 + 0x100) {
          iVar10 = 1;
        }
        else if (param_1 == DAT_080042d0 + 0x200) {
          iVar10 = 2;
        }
        else if (param_1 == DAT_080042d0 + 0x300) {
          iVar10 = 3;
        }
        else {
          iVar10 = 4;
        }
        *(uint *)(DAT_080042c0 + ((uVar5 >> 2) + 2) * 4) =
             *(uint *)(DAT_080042c0 + ((uVar5 >> 2) + 2) * 4) & ~(0xf << iVar8) | iVar10 << iVar8;
        if ((param_2[1] & 0x10000) == 0) {
          *DAT_080042c4 = *DAT_080042c4 & ~uVar4;
        }
        else {
          *DAT_080042c4 = *DAT_080042c4 | uVar4;
        }
        if ((param_2[1] & 0x20000) == 0) {
          DAT_080042c4[1] = DAT_080042c4[1] & ~uVar4;
        }
        else {
          DAT_080042c4[1] = DAT_080042c4[1] | uVar4;
        }
        if ((param_2[1] & 0x100000) == 0) {
          DAT_080042c4[2] = DAT_080042c4[2] & ~uVar4;
        }
        else {
          DAT_080042c4[2] = DAT_080042c4[2] | uVar4;
        }
        if ((param_2[1] & 0x200000) == 0) {
          DAT_080042c4[3] = DAT_080042c4[3] & ~uVar4;
        }
        else {
          DAT_080042c4[3] = uVar4 | DAT_080042c4[3];
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


// FUN_080036d4 0x080036d4
void do_nothing_080036d4(void)
{
  return;
}
// FUN_0800288c 0x0800288c
int copy_data_to_buffer_0800288c(int buffer_address, char data, int data_size)
{
  int result;
  char *buffer_pointer;
  int buffer_size;

  buffer_pointer = PTR_DATA_BUFFER_POINTER;
  if (*PTR_DAT_08002908 == 0) {
    result = copy_data_to_buffer_0800288c_08007ede(buffer_address + 0x14, &data, data_size);
    if (result == 0) {
      result = 1;
    }
    else {
      result = 0;
    }
  }
  else {
    buffer_size = (int)(unsigned char)*PTR_DAT_08002910 + 1;
    if ((unsigned char)*PTR_DAT_0800290c < buffer_size) {
      if (buffer_size < 0x20) {
        buffer_size = 0x20;
      }
      result = allocate_and_copy_data(PTR_DAT_08002914, buffer_size);
      *PTR_DATA_BUFFER_POINTER = result;
      if (result == 0) {
        result = 0;
      }
      else {
        result = (int)(unsigned char)buffer_size;
      }
      *PTR_DAT_0800290c = result;
    }
    buffer_pointer = PTR_DAT_08002918;
    if (*PTR_DAT_08002914 == 0) {
      *(int *)(buffer_address + 4) = 1;
      result = 0;
    }
    else {
      *(char *)(*(int *)PTR_DAT_08002914 + (int)(unsigned char)*PTR_DAT_08002918) = data;
      char buffer_used_size = *buffer_pointer + 1;
      *buffer_pointer = buffer_used_size;
      *PTR_DAT_0800290c = buffer_used_size;
      result = 1;
    }
  }
  return result;
}
// FUN_0800010c 0x0800010c
bool isFirstCallToFunction_0800010c(bool *PTR_DAT_08000124, bool DAT_08000128, bool (*PTR_FUN_0800012c)()){
  if (!*PTR_DAT_08000124) {
    if (DAT_08000128) {
      PTR_FUN_0800012c();
    }
    *PTR_DAT_08000124 = true;
  }
  return *PTR_DAT_08000124;
}
// FUN_08002e26 0x08002e26
void setParameterAndExecuteCommands_08002e26(int objectAddress, int parameterValue)
{
  *(int *)(objectAddress + 0xc0) = parameterValue;
  copy_value_to_pointer_08003154(objectAddress + 0x40);
  executeCommandsOnObject_08002ddc(objectAddress);
  encode_data_from_pointer_08002df6(objectAddress);
  return;
}
// FUN_080036d8 0x080036d8
int validate_and_set_input_080036d8(uint input)
{
  int validated_input = validate_input_divided_by_constant(input);
  if (validated_input != 0) {
    return 1;
  }
  if (validated_input > 15) {
    return 1;
  }
  set_bits_08003f30(validated_input);
  *(uint *)PTR_DAT_08003720 = validated_input;
  return 0;
}
// FUN_08006e68 0x08006e68

void FUNC_08006e68(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_08007100;
  iVar2 = find_param_08007376((int)(char)*PTR_DAT_08007100,PTR_DAT_08007104);
  set_flags_based_on_value_08007438(param_1);
  uVar3 = set_flag_08006bb8((uint)((int)(char)*puVar1 << 0x18) >> 0x1c);
  local_1c = 2;
  local_18 = 0;
  local_14 = 3;
  *(uint *)(DAT_08007108 + 0x18) = *(uint *)(DAT_08007108 + 0x18) | 1;
  switch((uint)(iVar2 << 0x11) >> 0x19) {
  case 1:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000001;
    break;
  case 2:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffffe | 0x7000000;
    break;
  case 3:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000002;
    break;
  case 4:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffffd | 0x7000000;
    break;
  case 5:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000004;
    break;
  case 6:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffffb | 0x7000000;
    break;
  case 7:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000008;
    break;
  case 8:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffff7 | 0x7000000;
    break;
  case 9:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000030;
    break;
  case 10:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffffffcf | 0x7000010;
    break;
  case 0xb:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffffffcf | 0x7000000;
    break;
  case 0xc:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x70000c0;
    break;
  case 0xd:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffffff3f | 0x7000040;
    break;
  case 0xe:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffffff3f | 0x7000000;
    break;
  case 0xf:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000300;
    break;
  case 0x10:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffcff | 0x7000200;
    break;
  case 0x11:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffcff | 0x7000100;
    break;
  case 0x12:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffffcff | 0x7000000;
    break;
  case 0x13:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7000c00;
    break;
  case 0x14:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffff3ff | 0x7000800;
    break;
  case 0x15:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xfffff3ff | 0x7000000;
    break;
  case 0x16:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7001000;
    break;
  case 0x17:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffffefff | 0x7000000;
    break;
  case 0x1b:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) | 0x7008000;
    break;
  case 0x1c:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xffff7fff | 0x7000000;
    break;
  case 0x21:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xf8ffffff;
    break;
  case 0x22:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xf8ffffff | 0x1000000;
    break;
  case 0x23:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xf8ffffff | 0x2000000;
    break;
  case 0x24:
    *(uint *)(DAT_0800710c + 4) = *(uint *)(DAT_0800710c + 4) & 0xf8ffffff | 0x4000000;
  }
  local_20 = 1 << ((byte)*PTR_DAT_08007100 & 0xf) & 0xffff;
  FUNC_080040e8(uVar3,&local_20);
  return;
}


// FUN_080086e8 0x080086e8
unsigned int find_number_080086e8(int target) {
  unsigned int index;
  if (target == 0) {
    index = 5;
  }
  else {
    index = 0;
    while (true) {
      if (index > 4) {
        return index;
      }
      if (target == *(int *)(PTR_DAT_08008708 + index * 4)) {
        break;
      }
      index = (index + 1) & 0xff;
    }
  }
  return index;
}
// FUN_0800a110 0x0800a110
void set_value_from_function_result_0800a110(int *output_value, undefined4 input_value)
{
  undefined *constant_pointer = PTR_DAT_0800a12c;
  *(undefined4 *)PTR_DAT_0800a12c = 0;
  int function_result = returnOne_08008850(input_value);
  if ((function_result == -1) && (*(int *)constant_pointer != 0)) {
    *output_value = *(int *)constant_pointer;
  }
  return;
}
// FUN_08003b8c 0x08003b8c
int check_if_pointer_is_valid_08003b8c(int *pointer)
{
  int pointer_value = *pointer;
  if ((*(uint *)(pointer_value + 8) & 1) == 0) {
    return 0;
  }
  *(uint *)(pointer_value + 8) = *(uint *)(pointer_value + 8) & 0xfffffffe;
  int initial_pointer_value = get_pointer_value_08003760();
  do {
    if ((*(uint *)(*pointer + 8) & 1) == 0) {
      return 0;
    }
    int current_pointer_value = get_pointer_value_08003760();
  } while ((uint)(current_pointer_value - initial_pointer_value) < 3);
  pointer[10] = pointer[10] | 0x10;
  pointer[0xb] = pointer[0xb] | 1;
  return 1;
}
// FUN_080035b8 0x080035b8
void initialize_device_settings_080035b8(void)
{
  int function_result;
  uint value_from_pointer;
  uint bit_array_update_result;
  uint settings_update_result;

  uint bit_array[] = {0xf, 2, 0, 0x400, 0, 0};
  uint settings[] = {2, 0x8000};

  function_result = FUNC_08005460(&bit_array[0]);
  if (function_result != 0) {
    wait_forever_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654, 0x88);
  }

  bit_array_update_result = validate_and_update_bit_array(&bit_array[0]);
  if (bit_array_update_result != 0) {
    wait_forever_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654, 0x95);
  }

  settings_update_result = update_settings_08005aa4(&settings[0]);
  if (settings_update_result != 0) {
    wait_forever_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654, 0x9c);
  }

  value_from_pointer = get_value_from_pointer_08005a1c();
  validate_input_08003fd8((uint)((ulonglong)DAT_08003650 * (ulonglong)value_from_pointer >> 0x26));
  set_flag_08004024(4);
  set_bits_08003f30(0xffffffff, 0);
  return;
}
// FUN_08001c18 0x08001c18
void process_input_data_and_return_result_08001c18(uint8_t device_address, uint32_t input_data_length, int expected_output_length, uint32_t input_data)
{
  uint8_t *input_buffer = PTR_DAT_08001cbc;
  uint8_t *output_buffer = PTR_DAT_08001cc8;
  if (input_data_length != 0xffffffff) {
    initialize_data(input_buffer, device_address);
    copy_input_data_to_buffer(input_data & 0xff);
    check_and_update_input_data(input_buffer, input_data);
  }
  process_and_return_data(input_buffer, device_address, expected_output_length);
  int input_data_diff = calculate_difference_between_two_bytes(input_buffer);
  if (expected_output_length < input_data_diff) {
    process_data_and_return_result(PTR_DAT_08001cc4, PTR_s_I2C__Too_many_bytes_received_08001cc0);
  }
  else {
    int output_data_diff = calculate_difference_between_two_bytes(output_buffer);
    if (output_data_diff < expected_output_length) {
      process_data_and_return_result(PTR_DAT_08001cc4, PTR_s_I2C__Too_few_bytes_received_08001ccc);
    }
  }
  output_buffer[0] = (char)device_address;
  output_buffer[1] = (char)input_data_length;
  for (int i = 0; i < expected_output_length; i++) {
    int input_byte_diff = calculate_difference_between_two_bytes(input_buffer);
    bool input_buffer_not_empty = (input_byte_diff != 0);
    if (input_buffer_not_empty) {
      output_buffer[i + 2] = read_next_byte();
    }
  }
  process_data_and_offset(PTR_DAT_08001cc4, 0x77, expected_output_length + 2U & 0xff, output_buffer);
  return;
}
// FUN_08006460 0x08006460
void clearBitAndCheckForUpdates_08006460(uint **bitArray, uint bitIndex)
{
  set_bit_in_uint_at_index_08006420(*bitArray, bitIndex, 0);
  uint *arrayPointer = *bitArray;
  if (((arrayPointer[8] & 0x1111) == 0) && ((arrayPointer[8] & 0x444) == 0)) {
    arrayPointer[0x11] &= 0xffff7fff;
  }
  arrayPointer = *bitArray;
  if (((arrayPointer[8] & 0x1111) == 0) && ((arrayPointer[8] & 0x444) == 0)) {
    *arrayPointer &= 0xfffffffe;
  }
  return;
}
// FUN_08004046 0x08004046
void do_nothing_08004046()
{
  // This function does nothing
  return;
}
// FUN_08008880 0x08008880
uint get_device_parameter_08008880(uint param)
{
  bool is_param_valid;
  char device_param_value;
  uint processed_param = 0;
  uint device_param_bits = 0;
  
  if (param < 14) {
    is_param_valid = (param + 46 < 60);
  }
  else {
    is_param_valid = (param < 60);
  }
  
  if (is_param_valid) {
    if (param < 14) {
      param += 46;
    }
    device_param_value = PTR_DAT_080088d8[param];
  }
  else {
    device_param_value = -1;
  }
  
  if (device_param_value != -1) {
    processed_param = process_device_parameter_08006d80();
    device_param_bits = *(uint *)PTR_DAT_080088dc;
    if (device_param_bits != 12) {
      if (device_param_bits < 12) {
        processed_param >>= (12 - device_param_bits) & 0xff;
      }
      else {
        processed_param <<= (device_param_bits - 12) & 0xff;
      }
    }
  }
  return processed_param;
}
// FUN_08004044 0x08004044
void do_nothing_08004044(void)
{
  return;
}
// FUN_08002ed2 0x08002ed2
void execute_code_08002ed2(int input_value)
{
  uint result_value;
  uint bitmask = 0xff;

  result_value = (**(code **)(**(int **)(input_value + 0xc0) + 0xc))();
  if (result_value != 0xffffffff) {
    execute_skipped_code(input_value + 0x44, result_value & bitmask);
  }
  return;
}
// FUN_080073ae 0x080073ae
int compare_and_return_080073ae(int first_num, int second_num) {
  if (first_num != second_num) {
    if (first_num == 0) {
      return second_num;
    }
    if (second_num == 0) {
      return first_num;
    }
    first_num = 0;
  }
  return first_num;
}
// FUN_08000488 0x08000488
void set_device_parameter_08000488(uint parameter_index, int value)
{
  if (parameter_index < 0xE) {
    if (value == 0) {
      *PTR_DAT_080004c8 &= ~(1 << (parameter_index & 0xFF));
      return;
    }
    *PTR_DAT_080004c8 |= 1 << (parameter_index & 0xFF);
    if (*PTR_DAT_080004cc == 0) {
      uint parameter_value = get_device_parameter_value();
      send_parameter_data(PTR_DAT_080004d0, parameter_index, parameter_value);
      return;
    }
  }
  return;
}
// FUN_08003f0c 0x08003f0c
void updateParameter_08003f0c(uint parameter) {
    uint* PTR_DAT_08003f2c = (uint*)(DAT_08003f2c + 0xc);
    uint mask = 0xf8ff;
    uint value = (parameter & 7) << 8 | (*PTR_DAT_08003f2c & mask) | 0x5fa0000;
    *PTR_DAT_08003f2c = value;
    return;
}
// FUN_08008f1c 0x08008f1c
void process_device_data_and_calculate_shift_08008f1c(void)
{
  doNothing_08008f0c();
  initialize_device();
  do {
    do {
      process_device_data_080022f8();
    } while (DAT_08008f38 == 0);
    calculate_shift_if_needed_08008bf4();
  } while( true );
}
// FUN_080058ac 0x080058ac
void validateAndUpdateBitArray_080058ac(uint **bitArray, uint bitIndex)
{
  setBitInUintAtIndex(*bitArray, bitIndex, 0);
  uint *arrayPointer = *bitArray;
  if (((arrayPointer[8] & 0x1111) == 0) && ((arrayPointer[8] & 0x444) == 0)) {
    arrayPointer[0x11] &= 0xffff7fff;
  }
  arrayPointer = *bitArray;
  if (((arrayPointer[8] & 0x1111) == 0) && ((arrayPointer[8] & 0x444) == 0)) {
    *arrayPointer &= 0xfffffffe;
  }
  return;
}
// FUN_08006bb8 0x08006bb8
uint32_t set_flag_08006bb8(uint32_t flag_index){
    uint32_t* DAT_08006c48 = (uint32_t*) (DAT_08006c48 + 0x18);
    uint32_t flag_value = 0;
    switch(flag_index) {
        case 0:
            flag_value = DAT_08006c4c;
            break;
        case 1:
            flag_value = DAT_08006c50;
            break;
        case 2:
            flag_value = DAT_08006c54;
            break;
        case 3:
            flag_value = DAT_08006c58;
            break;
        case 4:
            flag_value = DAT_08006c5c;
            break;
        default:
            flag_value = 0;
            break;
    }
    *DAT_08006c48 |= flag_value;
    return flag_value;
}
// FUN_08007438 0x08007438
void set_flags_based_on_value_08007438(int* value_ptr)
{
  int value = *value_ptr;

  if (value == DAT_080074d0) {
    *(uint *)(DAT_080074d0 + 0xe418) |= 0x800;
    *(int **)PTR_DAT_080074dc = value_ptr;
  }

  if (value == 0x40000000) {
    _DAT_4002101c |= 1;
    *(int **)(PTR_DAT_080074dc + 4) = value_ptr;
  }

  if (value == DAT_080074d4) {
    *(uint *)(DAT_080074d4 + 0x20c1c) |= 2;
    *(int **)(PTR_DAT_080074dc + 8) = value_ptr;
  }

  if (value == DAT_080074d8) {
    *(uint *)(DAT_080074d8 + 0x2081c) |= 4;
    *(int **)(PTR_DAT_080074dc + 0xc) = value_ptr;
  }
}
// FUN_08004aec 0x08004aec
void updateCommand_08004aec(uint **command)
{
  char commandChar = *(char *)((int)*command + 0x3d);
  if (((*command)[0xb] == (uint *)0x4) || ((*command)[0xb] == (uint *)0x8)) {
    if (commandChar == '(') {
      (*command)[0xb] = DAT_08004b7c;
      (*command)[1] &= 0xfffff8ff;
      (*command)[5] = 0xfffffbff;
      **command &= 0xfffffbff;
      (*command)[0xc] = (uint *)0x0;
      *(undefined *)((int)*command + 0x3d) = 0x20;
      *(undefined *)((int)*command + 0x3e) = 0;
      execute_command_and_update_values_08007ff0();
    }
    else {
      (*command)[5] = 0xfffffbff;
    }
  }
  else if (commandChar == '!') {
    (*command)[0xb] = DAT_08004b7c;
    (*command)[0xc] = (uint *)0x21;
    *(undefined *)((int)*command + 0x3d) = 0x20;
    *(undefined *)((int)*command + 0x3e) = 0;
    (*command)[1] &= 0xfffff8ff;
    (*command)[5] = 0xfffffbff;
    **command &= 0xfffffbff;
    doNothing_08004a22();
  }
  else {
    (*command)[5] = 0xfffffbff;
  }
  return;
}
// FUN_0800887c 0x0800887c
int return_one_0800887c()
{
  int result = 1;
  return result;
}
// FUN_08004728 0x08004728
int check_and_update_08004728(uint **input_array, uint *param_2, uint *param_3, uint16_t param_4)
{
  int result = 0;
  uint *current_element;
  int loop_counter = (uint)((unsigned long long)DAT_080047ec * (unsigned long long)(*(uint *)PTR_DAT_080047e8 >> 3) >> 0x28) * 0x19;
  if (*(char *)((int)input_array + 0x3d) == ' ') {
    do {
      if (loop_counter == 0) {
        input_array[0xc] = (uint *)0x0;
        *(undefined *)((int)input_array + 0x3d) = 0x20;
        *(undefined *)(input_array + 0xf) = 0;
        result = 3;
        break;
      }
      current_element = *input_array;
      loop_counter--;
    } while ((current_element[6] & 2) != 0);
    if (*(char *)(input_array + 0xf) == '\x01') {
      result = 2;
    }
    else {
      *(undefined *)(input_array + 0xf) = 1;
      if ((*current_element & 1) == 0) {
        *current_element = *current_element | 1;
      }
      **input_array = **input_array & 0xfffff7ff;
      *(undefined *)((int)input_array + 0x3d) = 0x21;
      *(undefined *)((int)input_array + 0x3e) = 0x10;
      input_array[0x10] = (uint *)0x0;
      input_array[9] = param_3;
      *(uint16_t *)((int)input_array + 0x2a) = param_4;
      input_array[0xb] = global_pointer_2;
      *(uint16_t *)(input_array + 10) = *(uint16_t *)((int)input_array + 0x2a);
      input_array[0x11] = param_2;
      **input_array = **input_array | 0x100;
      *(undefined *)(input_array + 0xf) = 0;
      (*input_array)[1] = (*input_array)[1] | 0x700;
    }
  }
  else {
    result = 2;
  }
  return result;
}
// FUN_08007ede 0x08007ede
int copy_data_to_buffer_08007ede(int dest_buffer, int src_buffer, uint buffer_size)
{
  uint current_index;
  if (buffer_size > 0x20) {
    return 2;
  }
  for (current_index = 0; current_index < buffer_size; current_index++) {
    *(char *)(dest_buffer + current_index + 0x68) = *(char *)(src_buffer + current_index);
    *(char *)(dest_buffer + 0x88) = *(char *)(dest_buffer + 0x88) + 1;
  }
  return 0;
}
// FUN_0800863c 0x0800863c
void addCombinationToDataStructure_0800863c(int combination, int value, int param_3, int param_4)
{
  if (combination != 0) {
    int isCombinationValid = check_combination_080085b8(combination);
    if (isCombinationValid == 0) {
      uint index = (uint)*(byte *)(combination + 0x44);
      *(int *)(PTR_DAT_08008688 + index * 4) = value;
      *(int *)(PTR_DAT_0800868c + index * 4) = combination;
      set_bits_08003f30((int)*(char *)(combination + 0x5a), 0, 1, index, param_4);
      set_bit_at_index_08003f94((int)*(char *)(combination + 0x5a), index);
      set_params_080068d6(*(int *)(PTR_DAT_08008690 + index * 4), combination + 0x45, 1);
    }
  }
}
// thunk_FUN_0800887c 0x0800a01c
int return_one_thunk_0800887c()
{
  return 1;
}
// FUN_080074e0 0x080074e0
void set_flags_based_on_param_080074e0(int *param)
{
  int flag1 = 0x800;
  int flag2 = 0x1;
  int flag3 = 0x2;
  int flag4 = 0x4;
  if (*param == DAT_08007534) {
    DAT_08007540[0x18] &= ~flag1;
  }
  if (*param == 0x40000000) {
    DAT_08007540[0x1c] &= ~flag2;
  }
  if (*param == DAT_08007538) {
    DAT_08007540[0x1c] &= ~flag3;
  }
  if (*param == DAT_0800753c) {
    DAT_08007540[0x1c] &= ~flag4;
  }
  return;
}
// FUN_080073c0 0x080073c0
void execute_code_at_address_080073c0(void)
{
  code *address = *(code **)PTR_DAT_080073d0;
  if (address != NULL) {
    address(*(undefined4 *)PTR_DAT_080073d4);
  }
  return;
}
// FUN_080084b0 0x080084b0
void process_parameter_080084b0(void)
{
  char parameter_key = PTR_DAT_080084f0[1];
  int parameter_value = get_parameter_value(parameter_key, PTR_DAT_080084f4);
  if (parameter_value != 0) {
    int parameter_value2 = get_parameter_value(parameter_key, PTR_DAT_080084f4);
    int found_value = find_value_if_key_not_null(parameter_value2, PTR_DAT_080084f8);
    undefined *data_pointer = PTR_DAT_080084fc;
    PTR_DAT_080084fc[0x59] = found_value;
    data_pointer[0x58] = parameter_key;
    *(undefined4 *)(data_pointer + 0x48) = 0x2580;
    *(undefined4 *)(data_pointer + 0x54) = 0;
    *(undefined4 *)(data_pointer + 0x4c) = 0;
    *(undefined4 *)(data_pointer + 0x50) = 0;
    execute_function(data_pointer);
  }
  return;
}
// FUN_08004050 0x08004050
uint32_t get_value_from_pointer_08004050(uint32_t **pointer_to_pointer)
{
  uint32_t value = **pointer_to_pointer;
  if (*(char *)((int)pointer_to_pointer + 0x21) != '\x02') {
    pointer_to_pointer[0xe] = (uint32_t *)0x4;
    return 1;
  }
  value &= 0xfffffff1;
  value &= 0xfffffffe;
  uint32_t *pointer = *pointer_to_pointer;
  if (pointer == DAT_080040e0) {
    value = 1;
  }
  else if (pointer == DAT_080040e0 + 5) {
    value = 0x10;
  }
  else if (pointer == DAT_080040e0 + 10) {
    value = 0x100;
  }
  else if (pointer == DAT_080040e0 + 0xf) {
    value = 0x1000;
  }
  else if (pointer == DAT_080040e0 + 0x14) {
    value = 0x10000;
  }
  else if (pointer == DAT_080040e0 + 0x19) {
    value = 0x100000;
  }
  else {
    value = 0x1000000;
  }
  *(uint32_t *)(DAT_080040e4 + 4) = value;
  *(char *)((int)pointer_to_pointer + 0x21) = 1;
  *(uint32_t *)(pointer_to_pointer + 8) = 0;
  if (pointer_to_pointer[0xd] != (uint32_t *)0x0) {
    (*(void (*)())pointer_to_pointer[0xd])();
    return 0;
  }
  return 0;
}
// FUN_08008e14 0x08008e14
void set_memory_data_if_valid_08008e14(int input_value_1, int input_value_2)
{
  const int VALID_VALUE_1 = 1;
  const int VALID_VALUE_2 = 0xffff;

  if ((input_value_1 == VALID_VALUE_1) && (input_value_2 == VALID_VALUE_2)) {
    set_data_in_memory_08008df8(PTR_DAT_08008e3c, 0, 0, 0, 0);
  }
  return;
}
// FUN_08005a28 0x08005a28
uint get_shifted_value_from_pointer_08005a28(void)
{
  uint shifted_value = get_value_from_pointer_08005a1c();
  uint index = (*(int *)(DAT_08005a40 + 4) << 0x15) >> 0x1d;
  uint shift_amount = PTR_DAT_08005a44[index];
  uint result = shifted_value >> shift_amount;
  return result;
}
// FUN_080095a8 0x080095a8
uint get_length_of_data_to_write_080095a8(uint data_info[], uint *data_pointer, uint (*write_function)(uint, uint, void *, uint))
{
  uint max_length = data_info[2];
  if (data_info[4] < max_length) {
    max_length = data_info[4];
  }
  uint length = max_length;
  if (*(char *)((int)data_info + 0x43) != '\0') {
    length++;
  }
  if ((int)(*data_info << 0x1a) < 0) {
    length += 2;
    *(undefined *)((int)data_info + length - 2) = 0x30;
    *(undefined *)((int)data_info + length - 1) = *(undefined *)((int)data_info + 0x45);
  }
  uint data_type = *data_info & 6;
  if (data_type == 0) {
    for (; (int)data_type < (int)(data_info[3] - length); data_type++) {
      uint result = write_function(data_info[1], 1, (void *)((int)data_info + 0x19), 1);
      if (result == -1) {
        return 0xffffffff;
      }
    }
  }
  uint data_length = (uint)*(byte *)((int)data_info + 0x43);
  if (data_length != 0) {
    data_length = 1;
  }
  uint padding_length = data_length;
  if ((int)(*data_info << 0x1a) < 0) {
    padding_length += 2;
  }
  uint remaining_length = 0;
  if (data_type != 4) {
    remaining_length = data_info[3] - length;
  }
  if (remaining_length < 0) {
    remaining_length = 0;
  }
  if (data_info[4] < data_info[2]) {
    remaining_length += data_info[2] - data_info[4];
  }
  uint result = write_function(data_info[1], padding_length, (void *)((int)data_info + 0x43), data_length);
  if (result == -1) {
    return 0xffffffff;
  }
  return remaining_length;
}
// FUN_08003002 0x08003002
void write_data_to_device_08003002(int device_address)
{
  bool is_device_busy = (*(char *)(device_address + 0x1f8) != '\0');
  
  if (is_device_busy) {
    return;
  }
  
  process_bits(0xd, 1);
  write_bits_to_device(device_address, 0xd, 2, 0x28, 0xd2);
  delay_execution(0xfa);
  write_bits_to_device(device_address, 0xd, 5, 0x28, 0xd2);
  delay_execution(0x7d);
  return;
}
// FUN_08008ac4 0x08008ac4
void do_nothing_08008ac4(void)
{
  return;
}
// FUN_08003bd8 0x08003bd8
int checkAndUpdatePointer_08003bd8(int *pointer)
{
  if (pointer == NULL) {
    return 1;
  }
  if (pointer[10] == 0) {
    pointer[11] = 0;
    pointer[9] = 0;
    set_flag_and_update_08006ca8();
  }
  int isPointerValid = check_if_pointer_is_valid_08003b8c(pointer);
  uint flag = pointer[10] & 0x10;
  if ((flag == 0) && (isPointerValid == 0)) {
    pointer[10] = pointer[10] & 0xffffeefdU | 2;
    uint mask = pointer[1] | pointer[7] | pointer[3] << 1;
    if (pointer[2] == 0x100 || pointer[2] == 1) {
      mask |= 0x100;
    }
    if (pointer[5] == 1) {
      if (pointer[3] == 0) {
        mask |= (pointer[6] - 1) * 0x2000 | 0x800;
      }
      else {
        pointer[10] |= 0x20;
        pointer[11] |= 1;
      }
    }
    *(uint *)(*pointer + 4) = mask | *(uint *)(*pointer + 4) & 0xffff16ff;
    *(uint *)(*pointer + 8) = DAT_08003ce0 & *(uint *)(*pointer + 8) | mask;
    uint shift = (pointer[2] == 0x100 || pointer[2] == 1) ? (pointer[4] - 1) * 0x100000 : 0;
    *(uint *)(*pointer + 0x2c) = shift | *(uint *)(*pointer + 0x2c) & 0xff0fffff;
    if (mask != (DAT_08003ce4 & *(uint *)(*pointer + 8))) {
      pointer[10] = pointer[10] & 0xffffffedU | 0x10;
      pointer[11] |= 1;
      return 1;
    }
    pointer[11] = 0;
    pointer[10] = pointer[10] & 0xfffffffcU | 1;
    return 0;
  }
  pointer[10] |= 0x10;
  return 1;
}
// FUN_08009d50 0x08009d50
void initialize_blocks_08009d50(int block_ptr)
{
    undefined4 block1 = 0;
    undefined4 block2 = 0;
    undefined4 block3 = 0;
    if (*(int *)(block_ptr + 0x18) == 0)
    {
        *(undefined4 *)(block_ptr + 0x48) = 0;
        *(undefined4 *)(block_ptr + 0x4c) = 0;
        *(undefined4 *)(block_ptr + 0x50) = 0;
        int iVar = *(int *)PTR_PTR_DAT_08009da8;
        *(undefined **)(block_ptr + 0x28) = PTR_LAB_08009cd0_1_08009dac;
        bool is_same = block_ptr == iVar;
        if (is_same)
        {
            iVar = 1;
        }
        if (is_same)
        {
            *(int *)(block_ptr + 0x18) = iVar;
        }
        block1 = allocate_and_initialize_block_08009db0();
        block2 = allocate_and_initialize_block_08009db0(block_ptr);
        block3 = allocate_and_initialize_block_08009db0(block_ptr);
        initializeData_08009cdc(block1, 4, 0);
        initializeData_08009cdc(block2, 9, 1);
        initializeData_08009cdc(block3, 0x12, 2);
        *(int *)(block_ptr + 0x18) = 1;
    }
    return;
}
// FUN_08003366 0x08003366
void set_values_if_param2_equals_113_08003366(int ptr_object, int param2, int value1, int value2)
{
  if (param2 == 0x71) {
    *(int *)(ptr_object + 0x68) = value1;
    *(int *)(ptr_object + 0x40) = value2;
  }
  return;
}
// FUN_080091b0 0x080091b0
void copy_data_to_buffer_080091b0(int dest_address, const char *source_data, int data_length)
{
  char *destination_buffer = (char *)(dest_address - 1);
  const char *source_buffer_end = source_data + data_length;
  for (; source_data != source_buffer_end; source_data++) {
    destination_buffer++;
    *destination_buffer = *source_data;
  }
  return;
}
// FUN_08009108 0x08009108
uint64_t combine_values_08009108(uint32_t value1, uint32_t value2)
{
  if (DAT_08009120 != 0) {
    return ((uint64_t)value1 << 32) | 2;
  }
  return ((uint64_t)value2 << 32);
}
// FUN_0800a18c 0x0800a18c
void update_pointers_and_call_0800a18c(void)
{
  code *jump_table = update_pointers_and_call_0800a18c;
  update_pointer(PTR_DAT_0800a228);
  update_pointer(PTR_DAT_0800a22c);
  update_pointer(PTR_DAT_0800a230);
  update_pointer(PTR_DAT_0800a234);
  update_pointer(PTR_DAT_0800a238);
  update_pointer(PTR_DAT_0800a23c);
  update_pointer(PTR_DAT_0800a240);
  update_pointer(PTR_DAT_0800a244);
  update_pointer(PTR_DAT_0800a248);
  update_pointer(PTR_DAT_0800a24c);
  update_pointer(PTR_DAT_0800a250);
  update_pointer(PTR_DAT_0800a254);
  call_jump_table(jump_table);
  return;
}

void update_pointer(int *pointer)
{
  if (*pointer < 0)
  {
    *pointer = 1;
  }
}

void call_jump_table(code *jump_table)
{
  /* WARNING: Could not recover jumptable at 0x0800a224. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (*jump_table)();
  return;
}
// FUN_08009908 0x08009908
uint allocate_and_copy_data_08009908(uint input_data, uint size)
{
  uint result;
  uint allocated_size = *(uint *)PTR_PTR_DAT_08009914;

  if (input_data != 0) {
    if (size == 0) {
      add_to_linked_list_080091d8();
      result = size;
    }
    else {
      uint calculated_size = calculate_value_0800a154();
      result = input_data;
      if ((calculated_size < size) && (result = allocate_memory_block(allocated_size, size), result != 0)) {
        copy_data_to_buffer_080091b0(result, input_data, size);
        add_to_linked_list_080091d8(allocated_size, input_data);
      }
    }
    return result;
  }
  result = allocate_memory_block(allocated_size, size);
  return result;
}
// FUN_08008a24 0x08008a24
void readBitAndSetValue_08008a24(uint bitIndex, uint value, uint parameter, void* data)
{
  uint bitValue;
  if (bitIndex < 0x3c) {
    bitValue = (uint)(char)PTR_DAT_08008a64[bitIndex];
    data = PTR_DAT_08008a64;
  }
  else {
    bitValue = 0xffffffff;
  }
  if ((bitValue != 0xffffffff) && (read_bit_at_position_08006b28(bitValue, PTR_DAT_08008a68, parameter, data, data) != 0)) {
    uint dataIndex = (bitValue << 0x18) >> 0x1c;
    uint bitMask = 1 << (bitValue & 0xf) & 0xffff;
    uint dataValue = get_data_by_index_08006b7c(dataIndex);
    set_parameter_value_based_on_condition_080072d8(dataValue, bitMask, value, parameter);
  }
}

// FUN_08008abc 0x08008abc
void get_pointer_value_and_return_08008abc(void)
{
  get_pointer_value_and_return_08008abc_0800723c();
  return;
}
// FUN_08002b68 0x08002b68
int process_data_08002b68(uint8_t *data, uint32_t data_len, uint32_t data_id, uint32_t message_id, uint8_t message_type)
{
  int result = 0;
  uint8_t message_data[128];
  
  if (data[data_id + 0x11] == 0) {
    return result;
  }
  
  allocate_and_update_data(data[data_id + 0x1c]);
  
  if (*PTR_DAT_08002bf4 != 0) {
    if (message_type != 0) {
      initialize_data(data, data_len);
      if (message_type > 3) {
        message_type = 3;
      }
      while (message_type > 0) {
        (*(void (**)(uint8_t *, uint8_t))data)(data, data_id >> ((message_type - 1) * 8) & 0xff);
        message_type--;
      }
      check_and_update_value(data, 0);
    }
    
    result = check_message(data + 5, (data_len & 0x7f) << 1, *(int *)PTR_DAT_08002bf4, data[data_id + 0x1c], message_id);
    if (result != 0) {
      data[data_id + 0x1c] = 0;
    }
    *PTR_DAT_08002bf8 = 0;
    *PTR_DAT_08002bfc = (char)data[data_id + 0x1c];
  }
  else {
    data[data_id + 4] = 1;
  }
  return result;
}
// FUN_080005e0 0x080005e0
void clear_memory_080005e0(void)
{
  *PTR_DAT_080005f0 = 0;
  *PTR_DAT_080005f4 = 0xff;
  return;
}
// FUN_08008020 0x08008020
void check_and_set_values_for_input_08008020(void* input)
{
  int input_offset = subtract_four_from_input_08007f78();
  if (*(char *)(input_offset + 0x5d) == '\0') {
    set_and_update_values_080049e0(input);
  }
  return;
}
// FUN_0800674c 0x0800674c
void do_nothing_0800674c(void)
{
  return;
}
// FUN_08005dac 0x08005dac
void update_flags_08005dac(int flag_address, int *data)
{
  uint flag_value = *(uint *)(flag_address + 0x4);
  int value1 = *data;
  int value2 = data[2];

  *(uint *)(flag_address + 0x20) &= 0xffffefff;
  if (flag_address == DAT_08005df0) {
    flag_value = (flag_value & 0xffffbfff) | (data[5] << 6);
  }
  *(uint *)(flag_address + 0x4) = flag_value;
  *(uint *)(flag_address + 0x1c) = (*(uint *)(flag_address + 0x1c) & 0xffff8cff) | (value1 << 8);
  *(int *)(flag_address + 0x40) = data[1];
  *(uint *)(flag_address + 0x20) = (*(uint *)(flag_address + 0x20) & 0xffffdfff) | (value2 << 0xc);
  return;
}
// FUN_0800674e 0x0800674e
int check_and_set_value_0800674e(int *input_ptr)
{
  if (input_ptr != NULL) {
    if (*(char *)((int)input_ptr + 0x39) == '\0') {
      *(undefined *)((int)input_ptr + 0xe) = 0;
      do_nothing_0800674c();
    }
    *(undefined *)((int)input_ptr + 0x39) = 0x24;
    *(uint *)(*input_ptr + 0xc) &= 0xffffdfff;
    calculate_new_value(input_ptr);
    *(uint *)(*input_ptr + 0x10) &= 0xffffb7ff;
    *(uint *)(*input_ptr + 0x14) &= 0xffffffd5;
    *(uint *)(*input_ptr + 0xc) |= 0x2000;
    input_ptr[0xf] = 0;
    *(undefined *)((int)input_ptr + 0x39) = 0x20;
    *(undefined *)((int)input_ptr + 0x3a) = 0x20;
    return 0;
  }
  return 1;
}
// FUN_0800771c 0x0800771c
void execute_callback_if_flag_set_0800771c(int flag_address)
{
  int callback_ptr = subtract_four_08007718();
  if ((*(code **)(callback_ptr + 0x4c) != (code *)0x0) && (*(char *)(flag_address + 0x1c) == '\x01')) {
    (**(code **)(callback_ptr + 0x4c))(callback_ptr,0);
  }
  return;
}
// FUN_080066e8 0x080066e8
int check_flags_and_values_080066e8(uint **flags, uint flag_values, bool expected_result, int ptr, uint max_distance)
{
  int pointer_value;
  while (((flag_values & ~**flags) == 0) != expected_result) {
    return 0;
  }
  if ((max_distance != 0xffffffff) && ((max_distance != 0) && ((pointer_value = get_pointer_value_08003760(), (uint)(pointer_value - ptr) > max_distance)))) {
    return 0;
  }
  (*flags)[3] &= 0xfffffe5f;
  (*flags)[5] &= 0xfffffffe;
  *(undefined *)((int)flags + 0x39) = 0x20;
  *(undefined *)((int)flags + 0x3a) = 0x20;
  *(undefined *)(flags + 0xe) = 0;
  return 3;
}
// FUN_08009358 0x08009358
int process_data_08009358(int data_start_address, int data_end_address, char *data, int current_index)
{
  int processed_bytes_count = 0;
  char *current_byte_address = data + current_index;
  
  while (current_index != 0)
  {
    if (current_byte_address == data_end_address)
    {
      return 0;
    }
    
    processed_bytes_count = process_byte(data_start_address, *current_byte_address, data_end_address, current_index, processed_bytes_count);
    current_index = processed_bytes_count + 1;
    current_byte_address = current_byte_address + 1;
  }
  
  return processed_bytes_count;
}
// FUN_0800270c 0x0800270c
int calculate_difference_between_two_bytes_0800270c(void)
{
  uint first_byte = (uint)(byte)*PTR_DAT_08002718;
  uint second_byte = (uint)(byte)*PTR_DAT_0800271c;
  int difference = first_byte - second_byte;
  return difference;
}
// FUN_08003370 0x08003370
void set_values_in_struct_08003370(int struct_address, int value1, int value2)
{
  *(int *)(struct_address + 0x6c) = value1;
  *(int *)(struct_address + 0x44) = value2;
  return;
}
// FUN_08007fa0 0x08007fa0
void process_input_08007fa0(int input_address, int is_valid, int is_processing_needed, undefined4 processing_parameter)
{
  int result = subtract_four_from_input();
  if (is_valid == *(int *)(input_address + 0xc)) {
    if (is_processing_needed == 0) {
      *(undefined *)(result + 0x88) = 0;
      *(undefined *)(result + 0x5c) = 0;
      if (*(code **)(result + 100) != (code *)0x0) {
        (**(code **)(result + 100))();
      }
      validate_input(input_address,result + 0x68,*(undefined *)(result + 0x88),8);
      return;
    }
    *(undefined *)(result + 0x5c) = 1;
    process_input_08007fa0_08004954(input_address,result + 0x68,0x20,8,processing_parameter);
  }
  return;
}
// FUN_08003376 0x08003376
void process_input_08003376(undefined *input_data, undefined input_byte, uint input_length)
{
  bool is_input_valid;
  if (input_length < *(uint *)(input_data + 8)) {
    is_input_valid = false;
  }
  else {
    is_input_valid = true;
    if (*(code **)(input_data + 100) != (code *)0x0) {
      *input_data = 1;
      (**(code **)(input_data + 100))(*(undefined4 *)(input_data + 0x3c));
      if (input_length < *(uint *)(input_data + 8)) {
        is_input_valid = false;
      }
      else {
        is_input_valid = true;
      }
    }
  }
  if (!is_input_valid) {
    *(undefined *)(*(int *)(input_data + 4) + input_length) = input_byte;
  }
  return;
}
// FUN_08008bf4 0x08008bf4
void calculate_shift_if_needed_08008bf4(void)
{
  bool DAT_08008c18 = (DAT_08008c18 != 0);
  if (DAT_08008c18) {
    calculate_shift_amount(PTR_DAT_08008c1c);
  }
  return;
}
// FUN_08005430 0x08005430
undefined4 get_value_from_offset_08005430(int base_address)
{
  int value_offset = 0x40;
  return *(undefined4 *)(base_address + value_offset);
}
// FUN_08002720 0x08002720
uint get_next_byte_08002720()
{
  uint current_byte_index = *PTR_DAT_08002740;
  uint max_byte_index = (uint)(byte)*PTR_DAT_08002744;
  if (current_byte_index < max_byte_index) {
    uint byte_offset = *(uint *)(*PTR_DAT_08002748 + current_byte_index);
    *PTR_DAT_08002740 = current_byte_index + 1;
    return byte_offset;
  }
  return 0xffffffff;
}
// FUN_080031ce 0x080031ce
void encode_data_080031ce(uint32_t *data_ptr, uint32_t data_size, uint32_t param_3, uint32_t param_4, int param_5)
{
  uint32_t *function_ptr = (uint32_t *)*data_ptr;
  if (function_ptr != NULL) {
    void (*function_call)(uint32_t *, uint32_t, uint32_t, void *, uint32_t) = (void (*)(uint32_t *, uint32_t, uint32_t, void *, uint32_t))(*function_ptr);
    function_call(data_ptr, 0xf0, param_3, (void *)*function_ptr, param_4);
    void (*second_function_call)(uint32_t *) = (void (*)(uint32_t *))(**(uint32_t ***)(uint32_t *)*data_ptr);
    second_function_call((uint32_t *)*data_ptr);
    second_function_call((uint32_t *)*data_ptr, param_2);
    second_function_call((uint32_t *)*data_ptr, param_3);
    for (uint32_t i = 0; i < data_size; i++) {
      encode_data_080031ce_0800307a(data_ptr, 1, param_5 + i, 0);
    }
    second_function_call((uint32_t *)*data_ptr, 0xf7);
  }
  return;
}
// FUN_08009918 0x08009918
void check_and_set_offset_08009918(int *result, undefined4 input)
{
  undefined *ptr = PTR_DAT_08009934;
  *(undefined4 *)ptr = 0;
  int offset = calculate_offset(input);
  if ((offset == -1) && (*(int *)ptr != 0)) {
    *result = *(int *)ptr;
  }
  return;
}
// FUN_08005434 0x08005434
void count_down_08005434(int input)
{
  bool is_not_zero;
  int count = input * (uint)((ulonglong)DAT_0800545c * (ulonglong)*(uint *)PTR_DAT_08005458 >> 0x29);
  do {
    is_not_zero = count != 0;
    count--;
  } while (is_not_zero);
  return;
}
// FUN_08005e2e 0x08005e2e
void clearFlagsIfConditionsMet_08005e2e(uint **paramArray)
{
  uint *paramPtr = *paramArray;
  uint condition1 = 0x1111;
  uint condition2 = 0x444;
  uint flagMask = 0xfffffffe;
  uint *flagPtr = (uint *)((int)paramArray + 0x3d);
  uint *flag2Ptr = (uint *)(paramArray + 0xf);
  *flagPtr = 2;
  if ((paramPtr[8] & condition1) == 0) {
    if ((paramPtr[8] & condition2) == 0) {
      *paramPtr = *paramPtr & flagMask;
    }
  }
  set_flags_based_on_parameter_08007110(paramArray);
  *flagPtr = 0;
  *flag2Ptr = 0;
  return;
}
// FUN_08007736 0x08007736
void execute_subtract_four_result_08007736(void)
{
  int subtracted_value = subtract_four_result();
  if (*(code **)(subtracted_value + 0x48) != (code *)0x0) {
    (**(code **)(subtracted_value + 0x48))();
  }
  return;
}
// FUN_08002968 0x08002968
void clear_and_initialize_data_08002968(int data_pointer, uint8_t input_value)
{
  int memory_size;
  int index_offset;
  int param_1 = data_pointer;
  uint8_t is_special_case = 0;
  uint8_t *PTR_DAT_080029ec = PTR_DAT_080029ec;
  uint8_t *PTR_DAT_080029f0 = PTR_DAT_080029f0;
  int **(int *)PTR_DAT_080029f4 = *(int **)PTR_DAT_080029f4;
  uint8_t DAT_08002a10 = 0;
  uint8_t *PTR_DAT_080029f8 = PTR_DAT_080029f8;
  uint8_t *PTR_DAT_080029fc = PTR_DAT_080029fc;
  uint8_t *PTR_DAT_08002a00 = PTR_DAT_08002a00;
  int **(int *)PTR_DAT_08002a04 = *(int **)PTR_DAT_08002a04;
  uint8_t *PTR_DAT_08002a08 = PTR_DAT_08002a08;
  uint8_t *PTR_DAT_08002a0c = PTR_DAT_08002a0c;
  uint8_t param_2 = input_value & 0x7f;
  uint8_t index_offset_value = param_2 << 1;
  *(char *)(param_1 + 0x10) = index_offset_value;
  if (input_value == 0x33) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x11) = 0;
  }
  index_offset = param_1 + 0x14;
  memory_size = 0x4000;
  if (*(char *)(param_1 + 0x11) == 0) {
    is_special_case = 1;
  }
  *PTR_DAT_080029ec = 0;
  *PTR_DAT_080029f0 = 0;
  if (**(int *)PTR_DAT_080029f4 != 0) {
    fill_memory_with_value_080091c6(**(int *)PTR_DAT_080029f4, DAT_08002a10, *PTR_DAT_080029f8);
  }
  *PTR_DAT_080029fc = 0;
  *PTR_DAT_08002a00 = 0;
  if (**(int *)PTR_DAT_08002a04 != 0) {
    fill_memory_with_value_080091c6(**(int *)PTR_DAT_08002a04, DAT_08002a10, *PTR_DAT_08002a08);
  }
  *PTR_DAT_08002a0c = 0;
  FUNC_080077b0(index_offset, DAT_08002a10, memory_size, index_offset_value, *(undefined *)(param_1 + 0x11));
  if (is_special_case == 0) {
    set_PTR_LAB_08002774_1_08002a14_if_not_null_08007f8e(index_offset, PTR_LAB_08002774_1_08002a14);
    update_param_2_if_param_1_not_null_08007f7c(index_offset, PTR_LAB_08002b00_1_08002a18);
  }
}

// FUN_08004ccc 0x08004ccc
void execute_command_08004ccc(uint **command)
{
  uint *command_ptr = command[0xb];
  if (*(char *)((int)command + 0x3d) == '!') {
    if (*(short *)((int)command + 0x2a) == 0) {
      if (((command_ptr == (uint *)0x4) || (command_ptr == (uint *)0x8)) || (command_ptr == (uint *)0xffff0000)) {
        (*command)[1] = (*command)[1] & 0xfffff8ff;
        **command = **command | 0x200;
        command[0xc] = (uint *)0x0;
        *(undefined *)((int)command + 0x3d) = 0x20;
        if (*(char *)((int)command + 0x3e) == '@') {
          *(undefined *)((int)command + 0x3e) = 0;
          do_nothing_1();
        }
        else {
          *(undefined *)((int)command + 0x3e) = 0;
          do_nothing_2();
        }
      }
      else {
        (*command)[1] = (*command)[1] & 0xfffff8ff;
        command[0xc] = (uint *)0x11;
        *(undefined *)((int)command + 0x3e) = 0;
        *(undefined *)((int)command + 0x3d) = 0x20;
        do_nothing_2();
      }
    }
    else {
      command_ptr = command[9];
      command[9] = (uint *)((int)command_ptr + 1);
      (*command)[4] = (uint)*(byte *)command_ptr;
      *(short *)((int)command + 0x2a) = *(short *)((int)command + 0x2a) + -1;
    }
  }
  return;
}
// FUN_080042d4 0x080042d4
int check_bit_080042d4(uint *bit_array, uint bit_mask)
{
  if ((bit_mask & *bit_array) == 0) {
    return 0;
  }
  return 1;
}
// FUN_0800542a 0x0800542a
undefined get_character_at_offset_0800542a(int character_offset)
{
  return *(undefined *)(character_offset + 0x3d);
}
// FUN_0800457c 0x0800457c
void extract_byte_from_data_0800457c(int *data)
{
  short *data_offset = (short *)((int)data + 0x2a);
  if (*data_offset != 0)
  {
    byte *byte_data = (byte *)data[9];
    data[9] = (int)(byte_data + 1);
    uint *destination = (uint *)(*data + 0x10);
    *destination = (uint)*byte_data;
    *data_offset = *data_offset - 1;
  }
}
// FUN_080091c6 0x080091c6
void fill_memory_with_value_080091c6(char *memory_start, char value, int num_bytes)
{
  char *memory_end = memory_start + num_bytes;
  for (; memory_start != memory_end; memory_start++) {
    *memory_start = value;
  }
  return;
}
// FUN_0800a07a 0x0800a07a
void assignValueAndCheckStatus_0800a07a(int value, int* data)
{
  int assignedValue = check_and_assign_value_0800a130(value, *(short *)(data + 0xe));
  bool isAssignSuccessful = assignedValue != -1;
  ushort flags = *(ushort *)(data + 0xc);
  if (!isAssignSuccessful) {
    flags &= 0xefff;
  }
  else {
    *(int *)(data + 0x54) = assignedValue;
    flags |= 0x1000;
  }
  *(ushort *)(data + 0xc) = flags;
  return;
}
// FUN_08003a20 0x08003a20
int activate_device_08003a20(int *device_info, int device_id)
{
  int device_ptr = *device_info;
  if ((*(uint *)(device_ptr + 8) & 1) == 0) {
    *(uint *)(device_ptr + 8) = *(uint *)(device_ptr + 8) | 1;
    for (uint i = (uint)((ulonglong)DAT_08003a9c * (ulonglong)*(uint *)PTR_DAT_08003a98 >> 0x32); i != 0; i--) {
    }
    int initial_ptr_value = get_pointer_value_08003760(device_info, device_id, (int)((ulonglong)DAT_08003a9c * (ulonglong)*(uint *)PTR_DAT_08003a98));
    do {
      if ((*(uint *)(*device_info + 8) & 1) != 0) {
        return 0;
      }
      int current_ptr_value = get_pointer_value_08003760(device_info);
    } while ((uint)(current_ptr_value - initial_ptr_value) < 3);
    device_info[10] = device_info[10] | 0x10;
    device_info[0xb] = device_info[0xb] | 1;
    *(undefined *)(device_info + 9) = 0;
    return 1;
  }
  else {
    return 0;
  }
}
// FUN_080064b0 0x080064b0
void clear_flags_080064b0(int *device_info)
{
  int *device_ptr = device_info;
  *(uint *)(device_ptr[3] + 0xc) &= 0xfffffedf;
  *(uint *)(device_ptr[3] + 0x14) &= 0xfffffffe;
  *(undefined *)((int)device_info + 0x3a) = 0x20;
  return;
}
// FUN_08009cdc 0x08009cdc
void initializeData_08009cdc(undefined4 *data, undefined2 value1, undefined2 value2)
{
  data[0] = 0;
  data[1] = 0;
  data[2] = 0;
  *(undefined2 *)(data + 3) = value1;
  data[0x19] = 0;
  *(undefined2 *)((int)data + 0xe) = value2;
  data[4] = 0;
  data[5] = 0;
  data[6] = 0;
  fill_memory_with_value_080091c6(data + 0x17, 8);
  data[8] = data;
  data[9] = DAT_08009d14;
  data[10] = PTR_assign_value_if_condition_met_0800a042_1_08009d18;
  data[0xb] = PTR_assignValueAndCheckStatus_0800a07a_1_08009d1c;
  data[0xc] = PTR_LAB_0800a09e_1_08009d20;
  return;
}
// FUN_08002a58 0x08002a58
int checkAndUpdateValue_08002a58(int value)
{
  int result;
  if (value == 0) {
    result = 4;
  }
  else {
    int updatedValue = check_and_update_value_08007e74(value);
    if (updatedValue == 0) {
      result = 0;
    }
    else if (updatedValue == 1) {
      result = 1;
    }
    else {
      result = 4;
    }
    if (*(int *)PTR_DAT_08002aac != 0) {
      fill_memory_with_value_080091c6(*(int *)PTR_DAT_08002aac, *PTR_DAT_08002ab4);
    }
    *PTR_DAT_08002ab8 = 0;
    *PTR_DAT_08002aa8 = 0;
    *PTR_DAT_08002abc = 0;
  }
  return result;
}
// FUN_080026b0 0x080026b0
void set_value_based_on_conditions_080026b0(int *device_info, int new_value)
{
  int value = new_value;
  if (new_value < 0)
  {
    value = 0;
  }
  else if (new_value > 180)
  {
    value = 180;
  }
  int device_multiplier = calculate_device_multiplier(device_info);
  int device_timeout = calculate_device_timeout(device_info);
  value = calculate_new_value_08008ef4(value, 0, 180, (device_multiplier - *(char *)(device_info + 1)) * 4,
                 (device_timeout - *(char *)(device_info + 2)) * 4);
  set_value_based_on_conditions_080026b0_0800267c(device_info, value);
  return;
}
// FUN_08006092 0x08006092
int check_and_update_registers_08006092(int *input_ptr)
{
  if (input_ptr != NULL) {
    if (*(char *)((int)input_ptr + 0x3d) == '\0') {
      *(undefined *)((int)input_ptr + 0x3c) = 0;
      do_nothing();
    }
    *(undefined *)((int)input_ptr + 0x3d) = 2;
    update_registers_08005fe8(*input_ptr, input_ptr + 1);
    *(undefined *)((int)input_ptr + 0x3d) = 1;
    return 0;
  }
  return 1;
}
// FUN_08008d8c 0x08008d8c
void initialize_data_structure_if_flag_set_08008d8c(int flag, int value, undefined4 param_3, undefined4 param_4) {
  if (flag != 1) {
    return;
  }
  if (value == 0xffff) {
    initialize_data_structure_and_set_defaults_08008d30(PTR_DAT_08008dac, DAT_08008da8, param_3, 0xffff, param_4);
  }
  return;
}
// FUN_080004d4 0x080004d4
void increment_counters_if_flag_set_080004d4(int flag, int counter)
{
  if (flag != 1)
  {
    return;
  }
  if (counter == 0xffff)
  {
    unsigned char *counter_ptr = PTR_DAT_080004fc;
    for (int i = 0; i < 11; i++)
    {
      increment_and_set_08002580(counter_ptr);
      counter_ptr += 3;
    }
  }
  return;
}
// FUN_080005f8 0x080005f8

void FUNC_080005f8(uint param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  
  iVar2 = get_value_at_offset_08002fa0(PTR_DAT_08000874,param_1);
  if (iVar2 != 0x7f) {
    iVar2 = get_value_at_offset_08002fa0(PTR_DAT_08000874,param_1);
    if (iVar2 == 6) {
      cVar3 = *PTR_DAT_0800087c;
      if (cVar3 == '\0') {
        cVar3 = '\0';
      }
      else if (param_2 == 6) {
        cVar3 = '\0';
      }
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 != '\0') {
      clear_memory_080005e0();
    }
    if (param_1 < 0x3c) {
      if (PTR_DAT_08000878[param_1] == -1) {
        bVar4 = false;
      }
      else {
        iVar2 = find_char_index_080036ac();
        if (iVar2 == 0) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000878[param_1]);
          if (iVar2 == 1) {
            bVar4 = false;
          }
          else if (param_2 == 4) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((byte)PTR_DAT_08000880[param_1] < 0xc) {
        iVar2 = calculate_index_from_input_080026f8(PTR_DAT_08000884 + (uint)(byte)PTR_DAT_08000880[param_1] * 3);
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        process_input_and_update_state_08000588(param_1);
      }
    }
    uVar5 = param_1 - 0x2e & 0xff;
    if (uVar5 < 0xe) {
      if (param_1 < 0x3c) {
        iVar2 = (int)(char)PTR_DAT_08000878[param_1];
      }
      else {
        iVar2 = -1;
      }
      iVar2 = find_char_index_080036ac(iVar2);
      if (iVar2 == 0) {
        bVar4 = false;
      }
      else {
        if (param_1 < 0x3c) {
          iVar2 = (int)(char)PTR_DAT_08000878[param_1];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = find_char_index_080036ac(iVar2);
        if (iVar2 == 1) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      set_device_parameter_08000488(uVar5,param_2 == 2);
    }
    if (param_1 < 0x3c) {
      if (PTR_DAT_08000878[param_1] == -1) {
        bVar4 = false;
      }
      else {
        iVar2 = find_char_index_080036ac();
        if (iVar2 == 0) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000878[param_1]);
          if (iVar2 == 1) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((param_2 == 0) || (param_2 == 0xb)) {
        PTR_DAT_08000888[param_1 >> 3] = PTR_DAT_08000888[param_1 >> 3] | (byte)(1 << (param_1 & 7))
        ;
      }
      else {
        PTR_DAT_08000888[param_1 >> 3] =
             PTR_DAT_08000888[param_1 >> 3] & ~(byte)(1 << (param_1 & 7));
      }
    }
    set_value_at_index_08002fc2(PTR_DAT_08000874,param_1,0);
    switch(param_2) {
    case 0:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000878[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000878[param_1]);
            if (iVar2 == 1) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        process_bit_08008990(param_1,0);
        set_byte_at_offset_08002fa8(PTR_DAT_08000874,param_1,0);
        return;
      }
      break;
    case 1:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        iVar2 = get_value_at_offset_08002fa0(PTR_DAT_08000a44,param_1);
        if (iVar2 == 3) {
          readBitAndSetValue_08008a24(param_1,0);
        }
        process_bit_08008990(param_1,1);
        set_byte_at_offset_08002fa8(PTR_DAT_08000a44,param_1,1);
        return;
      }
      break;
    case 2:
      if (uVar5 < 0xe) {
        if (param_1 < 0x3c) {
          iVar2 = (int)(char)PTR_DAT_08000878[param_1];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = find_char_index_080036ac(iVar2);
        if (iVar2 == 0) {
          bVar4 = false;
        }
        else {
          if (param_1 < 0x3c) {
            iVar2 = (int)(char)PTR_DAT_08000878[param_1];
          }
          else {
            iVar2 = -1;
          }
          iVar2 = find_char_index_080036ac(iVar2);
          if (iVar2 == 1) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if (param_1 < 0x3c) {
          if (PTR_DAT_08000878[param_1] == -1) {
            bVar4 = false;
          }
          else {
            iVar2 = find_char_index_080036ac();
            if (iVar2 == 0) {
              bVar4 = false;
            }
            else {
              iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000878[param_1]);
              if (iVar2 == 1) {
                bVar4 = false;
              }
            }
          }
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          process_bit_08008990(param_1,0);
        }
        set_byte_at_offset_08002fa8(PTR_DAT_08000874,param_1,2);
        return;
      }
      break;
    case 3:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              iVar2 = 0;
            }
            else {
              iVar2 = compare_values_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a4c);
            }
          }
        }
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        process_bit_08008990(param_1,1);
        process_bit_080088e0(param_1,0);
        set_byte_at_offset_08002fa8(PTR_DAT_08000a44,param_1,3);
        return;
      }
      break;
    case 4:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        set_byte_at_offset_08002fa8(PTR_DAT_08000a44,param_1,4);
        if (((byte)PTR_DAT_08000a50[param_1] != 0xff) &&
           (iVar2 = calculate_index_from_input_080026f8(PTR_DAT_08000a54 + (uint)(byte)PTR_DAT_08000a50[param_1] * 3),
           iVar2 != 0)) {
          bVar4 = false;
        }
        if (bVar4) {
          process_servo_data_08000500(param_1,0xffffffff);
          return;
        }
      }
      break;
    default:
      process_data_and_return_result_08002f14(PTR_DAT_08000a44,PTR_s_Unknown_pin_mode_08000a60);
      break;
    case 6:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              iVar2 = 0;
            }
            else {
              iVar2 = compare_values_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a58);
              if (iVar2 == 0) {
                iVar2 = compare_values_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a5c);
              }
            }
          }
        }
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        set_byte_at_offset_08002fa8(PTR_DAT_08000a44,param_1,6);
        return;
      }
      break;
    case 10:
      break;
    case 0xb:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000878[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = find_char_index_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08000878[param_1]);
            if (iVar2 == 1) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        process_bit_08008990(param_1,2);
        puVar1 = PTR_DAT_08000a44;
        set_byte_at_offset_08002fa8(PTR_DAT_08000a44,param_1,0xb);
        set_value_at_index_08002fc2(puVar1,param_1,1);
        return;
      }
    }
  }
  return;
}


// FUN_08009124 0x08009124
void process_data_08009124(int data_size, int data_offset, int* data_ptr, int* output_ptr)
{
  int current_data_size = data_size;
  int current_data_offset = data_offset;
  int* current_data_ptr = data_ptr;
  int* current_output_ptr = output_ptr;
  process_helper(*(int*)PTR_PTR_DAT_08009144, data_size, data_offset, &current_data_size, data_ptr, &current_data_ptr);
  return;
}
// FUN_08002fa0 0x08002fa0
unsigned char get_value_at_offset_08002fa0(int offset, int address)
{
  unsigned char* value_ptr = (unsigned char*)(address + offset + 0xcc);
  return *value_ptr;
}
// FUN_080064ae 0x080064ae
void do_nothing_080064ae(void)
{
  return;
}
// FUN_0800a424 0x0800a424
void do_nothing_0800a424(void)
{
  return;
}
// FUN_08003a1c 0x08003a1c
undefined4 get_value_from_pointer_08003a1c(int pointer_offset)
{
  return *(undefined4 *)(pointer_offset + 0x28);
}
// FUN_080064ac 0x080064ac
void do_nothing_080064ac(void)
{
  return;
}
// FUN_08005cb4 0x08005cb4
void execute_code_if_flag_set_08005cb4(uint **flag_ptr) {
  uint flag_value = **flag_ptr;
  uint second_flag_value = (*flag_ptr)[1];
  bool both_flags_set = (flag_value & 2) && (second_flag_value & 2);
  if (both_flags_set) {
    execute_code_at_address_080073c0();
    (*flag_ptr)[1] = 0xfffffffd;
  }
  uint* DAT_08005ce8_ptr = (uint*) (DAT_08005ce8 + 0x14);
  *DAT_08005ce8_ptr = 0x20000;
  bool bool_value = true;
  char* bool_ptr = (char*) (flag_ptr + 0x11);
  *bool_ptr = bool_value;
}
// FUN_08007744 0x08007744
undefined4 get_value_from_struct_08007744(int struct_address)
{
  int* PTR_value = *(int *)(struct_address + 4);
  int offset_to_value = 0x24;
  return *(undefined4 *)(PTR_value + offset_to_value);
}
// FUN_08006538 0x08006538
void calculate_new_value_for_ptr_08006538(int *param_ptr) {
  uint *ptr = (uint *) (*param_ptr);
  uint value_1 = param_ptr[3];
  uint value_2 = param_ptr[2] | param_ptr[4] | param_ptr[5];
  ptr[4] = (ptr[4] & 0xfffffcff) | param_ptr[6];
  if (*ptr != DAT_080066e0) {
    uint uVar1 = PTR_080066e4;
    uint value_3 = param_ptr[1];
    uint value_4 = get_shifted_value_from_pointer_08005a28();
    uint value_5 = param_ptr[1];
    uint value_6 = get_shifted_value_from_pointer_08005a28();
    uint value_7 = param_ptr[1];
    uint value_8 = get_shifted_value_from_pointer_08005a28();
    uint value_9 = param_ptr[1];
    uint value_10 = get_shifted_value_from_pointer_08005a28();
    uint value_11 = param_ptr[1];
    uint value_12 = get_shifted_value_from_pointer_08005a28();
    ptr[2] = ((uVar1 * ((value_4 * 0x19 / (value_5 << 2)) + (uVar1 * ((value_6 * 0x19 / (value_7 << 2)) >> 0x25) * -100) * 0x10 + 0x32) >> 0x20) << 0x17 >> 0x1c) + ((uVar1 * ((value_8 * 0x19 / (value_9 << 2)) + (uVar1 * ((value_10 * 0x19 / (value_11 << 2)) >> 0x25) * -100) * 0x10 + 0x32) >> 0x25) & 0xf0) + (PTR_080066e4 * ((value_3 * 0x19 / (ptr[3] << 2))) >> 0x25) * 0x10;
  } else {
    uint uVar1 = PTR_080066e4;
    uint value_3 = param_ptr[1];
    uint value_4 = get_shifted_value_from_pointer_08005a48();
    uint value_5 = param_ptr[1];
    uint value_6 = get_shifted_value_from_pointer_08005a48();
    uint value_7 = param_ptr[1];
    uint value_8 = get_shifted_value_from_pointer_08005a48();
    uint value_9 = param_ptr[1];
    uint value_10 = get_shifted_value_from_pointer_08005a48();
    uint value_11 = param_ptr[1];
    uint value_12 = get_shifted_value_from_pointer_08005a48();
    ptr[2] = ((uVar1 * ((value_4 * 0x19 / (value_5 << 2)) + (uVar1 * ((value_6 * 0x19 / (value_7 << 2)) >> 0x25) * -100) * 0x10 + 0x32) >> 0x20) << 0x17 >> 0x1c) + ((uVar1 * ((value_8 * 0x19 / (value_9 << 2)) + (uVar1 * ((value_10 * 0x19 / (value_11 << 2)) >> 0x25) * -100) * 0x10 + 0x32) >> 0x25) & 0xf0) + (PTR_080066e4 * ((value_3 * 0x19 / (ptr[3] << 2))) >> 0x25) * 0x10;
  }
}
// FUN_080042e2 0x080042e2
void set_parameter_value_080042e2(int struct_address, int value, bool shift_left)
{
  int* PTR_parameter = *(int *)(struct_address + 0x10);
  if (shift_left) {
    *(PTR_parameter) = value << 0x10;
  } else {
    *(PTR_parameter) = value;
  }
}
// FUN_08002fa8 0x08002fa8
void set_byte_at_offset_08002fa8(int struct_address, int offset, uint8_t value)
{
  uint8_t* PTR_byte = *(uint8_t **)(struct_address + 0xcc + offset);
  if (*PTR_byte != 0x7f) {
    *PTR_byte = value;
  }
}
// FUN_0800325a 0x0800325a
void process_data_0800325a(uint8_t *struct_address, int offset, uint8_t data, uint data_size)
{
  uint8_t *ptr_to_data = *(uint8_t **)(struct_address + 0xcc + offset);
  if (*ptr_to_data != 0x0) {
    for (uint i = 0; i < data_size; i++) {
      encode_data_0800307a(struct_address, 1, data + i, 0);
    }
  }
}

void process_data_0800325a(uint8_t *struct_address, uint8_t param_2, uint data_size, int param_4)
{
  uint8_t *ptr_to_function = *(uint8_t **)struct_address;
  if (ptr_to_function != NULL) {
    (**(void (**)(void *, uint8_t))(*ptr_to_function))((void *)ptr_to_function, 0xf0);
    (***(void (***)(void *, uint8_t))(*(uint8_t **)struct_address))((void *)*(uint8_t **)struct_address, param_2);
    for (uint i = 0; i < data_size; i++) {
      process_data_0800325a(struct_address, i, param_4, 1);
    }
    (***(void (***)(void *, uint8_t))(*(uint8_t **)struct_address))((void *)*(uint8_t **)struct_address, 0xf7);
  }
}

// FUN_080091d8 0x080091d8
void add_to_linked_list_080091d8(undefined4 *head, int data, undefined4 unused1, undefined4 unused2)
{
  int **current = (int **)(data - 4);
  if (data == 0) {
    return;
  }
  do_nothing_08009f48();
  int **ptr_to_head = *(int ***)(PTR_DAT_0800926c);
  if (ptr_to_head == NULL) {
    current[1] = NULL;
    *(int ***)PTR_DAT_0800926c = current;
  }
  else if (current < ptr_to_head) {
    int **next = (int **)*current;
    int **prev = (int **)((int)current + (int)next);
    if (ptr_to_head == prev) {
      int *prev_data = *ptr_to_head;
      ptr_to_head = (int **)ptr_to_head[1];
      prev = (int **)((int)prev_data + (int)next);
      *current = prev;
    }
    current[1] = ptr_to_head;
    *(int ***)PTR_DAT_0800926c = current;
  }
  else {
    int **ptr_to_node = ptr_to_head;
    while (ptr_to_node[1] != NULL && ptr_to_node[1] <= current) {
      ptr_to_node = ptr_to_node[1];
    }
    int **next = (int **)ptr_to_node[1];
    if ((int **)((int)ptr_to_node + (int)next) == current) {
      next = (int **)((int)next + (int)*current);
      *ptr_to_node = next;
      if (ptr_to_node[1] == (int **)((int)ptr_to_node + (int)next)) {
        int *next_data = *ptr_to_node[1];
        next = (int **)ptr_to_node[1][1];
        next = (int **)((int)next_data + (int)next);
        *ptr_to_node[1] = next;
        ptr_to_node[1][1] = (int *)next;
      }
    }
    else if (current < (int **)((int)ptr_to_node + (int)next)) {
      *head = 0xc;
    }
    else {
      next = (int **)((int)current + (int)*current);
      if (ptr_to_node[1] == next) {
        int *next_data = ptr_to_node[1][1];
        next = (int **)((int)next_data + (int)*current);
        *current = next;
      }
      current[1] = ptr_to_node[1];
      ptr_to_node[1] = current;
    }
  }
  do_nothing_08009f4a(head, current, current[1], unused2);
  return;
}
// FUN_0800688e 0x0800688e
int set_data_0800688e(int *data_struct, int param_2, int param_3)
{
  char *flag = (char *)(data_struct + 0x39);
  if (*flag != ' ') {
    return 2;
  }
  if (param_2 == 0 || param_3 == 0) {
    return 1;
  }
  if (*(char *)(data_struct + 0xe) != '\x01') {
    data_struct[8] = param_2;
    data_struct[9] = (short)param_3;
    data_struct[0xf] = 0;
    *(short *)((int)data_struct + 0x26) = (short)param_3;
    *flag = 0x21;
    *(char *)(data_struct + 0xe) = 0;
    *(uint *)(*data_struct + 0xc) |= 0x80;
    return 0;
  }
  return 2;
}
// FUN_080088e0 0x080088e0
void process_bit_080088e0(uint bit_position, uint value)
{
  int index = -1;
  if (bit_position < 0x3c) {
    index = (int)(char)PTR_DAT_0800897c[bit_position];
  }
  if (index != -1) {
    int result = compare_values(index, PTR_DAT_08008980);
    if (result == 0) {
      process_bit_080088e0_08008990(bit_position, 1);
      uint shift_amount = *(uint *)PTR_DAT_08008988;
      if (shift_amount != 8) {
        if (shift_amount < 9) {
          value = value << (8 - shift_amount & 0xff);
        }
        else {
          value = value >> (shift_amount - 8 & 0xff);
        }
      }
      if (value < 0x80) {
        set_bit_at_index_08006b3e(index, PTR_DAT_08008984, 0);
      }
      else {
        set_bit_at_index_08006b3e(index, PTR_DAT_08008984, 1);
      }
    }
    else {
      int bit_value = read_bit_at_position_08006b28(index, PTR_DAT_08008984);
      if (bit_value == 0) {
        set_bit_at_index_08006b3e(index, PTR_DAT_08008984, 1);
      }
      uint shift_amount = *(uint *)PTR_DAT_08008988;
      if (shift_amount != 8) {
        if (shift_amount < 9) {
          value = value << (8 - shift_amount & 0xff);
        }
        else {
          value = value >> (shift_amount - 8 & 0xff);
        }
      }
      update_flags_and_registers(index, DAT_0800898c, 0xff, value, bit_value == 0);
    }
  }
  return;
}
// FUN_08008b66 0x08008b66
void process_combination_and_update_08008b66(int combination_ptr)
{
  int process_result;
  ushort new_index;
  undefined local_byte;
  
  process_result = process_combination_08008600(combination_ptr,&local_byte);
  if ((process_result == 0) &&
     (new_index = *(ushort *)(combination_ptr + 0x60) + 1U & 0x3f, new_index != *(ushort *)(combination_ptr + 0x62))) {
    *(undefined *)(*(int *)(combination_ptr + 0x5c) + (uint)*(ushort *)(combination_ptr + 0x60)) = local_byte;
    *(ushort *)(combination_ptr + 0x60) = new_index;
  }
  return;
}
// FUN_0800870c 0x0800870c
void execute_operation_0800870c(void)
{
  uint operation_index = find_number_080086e8();
  if (operation_index < 5) {
    PTR_DAT_08008728[operation_index](PTR_DAT_0800872c[operation_index]);
  }
  return;
}
// FUN_08008840 0x08008840
uint32_t get_error_code_08008840(void)
{
  uint32_t error_code = 0xffffffff;
  return error_code;
}
// FUN_08008600 0x08008600
undefined4 process_combination_08008600(int combination_index, undefined* output, undefined4 param_3, undefined4 param_4) {
  if (combination_index == 0) {
    return 0xffffffff;
  }
  int is_valid_combination = check_combination(combination_index);
  if (is_valid_combination == 0) {
    *output = *(undefined *)(combination_index + 0x45);
    set_params(*(undefined4 *)(PTR_DAT_08008638 + (uint)*(byte *)(param_1 + 0x44) * 4), combination_index + 0x45, 1, PTR_DAT_08008638, param_4);
    return 0;
  }
  return 0xffffffff;
}
// FUN_08003154 0x08003154
void copy_value_to_pointer_08003154(uint32_t *destination, uint32_t value)
{
  *destination = value;
  return;
}
// FUN_08006420 0x08006420
void set_bit_in_uint_at_index_08006420(uint32_t* data, uint8_t index, uint8_t bit_value)
{
  uint32_t bit_mask = 1u << index;
  *data &= ~bit_mask;
  *data |= bit_value << index;
  return;
}
// FUN_08007750 0x08007750
void set_value_in_array_at_index_08007750(int* array, int index, int value)
{
  int* array_ptr = *(int**)(array + 4);
  int* element_ptr = array_ptr + 0x34 + index * 4;
  *element_ptr = value;
  return;
}
// FUN_08009938 0x08009938
char* find_character_in_string_08009938(char* str, char ch)
{
  char* curr_char_ptr = str;
  while(*curr_char_ptr != '\0')
  {
    if(*curr_char_ptr == ch)
    {
      return curr_char_ptr;
    }
    curr_char_ptr++;
  }
  if(ch == '\0')
  {
    return curr_char_ptr;
  }
  return (char*)0x0;
}
// FUN_08007f0e 0x08007f0e
int check_message_08007f0e(int message_offset, undefined4 message_length, undefined4 message_id, undefined4 message_flags) {
  int pointer_start = get_pointer_value();
  uint offset_diff = 0;
  int result = 2;
  do {
    int message_address = message_offset + 4;
    int send_result = send_message(message_address, message_length, message_id, message_flags, message_flags);
    if (send_result == 0) {
      result = 0;
      int character_value = 0;
      while ((character_value = get_character_at_offset(message_address), character_value != 0x20 && (result == 0))) {
        int pointer_end = get_pointer_value();
        offset_diff = pointer_end - pointer_start;
        if (offset_diff < 0x65) {
          int value_at_offset = get_value_from_offset(message_address);
          if (value_at_offset != 0) {
            result = 2;
          }
        }
        else {
          result = 1;
        }
      }
    }
    int value_at_offset = get_value_from_offset(message_address);
  } while ((value_at_offset == 4) && (offset_diff < 100));
  return result;
}
// FUN_08004004 0x08004004
void set_bit_in_array_08004004(uint bit_index)
{
  if (-1 < (int)bit_index) {
    uint array_index = (bit_index >> 5) + 0x60;
    uint* array_ptr = (uint*)(DAT_08004020 + array_index * 4);
    uint bit_position = bit_index & 0x1f;
    uint bit_value = 1 << bit_position;
    *array_ptr = bit_value;
  }
  return;
}
// FUN_08003158 0x08003158
void send_encoded_data_if_possible_08003158(undefined4 *message_buffer, uint message_length, ushort message_flags) {
  undefined4 *message_address = (undefined4 *)*message_buffer;
  if (message_address != (undefined4 *)0x0) {
    ushort encoded_data = message_flags;
    if (((int)message_length < 0x10) && (message_flags < 0x4000)) {
      (**(code **)*message_address)(message_address, message_length | 0xe0);
      encode_data(message_buffer, 2, &encoded_data);
    }
    else {
      encode_and_send_data(message_buffer, message_length, 2, &encoded_data);
    }
  }
  return;
}
// FUN_080090c2 0x080090c2
void combine_values_080090c2(void* value1, void* value2) {
  combine_values_080090c2_08009108(value2, value1);
  return;
}
// FUN_08000ef8 0x08000ef8

void FUNC_08000ef8(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  
  if (*PTR_DAT_08001188 != '\0') {
    bVar1 = *PTR_DAT_0800118c;
    if (*PTR_DAT_08001190 == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)*PTR_DAT_08001190);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0);
          if (iVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
    if (PTR_DAT_08001190[1] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[1]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(1);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    if (PTR_DAT_08001190[2] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[2]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(2);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    if (PTR_DAT_08001190[3] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[3]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(3);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    if (PTR_DAT_08001190[4] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[4]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(4);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    if (PTR_DAT_08001190[5] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[5]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(5);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    if (PTR_DAT_08001190[6] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[6]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(6);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    if (PTR_DAT_08001190[7] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001190[7]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(7);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    execute_function_08000be8(0,bVar4);
  }
  if (PTR_DAT_08001188[1] != '\0') {
    bVar1 = PTR_DAT_0800118c[1];
    if (PTR_DAT_08001190[8] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[8]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(8);
          if (iVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
    if (PTR_DAT_08001424[9] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[9]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(9);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    if (PTR_DAT_08001424[10] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[10]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(10);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    if (PTR_DAT_08001424[0xb] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0xb]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0xb);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    if (PTR_DAT_08001424[0xc] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0xc]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0xc);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    if (PTR_DAT_08001424[0xd] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0xd]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0xd);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    if (PTR_DAT_08001424[0xe] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0xe]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0xe);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    if (PTR_DAT_08001424[0xf] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0xf]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0xf);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    execute_function_08000be8(1,bVar4,0);
  }
  if (PTR_DAT_08001428[2] != '\0') {
    bVar1 = PTR_DAT_0800142c[2];
    if (PTR_DAT_08001424[0x10] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001424[0x10]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x10);
          if (iVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
    if (PTR_DAT_080016c4[0x11] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x11]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x11);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    if (PTR_DAT_080016c4[0x12] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x12]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x12);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    if (PTR_DAT_080016c4[0x13] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x13]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x13);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    if (PTR_DAT_080016c4[0x14] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x14]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x14);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    if (PTR_DAT_080016c4[0x15] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x15]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x15);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    if (PTR_DAT_080016c4[0x16] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x16]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x16);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    if (PTR_DAT_080016c4[0x17] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x17]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x17);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    execute_function_08000be8(2,bVar4,0);
  }
  if (PTR_DAT_080016c8[3] != '\0') {
    bVar1 = PTR_DAT_080016cc[3];
    if (PTR_DAT_080016c4[0x18] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_080016c4[0x18]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x18);
          if (iVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
    if (PTR_DAT_080016c4[0x19] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x19]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x19);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    if (PTR_DAT_08001960[0x1a] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1a]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1a);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    if (PTR_DAT_08001960[0x1b] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1b]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1b);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    if (PTR_DAT_08001960[0x1c] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1c]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1c);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    if (PTR_DAT_08001960[0x1d] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1d]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1d);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    if (PTR_DAT_08001960[0x1e] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1e]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1e);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    if (PTR_DAT_08001960[0x1f] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x1f]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x1f);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    execute_function_08000be8(3,bVar4,0);
  }
  if (PTR_DAT_08001964[4] != '\0') {
    bVar1 = PTR_DAT_08001968[4];
    if (PTR_DAT_08001960[0x20] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x20]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x20);
          if (iVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
    if (PTR_DAT_08001960[0x21] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001960[0x21]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x21);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    if (PTR_DAT_08001b44[0x22] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x22]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x22);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    if (PTR_DAT_08001b44[0x23] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x23]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x23);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    if (PTR_DAT_08001b44[0x24] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x24]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x24);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    if (PTR_DAT_08001b44[0x25] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x25]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x25);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    if (PTR_DAT_08001b44[0x26] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x26]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x26);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    if (PTR_DAT_08001b44[0x27] == -1) {
      bVar3 = false;
    }
    else {
      iVar2 = find_char_index_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = find_char_index_080036ac((int)(char)PTR_DAT_08001b44[0x27]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = check_bit_and_return_if_set_08008a6c(0x27);
          if (iVar2 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    execute_function_08000be8(4,bVar4,0);
  }
  return;
}


// FUN_08008846 0x08008846
void set_memory_permissions_08008846(int process_id, int memory_address)
{
  int permissions = 0x2000;
  int* process_handle_ptr = (int*)memory_address;
  *process_handle_ptr = permissions;
  return;
}
// FUN_0800a430 0x0800a430
void print_hello_world_0800a430(void)
{
  printf("Hello World!
");
  return;
}
// FUN_0800459c 0x0800459c
void process_data_0800459c(int *data)
{
  short *PTR_0800a430 = (short *)((int)data + 0x2a);
  if (*PTR_0800a430 != 0) {
    char *buffer = (char *)data[9];
    data[9] = (int)(buffer + 1);
    *buffer = (char)*(int *)(*data + 0x10);
    *PTR_0800a430 = *PTR_0800a430 - 1;
  }
  return;
}
// FUN_0800774a 0x0800774a
void set_param_value_0800774a(int *param_struct, int new_value)
{
  int *PTR_0800a430 = (int *)param_struct[1];
  PTR_0800a430[DAT_0804a024] = new_value;
  return;
}
// FUN_080042f0 0x080042f0
void update_and_execute_if_bit_set_080042f0(uint bit_mask) {
  uint* DAT_08004308 = (uint*)(DAT_08004308 + 0x14);
  if ((*DAT_08004308 & bit_mask) != 0) {
    *DAT_08004308 = bit_mask;
    execute_if_bit_set_08009094();
  }
  return;
}
// FUN_080027f0 0x080027f0
uint copy_data_to_buffer_080027f0(int buffer_address, undefined4 data, uint data_size)
{
  char buffer_status;
  undefined *buffer_pointer;
  int result;
  char buffer_used_size;
  char buffer_size;
  
  buffer_pointer = PTR_DATA_BUFFER_POINTER;
  buffer_status = *PTR_DATA_BUFFER_STATUS;
  if (buffer_status == 0) {
    result = copy_data_to_buffer_080027f0(buffer_address + 0x14, &data, data_size & 0xffff);
    if (result != 0) {
      return data_size;
    }
    else {
      return 0;
    }
  }
  else {
    buffer_size = (char)*PTR_DATA_BUFFER_SIZE + 1;
    buffer_used_size = (char)*PTR_DATA_BUFFER_USED_SIZE;
    if (buffer_used_size < buffer_size + data_size) {
      if (buffer_size + data_size < 0x20) {
        buffer_size = 0x20;
      }
      else {
        buffer_size = buffer_size + data_size;
      }
      result = allocate_and_copy_data(PTR_DATA_BUFFER_ADDRESS, buffer_size);
      *PTR_DATA_BUFFER_POINTER = result;
      if (result == 0) {
        return 0;
      }
      else {
        *PTR_DATA_BUFFER_USED_SIZE = buffer_size;
      }
    }
    buffer_pointer = PTR_DATA_BUFFER_POINTER_2;
    if (*PTR_DATA_BUFFER_ADDRESS == 0) {
      *(undefined4 *)(buffer_address + 4) = 1;
      return 0;
    }
    else {
      copy_data_to_buffer_080027f0((uint)buffer_pointer + *(int *)PTR_DATA_BUFFER_ADDRESS, &data, data_size);
      buffer_used_size = buffer_used_size + (char)data_size;
      *buffer_pointer = buffer_used_size;
      *PTR_DATA_BUFFER_USED_SIZE = buffer_used_size;
      return data_size;
    }
  }
}
// FUN_0800314e 0x0800314e
void set_param_value_0800314e(undefined4 *param_struct, undefined4 new_value)
{
  *param_struct = new_value;
  return;
}
// FUN_080076e0 0x080076e0
void update_timer_status_080076e0(undefined4 *timer_data)
{
  char timer_type = determine_timer_type(*timer_data);
  set_bit_in_array_08003fb0((int)timer_type);
  int flags_updated = set_flags_and_clear_flag_if_appropriate_08005df4(timer_data + 1);
  if (flags_updated == 0) {
    set_bits_and_clear_flags_080062f4(timer_data + 1, 0);
  }
  return;
}
// FUN_08002f14 0x08002f14
void process_data_and_return_result_08002f14(void* data) {
  void* string_data = data + 0x40;
  process_string_data_if_not_empty_080032a2(string_data);
  return;
}
// FUN_080036a2 0x080036a2
void initialize_device_and_validate_input_080036a2()
{
  validate_input();
  return;
}
// FUN_080038e4 0x080038e4
void set_param_value_080038e4(int *param_struct, uint new_value)
{
  *param_struct = new_value;
  return;
}
// FUN_08005e68 0x08005e68
void do_nothing_08005e68(void)
{
  return;
}
// FUN_08005d48 0x08005d48
void clear_bit_08005d48(uint32_t base_address, uint32_t *data)
{
  uint32_t mask1 = 0xfffffeff;
  uint32_t mask2 = 0xfffffdff;
  uint32_t mask3 = 0xfffff7ff;
  uint32_t mask4 = 0xfffffbff;
  uint32_t reg1 = *(uint32_t *)(base_address + 0x20);
  uint32_t reg2 = *(uint32_t *)(base_address + 4);
  uint32_t reg3 = *data;
  uint32_t reg4 = param_2[1];
  uint32_t reg5 = param_2[2] << 8;
  if (base_address == DAT_08005da8) {
    reg5 = (reg5 & mask3 | param_2[3] << 8) & mask4;
    reg2 = reg2 & 0xffffcfff | param_2[5] << 4 | param_2[6] << 4;
  }
  *(uint32_t *)(base_address + 4) = reg2;
  *(uint32_t *)(base_address + 0x1c) = *(uint32_t *)(base_address + 0x1c) & 0xffffff8c | reg3;
  *(uint32_t *)(base_address + 0x3c) = reg4;
  *(uint32_t *)(base_address + 0x20) = reg1 & mask1 | reg5;
  return;
}