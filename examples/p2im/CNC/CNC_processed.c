
// FUN_0800192c 0x0800192c
void checkFlagStatus_0800192c(void)
{
  if ((PTR_DAT_08001954[0x28] & FLAG_BIT) == 0) {
    *(int *)PTR_DAT_08001958 = FLAG_OFF;
  }
  else {
    *(int *)PTR_DAT_08001958 = FLAG_ON;
  }
  return;
}
// FUN_08006950 0x08006950
void setParameter_08006950(uint parameterValue)
{
  uint* parameterAddress = (uint*)(DAT_08006994 + 0xc);
  uint originalValue = *parameterAddress;
  uint mask = 0xf8ff;
  uint maskedValue = originalValue & mask;
  uint shiftedValue = (parameterValue & 7) << 8;
  uint finalValue = maskedValue | shiftedValue | 0x5fa0000;
  *parameterAddress = finalValue;
  return;
}
// FUN_08008ba0 0x08008ba0
uint calculateValue_08008ba0(uint param1, uint param2)
{
  uint scaledValue = param2 * 2 + 0x200000;
  if (scaledValue * 2 < 0xffe00000) {
    if (scaledValue >= 0x7ffffe01) {
      return 0;
    }
    uint uVar1 = scaledValue >> 0x15;
    uint uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uint shiftedValue = (param2 << 0xb | 0x80000000 | param1 >> 0x15) >> (uVar3 & 0xff);
      if ((param2 & 0x80000000) != 0) {
        shiftedValue = -shiftedValue;
      }
      return shiftedValue;
    }
  }
  else if ((param1 | param2 << 0xc) != 0) {
    return 0;
  }
  if ((param2 & 0x80000000) == 0) {
    return 0x7fffffff;
  }
  return param2;
}
// FUN_08005a5c 0x08005a5c
void doNothing_08005a5c(void)
{
  // This function does nothing
  return;
}
// FUN_08005984 0x08005984
int checkSystemCallAvailability_08005984(int param)
{
  int isAvailable;
  if (*(int *)PTR_DAT_080059b0 == 0) {
    isAvailable = triggerSystemCall(1, param, 0);
  }
  else {
    isAvailable = 0;
  }
  return isAvailable;
}
// FUN_08007a10 0x08007a10
void setFlag_08007a10(int flagValue)
{
  uint* flagAddress = (uint*)(DAT_08007a64 + 0x40);
  if (flagValue == FLAG_1) {
    *flagAddress = *flagAddress | 1;
  }
  else if (flagValue == FLAG_2) {
    *flagAddress = *flagAddress | 2;
  }
  else if (flagValue == FLAG_3) {
    *flagAddress = *flagAddress | 4;
  }
  return;
}
// FUN_0800856c 0x0800856c

ulonglong FUNC_0800856c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar6 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar4 = count_leading_zeroes(uVar2);
  uVar5 = iVar4 + 0x15;
  bVar9 = SBORROW4(uVar5,0x20);
  uVar3 = iVar4 - 0xb;
  bVar7 = (int)uVar3 < 0;
  bVar8 = uVar3 == 0;
  if ((int)uVar5 < 0x20) {
    bVar9 = SCARRY4(uVar3,0xc);
    iVar4 = iVar4 + 1;
    bVar7 = iVar4 < 0;
    bVar8 = iVar4 == 0;
    uVar3 = uVar5;
    if (!bVar8 && bVar7 == bVar9) {
      uVar1 = uVar2 << (uVar5 & 0xff);
      uVar2 = uVar2 >> (0xcU - iVar4 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar8 || bVar7 != bVar9) {
    in_r12 = 0x20 - uVar3;
  }
  uVar2 = uVar2 << (uVar3 & 0xff);
  if (bVar8 || bVar7 != bVar9) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar7 != bVar9) {
    uVar1 = 0 << (uVar3 & 0xff);
  }
LAB_08008458:
  if ((int)uVar5 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6,uVar1);
  }
  uVar3 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar4 = uVar3 - 0x13;
  if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_1,uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) | uVar2 << (0xcU - iVar4 & 0xff))
         & 0x80000000ffffffff;
}


// FUN_08008b00 0x08008b00
undefined4 compare_and_return_uint_values_08008b00_08008b00(undefined4 input_value)
{
  compareUintValues_08008a74();
  return input_value;
}
// FUN_0800585c 0x0800585c
void updateDeviceFlagsIfFlagTwoIsSet_0800585c(void)
{
  if (PTR_DAT_08005878[1] == '\x02') {
    PTR_DAT_08005878[1] = 3;
    updateDeviceFlags();
  }
  return;
}
// FUN_0800597c 0x0800597c
void triggerSystemCall_0800597c(void)
{
  software_interrupt(0x3f);
  return;
}
// FUN_08009798 0x08009798
long long decode_float_08009798(uint32_t float_bits, uint32_t DAT_08009814, uint32_t unknown1, uint32_t unknown2) {
  uint32_t exponent = (float_bits << 1) >> 0x15;
  uint32_t exponent_diff = exponent - 0x3ff;
  if ((int)exponent_diff < 0x14) {
    if ((int)exponent_diff < 0) {
      return ((uint64_t)float_bits & 0x80000000) << 0x20;
    }
    uint32_t mantissa_mask = ~(DAT_08009814 >> (exponent_diff & 0xff));
    uint64_t mantissa = (uint64_t)(float_bits & mantissa_mask) << 0x20;
    return mantissa;
  }
  else {
    if ((int)exponent_diff < 0x34) {
      uint32_t mantissa_mask = ~(0xffffffffU >> (exponent - 0x413 & 0xff));
      uint64_t mantissa = float_bits & mantissa_mask;
      uint64_t result = (uint64_t)mantissa << 0x20 | (uint64_t)(unknown1 & ~mantissa_mask);
      return result;
    }
    if (exponent_diff != 0x400) {
      uint64_t result = (uint64_t)float_bits << 0x20 | unknown1;
      return result;
    }
    uint64_t result = FUNC_080082d4(float_bits, DAT_08009814, unknown1, unknown2, unknown2);
    return result;
  }
}
// FUN_08008cd8 0x08008cd8

uint FUNC_08008cd8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08008e12:
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
    if (uVar5 - 1 == 0 || uVar4 < 0x800000) {
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
      if (0xfd < uVar5) goto LAB_08008e12;
    }
  }
  uVar4 = uVar4 + uVar2 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


// FUN_08007930 0x08007930
void process_data_08007930(void)
{
  uint32_t *data_pointer;
  uint32_t data_value;
  uint32_t previous_data_value;
  int data_index;
  data_pointer = data_array_pointer;
  if (*data_count_pointer != 0) {
    data_index = *(int *)(data_array_pointer + 0x14);
    data_value = get_bits();
    *(uint32_t *)(data_pointer + data_index * 4) = data_value;
    if (*(int *)(data_pointer + 0x14) == 3) {
      data_index = 0;
    }
    else {
      data_index = *(int *)(data_pointer + 0x14) + 1;
    }
    *(int *)(data_pointer + 0x14) = data_index;
    previous_data_value = *(uint32_t *)(data_pointer + 0x10);
    data_value = get_combined_data_value();
    if (data_value != previous_data_value) {
      if ((~previous_data_value & data_value) != 0) {
        enable_tasks(~previous_data_value & data_value);
      }
      if ((~data_value & previous_data_value) != 0) {
        set_odd_bits_in_array(~data_value & previous_data_value);
      }
      *(uint32_t *)(data_pointer + 0x10) = data_value;
    }
  }
  return;
}
// FUN_080082ba 0x080082ba
void doNothing_080082ba(void)
{
  return;
}
// FUN_08000188 0x08000188
undefined * check_if_initialized_and_return_function_pointer_08000188(undefined *function_pointer)
{
  if (*PTR_DAT_080001a0 == '\0') {
    if (DAT_080001a4 != 0) {
      function_pointer = PTR_FUN_080001a8;
    }
    *PTR_DAT_080001a0 = 1;
  }
  return function_pointer;
}
// FUN_080082d0 0x080082d0

ulonglong FUNC_080082d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar6 = param_4 ^ 0x80000000;
  uVar9 = param_2 << 1;
  param_4 = param_4 << 1;
  bVar13 = ((param_2 ^ uVar6) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = (uVar9 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (param_4 | param_3) == 0;
  }
  iVar8 = (int)uVar9 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar8 == -1;
  }
  iVar1 = (int)param_4 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = uVar6;
      uVar11 = param_3;
      if (iVar8 == -1) {
        uVar9 = param_2;
        uVar11 = param_1;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar11;
        uVar6 = uVar9;
      }
      bVar14 = (uVar11 | uVar9 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | uVar6 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar9 == uVar6;
      }
      if (!bVar14) {
        uVar9 = uVar9 | 0x80000;
      }
      return CONCAT44(uVar9,uVar11);
    }
    if (((param_2 ^ uVar6) & 0x7fffffff) != 0 || param_1 != param_3) {
      if ((uVar9 | param_1) == 0) {
        param_1 = param_3;
        param_2 = uVar6;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar6) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar6 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar6 = uVar6 | 0x80000000;
      }
      return CONCAT44(uVar6,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_08008514:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar11 = param_4 - uVar9;
  bVar14 = uVar11 != 0;
  if (param_4 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= param_4) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = uVar6;
    param_3 = param_1;
    uVar6 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar4 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar4 = -uVar4 - (uint)bVar14;
  }
  uVar7 = uVar6 & 0xfffff | 0x100000;
  if ((uVar6 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -uVar7 - (uint)bVar14;
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar4 = uVar4 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar6 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar6 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar3 = uVar10 + param_3;
    uVar5 = uVar7 << (uVar6 & 0xff);
    uVar6 = uVar3 + uVar5;
    uVar4 = uVar4 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar3,uVar5);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar7 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar6 = uVar10 + uVar7;
    uVar4 = uVar4 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar7);
  }
  param_2 = uVar4 & 0x80000000;
  uVar11 = uVar4;
  if ((int)uVar4 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar6;
    uVar6 = -(uint)!bVar14 - uVar6;
    uVar11 = -(uint)(bVar14 <= uVar11) - uVar4;
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      uVar10 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      bVar2 = (byte)uVar6;
      uVar6 = (uint)(uVar10 != 0) << 0x1f | uVar6 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_08008514;
    }
LAB_080083e0:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (uVar6 & 1) != 0;
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar6,(uint)bVar14) | param_2,
                    uVar6 + bVar14);
  }
  bVar13 = (uVar12 & 0x80000000) != 0;
  uVar12 = uVar12 << 1;
  uVar10 = uVar6 * 2;
  bVar14 = CARRY4(uVar6,uVar6);
  uVar6 = uVar6 * 2 + (uint)bVar13;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar13));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_080083e0;
  uVar7 = uVar6;
  uVar9 = uVar11;
  if (uVar11 == 0) {
    uVar7 = 0;
    uVar9 = uVar6;
  }
  iVar8 = count_leading_zeroes(uVar9);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar11 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar11,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = (int)uVar6 < 0;
  bVar13 = uVar6 == 0;
  if ((int)uVar11 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    iVar8 = iVar8 + -0x1f;
    bVar14 = iVar8 < 0;
    bVar13 = iVar8 == 0;
    uVar6 = uVar11;
    if (!bVar13 && bVar14 == bVar15) {
      uVar7 = uVar9 << (uVar11 & 0xff);
      uVar9 = uVar9 >> (0xcU - iVar8 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar12 = 0x20 - uVar6;
  }
  uVar9 = uVar9 << (uVar6 & 0xff);
  if (bVar13 || bVar14 != bVar15) {
    uVar9 = uVar9 | uVar7 >> (uVar12 & 0xff);
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar7 = uVar7 << (uVar6 & 0xff);
  }
LAB_08008458:
  if ((int)uVar11 <= (int)uVar10) {
    return CONCAT44(uVar9 + (uVar10 - uVar11) * 0x100000 | param_2,uVar7);
  }
  uVar6 = ~(uVar10 - uVar11);
  if ((int)uVar6 < 0x1f) {
    iVar8 = uVar6 - 0x13;
    if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar6 - 0x1f,0xc)) {
      return CONCAT44(uVar4,uVar7 >> (0x20 - (0xcU - iVar8) & 0xff) | uVar9 << (0xcU - iVar8 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar6 = uVar6 + 1;
    return CONCAT44(param_2 | uVar9 >> (uVar6 & 0xff),
                    uVar7 >> (uVar6 & 0xff) | uVar9 << (0x20 - uVar6 & 0xff));
  }
  return CONCAT44(uVar4,uVar9 >> (uVar6 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


// FUN_08009318 0x08009318
long long calculate_result_08009318(uint32_t input1, uint32_t input2, uint32_t param3, uint32_t param4) {
  int shift_amount = ((input2 << 1) >> 21) - 1023;
  if (shift_amount < 20) {
    if (shift_amount < 0) {
      uint64_t result = FUNC_080082d4(input1, input2, DAT_08009400, DAT_08009404, param4);
      int end_reached = is_end_of_string_reached_08008b60((int)result, (int)(result >> 32), 0, 0);
      result = ((uint64_t)input2 << 32) | input1;
      if (end_reached) {
        if ((int)input2 < 0) {
          result = 0x8000000000000000;
        }
        else {
          input1 |= input2;
          result = ((uint64_t)input1 << 32);
          if (input1 != 0) {
            result = ((uint64_t)DAT_0800940c) << 32;
          }
        }
      }
      return result;
    }
    else {
      uint32_t mask = DAT_08009408 >> (shift_amount & 0xff);
      uint64_t result = ((uint64_t)input2 << 32) | input1;
      if ((input2 & mask) | input1) {
        uint64_t temp_result = FUNC_080082d4(input1, input2, DAT_08009400, DAT_08009404, param4);
        int end_reached = is_end_of_string_reached_08008b60((int)temp_result, (int)(temp_result >> 32), 0, 0);
        result = ((uint64_t)input2 << 32) | input1;
        if (end_reached) {
          if (input2 > 0) {
            if (shift_amount == 20) {
              input2++;
            }
            else {
              uint32_t carry = ((uint32_t)1 << (52 - shift_amount));
              bool carry_occurred = __builtin_uadd_overflow(carry, input1, &input1);
              if (carry_occurred) {
                input2++;
              }
            }
          }
          result = ((uint64_t)input2 << 32) | (input1 & ~mask);
        }
      }
      return result;
    }
  }
  else {
    uint64_t result = ((uint64_t)input2 << 32) | input1;
    if (shift_amount == 1024) {
      result = FUNC_080082d4();
    }
    return result;
  }
}
// FUN_080018cc 0x080018cc
void setParam_080018cc(uint value)
{
  uint* paramPtr = (uint*)(DAT_080018f8 + 0x14);
  uint currentValue = *paramPtr;
  *paramPtr = value | (currentValue & 0xfffffaaf);
  return;
}
// FUN_080079e0 0x080079e0
void setBitInArray_080079e0(byte bitIndex)
{
  int* arrayPtr = (int*)(DAT_08007a0c + ((uint)bitIndex >> 5) * 4);
  int bitMask = 1 << (bitIndex & 0x1f);
  *arrayPtr = bitMask;
  return;
}
// FUN_08006a58 0x08006a58
void setBitInExtendedArray_08006a58(byte bitIndex)
{
  int* arrayPtr = (int*)(DAT_08006a88 + (((uint)bitIndex >> 5) + 0x40) * 4);
  int bitMask = 1 << (bitIndex & 0x1f);
  *arrayPtr = bitMask;
  return;
}
// FUN_08005a84 0x08005a84
undefined4 getValueFromPointer_08005a84(void)
{
  undefined4* ptr = (undefined4*)PTR_DAT_08005a94;
  return *ptr;
}
// FUN_08008b10 0x08008b10
bool check_input_is_not_null_char_08008b10(void)
{
  char input_char;
  compare_and_return_uint_values_08008b00_08008b00();
  return input_char != '\0';
}
// FUN_08004e30 0x08004e30

undefined4 FUNC_08004e30(int param_1,uint param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    iVar4 = check_result_and_return_concatenation_0800923c(param_2,0);
    if (iVar4 != 0) {
      return 8;
    }
    *(uint *)(PTR_DAT_080051a8 + param_1 * 4) = param_2;
    break;
  case 3:
    iVar4 = is_input_empty_08009228(param_2,DAT_080051ac);
    if (iVar4 != 0) {
      return 9;
    }
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0xd] = uVar1;
    break;
  case 4:
    *(uint *)(PTR_DAT_080051a8 + 0x10) = param_2;
    break;
  case 5:
    *(uint *)(PTR_DAT_080051a8 + 0x14) = param_2;
    break;
  case 6:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x18) = uVar2;
    break;
  case 7:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3c] = uVar1;
    break;
  case 8:
    uVar3 = FUNC_08008eec(param_2,DAT_080051b0);
    uVar3 = FUNC_08008eec(uVar3,DAT_080051b0);
    *(undefined4 *)(PTR_DAT_080051a8 + 0x20) = uVar3;
    break;
  case 9:
    *(uint *)(PTR_DAT_080051a8 + 0x24) = param_2 & 0x7fffffff;
    break;
  case 10:
    *(uint *)(PTR_DAT_080051a8 + 0x1c) = param_2;
    break;
  case 0xb:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3e] = uVar1;
    break;
  case 0xc:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3d] = uVar1;
    break;
  case 0xd:
    iVar4 = checkResultIsNotEmpty_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 1;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfe;
    }
    break;
  case 0xe:
    iVar4 = checkResultIsNotEmpty_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 2;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfd;
    }
    break;
  case 0xf:
    iVar4 = checkResultIsNotEmpty_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 4;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfb;
    }
    break;
  case 0x10:
    iVar4 = checkResultIsNotEmpty_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 8;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xf7;
    }
    checkFlagStatus_0800192c();
    break;
  case 0x11:
    iVar4 = checkResultIsNotEmpty_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 0x10;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xef;
    }
    break;
  case 0x12:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x2a) = uVar2;
    break;
  case 0x13:
    *(uint *)(PTR_DAT_080051a8 + 0x2c) = param_2;
    break;
  case 0x14:
    *(uint *)(PTR_DAT_080051a8 + 0x30) = param_2;
    break;
  case 0x15:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x34) = uVar2;
    break;
  case 0x16:
    *(uint *)(PTR_DAT_080051a8 + 0x38) = param_2;
    break;
  case 0x17:
    uVar5 = FUNC_08008590(param_2);
    uVar5 = decode_float_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x1a) = uVar2;
    break;
  default:
    return 6;
  }
  initializeMemory_08004c2a();
  return 0;
}


// FUN_08008c30 0x08008c30
uint calculateFloat_08008c30(uint mantissa, uint exponent)
{
  uint shiftedMantissa = mantissa * 2;
  uint exponentShifted = shiftedMantissa + 0x90000000;
  uint shiftedMantissaOverflow = shiftedMantissa + 0x8fe00000;
  bool isExponentOverflow = shiftedMantissa < 0x70000000;
  uint result = exponentShifted;
  if (!isExponentOverflow) {
    result = shiftedMantissaOverflow;
  }
  bool isSpecialCase = result == 0;
  if (!isExponentOverflow && exponentShifted >= 0x200000) {
    isSpecialCase = shiftedMantissaOverflow == 0x1fc00000;
  }
  if ((isExponentOverflow || exponentShifted < 0x200000 || 0x1fc00000 < shiftedMantissaOverflow) || isSpecialCase) {
    if ((exponent & 0x40000000) != 0) {
      if (((int)shiftedMantissa >> 0x15 == -1) && ((mantissa | exponent << 0xc) != 0)) {
        return 0x7fc00000;
      }
      return exponent & 0x80000000 | 0x7f800000;
    }
    if ((int)(shiftedMantissaOverflow + 0x92e00000) < 0 != SCARRY4(exponentShifted,0x2e00000)) {
      return exponent & 0x80000000;
    }
    uint exponentShift = 0x18 - (shiftedMantissaOverflow + 0x92e00000 >> 0x15);
    uint shiftedMantissaNormalized = mantissa >> (exponentShift & 0xff);
    if (mantissa << (0x20 - exponentShift & 0xff) != 0) {
      shiftedMantissaNormalized = shiftedMantissaNormalized | 1;
    }
    uint mantissaNormalized = shiftedMantissaNormalized | (exponent & 0x1fffff | 0x100000) << (0x20 - exponentShift & 0xff);
    uint exponentNormalized = (exponent & 0x1fffff | 0x100000) >> (exponentShift & 0xff) << 1;
    result = (exponent & 0x80000000 | mantissaNormalized >> 0x1d) + exponentNormalized * 4 + (uint)(0x7fffffff < mantissa * 8);
    if (mantissa * 8 == 0x80000000) {
      result = result & 0xfffffffe;
    }
  }
  return result;
}
// FUN_080082d4 0x080082d4

ulonglong FUNC_080082d4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_2 << 1;
  uVar9 = param_4 << 1;
  bVar13 = ((param_2 ^ param_4) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = (uVar7 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (uVar9 | param_3) == 0;
  }
  iVar6 = (int)uVar7 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar6 == -1;
  }
  iVar1 = (int)uVar9 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar6 == -1 || iVar1 == -1) {
      uVar9 = param_4;
      uVar7 = param_3;
      if (iVar6 == -1) {
        uVar9 = param_2;
        uVar7 = param_1;
      }
      if (iVar6 != -1 || iVar1 != -1) {
        param_3 = uVar7;
        param_4 = uVar9;
      }
      bVar14 = (uVar7 | uVar9 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | param_4 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar9 == param_4;
      }
      if (!bVar14) {
        uVar9 = uVar9 | 0x80000;
      }
      return CONCAT44(uVar9,uVar7);
    }
    if (((param_2 ^ param_4) & 0x7fffffff) != 0 || param_1 != param_3) {
      if ((uVar7 | param_1) == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar7 >> 0x15 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar9 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar7 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_08008514:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar7 = uVar7 >> 0x15;
  uVar9 = uVar9 >> 0x15;
  uVar10 = uVar9 - uVar7;
  bVar14 = uVar10 != 0;
  if (uVar9 < uVar7) {
    uVar10 = -uVar10;
  }
  uVar8 = param_1;
  uVar5 = param_2;
  if (bVar14 && uVar7 <= uVar9) {
    uVar7 = uVar7 + uVar10;
    uVar8 = param_3;
    uVar5 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar10) {
    return CONCAT44(uVar5,uVar8);
  }
  uVar9 = uVar5 & 0xfffff | 0x100000;
  if ((uVar5 & 0x80000000) != 0) {
    bVar14 = uVar8 != 0;
    uVar8 = -uVar8;
    uVar9 = -uVar9 - (uint)bVar14;
  }
  uVar5 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar5 = -uVar5 - (uint)bVar14;
  }
  if (uVar7 == uVar10) {
    uVar5 = uVar5 ^ 0x100000;
    if (uVar7 == 0) {
      uVar9 = uVar9 ^ 0x100000;
      uVar7 = 1;
    }
    else {
      uVar10 = uVar10 - 1;
    }
  }
  uVar12 = -uVar10 + 0x20;
  if ((int)uVar10 < 0x21) {
    uVar11 = param_3 << (uVar12 & 0xff);
    param_3 = param_3 >> (uVar10 & 0xff);
    uVar3 = uVar8 + param_3;
    uVar4 = uVar5 << (uVar12 & 0xff);
    uVar12 = uVar3 + uVar4;
    uVar9 = uVar9 + CARRY4(uVar8,param_3) + ((int)uVar5 >> (uVar10 & 0xff)) +
            (uint)CARRY4(uVar3,uVar4);
  }
  else {
    uVar11 = uVar5 << (-uVar10 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar11 = uVar11 | 2;
    }
    uVar5 = (int)uVar5 >> (uVar10 - 0x20 & 0xff);
    uVar12 = uVar8 + uVar5;
    uVar9 = uVar9 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar8,uVar5);
  }
  param_2 = uVar9 & 0x80000000;
  uVar10 = uVar9;
  if ((int)uVar9 < 0) {
    bVar14 = uVar11 == 0;
    uVar11 = -uVar11;
    uVar10 = -uVar12;
    uVar12 = -(uint)!bVar14 - uVar12;
    uVar10 = -(uint)(bVar14 <= uVar10) - uVar9;
  }
  if (0xfffff < uVar10) {
    uVar8 = uVar7 - 1;
    if (0x1fffff < uVar10) {
      uVar9 = uVar10 & 1;
      uVar10 = uVar10 >> 1;
      bVar2 = (byte)uVar12;
      uVar12 = (uint)(uVar9 != 0) << 0x1f | uVar12 >> 1;
      uVar11 = (uint)(bVar2 & 1) << 0x1f | uVar11 >> 1;
      uVar8 = uVar7;
      if (0xffbfffff < uVar7 * 0x200000) goto LAB_08008514;
    }
LAB_080083e0:
    bVar14 = 0x7fffffff < uVar11;
    if (uVar11 == 0x80000000) {
      bVar14 = (uVar12 & 1) != 0;
    }
    return CONCAT44(uVar10 + uVar8 * 0x100000 + (uint)CARRY4(uVar12,(uint)bVar14) | param_2,
                    uVar12 + bVar14);
  }
  bVar13 = (uVar11 & 0x80000000) != 0;
  uVar11 = uVar11 << 1;
  uVar8 = uVar12 * 2;
  bVar14 = CARRY4(uVar12,uVar12);
  uVar12 = uVar12 * 2 + (uint)bVar13;
  uVar10 = uVar10 * 2 + (uint)(bVar14 || CARRY4(uVar8,(uint)bVar13));
  uVar8 = uVar7 - 2;
  if (uVar7 - 1 != 0 && 0xfffff < uVar10) goto LAB_080083e0;
  uVar5 = uVar12;
  uVar7 = uVar10;
  if (uVar10 == 0) {
    uVar5 = 0;
    uVar7 = uVar12;
  }
  iVar6 = count_leading_zeroes(uVar7);
  if (uVar10 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar12 = iVar6 - 0xb;
  bVar15 = SBORROW4(uVar12,0x20);
  uVar10 = iVar6 - 0x2b;
  bVar14 = (int)uVar10 < 0;
  bVar13 = uVar10 == 0;
  if ((int)uVar12 < 0x20) {
    bVar15 = SCARRY4(uVar10,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar14 = iVar6 < 0;
    bVar13 = iVar6 == 0;
    uVar10 = uVar12;
    if (!bVar13 && bVar14 == bVar15) {
      uVar5 = uVar7 << (uVar12 & 0xff);
      uVar7 = uVar7 >> (0xcU - iVar6 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar11 = 0x20 - uVar10;
  }
  uVar7 = uVar7 << (uVar10 & 0xff);
  if (bVar13 || bVar14 != bVar15) {
    uVar7 = uVar7 | uVar5 >> (uVar11 & 0xff);
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar5 = uVar5 << (uVar10 & 0xff);
  }
LAB_08008458:
  if ((int)uVar12 <= (int)uVar8) {
    return CONCAT44(uVar7 + (uVar8 - uVar12) * 0x100000 | param_2,uVar5);
  }
  uVar10 = ~(uVar8 - uVar12);
  if ((int)uVar10 < 0x1f) {
    iVar6 = uVar10 - 0x13;
    if (iVar6 != 0 && iVar6 < 0 == SCARRY4(uVar10 - 0x1f,0xc)) {
      return CONCAT44(uVar9,uVar5 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar7 << (0xcU - iVar6 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar10 & 0xff),
                    uVar5 >> (uVar10 & 0xff) | uVar7 << (0x20 - uVar10 & 0xff));
  }
  return CONCAT44(uVar9,uVar7 >> (uVar10 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


// FUN_08007bf0 0x08007bf0
void updateGlobalValue_08007bf0(uint newValue)
{
  _DAT_4000002c = newValue;
  if (newValue <= _DAT_40000024) {
    _DAT_40000024 = newValue;
  }
  return;
}
// FUN_08008590 0x08008590

ulonglong FUNC_08008590(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_1 << 1;
  bVar9 = uVar5 == 0;
  uVar1 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
  uVar4 = (uint)((int)uVar5 >> 3) >> 1;
  uVar3 = uVar1 | uVar4;
  param_1 = param_1 << 0x1d;
  if (!bVar9) {
    param_4 = uVar5 & 0xff000000;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff000000;
  }
  if (!bVar9) {
    return CONCAT44(uVar3,param_1) ^ 0x3800000000000000;
  }
  if ((uVar5 & 0xffffff) == 0) {
    return CONCAT44(uVar3,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar3,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar2 = 0;
    uVar5 = param_1;
  }
  iVar6 = count_leading_zeroes(uVar5);
  if (uVar4 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar10 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  if ((int)uVar7 < 0x20) {
    bVar10 = SCARRY4(uVar4,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar9 = iVar6 < 0;
    bVar8 = iVar6 == 0;
    uVar4 = uVar7;
    if (!bVar8 && bVar9 == bVar10) {
      uVar2 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar8 || bVar9 != bVar10) {
    in_r12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar8 || bVar9 != bVar10) {
    uVar5 = uVar5 | uVar2 >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar9 != bVar10) {
    uVar2 = uVar2 << (uVar4 & 0xff);
  }
LAB_08008458:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar1,uVar2);
  }
  uVar4 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar4) {
    return CONCAT44(uVar3,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar6 = uVar4 - 0x13;
  if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar4 - 0x1f,0xc)) {
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar1 | uVar5 >> (uVar4 & 0xff),
                    uVar2 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(uVar3,uVar2 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar5 << (0xcU - iVar6 & 0xff)) &
         0x80000000ffffffff;
}


// FUN_08007ad0 0x08007ad0
void initialize_data_08007ad0(void)
{
  setFlag(0x40000000);
  uint32_t* _DAT_40000000 = (uint32_t*)0x40000000;
  for(int i=0;i<10;i++)
  {
    _DAT_40000000[i] = 0;
  }
  _DAT_40000000[9] = (uint32_t)((uint64_t)DAT_08007b6c * (uint64_t)*PTR_DAT_08007b68 >> 0x38) - 1;
  for(int i=10;i<16;i++)
  {
    _DAT_40000000[i] = 0;
  }
  set_data_value_and_set_bit_in_array(0x40000000,0,0);
  return;
}
// FUN_080005b4 0x080005b4

uint FUNC_080005b4(undefined4 param_1)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_94 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [6];
  undefined4 local_58;
  byte local_52;
  undefined local_51 [20];
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  sbyte local_2f;
  char local_2e;
  char local_2d;
  undefined4 local_2c;
  byte local_27;
  ushort local_26;
  uint local_24;
  
  if (PTR_DAT_08000808[1] == '\x06') {
    uVar5 = 0xc;
  }
  else {
    local_51[0] = 0;
    local_26 = 0;
    local_27 = 0;
    local_2c = DAT_0800080c;
    local_2d = '\0';
    local_2e = '\0';
    fillMemoryWithByte_0800b430(auStack_70 + 3,0,0xc);
    fillMemoryWithByte_0800b430(auStack_70,0,0xc);
    *PTR_DAT_08000810 = 0;
    local_2f = 0;
    while (iVar3 = parse_and_validate_input_0800184c(&local_52,auStack_70 + 6,param_1,local_51), iVar3 != 0) {
      uVar7 = FUNC_08008590(local_58);
      uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      local_24 = calculateValue_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      if (local_52 == 0x47) {
        switch(local_24) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0x50:
          local_2f = 2;
          break;
        case 4:
        case 10:
        case 0x1c:
        case 0x1e:
        case 0x35:
        case 0x5c:
          local_2f = 1;
          break;
        case 0x11:
        case 0x12:
        case 0x13:
          local_2f = 3;
          break;
        case 0x14:
        case 0x15:
          local_2f = 7;
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          local_2f = 9;
          break;
        case 0x5a:
        case 0x5b:
          local_2f = 4;
          break;
        case 0x5d:
        case 0x5e:
          local_2f = 6;
        }
        switch(local_24) {
        case 0:
          PTR_DAT_08000ca0[1] = 0;
          break;
        case 1:
          PTR_DAT_08000ca0[1] = 1;
          break;
        case 2:
          PTR_DAT_08000ca0[1] = 2;
          break;
        case 3:
          PTR_DAT_08000ca0[1] = 3;
          break;
        case 4:
          local_2e = '\x01';
          break;
        default:
          *PTR_DAT_08000ca0 = 3;
          break;
        case 10:
          local_2e = '\x02';
          break;
        case 0x11:
          set_data_values_08000478(0,1,2);
          break;
        case 0x12:
          set_data_values_08000478(2,0,1);
          break;
        case 0x13:
          set_data_values_08000478(1,2,0);
          break;
        case 0x14:
          PTR_DAT_08000ca0[3] = 1;
          break;
        case 0x15:
          PTR_DAT_08000ca0[3] = 0;
          break;
        case 0x1c:
        case 0x1e:
          uVar4 = FUNC_08008eec(local_58,DAT_08000ca4);
          uVar7 = FUNC_08008590(uVar4);
          uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = calculateValue_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          switch(local_24) {
          case 0x118:
            local_2e = '\x03';
            break;
          case 0x119:
            local_2e = '\x04';
            break;
          default:
            *PTR_DAT_08000ca0 = 3;
            break;
          case 300:
            local_2e = '\x05';
            break;
          case 0x12d:
            local_2e = '\x06';
          }
          break;
        case 0x35:
          local_2d = '\x01';
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          PTR_DAT_08000ca0[0x1c] = (char)local_24 + -0x36;
          break;
        case 0x50:
          PTR_DAT_08000ca0[1] = 4;
          break;
        case 0x5a:
          PTR_DAT_08000ca0[4] = 1;
          break;
        case 0x5b:
          PTR_DAT_08000ca0[4] = 0;
          break;
        case 0x5c:
          uVar4 = FUNC_08008eec(local_58,DAT_08000ca4);
          uVar7 = FUNC_08008590(uVar4);
          uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = calculateValue_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          if (local_24 == 0x398) {
            local_2e = '\a';
          }
          else if (local_24 == 0x399) {
            local_2e = '\b';
          }
          else {
            *PTR_DAT_08000ca0 = 3;
          }
          break;
        case 0x5d:
          PTR_DAT_08000ca0[2] = 1;
          break;
        case 0x5e:
          PTR_DAT_08000ca0[2] = 0;
        }
      }
      else if (local_52 == 0x4d) {
        if (local_24 == 0x1e) {
LAB_08000b96:
          local_2f = 5;
        }
        else if ((int)local_24 < 0x1f) {
          if ((int)local_24 < 3) {
            if (-1 < (int)local_24) goto LAB_08000b96;
          }
          else if (local_24 - 3 < 3) {
            local_2f = 8;
          }
        }
        switch(local_24) {
        case 0:
          PTR_DAT_08000ca0[5] = 1;
          break;
        case 1:
          break;
        case 2:
        case 0x1e:
          PTR_DAT_08000ca0[5] = 2;
          break;
        case 3:
          PTR_DAT_08000ca0[6] = 1;
          break;
        case 4:
          PTR_DAT_08000ca0[6] = 0xff;
          break;
        case 5:
          PTR_DAT_08000ca0[6] = 0;
          break;
        default:
          *PTR_DAT_08000ca0 = 3;
          break;
        case 7:
          PTR_DAT_08000ca0[7] = 2;
          break;
        case 8:
          PTR_DAT_08000ca0[7] = 1;
          break;
        case 9:
          PTR_DAT_08000ca0[7] = 0;
        }
      }
      if (local_2f != 0) {
        if (((int)(uint)local_26 >> local_2f & 1U) == 0) {
          local_26 = local_26 | (ushort)(1 << local_2f);
        }
        else {
          *PTR_DAT_08000ca0 = 5;
        }
        local_2f = 0;
      }
    }
    if (*PTR_DAT_08000ff0 == '\0') {
      local_34 = 0;
      local_38 = 0;
      local_39 = '\0';
      local_51[0] = 0;
switchD_08000d18_caseD_47:
      iVar3 = parse_and_validate_input_0800184c(&local_52,auStack_70 + 6,param_1,local_51);
      if (iVar3 != 0) {
        switch(local_52) {
        case 0x46:
          iVar3 = check_result_and_return_concatenation_0800923c(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          if (PTR_DAT_08000ff0[2] == '\0') {
            uVar4 = calculate_result_0800056c(local_58);
            *(undefined4 *)(PTR_DAT_08000ff0 + 8) = uVar4;
          }
          else {
            local_2c = calculate_result_0800056c(local_58);
          }
          break;
        case 0x47:
        case 0x4d:
        case 0x4e:
          break;
        default:
          *PTR_DAT_08000ff0 = 3;
          break;
        case 0x49:
        case 0x4a:
        case 0x4b:
          uVar5 = (uint)local_52;
          uVar4 = calculate_result_0800056c(local_58);
          auStack_70[uVar5 - 0x49] = uVar4;
          break;
        case 0x4c:
          uVar7 = FUNC_08008590(local_58);
          uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_39 = calculate_value_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          break;
        case 0x50:
          local_34 = local_58;
          break;
        case 0x52:
          local_38 = calculate_result_0800056c(local_58);
          break;
        case 0x53:
          iVar3 = is_input_empty_08009228(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          break;
        case 0x54:
          iVar3 = is_input_empty_08009228(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          uVar7 = FUNC_08008590(local_58);
          uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          uVar2 = calculate_value_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          PTR_DAT_08000ff0[0x18] = uVar2;
          break;
        case 0x58:
          auStack_70[3] = calculate_result_0800056c(local_58);
          local_27 = local_27 | 1;
          break;
        case 0x59:
          auStack_70[4] = calculate_result_0800056c(local_58);
          local_27 = local_27 | 2;
          break;
        case 0x5a:
          auStack_70[5] = calculate_result_0800056c(local_58);
          local_27 = local_27 | 4;
        }
        goto switchD_08000d18_caseD_47;
      }
      if (*PTR_DAT_08000ff0 == '\0') {
        if (PTR_DAT_08000ff4[1] != '\a') {
          checkAndUpdateCharacter_0800525c((int)(char)PTR_DAT_08000ff0[6]);
          update_status_08000220(PTR_DAT_08000ff0[7]);
        }
        if ((local_26 & 0x200) != 0) {
          iVar3 = verify_checksum_08004d7c(PTR_DAT_08000ff0[0x1c],&local_7c);
          puVar1 = PTR_DAT_08000ff0;
          if (iVar3 == 0) {
            return 10;
          }
          *(undefined4 *)(PTR_DAT_08000ff0 + 0x20) = local_7c;
          *(undefined4 *)(puVar1 + 0x24) = uStack_78;
          *(undefined4 *)(puVar1 + 0x28) = uStack_74;
        }
        switch(local_2e) {
        case '\x01':
          iVar3 = is_input_empty_08009228(local_34,0);
          if (iVar3 == 0) {
            if (PTR_DAT_08000ff4[1] != '\a') {
              display_alarm_until_condition_met_08002fd4_08002408(local_34);
            }
          }
          else {
            *PTR_DAT_08000ff0 = 6;
          }
          break;
        case '\x02':
          uVar7 = FUNC_08008590(local_34);
          uVar7 = decode_float_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = calculateValue_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          if ((((local_39 == '\x02') || (local_39 == '\x14')) && (-1 < (int)local_24)) &&
             ((int)local_24 < 7)) {
            if ((local_27 == 0) && (local_39 == '\x02')) {
              *PTR_DAT_08000ff0 = 6;
            }
            else {
              if ((int)local_24 < 1) {
                local_24 = (uint)(byte)PTR_DAT_08001304[0x1c];
              }
              else {
                local_24 = local_24 - 1;
              }
              iVar3 = verify_checksum_08004d7c(local_24 & 0xff,local_94);
              if (iVar3 == 0) {
                return 10;
              }
              for (local_3a = 0; local_3a < 3; local_3a = local_3a + 1) {
                if (((int)(uint)local_27 >> local_3a & 1U) != 0) {
                  if (local_39 == '\x14') {
                    uVar5 = (uint)local_3a;
                    uVar4 = FUNC_08008cd8(*(undefined4 *)(PTR_DAT_08001304 + (local_3a + 2) * 4 + 4),
                                         auStack_70[local_3a + 3]);
                    local_94[uVar5] = uVar4;
                  }
                  else {
                    local_94[local_3a] = auStack_70[local_3a + 3];
                  }
                }
              }
              set_memory_with_checksum_08004bf4(local_24 & 0xff,local_94);
              puVar1 = PTR_DAT_08001304;
              if (local_24 == (byte)PTR_DAT_08001304[0x1c]) {
                *(undefined4 *)(PTR_DAT_08001304 + 0x20) = local_94[0];
                *(undefined4 *)(puVar1 + 0x24) = local_94[1];
                *(undefined4 *)(puVar1 + 0x28) = local_94[2];
              }
            }
          }
          else {
            *PTR_DAT_08000ff0 = 3;
          }
          local_27 = 0;
          break;
        case '\x03':
        case '\x05':
          if (local_27 != 0) {
            for (local_3b = 0; local_3b < 3; local_3b = local_3b + 1) {
              if (((int)(uint)local_27 >> local_3b & 1U) == 0) {
                auStack_70[local_3b + 3] =
                     *(undefined4 *)(PTR_DAT_08001304 + (local_3b + 2) * 4 + 4);
              }
              else if (PTR_DAT_08001304[4] == '\0') {
                uVar5 = (uint)local_3b;
                uVar4 = FUNC_08008cdc(auStack_70[local_3b + 3],
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3b + 2) * 4 + 4));
                auStack_70[uVar5 + 3] = uVar4;
              }
              else {
                uVar6 = auStack_70[local_3b + 3];
                uVar4 = FUNC_08008cdc(*(undefined4 *)(PTR_DAT_08001304 + (local_3b + 8) * 4),
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3b + 10) * 4 + 4));
                uVar5 = (uint)local_3b;
                uVar4 = FUNC_08008cdc(uVar6,uVar4);
                auStack_70[uVar5 + 3] = uVar4;
              }
            }
            checkDeviceStatusAndUpdateIfNecessary_08001e98(auStack_70[3],auStack_70[4],auStack_70[5],
                         *(undefined4 *)(PTR_DAT_08001308 + 0x14),0);
          }
          if (local_2e == '\x05') {
            iVar3 = verify_checksum_08004d7c(7,local_94 + 3);
            if (iVar3 == 0) {
              return 10;
            }
          }
          else {
            iVar3 = verify_checksum_08004d7c(6,local_94 + 3);
            if (iVar3 == 0) {
              return 10;
            }
          }
          checkDeviceStatusAndUpdateIfNecessary_08001e98(local_94[3],local_84,local_80,*(undefined4 *)(PTR_DAT_08001308 + 0x14),0);
          puVar1 = PTR_DAT_08001304;
          *(undefined4 *)(PTR_DAT_08001304 + 0xc) = local_94[3];
          *(undefined4 *)(puVar1 + 0x10) = local_84;
          *(undefined4 *)(puVar1 + 0x14) = local_80;
          local_27 = 0;
          break;
        case '\x04':
        case '\x06':
          if (local_2e == '\x06') {
            set_memory_with_checksum_08004bf4(7,PTR_DAT_0800130c);
          }
          else {
            set_memory_with_checksum_08004bf4(6,PTR_DAT_0800130c);
          }
          break;
        case '\a':
          if (local_27 == 0) {
            *PTR_DAT_08001304 = 6;
          }
          else {
            for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
              if (((int)(uint)local_27 >> local_3c & 1U) != 0) {
                uVar4 = FUNC_08008cd8(*(undefined4 *)(PTR_DAT_08001304 + (local_3c + 2) * 4 + 4),
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3c + 8) * 4));
                uVar5 = (uint)local_3c;
                uVar4 = FUNC_08008cd8(uVar4,auStack_70[local_3c + 3]);
                *(undefined4 *)(PTR_DAT_08001304 + (uVar5 + 10) * 4 + 4) = uVar4;
              }
            }
          }
          local_27 = 0;
          break;
        case '\b':
          fillMemoryWithByte_0800b430(PTR_DAT_08001310,0,0xc);
        }
        if (((local_26 & 4) != 0) || (local_27 != 0)) {
          if ((PTR_DAT_08001574[2] != '\0') &&
             ((iVar3 = is_input_empty_08009228(local_2c,0), iVar3 != 0 && (PTR_DAT_08001574[1] != '\x04')))) {
            *PTR_DAT_08001574 = 6;
          }
          if (((local_2d != '\0') && (PTR_DAT_08001574[1] != '\0')) &&
             (PTR_DAT_08001574[1] != '\x01')) {
            *PTR_DAT_08001574 = 6;
          }
          if (*PTR_DAT_08001574 != '\0') {
            return (uint)(byte)*PTR_DAT_08001574;
          }
          for (local_3d = 0; puVar1 = PTR_DAT_08001840, local_3d < 3; local_3d = local_3d + 1) {
            if (((int)(uint)local_27 >> local_3d & 1U) == 0) {
              auStack_70[local_3d + 3] = *(undefined4 *)(PTR_DAT_08001574 + (local_3d + 2) * 4 + 4);
            }
            else if (local_2d == '\0') {
              if (PTR_DAT_08001574[4] == '\0') {
                uVar5 = (uint)local_3d;
                uVar4 = FUNC_08008cdc(auStack_70[local_3d + 3],
                                     *(undefined4 *)(PTR_DAT_08001574 + (local_3d + 2) * 4 + 4));
                auStack_70[uVar5 + 3] = uVar4;
              }
              else {
                uVar6 = auStack_70[local_3d + 3];
                uVar4 = FUNC_08008cdc(*(undefined4 *)(PTR_DAT_08001574 + (local_3d + 8) * 4),
                                     *(undefined4 *)(PTR_DAT_08001574 + (local_3d + 10) * 4 + 4));
                uVar5 = (uint)local_3d;
                uVar4 = FUNC_08008cdc(uVar6,uVar4);
                auStack_70[uVar5 + 3] = uVar4;
              }
            }
          }
          if ((byte)PTR_DAT_08001574[1] < 5) {
                    /* WARNING: Could not recover jumptable at 0x08001474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*(code *)(&switchD_08001474::switchdataD_08001478)[(byte)PTR_DAT_08001574[1]])
                              ();
            return uVar5;
          }
          if (*PTR_DAT_08001840 != '\0') {
            return (uint)(byte)*PTR_DAT_08001840;
          }
          *(undefined4 *)(PTR_DAT_08001840 + 0xc) = auStack_70[3];
          *(undefined4 *)(puVar1 + 0x10) = auStack_70[4];
          *(undefined4 *)(puVar1 + 0x14) = auStack_70[5];
        }
        if (PTR_DAT_08001840[5] != '\0') {
          display_alarm_until_condition_met_08002fd4();
          PTR_DAT_08001848[0x10] = 0;
          if (PTR_DAT_08001840[5] == '\x02') {
            enable_task_execution_if_not_already_enabled_080025e8();
          }
          else {
            PTR_DAT_08001840[5] = 0;
          }
        }
        uVar5 = (uint)(byte)*PTR_DAT_08001840;
      }
      else {
        uVar5 = (uint)(byte)*PTR_DAT_08000ff0;
      }
    }
    else {
      uVar5 = (uint)(byte)*PTR_DAT_08000ff0;
    }
  }
  return uVar5;
}


// FUN_080039a0 0x080039a0
void initialize_game_080039a0(void)
{
  resetData_08003980();
  display_help_message();
  *(int *)PTR_DAT_080039b8 = 1;
  return;
}
// FUN_08009204 0x08009204
undefined8 calculateResultAndReturnConcatenation_08009204_08009204(undefined4 param1, undefined4 param2)
{
  calculateResult_0800919c();
  return CONCAT44(param2, param1);
}
// FUN_080029d8 0x080029d8
void processInputAndCalculateResult_080029d8(undefined4 inputParam, int inputStructAddr, int outputStructAddr) {
  int isResultNotEmpty;
  undefined4 calculatedResult;
  undefined4 inputCopy;
  int isEndOfInputReached;
  if ((inputStructAddr != 0) && (outputStructAddr != 0)) {
    isResultNotEmpty = checkResultIsNotEmpty(*(undefined4 *)(inputStructAddr + 0x18), *(undefined4 *)(inputStructAddr + 0x1c));
    if (isResultNotEmpty == 0) {
      if ((*(char *)(inputStructAddr + 0x25) == '\0') && (is_end_of_input_reached(*(undefined4 *)(inputStructAddr + 0x1c), *(undefined4 *)(outputStructAddr + 0x18)) != 0)) {
        inputCopy = *(undefined4 *)(inputStructAddr + 0x1c);
        calculatedResult = calculate_result_from_input(*(uint *)(PTR_DAT_08002a90 + 0x20) ^ 0x80000000, *(undefined4 *)(outputStructAddr + 0x18), *(undefined4 *)(inputStructAddr + 0x20));
        if (is_input_empty(inputCopy, calculatedResult) == 0) {
          calculatedResult = calculate_result_from_input(*(uint *)(PTR_DAT_08002a90 + 0x20) ^ 0x80000000, *(undefined4 *)(outputStructAddr + 0x18), *(undefined4 *)(inputStructAddr + 0x20));
        }
        *(undefined4 *)(inputStructAddr + 0x18) = calculatedResult;
      }
      else {
        *(undefined4 *)(inputStructAddr + 0x18) = *(undefined4 *)(inputStructAddr + 0x1c);
      }
      *(undefined *)(inputStructAddr + 0x24) = 1;
    }
  }
  return;
}
// FUN_08007c5e 0x08007c5e
void setGlobalVariable_08007c5e(undefined4 value)
{
  _DAT_40000038 = value;
  return;
}
// FUN_08005760 0x08005760
void update_parameter_08005760(void)
{
  int parameter_value = *(int *)(PTR_DAT_08005774 + 0x18);
  update_param_value(parameter_value);
  return;
}
// FUN_08008b24 0x08008b24
bool is_end_of_input_08008b24(void)
{
  char current_char;
  compare_and_return_uint_values();
  return current_char == '\0';
}
// FUN_08002814 0x08002814
void doNothing_08002814()
{
  return;
}
// FUN_0800587c 0x0800587c
void updateData_0800587c()
{
  if (PTR_DAT_0800589c[1] == '\x03') {
    PTR_DAT_0800589c[1] = 4;
    PTR_DAT_0800589c[0x10] = 0;
  }
  return;
}
// FUN_08008a02 0x08008a02
ulonglong calculateDouble_08008a02(uint mantissa, uint sign, uint exponent, uint zeroBits)
{
  uint shiftedMantissa = mantissa << 1;
  bool isZero = shiftedMantissa == 0;
  uint signShift = (uint)((mantissa & 0x80000000) != 0) << 0x1f;
  uint exponentShifted = (uint)((int)shiftedMantissa >> 3) >> 1 | signShift;
  mantissa = mantissa << 0x1d;
  if (!isZero) {
    zeroBits = shiftedMantissa & 0xff000000;
    isZero = zeroBits == 0;
  }
  if (!isZero) {
    isZero = zeroBits == 0xff000000;
  }
  if (!isZero) {
    return CONCAT44(exponentShifted,mantissa) ^ 0x3800000000000000;
  }
  if ((shiftedMantissa & 0xffffff) == 0) {
    return CONCAT44(exponentShifted,mantissa);
  }
  if (zeroBits == 0xff000000) {
    return CONCAT44(exponentShifted,mantissa) | 0x8000000000000;
  }
  uint shiftedMantissaNormalized = mantissa;
  uint exponentShift = (uint)((int)shiftedMantissa >> 3) >> 1;
  if (exponentShift == 0) {
    shiftedMantissaNormalized = 0;
    exponentShift = mantissa;
  }
  int leadingZeroes = count_leading_zeroes(exponentShift);
  if (exponentShift == 0) {
    leadingZeroes = leadingZeroes + 0x20;
  }
  uint shiftAmount = leadingZeroes - 0xb;
  bool isShiftAmountNegative = shiftAmount < 0;
  bool isShiftAmountZero = shiftAmount == 0;
  if (leadingZeroes < 0x20) {
    isShiftAmountNegative = shiftAmount + 0xc < 0;
    leadingZeroes = leadingZeroes + -0x1f;
    isShiftAmountZero = leadingZeroes == 0;
    exponentShift = shiftAmount;
    if (!isShiftAmountZero && isShiftAmountNegative == SBORROW4(shiftAmount,0xc)) {
      shiftedMantissaNormalized = shiftedMantissa << (shiftAmount & 0xff);
      shiftedMantissa = shiftedMantissa >> (0xcU - leadingZeroes & 0xff);
      goto LAB_08008458;
    }
  }
  uint shiftAmountNormalized = shiftAmount;
  if (isShiftAmountZero || isShiftAmountNegative) {
    shiftAmountNormalized = 0x20 - exponentShift;
  }
  shiftedMantissa = shiftedMantissa << (shiftAmountNormalized & 0xff);
  if (exponentShift == 0) {
    shiftedMantissaNormalized = shiftedMantissa;
  }
LAB_08008458:
  return CONCAT44(exponentShifted | ((uint)(shiftedMantissaNormalized | shiftedMantissa) != 0),shiftedMantissa);
}
// FUN_0800369c 0x0800369c
void send_string_to_device_0800369c(char *stringToSend) {
  char *currentChar = stringToSend;
  while (*currentChar != '\0') {
    send_byte_to_device(*currentChar);
    currentChar++;
  }
  return;
}
// FUN_08005a98 0x08005a98
void waitForValueToBeGreaterThanSumOfValueAndParameter_08005a98(int targetSum)
{
  int initialValue = getValueFromPointer_08005a84();
  uint currentValue;
  do {
    currentValue = getValueFromPointer_08005a84();
  } while (currentValue < (uint)(targetSum + initialValue));
  return;
}
// FUN_08008cdc 0x08008cdc

uint FUNC_08008cdc(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08008e12:
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
    if (uVar4 - 1 == 0 || uVar3 < 0x800000) {
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
      if (0xfd < uVar4) goto LAB_08008e12;
    }
  }
  uVar3 = uVar3 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar2);
  if (uVar2 == 0x80000000) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  return uVar3 | param_1;
}


// FUN_080044e8 0x080044e8
void verifyAndPrintData_080044e8(void)
{
  int data_index;
  undefined4 checksum_array[3];
  byte data_counter = 0;
  while (true)
  {
    if (data_counter > 7)
    {
      send_string_to_device_080036c6(DATA_VERIFIED_MSG);
      for (byte i = 0; i < 3; i++)
      {
        if ((PTR_DAT_080046bc[0x28] & 1) == 0)
        {
          print_float_08003826(*(undefined4 *)(PTR_DAT_080046cc + (i + 10) * 4 + 4));
        }
        else
        {
          undefined8 double_value = FUNC_08008590(*(undefined4 *)(PTR_DAT_080046cc + (i + 10) * 4 + 4));
          double_value = FUNC_08008640((int)double_value,(int)((ulonglong)double_value >> 0x20),DAT_08004690,DAT_08004694);
          undefined4 float_value = calculateFloat_08008c30((int)double_value,(int)((ulonglong)double_value >> 0x20));
          print_float_08003826(float_value);
        }
        if (i < 2)
        {
          send_string_to_device_080036c6(MIDDLE_SEPARATOR);
        }
        else
        {
          send_string_to_device_080036c6(LAST_SEPARATOR);
        }
      }
      return;
    }
    int checksum_result = verify_checksum_08004d7c(data_counter,checksum_array);
    if (checksum_result == 0) break;
    send_string_to_device_080036c6(CHECKSUM_ERROR_MSG);
    switch(data_counter)
    {
      case 0:
        send_string_to_device_080036c6(CHECKSUM_ERROR_0_MSG);
        break;
      case 1:
        send_string_to_device_080036c6(CHECKSUM_ERROR_1_MSG);
        break;
      case 2:
        send_string_to_device_080036c6(CHECKSUM_ERROR_2_MSG);
        break;
      case 3:
        send_string_to_device_080036c6(CHECKSUM_ERROR_3_MSG);
        break;
      case 4:
        send_string_to_device_080036c6(CHECKSUM_ERROR_4_MSG);
        break;
      case 5:
        send_string_to_device_080036c6(CHECKSUM_ERROR_5_MSG);
        break;
      case 6:
        send_string_to_device_080036c6(CHECKSUM_ERROR_6_MSG);
        break;
      case 7:
        send_string_to_device_080036c6(CHECKSUM_ERROR_7_MSG);
        break;
    }
    for (byte i = 0; i < 3; i++)
    {
      if ((PTR_DAT_080046bc[0x28] & 1) == 0)
      {
        print_float_08003826(checksum_array[i]);
      }
      else
      {
        undefined8 double_value = FUNC_08008590(checksum_array[i]);
        double_value = FUNC_08008640((int)double_value,(int)((ulonglong)double_value >> 0x20),DAT_08004690,DAT_08004694);
        undefined4 float_value = calculateFloat_08008c30((int)double_value,(int)((ulonglong)double_value >> 0x20));
        print_float_08003826(float_value);
      }
      if (i < 2)
      {
        send_string_to_device_080036c6(MIDDLE_SEPARATOR);
      }
      else
      {
        send_string_to_device_080036c6(LAST_SEPARATOR);
      }
    }
    data_counter++;
  }
  send_error_message_08004030(DATA_VERIFICATION_ERROR);
  return;
}
// FUN_08006c9c 0x08006c9c
bool check_param_is_valid_08006c9c(unsigned int param) {
  bool is_valid = param < 0x1000000;
  if (is_valid) {
    DAT_08006cdc[1] = param - 1;
    set_data_value_08006b00(0xffffffff, 0xf);
    DAT_08006cdc[2] = 0;
    *DAT_08006cdc = 7;
  }
  return !is_valid;
}
// FUN_0800a5a0 0x0800a5a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUNC_0800a5a0(int param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint **ppuVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  undefined8 *local_284;
  int local_280;
  int local_270;
  int local_26c;
  uint *local_260 [2];
  uint local_258 [20];
  undefined8 uStack_208;
  undefined8 local_168;
  int local_160 [38];
  undefined8 uStack_c8;
  
  uVar28 = CONCAT44(param_5,param_5);
  iVar15 = *(int *)(PTR_DAT_0800a894 + param_5 * 4);
  iVar9 = param_4 + -1;
  local_260[1] = (uint *)param_2;
  if (param_3 + 0x14 < 0 == SCARRY4(param_3,0x14)) {
    local_26c = (int)((longlong)DAT_0800a898 * (longlong)(param_3 + -3) >> 0x22) -
                (param_3 + -3 >> 0x1f);
    local_270 = (local_26c + 1) * -0x18;
  }
  else {
    local_270 = -0x18;
    local_26c = 0;
  }
  local_270 = param_3 + local_270;
  iVar17 = local_26c - iVar9;
  if (-1 < iVar15 + iVar9) {
    iVar21 = iVar15 + iVar9 + 1 + iVar17;
    puVar16 = &uStack_208;
    do {
      while (iVar17 < 0) {
        iVar17 = iVar17 + 1;
        *(undefined4 *)puVar16 = 0;
        *(undefined4 *)((int)puVar16 + 4) = 0;
        puVar16 = puVar16 + 1;
        if (iVar17 == iVar21) goto LAB_0800a626;
      }
      uVar26 = FUNC_0800856c(*(undefined4 *)(param_6 + iVar17 * 4));
      iVar17 = iVar17 + 1;
      *puVar16 = uVar26;
      puVar16 = puVar16 + 1;
    } while (iVar17 != iVar21);
  }
LAB_0800a626:
  puVar10 = (undefined4 *)(param_1 + -8);
  if (-1 < iVar15) {
    puVar22 = &uStack_208 + param_4;
    iVar17 = iVar9;
    puVar16 = &uStack_c8;
    do {
      if (iVar9 < 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        puVar23 = puVar10;
        puVar19 = puVar22;
        do {
          puVar18 = puVar23 + 2;
          uVar25 = FUNC_08008640(*puVar18,puVar23[3],*(undefined4 *)(puVar19 + -1),
                                *(undefined4 *)((int)puVar19 + -4));
          uVar26 = FUNC_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
          puVar23 = puVar18;
          puVar19 = puVar19 + -1;
        } while (puVar18 != puVar10 + param_4 * 2);
      }
      iVar17 = iVar17 + 1;
      *puVar16 = uVar26;
      puVar22 = puVar22 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar17 != iVar15 + param_4);
  }
  local_260[0] = local_258 + iVar15 + -1;
  iVar17 = iVar15;
  do {
    uVar26 = CONCAT44(*(undefined4 *)((int)&uStack_c8 + iVar17 * 8 + 4),
                      *(undefined4 *)(&uStack_c8 + iVar17));
    if (0 < iVar17) {
      puVar16 = &uStack_c8 + iVar17;
      puVar5 = local_258;
      do {
        uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
        FUNC_08008640((int)uVar26,uVar6,0,DAT_0800a89c);
        calculateValue_08008ba0();
        uVar25 = FUNC_0800856c();
        uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar27 = FUNC_08008640((int)uVar25,uVar8,0,DAT_0800a8a0);
        FUNC_080082d0((int)uVar26,uVar6,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        uVar2 = calculateValue_08008ba0();
        puVar22 = puVar16 + -1;
        uVar6 = *(undefined4 *)puVar22;
        uVar11 = *(undefined4 *)((int)puVar16 + -4);
        *puVar5 = uVar2;
        uVar26 = FUNC_080082d4((int)uVar25,uVar8,uVar6,uVar11);
        puVar16 = puVar22;
        puVar5 = puVar5 + 1;
      } while (puVar22 != &uStack_c8);
    }
    uVar26 = calculate_0800b2e8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),local_270);
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    FUNC_08008640((int)uVar26,uVar8,0,0x3fc00000);
    uVar25 = decode_080094c0();
    uVar25 = FUNC_08008640((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,DAT_0800a8a4);
    uVar26 = FUNC_080082d0((int)uVar26,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar2 = calculateValue_08008ba0();
    uVar25 = FUNC_0800856c();
    uVar26 = FUNC_080082d0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar8 = (undefined4)uVar26;
    if (local_270 < 1) {
      if (local_270 == 0) {
        iVar21 = (int)local_258[iVar17 + -1] >> 0x17;
        goto joined_r0x0800a8b8;
      }
      iVar21 = check_for_zero_or_carry_flag_08008b4c(uVar8,uVar6,0,DAT_0800ac3c);
      if (iVar21 != 0) {
        uVar2 = uVar2 + 1;
        if (iVar17 < 1) {
          uVar26 = FUNC_080082d0(0,DAT_0800ac38,uVar8,uVar6);
          iVar21 = 2;
          goto LAB_0800a7a4;
        }
        iVar21 = 2;
        goto LAB_0800a8c8;
      }
    }
    else {
      iVar4 = (int)local_258[iVar17 + -1] >> (0x18U - local_270 & 0xff);
      uVar12 = local_258[iVar17 + -1] - (iVar4 << (0x18U - local_270 & 0xff));
      iVar21 = (int)uVar12 >> (0x17U - local_270 & 0xff);
      local_258[iVar17 + -1] = uVar12;
      uVar2 = uVar2 + iVar4;
joined_r0x0800a8b8:
      if (0 < iVar21) {
        uVar2 = uVar2 + 1;
        if (iVar17 < 1) {
          uVar12 = 0;
        }
        else {
LAB_0800a8c8:
          uVar12 = local_258[0];
          if (local_258[0] == 0) {
            if (iVar17 != 1) {
              puVar5 = local_258;
              iVar4 = 1;
              do {
                puVar5 = puVar5 + 1;
                uVar12 = *puVar5;
                if (uVar12 != 0) {
                  iVar14 = iVar4 + 1;
                  goto LAB_0800a8e2;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 != iVar17);
            }
          }
          else {
            iVar14 = 1;
            iVar4 = 0;
LAB_0800a8e2:
            local_258[iVar4] = 0x1000000 - uVar12;
            if (iVar14 < iVar17) {
              uVar12 = local_258[iVar14];
              puVar5 = local_258 + iVar14;
              while( true ) {
                puVar13 = puVar5 + 1;
                *puVar5 = 0xffffff - uVar12;
                if (puVar13 == local_258 + iVar17) break;
                uVar12 = *puVar13;
                puVar5 = puVar13;
              }
            }
            uVar12 = 1;
          }
        }
        if (0 < local_270) {
          if (local_270 == 1) {
            local_258[iVar17 + -1] = local_258[iVar17 + -1] & 0x7fffff;
          }
          else if (local_270 == 2) {
            local_258[iVar17 + -1] = local_258[iVar17 + -1] & 0x3fffff;
          }
        }
        if (iVar21 == 2) {
          uVar26 = FUNC_080082d0(0,DAT_0800ac38,uVar8,uVar6);
          if (uVar12 != 0) {
            uVar25 = calculate_0800b2e8(0,DAT_0800ac38,local_270);
            uVar26 = FUNC_080082d0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                  (int)((ulonglong)uVar25 >> 0x20));
          }
        }
      }
    }
LAB_0800a7a4:
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar4 = check_input_is_not_null_char_08008b10((int)uVar26,uVar8,0,0);
    if (iVar4 == 0) {
      uVar26 = calculate_0800b2e8((int)uVar26,uVar8,-local_270);
      uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar8 = (undefined4)uVar26;
      iVar9 = check_for_zero_or_carry_flag_08008b4c(uVar8,uVar6,0,DAT_0800ade4);
      if (iVar9 == 0) {
        uVar12 = calculateValue_08008ba0(uVar8,uVar6);
        local_258[iVar17] = uVar12;
        iVar4 = iVar17;
      }
      else {
        FUNC_08008640(uVar8,uVar6,0,DAT_0800ade8);
        uVar12 = calculateValue_08008ba0();
        uVar26 = FUNC_0800856c();
        uVar26 = FUNC_08008640((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,DAT_0800ade4);
        FUNC_080082d0(uVar8,uVar6,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
        uVar3 = calculateValue_08008ba0();
        local_270 = local_270 + 0x18;
        local_258[iVar17] = uVar3;
        local_258[iVar17 + 1] = uVar12;
        iVar4 = iVar17 + 1;
      }
      goto LAB_0800a9f6;
    }
    iVar4 = iVar17 + -1;
    if (iVar15 <= iVar4) {
      uVar12 = 0;
      puVar5 = local_258 + iVar17 + 0x3fffffff;
      do {
        puVar13 = puVar5 + -1;
        uVar12 = uVar12 | *puVar5;
        puVar5 = puVar13;
      } while (puVar13 != local_260[0]);
      if (uVar12 != 0) break;
    }
    if (local_258[iVar15 + -1] == 0) {
      local_280 = 1;
      ppuVar7 = local_260 + iVar15;
      do {
        puVar5 = *ppuVar7;
        local_280 = local_280 + 1;
        ppuVar7 = ppuVar7 + -1;
      } while (puVar5 == (uint *)0x0);
      local_280 = iVar17 + local_280;
    }
    else {
      local_280 = iVar17 + 1;
    }
    iVar21 = iVar17 + 1;
    puVar23 = (undefined4 *)(param_6 + (iVar21 + local_26c + 0x3fffffff) * 4);
    puVar16 = &uStack_208 + iVar17 + param_4;
    local_284 = &uStack_c8 + iVar21;
    do {
      puVar23 = puVar23 + 1;
      uVar26 = FUNC_0800856c(*puVar23);
      *puVar16 = uVar26;
      puVar22 = puVar16 + 1;
      if (iVar9 < 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        puVar18 = puVar10;
        while( true ) {
          puVar16 = puVar16 + -1;
          puVar1 = puVar18 + 2;
          uVar26 = FUNC_08008640((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*puVar1,puVar18[3]);
          uVar25 = FUNC_080082d4((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                                (int)((ulonglong)uVar26 >> 0x20));
          if (puVar1 == puVar10 + param_4 * 2) break;
          uVar26 = *puVar16;
          puVar18 = puVar1;
        }
      }
      *local_284 = uVar25;
      iVar21 = iVar21 + 1;
      iVar17 = local_280;
      puVar16 = puVar22;
      local_284 = local_284 + 1;
    } while (iVar21 <= local_280);
  } while( true );
  local_270 = local_270 + -0x18;
  if (local_258[iVar4] == 0) {
    puVar5 = local_258 + iVar17 + 0x3ffffffe;
    do {
      uVar12 = *puVar5;
      iVar4 = iVar4 + -1;
      local_270 = local_270 + -0x18;
      puVar5 = puVar5 + -1;
    } while (uVar12 == 0);
  }
LAB_0800a9f6:
  uVar26 = calculate_0800b2e8(0,DAT_0800ac38,local_270);
  if (iVar4 < 0) {
    if (2 < param_5) {
      if (param_5 == 3) {
        uVar28 = 0;
LAB_0800abe4:
        if (iVar21 == 0) {
          *local_260[1] = (undefined4)local_168;
          *(int *)((int)local_260[1] + 4) = local_168._4_4_;
          *(undefined8 *)((int)local_260[1] + 0x10) = uVar28;
          *(int *)((int)local_260[1] + 8) = local_160[0];
          *(int *)((int)local_260[1] + 0xc) = local_160[1];
          return uVar2 & 7;
        }
        *(int *)((int)local_260[1] + 0x10) = (int)uVar28;
        *(int *)((int)local_260[1] + 8) = local_160[0];
        *(int *)((int)local_260[1] + 0x14) = (int)((ulonglong)uVar28 >> 0x20) + -0x80000000;
        *(int *)((int)local_260[1] + 4) = local_168._4_4_ + -0x80000000;
        *(int *)((int)local_260[1] + 0xc) = local_160[1] + -0x80000000;
        *local_260[1] = (undefined4)local_168;
        return uVar2 & 7;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
LAB_0800aafc:
      iVar9 = (int)((ulonglong)uVar28 >> 0x20);
      if (iVar21 != 0) {
        iVar9 = iVar9 + -0x80000000;
      }
      *local_260[1] = (int)uVar28;
      *(int *)((int)local_260[1] + 4) = iVar9;
LAB_0800ab0e:
      return uVar2 & 7;
    }
    uVar28 = 0;
  }
  else {
    puVar22 = &uStack_c8 + iVar4;
    puVar5 = local_258 + iVar4 + 1;
    puVar16 = &uStack_c8 + iVar4 + 1;
    do {
      uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
      puVar5 = puVar5 + -1;
      uVar25 = FUNC_0800856c(*puVar5);
      uVar25 = FUNC_08008640((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,uVar8);
      puVar16 = puVar16 + -1;
      *puVar16 = uVar25;
      uVar26 = FUNC_08008640((int)uVar26,uVar8,0,DAT_0800ac40);
    } while (puVar5 != local_258);
    iVar9 = 0;
    uVar8 = DAT_0800ac30;
    uVar6 = DAT_0800ac34;
    do {
      DAT_0800ac30 = uVar8;
      DAT_0800ac34 = uVar6;
      if (iVar15 < 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        iVar17 = 0;
        puVar16 = puVar22;
        puVar10 = (undefined4 *)PTR_DAT_0800ac44;
        while( true ) {
          uVar25 = FUNC_08008640(*(undefined4 *)puVar16,*(undefined4 *)((int)puVar16 + 4),uVar8,uVar6
                               );
          uVar26 = FUNC_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
          iVar17 = iVar17 + 1;
          if ((iVar15 < iVar17) || (iVar9 < iVar17)) break;
          uVar8 = *puVar10;
          uVar6 = puVar10[1];
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 2;
        }
      }
      bVar24 = iVar9 != iVar4;
      *(int *)(&local_168 + iVar9) = (int)uVar26;
      *(int *)((int)&local_168 + (iVar9 * 2 + 1) * 4) = (int)((ulonglong)uVar26 >> 0x20);
      puVar22 = puVar22 + -1;
      iVar9 = iVar9 + 1;
      uVar8 = DAT_0800ac30;
      uVar6 = DAT_0800ac34;
    } while (bVar24);
    if (2 < param_5) {
      if (param_5 == 3) {
        if (iVar4 != 0) {
          puVar16 = &local_168 + iVar4;
          uVar28 = CONCAT44(*(undefined4 *)((int)&local_168 + (iVar4 * 2 + 1) * 4),
                            *(undefined4 *)puVar16);
          do {
            uVar6 = (undefined4)((ulonglong)uVar28 >> 0x20);
            uVar8 = (undefined4)uVar28;
            uVar11 = *(undefined4 *)(puVar16 + -1);
            uVar20 = *(undefined4 *)((int)puVar16 + -4);
            uVar28 = FUNC_080082d4(uVar8,uVar6,uVar11,uVar20);
            uVar26 = FUNC_080082d0(uVar11,uVar20,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
            uVar26 = FUNC_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar8,uVar6);
            *puVar16 = uVar26;
            puVar16 = puVar16 + -1;
            *puVar16 = uVar28;
          } while (&local_168 != puVar16);
          if (1 < iVar4) {
            puVar16 = &local_168 + iVar4;
            uVar28 = CONCAT44(*(undefined4 *)((int)&local_168 + (iVar4 * 2 + 1) * 4),
                              *(undefined4 *)puVar16);
            do {
              uVar6 = (undefined4)((ulonglong)uVar28 >> 0x20);
              uVar8 = (undefined4)uVar28;
              uVar11 = *(undefined4 *)(puVar16 + -1);
              uVar20 = *(undefined4 *)((int)puVar16 + -4);
              uVar28 = FUNC_080082d4(uVar8,uVar6,uVar11,uVar20);
              uVar26 = FUNC_080082d0(uVar11,uVar20,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
              uVar26 = FUNC_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar8,uVar6);
              *puVar16 = uVar26;
              puVar16 = puVar16 + -1;
              *puVar16 = uVar28;
            } while (&local_168 + 1 != puVar16);
            uVar28 = 0;
            puVar16 = &local_168 + iVar4 + 1;
            do {
              puVar22 = puVar16 + -1;
              uVar28 = FUNC_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),
                                    *(undefined4 *)puVar22,*(undefined4 *)((int)puVar16 + -4));
              puVar16 = puVar22;
            } while (&local_168 + 2 != puVar22);
            goto LAB_0800abe4;
          }
        }
        uVar28 = 0;
        goto LAB_0800abe4;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
      puVar16 = &local_168 + iVar4 + 1;
      do {
        puVar22 = puVar16 + -1;
        uVar28 = FUNC_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),*(undefined4 *)puVar22,
                              *(undefined4 *)((int)puVar16 + -4));
        puVar16 = puVar22;
      } while (&local_168 != puVar22);
      goto LAB_0800aafc;
    }
    uVar28 = 0;
    puVar16 = &local_168 + iVar4 + 1;
    do {
      puVar22 = puVar16 + -1;
      uVar28 = FUNC_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),*(undefined4 *)puVar22,
                            *(undefined4 *)((int)puVar16 + -4));
      puVar16 = puVar22;
    } while (&local_168 != puVar22);
  }
  iVar9 = (int)((ulonglong)uVar28 >> 0x20);
  uVar8 = (undefined4)uVar28;
  if (iVar21 == 0) {
    *(undefined8 *)local_260[1] = uVar28;
    uVar29 = FUNC_080082d0((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (iVar4 < 1) goto LAB_0800ad26;
LAB_0800ad04:
    iVar9 = 1;
    puVar16 = &local_168;
    do {
      uVar29 = FUNC_080082d4((int)uVar29,(int)(uVar29 >> 0x20),*(undefined4 *)(puVar16 + 1),
                            *(undefined4 *)((int)puVar16 + 0xc));
      iVar9 = iVar9 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar9 <= iVar4);
    if (iVar21 == 0) goto LAB_0800ad26;
  }
  else {
    *local_260[1] = uVar8;
    *(int *)((int)local_260[1] + 4) = iVar9 + -0x80000000;
    uVar29 = FUNC_080082d0((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (0 < iVar4) goto LAB_0800ad04;
  }
  uVar29 = uVar29 & 0xffffffff | (ulonglong)((int)(uVar29 >> 0x20) + 0x80000000) << 0x20;
LAB_0800ad26:
  *(ulonglong *)((int)local_260[1] + 8) = uVar29;
  return uVar2 & 7;
}


// FUN_0800195c 0x0800195c
void enable_task_if_not_enabled_0800195c(void)
{
  if ((PTR_DAT_08001990[1] != 6) && ((PTR_DAT_08001990[2] & 0x20) == 0)) {
    enable_task_execution();
    PTR_DAT_08001990[2] |= 0x40;
  }
  return;
}
// FUN_08009214 0x08009214
bool checkResultIsNotEmpty_08009214() {
  char inputChar;
  calculateResultAndReturnConcatenation_08009204_08009204();
  return inputChar != '\0';
}
// FUN_08004dd2 0x08004dd2
int validate_data_08004dd2(){
  byte memory_value = get_memory_value(0);
  if (memory_value == 5) {
    int checksum = calculate_checksum(PTR_DAT_08004e2c, 1, 0x40);
    if (checksum == 0) {
      return 0;
    }
  }
  else {
    if (memory_value > 4) {
      return 0;
    }
    int checksum = calculate_checksum(PTR_DAT_08004e2c, 1, 0x28);
    if (checksum == 0) {
      return 0;
    }
    initialize_data(0);
  }
  return 1;
}
// FUN_08008244 0x08008244
void doNothing_08008244()
{
  return;
}
// FUN_08005778 0x08005778
void update_parameter_value_08005778(void)
{
  int* ptr_to_data = *(int**)PTR_DAT_0800578c;
  update_param_value(ptr_to_data);
  return;
}
// FUN_080028bc 0x080028bc
undefined4 calculate_result_080028bc(undefined4 num1, undefined4 num2, undefined4 num3)
{
  undefined4 result1;
  undefined4 result2;
  result1 = FUNC_08008eec(num2, num2);
  result2 = FUNC_08008cdc(num1, num1);
  result1 = FUNC_08008cd8(result1, result2);
  result2 = do_operation(num3, num3);
  result1 = FUNC_08009054(result1, result2);
  return result1;
}
// FUN_08006628 0x08006628
uint calculate_data_and_shift_right_08006628() {
  uint data = calculate_data();
  uint leading_zeroes = count_leading_zeroes(0xf000000);
  uint shift_amount = (*(uint *)(PTR_DAT_08006678 + 8) & 0xf0) >> (leading_zeroes & 0xff);
  *(uint *)PTR_DAT_0800667c = data >> shift_amount;
  return *(uint *)PTR_DAT_0800667c;
}
// FUN_0800738e 0x0800738e
void update_data_if_valid_0800738e(ushort data){
  uint* DAT_pointer = (uint*)(DAT_080073bc + 0x14);
  uint mask = *DAT_pointer;
  if((uint)data & mask){
    *DAT_pointer = (uint)data;
    do_nothing_080073c0(data);
  }
}
// FUN_08002828 0x08002828
void doNothing_08002828()
{
  return;
}
// FUN_080053a0 0x080053a0

void FUNC_080053a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  updateData_080052dc(*(undefined2 *)PTR_DAT_080055f0);
  *(undefined2 *)PTR_DAT_080055f8 = *(undefined2 *)PTR_DAT_080055f4;
  if (*(int *)PTR_DAT_080055fc == 0) {
    uVar1 = getPointer_08002f74();
    *(undefined4 *)PTR_DAT_080055fc = uVar1;
    if (*(int *)PTR_DAT_080055fc == 0) {
      clear_globals_and_check_status_080057e4();
      PTR_DAT_08005600[2] = PTR_DAT_08005600[2] | 4;
    }
    else {
      if (PTR_DAT_08005600[1] == '\x03') {
        *(undefined4 *)(PTR_DAT_08005604 + 0x1c) = *(undefined4 *)(*(int *)PTR_DAT_080055fc + 0x28);
        calculateAndUpdateValue_08005324(*(undefined4 *)(PTR_DAT_08005604 + 0x1c));
        *(undefined4 *)(PTR_DAT_08005604 + 0x18) = DAT_08005608;
      }
      *(int *)(PTR_DAT_08005604 + 0x20) =
           (*(int *)(*(int *)PTR_DAT_080055fc + 0x30) >> 1) +
           *(int *)(*(int *)PTR_DAT_080055fc + 0x30);
      *(int *)PTR_DAT_08005604 = -(*(int *)(*(int *)PTR_DAT_080055fc + 0x10) >> 1);
      *(undefined4 *)(PTR_DAT_08005604 + 4) = *(undefined4 *)PTR_DAT_08005604;
      *(undefined4 *)(PTR_DAT_08005604 + 8) = *(undefined4 *)PTR_DAT_08005604;
      *(undefined4 *)(PTR_DAT_08005604 + 0xc) = *(undefined4 *)(*(int *)PTR_DAT_080055fc + 0x10);
      *(undefined4 *)(PTR_DAT_08005604 + 0x10) = 0;
    }
  }
  if (*(int *)PTR_DAT_080055fc != 0) {
    *(undefined2 *)PTR_DAT_080055f0 = **(undefined2 **)PTR_DAT_080055fc;
    *(undefined2 *)PTR_DAT_080055f4 = 0;
    *(int *)PTR_DAT_08005604 = *(int *)(*(int *)PTR_DAT_080055fc + 4) + *(int *)PTR_DAT_08005604;
    if (0 < *(int *)PTR_DAT_08005604) {
      *(ushort *)PTR_DAT_080055f4 = *(ushort *)PTR_DAT_080055f4 | 0x10;
      *(int *)PTR_DAT_08005604 = *(int *)PTR_DAT_08005604 - *(int *)(PTR_DAT_08005604 + 0xc);
      if ((*(ushort *)PTR_DAT_080055f0 & 0x20) == 0) {
        *(int *)(PTR_DAT_08005600 + 4) = *(int *)(PTR_DAT_08005600 + 4) + 1;
      }
      else {
        *(int *)(PTR_DAT_08005600 + 4) = *(int *)(PTR_DAT_08005600 + 4) + -1;
      }
    }
    *(int *)(PTR_DAT_08005604 + 4) =
         *(int *)(*(int *)PTR_DAT_080055fc + 8) + *(int *)(PTR_DAT_08005604 + 4);
    if (0 < *(int *)(PTR_DAT_08005604 + 4)) {
      *(ushort *)PTR_DAT_080055f4 = *(ushort *)PTR_DAT_080055f4 | 0x440;
      *(int *)(PTR_DAT_08005604 + 4) =
           *(int *)(PTR_DAT_08005604 + 4) - *(int *)(PTR_DAT_08005604 + 0xc);
      if ((*(ushort *)PTR_DAT_080055f0 & 0x80) == 0) {
        *(int *)(PTR_DAT_08005600 + 8) = *(int *)(PTR_DAT_08005600 + 8) + 1;
      }
      else {
        *(int *)(PTR_DAT_08005600 + 8) = *(int *)(PTR_DAT_08005600 + 8) + -1;
      }
    }
    *(int *)(PTR_DAT_08005604 + 8) =
         *(int *)(*(int *)PTR_DAT_080055fc + 0xc) + *(int *)(PTR_DAT_08005604 + 8);
    if (0 < *(int *)(PTR_DAT_08005604 + 8)) {
      *(ushort *)PTR_DAT_080055f4 = *(ushort *)PTR_DAT_080055f4 | 0x100;
      *(int *)(PTR_DAT_08005604 + 8) =
           *(int *)(PTR_DAT_08005604 + 8) - *(int *)(PTR_DAT_08005604 + 0xc);
      if ((*(ushort *)PTR_DAT_080055f0 & 0x200) == 0) {
        *(int *)(PTR_DAT_08005600 + 0xc) = *(int *)(PTR_DAT_08005600 + 0xc) + 1;
      }
      else {
        *(int *)(PTR_DAT_08005600 + 0xc) = *(int *)(PTR_DAT_08005600 + 0xc) + -1;
      }
    }
    *(int *)(PTR_DAT_08005604 + 0x10) = *(int *)(PTR_DAT_08005604 + 0x10) + 1;
    if (*(uint *)(PTR_DAT_08005604 + 0x10) < *(uint *)(*(int *)PTR_DAT_080055fc + 0x10)) {
      if (PTR_DAT_08005600[1] == '\x04') {
        iVar2 = isMemorySizeLessThanThreshold_08005360();
        if (iVar2 != 0) {
          if (*(uint *)(*(int *)PTR_DAT_080055fc + 0x30) < *(uint *)(PTR_DAT_08005604 + 0x1c)) {
            *(int *)(PTR_DAT_08005604 + 0x1c) =
                 *(int *)(PTR_DAT_08005604 + 0x1c) - *(int *)(*(int *)PTR_DAT_080055fc + 0x30);
            calculateAndUpdateValue_08005324(*(undefined4 *)(PTR_DAT_08005604 + 0x1c));
          }
          else {
            clear_globals_and_check_status_080057e4();
            PTR_DAT_08005600[2] = PTR_DAT_08005600[2] | 4;
          }
        }
      }
      else if (*(uint *)(PTR_DAT_08005748 + 0x10) < *(uint *)(*(int *)PTR_DAT_0800574c + 0x34)) {
        iVar2 = isMemorySizeLessThanThreshold_08005360();
        if (iVar2 != 0) {
          *(int *)(PTR_DAT_08005748 + 0x1c) =
               *(int *)(PTR_DAT_08005748 + 0x1c) + *(int *)(*(int *)PTR_DAT_0800574c + 0x30);
          if (*(uint *)(*(int *)PTR_DAT_0800574c + 0x3c) <= *(uint *)(PTR_DAT_08005748 + 0x1c)) {
            *(undefined4 *)(PTR_DAT_08005748 + 0x1c) =
                 *(undefined4 *)(*(int *)PTR_DAT_0800574c + 0x3c);
          }
          calculateAndUpdateValue_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
        }
      }
      else if (*(uint *)(PTR_DAT_08005748 + 0x10) < *(uint *)(*(int *)PTR_DAT_0800574c + 0x38)) {
        if (*(int *)(PTR_DAT_08005748 + 0x1c) != *(int *)(*(int *)PTR_DAT_0800574c + 0x3c)) {
          *(undefined4 *)(PTR_DAT_08005748 + 0x1c) =
               *(undefined4 *)(*(int *)PTR_DAT_0800574c + 0x3c);
          calculateAndUpdateValue_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
        }
      }
      else if (*(int *)(PTR_DAT_08005748 + 0x10) == *(int *)(*(int *)PTR_DAT_0800574c + 0x38)) {
        if (*(int *)(PTR_DAT_08005748 + 0x1c) == *(int *)(*(int *)PTR_DAT_0800574c + 0x3c)) {
          *(undefined4 *)(PTR_DAT_08005748 + 0x18) = DAT_08005750;
        }
        else {
          *(int *)(PTR_DAT_08005748 + 0x18) = 420000 - *(int *)(PTR_DAT_08005748 + 0x18);
        }
      }
      else {
        iVar2 = isMemorySizeLessThanThreshold_08005360();
        if (iVar2 != 0) {
          if (*(uint *)(PTR_DAT_08005748 + 0x20) < *(uint *)(PTR_DAT_08005748 + 0x1c)) {
            *(int *)(PTR_DAT_08005748 + 0x1c) =
                 *(int *)(PTR_DAT_08005748 + 0x1c) - *(int *)(*(int *)PTR_DAT_0800574c + 0x30);
          }
          else {
            *(uint *)(PTR_DAT_08005748 + 0x1c) = *(uint *)(PTR_DAT_08005748 + 0x1c) >> 1;
          }
          if (*(uint *)(PTR_DAT_08005748 + 0x1c) < *(uint *)(*(int *)PTR_DAT_0800574c + 0x2c)) {
            *(undefined4 *)(PTR_DAT_08005748 + 0x1c) =
                 *(undefined4 *)(*(int *)PTR_DAT_0800574c + 0x2c);
          }
          calculateAndUpdateValue_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
        }
      }
    }
    else {
      *(undefined2 *)PTR_DAT_08005754 = 0;
      *(undefined4 *)PTR_DAT_0800574c = 0;
      updateCharIfDifferent_08002f40();
    }
  }
  *(ushort *)PTR_DAT_08005754 = *(ushort *)PTR_DAT_08005754 ^ *(ushort *)(PTR_DAT_08005758 + 0x18);
  *(ushort *)PTR_DAT_0800575c = *(ushort *)PTR_DAT_0800575c ^ *(ushort *)(PTR_DAT_08005758 + 0x1a);
  return;
}


// FUN_080092c4 0x080092c4
void initialize_and_execute_game_080092c4() {
  int data_index;
  undefined4 *data_ptr;
  code *jumptable_ptr;
  for (data_index = 0; PTR_DAT_08009304 + data_index < PTR_DAT_08009308; data_index += 4) {
    *(undefined4 *)(PTR_DAT_08009304 + data_index) = *(undefined4 *)(DAT_08009300 + data_index);
  }
  for (data_ptr = (undefined4 *)PTR_DAT_0800930c; data_ptr < PTR_DAT_08009310; data_ptr++) {
    *data_ptr = 0;
  }
  initialize_data();
  execute_functions();
  jumptable_ptr = (code *)0x80092fa;
  initialize_and_run_game();
  (*jumptable_ptr)();
  return;
}
// FUN_08008250 0x08008250
void send_byte_to_device_08008250(void *data){
  send_byte_to_device_08008250_08007e1c(data);
  return;
}
// FUN_0800184c 0x0800184c
int parse_and_validate_input_0800184c(byte *output, int max_output_size, int input_length, byte *input) {
  int current_index = (int)*input;
  if (*(char *)(input_length + current_index) == '\0') {
    return 0;
  }
  else {
    *output = *(byte *)(input_length + current_index);
    if ((*output < 0x41) || (0x5a < *output)) {
      *PTR_DAT_080018c8 = 2;
      return 0;
    }
    else {
      *input = *input + 1;
      int integer_value = parse_integer_from_string_08002638(input_length, input, max_output_size);
      if (integer_value == 0) {
        *PTR_DAT_080018c8 = 1;
        return 0;
      }
      else {
        return 1;
      }
    }
  }
}
// FUN_08001f00 0x08001f00

void FUNC_08001f00(int param_1,undefined4 *param_2,int param_3,byte param_4,byte param_5,byte param_6
                 ,undefined4 param_7,char param_8,undefined4 param_9,char param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  ushort local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_27;
  ushort local_26;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = FUNC_08008cdc(*(undefined4 *)((uint)param_4 * 4 + param_1),
                          *(undefined4 *)((uint)param_4 * 4 + param_3));
  local_30 = FUNC_08008cdc(*(undefined4 *)((uint)param_5 * 4 + param_1),
                          *(undefined4 *)((uint)param_5 * 4 + param_3));
  local_34 = FUNC_08008cd8(param_2[param_6],*(undefined4 *)((uint)param_6 * 4 + param_1));
  local_1c = *(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000;
  local_20 = *(uint *)((uint)param_5 * 4 + param_3) ^ 0x80000000;
  local_38 = FUNC_08008cd8(param_2[param_4],local_2c);
  local_3c = FUNC_08008cd8(param_2[param_5],local_30);
  uVar1 = FUNC_08008eec(local_1c,local_3c);
  uVar2 = FUNC_08008eec(local_20,local_38);
  uVar1 = FUNC_08008cd8(uVar1,uVar2);
  uVar5 = FUNC_08008590(uVar1);
  uVar1 = FUNC_08008eec(local_1c,local_38);
  uVar2 = FUNC_08008eec(local_20,local_3c);
  uVar1 = FUNC_08008cdc(uVar1,uVar2);
  uVar6 = FUNC_08008590(uVar1);
  uVar5 = thunk_calculate_08009990((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                             (int)((ulonglong)uVar6 >> 0x20));
  local_24 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  if (param_10 == '\0') {
    iVar3 = check_result_and_return_concatenation_0800923c(local_24,0);
    if (iVar3 != 0) {
      uVar5 = FUNC_08008590(local_24);
      uVar5 = FUNC_080082d4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_08002240,DAT_08002244);
      local_24 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  else {
    iVar3 = check_results_08009250(local_24,0);
    if (iVar3 != 0) {
      uVar5 = FUNC_08008590(local_24);
      uVar5 = FUNC_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_08002240,DAT_08002244);
      local_24 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  uVar1 = FUNC_08008eec(local_24,param_9);
  uVar5 = FUNC_08008590(uVar1);
  uVar6 = FUNC_08008590(local_34 & 0x7fffffff);
  uVar5 = hypot_and_classify_0800981c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  local_40 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  iVar3 = checkResultIsNotEmpty_08009214(local_40,0);
  if (iVar3 == 0) {
    uVar1 = FUNC_08009054(local_40,*(undefined4 *)(PTR_DAT_08002248 + 0x1c));
    uVar5 = FUNC_08008590(uVar1);
    uVar5 = decode_080094c0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_42 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (param_8 != '\0') {
      uVar1 = calculateTwosComplement_08008e44(local_42);
      param_7 = FUNC_08008eec(param_7,uVar1);
    }
    uVar1 = calculateTwosComplement_08008e44(local_42);
    local_48 = FUNC_08009054(local_24,uVar1);
    uVar1 = calculateTwosComplement_08008e44(local_42);
    local_4c = FUNC_08009054(local_34,uVar1);
    uVar5 = FUNC_08008590(local_48);
    uVar5 = FUNC_08008640((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,DAT_0800224c);
    uVar6 = FUNC_08008590(local_48);
    uVar5 = FUNC_08008640((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20));
    uVar5 = FUNC_080082d0(0,DAT_08002250,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_50 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_54 = local_48;
    local_27 = '\0';
    local_6c[param_6] = *(uint *)(param_1 + (uint)param_6 * 4);
    for (local_26 = 1; local_26 < local_42; local_26 = local_26 + 1) {
      if ((int)local_27 < (int)(uint)(byte)PTR_DAT_08002248[0x3e]) {
        uVar1 = FUNC_08008eec(local_1c,local_54);
        uVar2 = FUNC_08008eec(local_20,local_50);
        local_6c[3] = FUNC_08008cdc(uVar1,uVar2);
        uVar1 = FUNC_08008eec(local_1c,local_50);
        uVar2 = FUNC_08008eec(local_20,local_54);
        local_1c = FUNC_08008cd8(uVar1,uVar2);
        local_20 = local_6c[3];
        local_27 = local_27 + '\x01';
      }
      else {
        uVar1 = calculateTwosComplement_08008e44(local_26);
        uVar1 = FUNC_08008eec(uVar1,local_48);
        uVar5 = FUNC_08008590(uVar1);
        uVar5 = calculate_result_08009410((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_58 = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = calculateTwosComplement_08008e44(local_26);
        uVar1 = FUNC_08008eec(uVar1,local_48);
        uVar5 = FUNC_08008590(uVar1);
        uVar5 = calculate_result_080096e8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_5c = calculateFloat_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = FUNC_08008eec(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_58);
        uVar2 = FUNC_08008eec(*(undefined4 *)((uint)param_5 * 4 + param_3),local_5c);
        local_1c = FUNC_08008cdc(uVar1,uVar2);
        uVar1 = FUNC_08008eec(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_5c);
        uVar2 = FUNC_08008eec(*(undefined4 *)((uint)param_5 * 4 + param_3),local_58);
        local_20 = FUNC_08008cd8(uVar1,uVar2);
        local_27 = '\0';
      }
      uVar4 = FUNC_08008cdc(local_2c,local_1c);
      local_6c[param_4] = uVar4;
      uVar4 = FUNC_08008cdc(local_30,local_20);
      local_6c[param_5] = uVar4;
      uVar4 = FUNC_08008cdc(local_6c[param_6],local_4c);
      local_6c[param_6] = uVar4;
      checkDeviceStatusAndUpdateIfNecessary_08001e98(local_6c[0],local_6c[1],local_6c[2],param_7,param_8);
      if (*PTR_DAT_08002404 != '\0') {
        return;
      }
    }
    checkDeviceStatusAndUpdateIfNecessary_08001e98(*param_2,param_2[1],param_2[2],param_7,param_8);
  }
  return;
}


// FUN_08006ce0 0x08006ce0
void set_parameter_value_08006ce0(undefined4 value)
{
  setParameter_08006950(value);
  return;
}
// FUN_08006d4a 0x08006d4a
void set_bit_in_array_08006d4a(char character) {
  setBitInArray_080069e4((int)character);
  return;
}
// FUN_08008894 0x08008894

ulonglong FUNC_08008894(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint unaff_r5;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  
  uVar17 = CONCAT44(param_2,param_1);
  uVar13 = 0x7ff;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar7 == 0;
  if (!bVar14) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r5 == 0;
  }
  if (!bVar14) {
    bVar14 = uVar7 == 0x7ff;
  }
  if (!bVar14) {
    bVar14 = unaff_r5 == 0x7ff;
  }
  if (bVar14) {
    uVar17 = calculateDouble_08008a02();
  }
  uVar9 = (uint)(uVar17 >> 0x20);
  uVar11 = (uint)uVar17;
  iVar8 = uVar7 - unaff_r5;
  if ((param_3 | param_4 << 0xc) == 0) {
    uVar7 = (uVar9 ^ param_4) & 0x80000000 | uVar9 & 0xfffff;
    bVar16 = SCARRY4(iVar8,uVar13 >> 1);
    uVar9 = iVar8 + (uVar13 >> 1);
    bVar14 = (int)uVar9 < 0;
    bVar15 = uVar9 == 0;
    if (!bVar15 && bVar14 == bVar16) {
      bVar16 = SBORROW4(uVar13,uVar9);
      bVar14 = (int)(uVar13 - uVar9) < 0;
      bVar15 = uVar13 == uVar9;
    }
    if (!bVar15 && bVar14 == bVar16) {
      uVar7 = uVar7 | uVar9 * 0x100000;
    }
    if (!bVar15 && bVar14 == bVar16) {
      return uVar17 & 0xffffffff | (ulonglong)uVar7 << 0x20;
    }
    uVar7 = uVar7 | 0x100000;
    uVar13 = 0;
    bVar15 = SBORROW4(uVar9,1);
    uVar9 = uVar9 - 1;
    bVar14 = uVar9 == 0;
    uVar3 = uVar9;
  }
  else {
    uVar3 = (param_4 << 0xc) >> 4 | 0x10000000 | param_3 >> 0x18;
    uVar13 = param_3 << 8;
    uVar10 = (uVar9 << 0xc) >> 4 | 0x10000000 | uVar11 >> 0x18;
    uVar11 = uVar11 * 0x100;
    uVar7 = (uVar9 ^ param_4) & 0x80000000;
    bVar14 = uVar3 <= uVar10;
    if (uVar10 == uVar3) {
      bVar14 = uVar13 <= uVar11;
    }
    iVar8 = iVar8 + (uint)bVar14;
    uVar9 = iVar8 + 0x3fd;
    if (bVar14 == false) {
      uVar3 = uVar3 >> 1;
      uVar13 = (uint)((param_3 >> 0x18 & 1) != 0) << 0x1f | uVar13 >> 1;
    }
    uVar12 = uVar11 - uVar13;
    uVar10 = (uVar10 - uVar3) - (uint)(uVar11 < uVar13);
    uVar4 = uVar3 >> 1;
    uVar1 = (uint)((uVar3 & 1) != 0) << 0x1f | uVar13 >> 1;
    uVar11 = 0x100000;
    uVar3 = 0x80000;
    while( true ) {
      bVar14 = uVar1 <= uVar12;
      if (uVar4 < uVar10 || uVar10 - uVar4 < (uint)bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar11 = uVar11 | uVar3;
        uVar10 = (uVar10 - uVar4) - (uint)!bVar14;
      }
      uVar5 = uVar4 >> 1;
      uVar1 = (uint)((uVar4 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar15 = uVar1 <= uVar12;
      bVar14 = uVar10 - uVar5 < (uint)bVar15;
      uVar13 = uVar10;
      if (uVar5 < uVar10 || bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar13 = (uVar10 - uVar5) - (uint)!bVar15;
      }
      if (uVar5 < uVar10 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 1;
      }
      uVar10 = uVar4 >> 2;
      uVar2 = (uint)((uVar5 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar15 = uVar2 <= uVar12;
      bVar14 = uVar13 - uVar10 < (uint)bVar15;
      uVar5 = uVar13;
      if (uVar10 < uVar13 || bVar14) {
        uVar12 = uVar12 - uVar2;
        uVar5 = (uVar13 - uVar10) - (uint)!bVar15;
      }
      if (uVar10 < uVar13 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 2;
      }
      uVar6 = uVar4 >> 3;
      uVar1 = (uint)((uVar10 & 1) != 0) << 0x1f | uVar2 >> 1;
      bVar15 = uVar1 <= uVar12;
      bVar14 = uVar5 - uVar6 < (uint)bVar15;
      uVar10 = uVar5;
      if (uVar6 < uVar5 || bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar10 = (uVar5 - uVar6) - (uint)!bVar15;
      }
      if (uVar6 < uVar5 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 3;
      }
      uVar13 = uVar10 | uVar12;
      if (uVar13 == 0) break;
      uVar10 = uVar10 << 4 | uVar12 >> 0x1c;
      uVar12 = uVar12 << 4;
      uVar4 = uVar4 & 0xfffffff8 | uVar1 >> 0x1d;
      uVar1 = (uVar2 >> 1) << 3;
      uVar3 = uVar3 >> 4;
      if (uVar3 == 0) {
        uVar6 = uVar4;
        if ((uVar7 & 0x100000) != 0) goto LAB_080089b2;
        uVar7 = uVar7 | uVar11;
        uVar11 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar7 & 0x100000) == 0) {
      uVar7 = uVar7 | uVar11;
      uVar11 = 0;
    }
LAB_080089b2:
    bVar16 = 0xfc < uVar9;
    bVar15 = SBORROW4(uVar9,0xfd);
    uVar4 = iVar8 + 0x300;
    bVar14 = uVar4 == 0;
    uVar3 = uVar4;
    if (bVar16 && !bVar14) {
      bVar16 = 0x6ff < uVar4;
      bVar15 = SBORROW4(uVar4,0x700);
      uVar3 = iVar8 - 0x400;
      bVar14 = uVar4 == 0x700;
    }
    if (!bVar16 || bVar14) {
      bVar14 = uVar6 <= uVar10;
      if (uVar10 == uVar6) {
        bVar14 = uVar1 <= uVar12;
      }
      if (uVar10 == uVar6 && uVar12 == uVar1) {
        bVar14 = (uVar11 & 1) != 0;
      }
      return CONCAT44(uVar7 + uVar9 * 0x100000 + (uint)CARRY4(uVar11,(uint)bVar14),uVar11 + bVar14);
    }
  }
  if (!bVar14 && (int)uVar3 < 0 == bVar15) {
    return (ulonglong)(uVar7 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar16 = SCARRY4(uVar9,0x36);
  bVar14 = (int)(uVar9 + 0x36) < 0;
  bVar15 = uVar9 == 0xffffffca;
  if (bVar15 || bVar14 != bVar16) {
    uVar11 = 0;
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar7 = uVar7 & 0x80000000;
  }
  if (bVar15 || bVar14 != bVar16) {
    return CONCAT44(uVar7,uVar11);
  }
  uVar3 = -uVar9;
  uVar10 = uVar3 - 0x20;
  if (0x1f < (int)uVar3) {
    uVar3 = uVar11 >> (uVar10 & 0xff) | uVar7 << (0x20 - uVar10 & 0xff);
    uVar9 = (uVar7 >> (uVar10 & 0xff) & ~((uVar7 & 0x80000000) >> (uVar10 & 0xff))) -
            ((int)uVar3 >> 0x1f);
    if ((uVar13 | uVar11 << (0x20 - uVar10 & 0xff) | uVar3 << 1) == 0) {
      uVar9 = uVar9 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44(uVar7,uVar9) & 0x80000000ffffffff;
  }
  iVar8 = uVar3 - 0x14;
  if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar10,0xc)) {
    uVar9 = 0xc - iVar8;
    uVar3 = uVar11 << (uVar9 & 0xff);
    uVar11 = uVar11 >> (0x20 - uVar9 & 0xff) | uVar7 << (uVar9 & 0xff);
    uVar9 = uVar11 + -((int)uVar3 >> 0x1f);
    if ((uVar13 | uVar3 << 1) == 0) {
      uVar9 = uVar9 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44((uVar7 & 0x80000000) + (uint)CARRY4(uVar11,-((int)uVar3 >> 0x1f)),uVar9);
  }
  uVar10 = uVar11 << (uVar9 + 0x20 & 0xff);
  uVar11 = uVar11 >> (uVar3 & 0xff) | uVar7 << (uVar9 + 0x20 & 0xff);
  uVar9 = uVar11 + -((int)uVar10 >> 0x1f);
  if ((uVar13 | uVar10 << 1) == 0) {
    uVar9 = uVar9 & ~(uVar10 >> 0x1f);
  }
  return CONCAT44((uVar7 & 0x80000000) +
                  ((uVar7 & 0x7fffffff) >> (uVar3 & 0xff)) +
                  (uint)CARRY4(uVar11,-((int)uVar10 >> 0x1f)),uVar9);
}


// FUN_08000374 0x08000374
void set_memory_with_checksum_08000374(int memory_start, char *data, int data_length)
{
  int length_remaining = data_length;
  char *current_byte = data;
  int current_address = memory_start;
  if (*(int *)PTR_DAT_080003e8 == 0) {
    initializeMemory_080002f0();
    current_byte = data;
    current_address = memory_start;
  }
  char checksum = '\0';
  for (; length_remaining != 0; length_remaining--) {
    checksum = (checksum != '\0') + *current_byte;
    set_memory_value_08000340(current_address,*current_byte);
    current_byte++;
    current_address++;
  }
  set_memory_value_08000340(current_address,checksum);
  return;
}
// FUN_080037fc 0x080037fc
void print_abs_value_080037fc(int value) {
  int abs_value = value;
  if (value < 0) {
    send_byte_to_device(0x2d);
    abs_value = -value;
  }
  print_uint_as_string(abs_value);
  return;
}
// FUN_0800a1bc 0x0800a1bc

uint FUNC_0800a1bc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  
  if ((DAT_0800a340 & ~param_2) == 0) {
    uVar14 = FUNC_08008640(param_1,param_2,param_1,param_2);
    uVar8 = FUNC_080082d4((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),param_1,param_2);
    return uVar8;
  }
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return param_1;
    }
    if (param_2 != 0) {
      uVar14 = FUNC_080082d0(param_1,param_2,param_1);
      uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar8 = FUNC_08008894((int)uVar14,uVar5,(int)uVar14,uVar5);
      return uVar8;
    }
    do {
      uVar10 = param_1;
      uVar8 = uVar10 >> 0xb;
      param_2 = param_2 - 0x15;
      param_1 = uVar10 << 0x15;
    } while (uVar8 == 0);
    uVar2 = param_2;
    if (-1 < (int)uVar10) goto LAB_0800a290;
    uVar11 = 0x20;
    uVar6 = 0xffffffff;
    uVar10 = param_1;
  }
  else {
    uVar2 = (int)param_2 >> 0x14;
    uVar8 = param_2;
    uVar10 = param_1;
    if (uVar2 != 0) goto LAB_0800a1da;
LAB_0800a290:
    uVar10 = 0;
    uVar11 = uVar8;
    do {
      uVar6 = uVar10;
      uVar8 = uVar11 << 1;
      iVar3 = uVar11 << 0xc;
      uVar10 = uVar6 + 1;
      uVar11 = uVar8;
    } while (-1 < iVar3);
    uVar11 = 0x20 - uVar10;
    param_2 = uVar2;
    uVar10 = param_1 << (uVar10 & 0xff);
  }
  uVar8 = param_1 >> (uVar11 & 0xff) | uVar8;
  uVar2 = param_2 - uVar6;
LAB_0800a1da:
  uVar8 = uVar8 & 0xfffff | 0x100000;
  if (-1 < (int)(uVar2 << 0x1f)) {
    uVar8 = uVar8 * 2 - ((int)uVar10 >> 0x1f);
    uVar10 = uVar10 << 1;
  }
  uVar13 = 0;
  uVar8 = uVar8 * 2 - ((int)uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar2 = 0;
  uVar11 = 0x16;
  uVar6 = 0x200000;
  do {
    iVar3 = uVar2 + uVar6;
    if (iVar3 <= (int)uVar8) {
      uVar8 = uVar8 - iVar3;
      uVar2 = iVar3 + uVar6;
      uVar13 = uVar13 + uVar6;
    }
    uVar11 = uVar11 - 1;
    uVar8 = uVar8 * 2 - ((int)uVar10 >> 0x1f);
    uVar6 = uVar6 >> 1;
    uVar10 = uVar10 << 1;
  } while (uVar11 != 0);
  uVar1 = 0x20;
  uVar7 = 0x80000000;
  uVar6 = uVar11;
  do {
    uVar4 = uVar7 + uVar11;
    uVar12 = uVar2;
    if ((int)uVar2 < (int)uVar8) {
      if ((int)uVar4 < 0) {
LAB_0800a26a:
        if (-1 < (int)(uVar4 + uVar7)) {
          uVar12 = uVar2 + 1;
        }
      }
      uVar9 = uVar8 - uVar2;
      uVar2 = uVar12;
      if (uVar10 < uVar4) {
        uVar9 = uVar9 - 1;
      }
LAB_0800a262:
      uVar11 = uVar4 + uVar7;
      uVar10 = uVar10 - uVar4;
      uVar6 = uVar6 + uVar7;
      uVar8 = uVar9;
    }
    else if ((uVar8 == uVar2) && (uVar4 <= uVar10)) {
      if ((int)uVar4 < 0) goto LAB_0800a26a;
      uVar9 = 0;
      uVar2 = uVar8;
      goto LAB_0800a262;
    }
    uVar1 = uVar1 - 1;
    uVar7 = uVar7 >> 1;
    uVar8 = uVar8 * 2 - ((int)uVar10 >> 0x1f);
    uVar10 = uVar10 << 1;
    if (uVar1 == 0) {
      if ((uVar8 | uVar10) == 0) {
        uVar1 = uVar6 >> 1;
      }
      else if (uVar6 == 0xffffffff) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar1 = uVar6 + 1 >> 1;
      }
      if ((uVar13 & 1) != 0) {
        uVar1 = uVar1 | 0x80000000;
      }
      return uVar1;
    }
  } while( true );
}


// FUN_0800525c 0x0800525c
void checkAndUpdateCharacter_0800525c(char newChar) {
  int currentChar = (int)newChar;
  int *PTR_DAT_080052a8 = PTR_DAT_080052a8;
  if (currentChar != (uint)(byte)*PTR_DAT_080052a8) {
    displayAlarmUntilConditionMet();
    if (newChar == '\0') {
      doNothingAndReturn();
    }
    else {
      if (newChar < '\x01') {
        doNothing_0800522c();
      }
      else {
        doNothing_08005220();
      }
      doNothing3();
    }
    *PTR_DAT_080052a8 = newChar;
  }
  return;
}
// FUN_080073d4 0x080073d4
void setBitInShortArray_080073d4(uint bitIndex)
{
  uint shortIndex = (int)bitIndex >> 4;
  uint* shortArray = (uint*)(shortIndex * 0x400 + 0x4002001a);
  uint bitMask = 1 << (bitIndex & 0xf);
  *(short*)shortArray = (short)bitMask;
  return;
}
// FUN_08006dfe 0x08006dfe
void set_bit_in_array_08006dfe(char character) {
  set_bit_in_array_08006dfe_helper((int)character);
  return;
}
// FUN_08006d66 0x08006d66
void waitForDataSyncAndReturn_08006d66(void)
{
    waitForDataSync_08006c70();
    return;
}
// FUN_08006e88 0x08006e88

void FUNC_08006e88(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    uVar1 = 1 << (local_c & 0xff);
    uVar2 = *param_2 & uVar1;
    if (uVar2 == uVar1) {
      if ((param_2[1] == 2) || (param_2[1] == 0x12)) {
        uVar1 = param_2[4];
        param_1[(local_c >> 3) + 8] = param_1[(local_c >> 3) + 8] & ~(0xf << ((local_c & 7) << 2));
        param_1[(local_c >> 3) + 8] = param_1[(local_c >> 3) + 8] | uVar1 << ((local_c & 7) << 2);
      }
      *param_1 = *param_1 & ~(3 << ((local_c & 0x7f) << 1));
      *param_1 = *param_1 | (param_2[1] & 3) << ((local_c & 0x7f) << 1);
      if ((((param_2[1] == 1) || (param_2[1] == 2)) || (param_2[1] == 0x11)) || (param_2[1] == 0x12)
         ) {
        param_1[2] = param_1[2] & ~(3 << ((local_c & 0x7f) << 1));
        param_1[2] = param_1[2] | param_2[3] << ((local_c & 0x7f) << 1);
        param_1[1] = param_1[1] & ~(1 << (local_c & 0xff));
        param_1[1] = param_1[1] | (param_2[1] >> 4 & 1) << (local_c & 0xff);
      }
      param_1[3] = param_1[3] & ~(3 << ((local_c & 0x7f) << 1));
      param_1[3] = param_1[3] | param_2[2] << ((local_c & 0x7f) << 1);
      if ((param_2[1] & 0x10000000) != 0) {
        *(uint *)(DAT_0800719c + 0x44) = *(uint *)(DAT_0800719c + 0x44) | 0x4000;
        *(uint *)(DAT_080071a0 + ((local_c >> 2) + 2) * 4) =
             ~(0xf << ((local_c & 3) << 2)) & *(uint *)(DAT_080071a0 + ((local_c >> 2) + 2) * 4);
        if (param_1 == DAT_080071a4) {
          iVar3 = 0;
        }
        else if (param_1 == DAT_080071a8) {
          iVar3 = 1;
        }
        else if (param_1 == DAT_080071ac) {
          iVar3 = 2;
        }
        else if (param_1 == DAT_080071b0) {
          iVar3 = 3;
        }
        else if (param_1 == DAT_080071b4) {
          iVar3 = 4;
        }
        else if (param_1 == DAT_080071b8) {
          iVar3 = 5;
        }
        else if (param_1 == DAT_080071bc) {
          iVar3 = 6;
        }
        else if (param_1 == DAT_080071c0) {
          iVar3 = 7;
        }
        else if (param_1 == DAT_080071c4) {
          iVar3 = 8;
        }
        else if (param_1 == DAT_080071c8) {
          iVar3 = 9;
        }
        else {
          iVar3 = 10;
        }
        *(uint *)(DAT_080071a0 + ((local_c >> 2) + 2) * 4) =
             iVar3 << ((local_c & 3) << 2) | *(uint *)(DAT_080071a0 + ((local_c >> 2) + 2) * 4);
        *DAT_080071cc = ~uVar2 & *DAT_080071cc;
        DAT_080071cc[1] = ~uVar2 & DAT_080071cc[1];
        if ((param_2[1] & 0x10000) != 0) {
          *DAT_080071cc = uVar2 | *DAT_080071cc;
        }
        if ((param_2[1] & 0x20000) != 0) {
          DAT_080071cc[1] = uVar2 | DAT_080071cc[1];
        }
        DAT_080071cc[2] = ~uVar2 & DAT_080071cc[2];
        DAT_080071cc[3] = ~uVar2 & DAT_080071cc[3];
        if ((param_2[1] & 0x100000) != 0) {
          DAT_080071cc[2] = uVar2 | DAT_080071cc[2];
        }
        if ((param_2[1] & 0x200000) != 0) {
          DAT_080071cc[3] = uVar2 | DAT_080071cc[3];
        }
      }
    }
  }
  return;
}


// FUN_080001e0 0x080001e0
void doNothing_080001e0()
{
  return;
}
// FUN_080036f0 0x080036f0
void print_binary_representation_080036f0(uint number, int num_bits) {
  uint mask = 1 << (num_bits - 1);
  for (int bit = 0; bit < num_bits; bit++) {
    if ((mask & number) == 0) {
      send_byte_to_device_08008250('0');
    }
    else {
      send_byte_to_device_08008250('1');
    }
    mask >>= 1;
  }
  return;
}
// FUN_08002edc 0x08002edc
void process_input_and_calculate_result_08002a94_and_process_inputs_08002ba8_and_process_data_08002e08_08002edc(void)
{
  process_input_and_calculate_result_08002a94();
  process_inputs_08002ba8();
  process_data_08002e08();
  return;
}
// FUN_0800375c 0x0800375c
void print_binary_representation_0800375c(uint16_t number, uint8_t length) {
    print_binary_representation_0800375c_080036f0(number, length);
    return;
}
// FUN_08009990 0x08009990
uint calculate_08009990(uint input1, uint input2, uint input3, uint input4)
{
  int tempVar1;
  undefined4 tempVar2;
  uint tempVar3;
  uint tempVar4;
  uint tempVar5;
  undefined8 tempVar6;
  
  tempVar6 = CONCAT44(DAT_08009b04,DAT_08009b00);
  tempVar4 = input4 & 0x7fffffff;
  if ((DAT_08009b18 < (tempVar4 | (-input3 | input3) >> 0x1f)) ||
     (tempVar5 = input2 & 0x7fffffff, DAT_08009b18 < (tempVar5 | (-input1 | input1) >> 0x1f))) {
    tempVar4 = skippedFunction1(input3,input4,input1,input2);
  }
  else {
    if ((input4 + 0xc0100000 | input3) == 0) {
      tempVar4 = skippedFunction2();
      return tempVar4;
    }
    tempVar3 = (int)input4 >> 0x1e & 2U | input2 >> 0x1f;
    if ((tempVar5 | input1) == 0) {
      tempVar4 = DAT_08009af0;
      if ((tempVar3 != 2) && (tempVar4 = input1, tempVar3 == 3)) {
        tempVar4 = DAT_08009af8;
      }
    }
    else {
      if ((tempVar4 | input3) != 0) {
        if (tempVar4 == DAT_08009b18) {
          tempVar3 = tempVar3 - 1;
          if (tempVar5 == tempVar4) {
            if (2 < tempVar3) {
              return DAT_08009b10;
            }
            return *(uint *)(PTR_DAT_08009b20 + tempVar3 * 8);
          }
          if (tempVar3 < 3) {
            return *(uint *)(PTR_DAT_08009b1c + tempVar3 * 8);
          }
          return 0;
        }
        if (tempVar5 != DAT_08009b18) {
          tempVar1 = (int)(tempVar5 - tempVar4) >> 0x14;
          if ((int)(tempVar5 - tempVar4) < 0x3d00000) {
            if (((int)input4 < 0) && (tempVar1 + 0x3c < 0 != SCARRY4(tempVar1,0x3c))) {
              tempVar6 = 0;
            }
            else {
              skippedFunction3(input1,input2,input3,input4,input4);
              doNothing_0800b2cc();
              tempVar6 = skippedFunction2();
            }
          }
          tempVar2 = (undefined4)((ulonglong)tempVar6 >> 0x20);
          tempVar4 = (uint)tempVar6;
          if (tempVar3 == 1) {
            return tempVar4;
          }
          if (tempVar3 == 2) {
            tempVar6 = skippedFunction1(tempVar4,tempVar2,DAT_08009ae8,DAT_08009aec);
            tempVar4 = skippedFunction1(DAT_08009af0,DAT_08009af4,(int)tempVar6,
                                 (int)((ulonglong)tempVar6 >> 0x20));
            return tempVar4;
          }
          if (tempVar3 == 0) {
            return tempVar4;
          }
          tempVar6 = skippedFunction1(tempVar4,tempVar2,DAT_08009ae8,DAT_08009aec);
          tempVar4 = skippedFunction1((int)tempVar6,(int)((ulonglong)tempVar6 >> 0x20),DAT_08009af0,DAT_08009af4)
          ;
          return tempVar4;
        }
      }
      tempVar4 = DAT_08009b08;
      if (-1 < (int)input2) {
        tempVar4 = DAT_08009b00;
      }
    }
  }
  return tempVar4;
}
// FUN_08007e58 0x08007e58
bool isBitSet_08007e58()
{
  uint* DAT_08007e80 = DAT_08007e80;
  bool isSet = (*DAT_08007e80 & 0x20) != 0;
  return isSet;
}
// FUN_080059f8 0x080059f8
void initialize_values_080059f8(void)
{
    int* ptr_dat_08005a4c = (int*)DAT_08005a4c;
    ptr_dat_08005a4c[8] = -1;
    ptr_dat_08005a4c[8] = 0;
    ptr_dat_08005a4c[9] = -1;
    ptr_dat_08005a4c[9] = 0;
    ptr_dat_08005a4c[4] = -1;
    ptr_dat_08005a4c[4] = 0;
    ptr_dat_08005a4c[5] = -1;
    ptr_dat_08005a4c[5] = 0;
    ptr_dat_08005a4c[6] = -1;
    ptr_dat_08005a4c[6] = 0;
    doNothing_08005a5c();
}
// FUN_08003f34 0x08003f34
void process_input_and_send_error_message_08003f34() {
  byte current_byte;
  byte *PTR_DAT_08004028 = 0;
  undefined4 error_code;
  while(true) {
    while(true) {
      current_byte = process_next_byte();
      if(current_byte == 0xff) {
        return;
      }
      if((current_byte == 10) || (current_byte == 0xd)) {
        break;
      }
      if(*PTR_DAT_08004028 == '\0') {
        if((current_byte > 0x20) && (current_byte != 0x2f)) {
          if(current_byte == 0x28) {
            *PTR_DAT_08004028 = 1;
          }
          else if(*PTR_DAT_08004020 == -1) {
            send_error_message(0xd);
            resetData_08003980();
          }
          else if((current_byte < 0x61) || (current_byte > 0x7a)) {
            byte index = *PTR_DAT_08004020;
            *PTR_DAT_08004020 = index + 1;
            PTR_DAT_08004024[index] = current_byte;
          }
          else {
            byte index = *PTR_DAT_08004020;
            *PTR_DAT_08004020 = index + 1;
            PTR_DAT_08004024[index] = current_byte - 0x20;
          }
        }
      }
      else if(current_byte == 0x29) {
        *PTR_DAT_08004028 = 0;
      }
    }
    display_alarm_if_needed();
    if(*PTR_DAT_0800401c != '\0') {
      break;
    }
    if(*PTR_DAT_08004020 == '\0') {
      send_error_message(0);
    }
    else {
      byte *PTR_DAT_08004020 = *PTR_DAT_08004020;
      PTR_DAT_08004024[*PTR_DAT_08004020] = 0;
      error_code = FUNC(PTR_DAT_08004024);
      send_error_message(error_code);
    }
    resetData_08003980();
  }
  return;
}
// FUN_080095b8 0x080095b8
int calculateValue_080095b8(uint param1, uint param2) {
  uint shift_amount = (param2 << 1) >> 0x15;
  uint exponent = shift_amount - 0x3ff;
  int sign = (int)param2 < 0 ? -1 : 1;
  uint mantissa = param2 & 0xfffff | 0x100000;
  if ((int)exponent < 0x14) {
    if ((int)exponent < 0) {
      if (exponent != 0xffffffff) {
        sign = 0;
      }
      return sign;
    }
    mantissa = mantissa + (0x80000 >> (exponent & 0xff)) >> (0x14 - exponent & 0xff);
  }
  else {
    if (0x1e < exponent) {
      int result = calculateValue_080095b8_08008ba0();
      return result;
    }
    if ((int)exponent < 0x34) {
      uint carry = 0x80000000 >> (shift_amount - 0x413 & 0xff);
      if (CARRY4(carry,param1) != false) {
        mantissa = mantissa + 1;
      }
      mantissa = mantissa << (shift_amount - 0x413 & 0xff);
      if (exponent != 0x14) {
        mantissa = mantissa | carry + param1 >> (0x34 - exponent & 0xff);
      }
    }
    else {
      mantissa = mantissa << (shift_amount - 0x413 & 0xff) | param1 << (shift_amount - 0x433 & 0xff);
    }
  }
  return mantissa * sign;
}
// FUN_08006cf6 0x08006cf6
void set_data_value_at_index_08006cf6(char index, int data_value, int bit_count)
{
  int value = get_data_value_08006998();
  value = calculate_bits_08006ba0(value, data_value, bit_count);
  set_data_value_08006b00(value, (int)index);
  return;
}
// FUN_08002ef0 0x08002ef0
void copyAndIncrementChar_08002ef0(void)
{
  char* sourceChar = PTR_DAT_08002f18;
  char* destChar = PTR_DAT_08002f1c;
  char incrementedChar = incrementChar_08002870(*PTR_DAT_08002f18);
  *PTR_DAT_08002f1c = *PTR_DAT_08002f18;
  *PTR_DAT_08002f20 = incrementedChar;
}
// FUN_08001d4c 0x08001d4c
void update_device_flags_and_check_status_08001d4c(void)
{
  char counter;
  char flag;
  
  update_device_flags();
  skip_instruction(4,1,0,*(undefined4 *)(PTR_DAT_08001dd8_08001dd8 + 0x30));
  skip_instruction(3,1,0,*(undefined4 *)(PTR_DAT_08001dd8_08001dd8 + 0x30));
  doNothing_08002814(*(undefined2 *)(PTR_DAT_08001dd8_08001dd8 + 0x34));
  flag = '\x02';
  while( flag != '\0' ) {
    counter = flag - 1;
    skip_instruction(7,0,1,*(undefined4 *)(PTR_DAT_08001dd8_08001dd8 + 0x2c));
    doNothing_08002814(*(undefined2 *)(PTR_DAT_08001dd8_08001dd8 + 0x34));
    flag = counter;
    if (counter > '\0') {
      skip_instruction(7,1,0,*(undefined4 *)(PTR_DAT_08001dd8_08001dd8 + 0x2c));
      doNothing_08002814(*(undefined2 *)(PTR_DAT_08001dd8_08001dd8 + 0x34));
    }
  }
  clear_globals_and_check_status();
  return;
}
// FUN_08000268 0x08000268
int calculateValueToAddToBaseValue_08000268(void)
{
  int baseValue = getValueFromPointer_08005a84();
  int valueToAdd = (baseValue + 1) * 1000;
  int *(uint *)(DAT_08000298 + 8) >> 3 = *(uint *)(DAT_08000298 + 8) >> 3;
  int (uint)((ulonglong)DAT_0800029c * (ulonglong)(*(uint *)(DAT_08000298 + 8) >> 3) >> 0x21) = (uint)((ulonglong)DAT_0800029c * (ulonglong)*(uint *)(DAT_08000298 + 8) >> 3 >> 0x21);
  return valueToAdd - (uint)((ulonglong)DAT_0800029c * (ulonglong)(*(uint *)(DAT_08000298 + 8) >> 3) >> 0x21);
}
// FUN_08003778 0x08003778
void print_uint_as_string_08003778(uint number)
{
  uint quotient;
  uint remainder;
  char digit_array[12];
  byte digit_count = 0;
  remainder = number;
  if (number == 0) {
    send_byte_to_device_08008250(0x30);
  }
  else {
    while (remainder != 0) {
      quotient = remainder / 10;
      remainder = remainder % 10;
      digit_array[digit_count] = remainder + '0';
      digit_count++;
      remainder = quotient;
    }
    while (digit_count != 0) {
      digit_count--;
      send_byte_to_device_08008250(digit_array[digit_count]);
    }
  }
  return;
}
// FUN_0800b3dc 0x0800b3dc
undefined4 getValueFromPtrPtr_0800b3dc()
{
  uint** PTR_PTR_DAT_0800b3e4 = PTR_PTR_DAT_0800b3e4;
  undefined4 value = **PTR_PTR_DAT_0800b3e4;
  return value;
}
// FUN_080046d0 0x080046d0
void print_device_info_080046d0(void)
{
  byte device_info_byte = PTR_DAT_08004890[1];
  if (device_info_byte > 4)
  {
    send_string_to_device_080036c6(PTR_DAT_080048a8);
    print_abs_value_080037fc(PTR_DAT_08004890[0x1c] + 0x36);
    if (PTR_DAT_08004890[0x19] == '\0')
    {
      if (PTR_DAT_08004890[0x1a] == '\x01')
      {
        send_string_to_device_080036c6(PTR_DAT_080048ac);
      }
      else
      {
        send_string_to_device_080036c6(PTR_DAT_080048b0);
      }
    }
    else
    {
      send_string_to_device_080036c6(PTR_DAT_080048b4);
    }
    if (PTR_DAT_08004890[3] == '\0')
    {
      send_string_to_device_080036c6(PTR_DAT_080048bc);
    }
    else
    {
      send_string_to_device_080036c6(PTR_DAT_080048b8);
    }
    if (PTR_DAT_08004890[4] == '\0')
    {
      send_string_to_device_080036c6(PTR_DAT_080048c4);
    }
    else
    {
      send_string_to_device_080036c6(PTR_DAT_080048c0);
    }
    if (PTR_DAT_08004890[2] == '\0')
    {
      send_string_to_device_080036c6(PTR_DAT_080048cc);
    }
    else
    {
      send_string_to_device_080036c6(PTR_DAT_080048c8);
    }
    byte device_status_byte = PTR_DAT_08004890[5];
    if (device_status_byte == 2)
    {
      send_string_to_device_080036c6(PTR_DAT_080048d8);
    }
    else if (device_status_byte < 3)
    {
      if (device_status_byte == 0)
      {
        send_string_to_device_080036c6(PTR_DAT_080048d0);
      }
      else if (device_status_byte == 1)
      {
        send_string_to_device_080036c6(PTR_DAT_080048d4);
      }
    }
    char device_char = PTR_DAT_08004890[6];
    if (device_char == '\x01')
    {
      send_string_to_device_080036c6(PTR_DAT_080048dc);
    }
    else if (device_char < '\x02')
    {
      if (device_char == -1)
      {
        send_string_to_device_080036c6(PTR_DAT_080048e0);
      }
      else if (device_char == '\0')
      {
        send_string_to_device_080036c6(PTR_DAT_080048e4);
      }
    }
    byte device_byte = PTR_DAT_08004890[7];
    if (device_byte == 2)
    {
      send_string_to_device_080036c6(PTR_DAT_080048f0);
    }
    else if (device_byte < 3)
    {
      if (device_byte == 0)
      {
        send_string_to_device_080036c6(PTR_DAT_080048e8);
      }
      else if (device_byte == 1)
      {
        send_string_to_device_080036c6(PTR_DAT_080048ec);
      }
    }
    send_string_to_device_080036c6(PTR_DAT_080048f4);
    print_abs_value_080037fc(PTR_DAT_08004890[0x18]);
    send_string_to_device_080036c6(PTR_DAT_080048f8);
    if (PTR_DAT_08004890[3] == '\0')
    {
      print_float_08003826(*(undefined4 *)(PTR_DAT_08004890 + 8));
    }
    else
    {
      undefined8 uVar1 = FUNC_08008590(*(undefined4 *)(PTR_DAT_08004890 + 8));
      uVar1 = FUNC_08008640((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_08004888,DAT_0800488c);
      undefined4 calculated_float = calculateFloat_08008c30((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
      print_float_08003826(calculated_float);
    }
    send_string_to_device_080036c6(PTR_DAT_080048fc);
    return;
  }
  else
  {
    (*(code *)(&switchD_080046de::switchdataD_080046e4)[device_info_byte])();
    return;
  }
}
// FUN_08006d72 0x08006d72
undefined4 validate_parameter_08006d72(undefined4 parameter)
{
  undefined4 result;
  result = check_if_valid(parameter);
  return result;
}
// FUN_0800756c 0x0800756c
void initializeData_0800756c()
{
  uint* DAT_080075bc = DAT_080075bc;
  *DAT_080075bc = *DAT_080075bc | 1;
  DAT_080075bc[2] = 0;
  *DAT_080075bc = *DAT_080075bc & 0xfef6ffff;
  DAT_080075bc[1] = DAT_080075c0;
  *DAT_080075bc = *DAT_080075bc & 0xfffbffff;
  DAT_080075bc[3] = 0;
  uint* ptr = (uint*)(DAT_080075c4 + 8);
  *ptr = 0x8000000;
  return;
}
// FUN_080001f8 0x080001f8
void reset_data_080001f8(void)
{
  *PTR_DAT_0800020c = 0;
  perform_tasks();
  return;
}
// FUN_08002f74 0x08002f74
undefined* getPointer_08002f74()
{
  uint* PTR_DAT_08002fa0 = PTR_DAT_08002fa0;
  uint* PTR_DAT_08002fa4 = PTR_DAT_08002fa4;
  undefined* result = (undefined*)0x0;
  if (*PTR_DAT_08002fa0 == *PTR_DAT_08002fa4) {
    result = (undefined*)0x0;
  }
  else {
    uint* PTR_DAT_08002fa8 = PTR_DAT_08002fa8;
    byte index = (byte)*PTR_DAT_08002fa4;
    result = (undefined*)(PTR_DAT_08002fa8 + (uint)index * 0x40);
  }
  return result;
}
// FUN_0800b3e8 0x0800b3e8
void execute_functions_0800b3e8(void)
{
  int num_functions = (int)PTR_DAT_0800b420 - (int)PTR_DAT_0800b424 >> 2;
  if (num_functions != 0) {
    int i = 0;
    code **function_pointer = (code **)PTR_DAT_0800b424;
    do {
      i++;
      (**function_pointer)();
      function_pointer++;
    } while (num_functions != i);
  }
  function_pointer = (code **)PTR_DAT_0800b42c;
  int num_callbacks = (int)PTR_DAT_0800b428 - (int)PTR_DAT_0800b42c;
  do_nothing();
  num_callbacks = num_callbacks >> 2;
  if (num_callbacks != 0) {
    int i = 0;
    do {
      i++;
      (**function_pointer)();
      function_pointer++;
    } while (num_callbacks != i);
  }
  return;
}
// FUN_080096e8 0x080096e8
int calculate_result_080096e8(int input1, unsigned int input2)
{
  int result;
  unsigned int input2_abs = input2 & 0x7fffffff;
  if (DAT_08009790 < input2_abs)
  {
    if (DAT_08009794 < input2_abs)
    {
      result = FUNC_080082d0(input1, input2, input1, input2);
    }
    else
    {
      int function2_result = skipped_function2(input1, input2, &local_var1);
      switch (function2_result & 3)
      {
        case 1:
          result = skipped_function3(local_var1, uStack_24, local_var2, uStack_1c);
          break;
        case 2:
        case 0:
          result = calculate_result_080096e8(local_var1, uStack_24, local_var2, uStack_1c, 1);
          break;
        default:
          result = skipped_function3(local_var1, uStack_24, local_var2, uStack_1c);
      }
    }
  }
  else
  {
    result = calculate_result_080096e8(input1, input2, 0, 0, 0);
  }
  return result;
}
// FUN_08006a18 0x08006a18
bool isBitSet_08006a18(byte index)
{
  uint* DAT_08006a54 = DAT_08006a54;
  uint arrayIndex = ((uint)(int)(char)index >> 5) + 0x40;
  uint* arrayEntry = DAT_08006a54 + arrayIndex * 4;
  uint bitMask = 1 << (index & 0x1f);
  bool isSet = (*arrayEntry & bitMask) != 0;
  return isSet;
}
// FUN_08002c18 0x08002c18
void calculateValues_08002c18(int value1, int value2, int value3){
  int twosComplement1 = calculateTwosComplement(value3);
  int result1 = skip1(twosComplement1, value1);
  long long result2 = skip2(result1);
  int value4 = calculateValue(result2);
  int twosComplement2 = calculateTwosComplement(value3);
  int result3 = skip1(twosComplement2, value2);
  long long result4 = skip2(result3);
  int value5 = calculateValue(result4);
  long long value6 = skip3(*(int *)(value3 + 0x30) * 0x32);
  long long value7 = skip4(value6, 0, 0x08002e04);
  int value8 = calculateValue(value7);
  int twosComplement3 = calculateTwosComplement(*(int *)(value3 + 0x28));
  int twosComplement4 = calculateTwosComplement(value3);
  int twosComplement5 = calculateTwosComplement(calculateTwosComplement(value8));
  int result5 = calculateResult(twosComplement3, twosComplement4, twosComplement5);
  long long result6 = skip2(result5);
  int value9 = calculateValue(result6);
  int twosComplement6 = calculateTwosComplement(value3);
  int twosComplement7 = calculateTwosComplement(*(int *)(value3 + 0x2c));
  int twosComplement8 = calculateTwosComplement(-value8);
  int result7 = calculateResult(twosComplement6, twosComplement7, twosComplement8);
  long long result8 = skip2(result7);
  long long value10 = skip5(result8);
  int value11 = calculateValue(value10);
  int value12 = *(int *)(value3 + 0x10) - value9 - value11;
  if (value12 < 0) {
    int twosComplement9 = calculateTwosComplement(*(int *)(value3 + 0x28));
    int twosComplement10 = calculateTwosComplement(*(int *)(value3 + 0x3c));
    int twosComplement11 = calculateTwosComplement(value8);
    int twosComplement12 = calculateTwosComplement(*(int *)(value3 + 0x10));
    int result9 = calculateResult(twosComplement9, twosComplement10, twosComplement11, twosComplement12);
    long long result10 = skip2(result9);
    int value13 = calculateValue(result10);
    value13 = value13 & ~((int)value13 >> 0x1f);
    int value14 = *(int *)(value3 + 0x10);
    if ((int)value13 <= (int)*(uint *)(value3 + 0x10)) {
      value14 = value13;
    }
    value12 = 0;
  }
  *(uint *)(value3 + 0x34) = value14;
  *(uint *)(value3 + 0x38) = value12 + value14;
  return;
}
// FUN_08006ac0 0x08006ac0
bool isBitSet_08006ac0(byte index)
{
  uint* DAT_08006afc = DAT_08006afc;
  uint arrayIndex = ((uint)(int)(char)index >> 5) + 0x80;
  uint* arrayEntry = DAT_08006afc + arrayIndex * 4;
  uint bitMask = 1 << (index & 0x1f);
  bool isSet = (*arrayEntry & bitMask) != 0;
  return isSet;
}
// FUN_080001ec 0x080001ec
void doNothing_080001ec()
{
  // This function does nothing.
  return;
}
// FUN_08005a50 0x08005a50
void doNothing_08005a50()
{
  // This function does nothing.
  return;
}
// FUN_08002ba8 0x08002ba8
void process_inputs_08002ba8() {
  undefined *current_input;
  undefined *previous_input;
  undefined *next_input;
  undefined *last_input = (undefined *)0x0;
  byte current_char = *PTR_DAT_08002c0c;
  next_input = (undefined *)0x0;
  while (current_char != *PTR_DAT_08002c14) {
    previous_input = last_input;
    current_input = next_input;
    next_input = PTR_DAT_08002c10 + (uint)current_char * 0x40;
    process_input(current_input, next_input, previous_input);
    current_char = incrementChar(current_char);
    last_input = current_input;
  }
  process_input(last_input, next_input, 0, last_input, previous_input);
  return;
}
// FUN_0800919c 0x0800919c
uint calculateResult_0800919c(uint num1, uint num2)
{
  bool isOverflow = false;
  uint doubleNum1 = num1 * 2;
  uint doubleNum2 = num2 * 2;
  if (((int)doubleNum1 >> 0x18 == -1 || (int)doubleNum2 >> 0x18 == -1) && ((((int)doubleNum1 >> 0x18 == -1 && ((num1 & 0x7fffff) != 0)) || (((int)doubleNum2 >> 0x18 == -1 && ((num2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uint combinedNum = doubleNum1 | num2 & 0x7fffffff;
  bool isCombinedZero = combinedNum == 0;
  if (!isCombinedZero) {
    uint xorResult = num1 ^ num2;
    isCombinedZero = xorResult == 0;
  }
  bool isNegative = -1 < (int)(num1 ^ num2);
  if (isNegative) {
    num1 = doubleNum1 + num2 * -2;
    isCombinedZero = num1 == 0;
  }
  if (isNegative && doubleNum2 <= doubleNum1 && !isCombinedZero) {
    num1 = (int)num2 >> 0x1f;
  }
  if (!isNegative || doubleNum2 > doubleNum1) {
    num1 = ~((int)num2 >> 0x1f);
  }
  if (!isCombinedZero) {
    num1 = num1 | 1;
  }
  return num1;
}
// FUN_0800b2cc 0x0800b2cc
void doNothing_0800b2cc()
{
  // This function does nothing.
  return;
}
// FUN_0800854c 0x0800854c
ulonglong calculateResult_0800854c(uint num)
{
  if (num == 0) {
    return 0;
  }
  uint shiftAmount = count_leading_zeroes(num) + 0x15;
  uint highBits = 0;
  uint lowBits = 0;
  if ((int)shiftAmount < 0x20) {
    shiftAmount = shiftAmount - 0xb;
    if ((int)shiftAmount >= 0) {
      highBits = num << (shiftAmount & 0xff);
      lowBits = num >> (0xcU - shiftAmount & 0xff);
    }
  }
  else {
    uint shiftAmount2 = 0x20 - shiftAmount;
    highBits = num << (shiftAmount & 0xff) | 0U >> (shiftAmount2 & 0xff);
    if (shiftAmount2 > 0x1e) {
      return (ulonglong)(num >> (shiftAmount2 - 0x1f & 0xff));
    }
    int shiftAmount3 = shiftAmount2 - 0x13;
    if (shiftAmount3 == 0 || shiftAmount3 < 0 != SCARRY4(shiftAmount2 - 0x1f, 0xc)) {
      shiftAmount2 = shiftAmount2 + 1;
      lowBits = num >> (shiftAmount2 & 0xff) | highBits << (0x20 - shiftAmount2 & 0xff);
      highBits = highBits >> (shiftAmount2 & 0xff);
    }
    else {
      lowBits = highBits >> (0x20 - (0xcU - shiftAmount3) & 0xff) | num << (0xcU - shiftAmount3 & 0xff);
      highBits = num >> (0x20 - shiftAmount3 & 0xff);
    }
  }
  return CONCAT44(highBits + (0x432 - shiftAmount) * 0x100000, lowBits);
}
// FUN_08008e44 0x08008e44
uint calculateTwosComplement_08008e44(uint num)
{
  uint signBit = num & 0x80000000;
  if ((int)signBit < 0) {
    num = -num;
  }
  if (num == 0) {
    return 0;
  }
  int leadingZeros = count_leading_zeroes(num);
  uint shiftAmount = leadingZeros - 8;
  int constant = ((signBit | 0x4b000000) - 0x800000) + shiftAmount * -0x800000;
  if (leadingZeros > 7) {
    uint highBits = 0 << (shiftAmount & 0xff);
    uint lowBits = param_1 << (shiftAmount & 0xff);
    uint carry = 0U >> (0x20 - shiftAmount & 0xff);
    uint result = constant + highBits + lowBits + (uint)(0x7fffffff < carry);
    if (highBits == 0x80000000) {
      result = result & 0xfffffffe;
    }
    return result;
  }
  uint highBits = num << (leadingZeros + 0x18U & 0xff);
  uint lowBits = (num >> (0x20 - (leadingZeros + 0x18U) & 0xff)) - ((int)highBits >> 0x1f);
  if ((highBits & 0x7fffffff) == 0) {
    lowBits = lowBits & ~(highBits >> 0x1f);
  }
  return constant + lowBits;
}
// FUN_0800733e 0x0800733e
void setParameter_0800733e(int paramIndex, undefined2 value, char isSecondParam)
{
  if (isSecondParam == '\0') {
    *(undefined2 *)(paramIndex + 0x1a) = value;
  }
  else {
    *(undefined2 *)(paramIndex + 0x18) = value;
  }
  return;
}
// FUN_0800583c 0x0800583c
void update_device_and_clear_globals_0800583c(void)
{
  uint16_t device_flags = *(uint16_t *)(PTR_DAT_08005858 + 0x18);
  update_device_params(device_flags);
  update_device_flags();
  clear_global_variables_and_check_status();
  return;
}
// FUN_08001e98 0x08001e98
void checkDeviceStatusAndUpdateIfNecessary_08001e98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined param_5)
{
  int arePointersEqual;
  if (deviceStatus[1] != '\a') {
    do {
      displayAlarmIfDeviceIsNotOkay();
      if (*deviceStatus != '\0') {
        return;
      }
      arePointersEqual = arePointersEqual_08002fac();
    } while (arePointersEqual != 0);
    FUNC_08003004(param_1,param_2,param_3,param_4,param_5);
    if (deviceStatus[1] == '\0') {
      deviceStatus[1] = 2;
    }
    if (deviceStatus[0x10] != '\0') {
      updateDeviceFlagsIfFlagTwoIsSet_0800585c();
    }
  }
  return;
}
// FUN_080069e4 0x080069e4
void setBitInArray_080069e4(byte bitIndex)
{
  int* targetAddress = DAT_08006a14 + (((uint)(int)(char)bitIndex >> 5) + 0x20) * 4;
  int bitMask = 1 << (bitIndex & 0x1f);
  *targetAddress = bitMask;
  return;
}
// FUN_0800b2d4 0x0800b2d4
uint getSignBit_0800b2d4(uint num)
{
  uint signBit = num | 0x80000000;
  uint shifted = signBit + 0x100000;
  uint result = shifted >> 0x1f;
  return result;
}
// FUN_08008e3c 0x08008e3c
uint calculateTwosComplement_08008e3c(uint num)
{
  if (num == 0) {
    return 0;
  }
  int leadingZeros = count_leading_zeroes(num);
  uint shiftAmount = leadingZeros - 8;
  int constant = shiftAmount * -0x800000 + 0x4a800000;
  if (leadingZeros > 7) {
    uint highBits = 0 << (shiftAmount & 0xff);
    uint lowBits = num << (shiftAmount & 0xff);
    uint carry = 0U >> (0x20 - shiftAmount & 0xff);
    uint result = constant + highBits + lowBits + (uint)(0x7fffffff < carry);
    if (highBits == 0x80000000) {
      result = result & 0xfffffffe;
    }
    return result;
  }
  uint highBits = num << (leadingZeros + 0x18U & 0xff);
  uint lowBits = (num >> (0x20 - (leadingZeros + 0x18U) & 0xff)) - ((int)highBits >> 0x1f);
  if ((highBits & 0x7fffffff) == 0) {
    lowBits = lowBits & ~(highBits >> 0x1f);
  }
  return constant + lowBits;
}
// FUN_08009654 0x08009654
longlong decode_float_08009654(uint float_bits, uint exponent_bits)
{
  uint exponent_shifted = (exponent_bits << 1) >> 0x15;
  uint exponent_diff = exponent_shifted - 0x3ff;
  longlong result = CONCAT44(exponent_bits, float_bits);

  if ((int)exponent_diff < 0x14) {
    if ((int)exponent_diff < 0) {
      float_bits = float_bits & 0x80000000;
      if (exponent_diff == 0xffffffff) {
        float_bits = float_bits | 0x3ff00000;
      }
      result = (ulonglong)float_bits << 0x20;
    }
    else {
      uint DAT_080096e4 = DAT_080096e4 >> (exponent_diff & 0xff);
      result = CONCAT44(exponent_bits, float_bits);
      if ((float_bits & DAT_080096e4 | float_bits) != 0) {
        float_bits = float_bits + (0x80000 >> (exponent_diff & 0xff)) & ~DAT_080096e4;
        result = (ulonglong)float_bits << 0x20;
      }
    }
  }
  else if ((int)exponent_diff < 0x34) {
    uint DAT_080096e4 = 0xffffffff >> (exponent_shifted - 0x413 & 0xff);
    if ((float_bits & DAT_080096e4) != 0) {
      uint bit_to_add = 1 << (0x33 - exponent_diff & 0xff);
      if (CARRY4(float_bits, bit_to_add) != false) {
        exponent_bits = exponent_bits + 1;
      }
      result = CONCAT44(exponent_bits, float_bits + bit_to_add & ~DAT_080096e4);
    }
  }
  else {
    result = CONCAT44(exponent_bits, float_bits);
    if (exponent_diff == 0x400) {
      result = FUNC_080082d4();
    }
  }
  return result;
}
// FUN_08007bc2 0x08007bc2
void clearBitsInGlobals_08007bc2()
{
  _DAT_40000000 &= 0xfffffffe;
  _DAT_4000000c &= 0xfffffff8;
  return;
}
// FUN_08009410 0x08009410
int calculate_result_08009410(int input_1, unsigned int input_2)
{
  int result;
  unsigned int masked_input_2 = input_2 & 0x7fffffff;
  int DAT_080094b4 = DAT_080094b4;
  int DAT_080094b8 = DAT_080094b8;
  if (DAT_080094b4 >= (int)masked_input_2)
  {
    result = FUNC_0800a348(input_1, masked_input_2, 0, 0);
  }
  else if (DAT_080094b8 >= (int)masked_input_2)
  {
    unsigned int local_28;
    int uStack_24;
    int local_20;
    int uStack_1c;
    int function_result = FUNC_08009d78(input_1, masked_input_2, &local_28);
    int function_result_masked = function_result & 3;
    if (function_result_masked == 1)
    {
      result = calculateResult_0800adf0(local_28, uStack_24, local_20, uStack_1c, 1);
    }
    else if (function_result_masked == 2 || function_result_masked == 0)
    {
      result = FUNC_0800a348(local_28, uStack_24, local_20, uStack_1c);
    }
    else
    {
      result = calculateResult_0800adf0(local_28, uStack_24, local_20, uStack_1c, 1);
    }
  }
  else
  {
    result = FUNC_080082d0(input_1, masked_input_2, input_1, masked_input_2);
  }
  return result;
}
// FUN_080035ec 0x080035ec
void setValuesInGlobalArray_080035ec(undefined4 value1, undefined4 value2, undefined4 value3)
{
  *(undefined4 *)PTR_DAT_08003614 = value1;
  *(undefined4 *)(PTR_DAT_08003614 + 4) = value2;
  *(undefined4 *)(PTR_DAT_08003614 + 8) = value3;
  return;
}
// FUN_08006c70 0x08006c70
void waitForDataSync_08006c70()
{
  DataSynchronizationBarrier(0xf);
  uint* DAT_08006c94 = DAT_08006c94 + 0xc;
  uint currentBits = *(uint *)(DAT_08006c94 + 0xc);
  uint DAT_08006c98 = DAT_08006c98 | (currentBits & 0x700);
  *DAT_08006c94 = DAT_08006c98;
  DataSynchronizationBarrier(0xf);
  while(true) {
    // Do nothing, wait for interrupt
  }
}
// FUN_08006d98 0x08006d98
void extract_nibble_and_bits_08006d98(char input_char, undefined4 bit_position_1, undefined4 bit_position_2, undefined4 bit_position_3)
{
  undefined4 nibble = extractNibble_08006b54(input_char);
  extractBitsFromUint_08006c04(nibble, bit_position_1, bit_position_2, bit_position_3);
  return;
}
// FUN_08005a68 0x08005a68
void incrementValueInGlobalInt_08005a68()
{
  int* PTR_DAT_08005a80 = PTR_DAT_08005a80;
  int currentValue = *PTR_DAT_08005a80;
  int updatedValue = currentValue + 1;
  *PTR_DAT_08005a80 = updatedValue;
  return;
}
// FUN_080079c0 0x080079c0
void initializeMemory_080079c0(void)
{
  // Fills the memory with 0x00 (null) starting at PTR_DAT_080079d8 for 0x18 (24) bytes
  fillMemoryWithByte(PTR_DAT_080079d8, 0x00, 0x18);
  // Sets the value of the integer at PTR_DAT_080079dc to 1
  *(int *)PTR_DAT_080079dc = 1;
  return;
}
// FUN_0800b2e0 0x0800b2e0
undefined4 returnZero_0800b2e0()
{
  return 0;
}
// FUN_08002908 0x08002908
undefined4 calculate_result_08002908(undefined4 input_1,undefined4 input_2,undefined4 input_3,undefined4 input_4)
{
  undefined4 result_1 = FUNC_08008cdc(input_3, input_3);
  result_1 = FUNC_08008eec(result_1, input_4);
  undefined4 result_2 = FUNC_08008eec(input_1, input_1);
  result_1 = FUNC_08008cd8(result_1, result_2);
  undefined4 result_3 = FUNC_08008eec(input_2, input_2);
  result_1 = FUNC_08008cdc(result_1, result_3);
  result_3 = FUNC_08008eec(input_3, 0x40800000);
  result_1 = FUNC_08009054(result_1, result_3);
  return result_1;
}
// FUN_08007c40 0x08007c40
void setGlobalValue_08007c40(undefined4 value)
{
  _DAT_40000034 = value;
  return;
}
// FUN_080094c0 0x080094c0
long long decode_080094c0(uint encoded_value, uint mask, undefined4 param_3, undefined4 param_4) {
  int shift = (mask << 1) >> 0x15 - 0x3ff;
  uint value_mask;
  long long decode_080094c0d_value;
  if (shift < 0x14) {
    if (shift < 0) {
      decode_080094c0d_value = FUNC_080082d4(encoded_value, mask, DAT_080095a8, DAT_080095ac, param_4);
      bool end_of_string_reached = is_end_of_string_reached_08008b60((int)decode_080094c0d_value, (int)((ulonglong)decode_080094c0d_value >> 0x20), 0, 0);
      decode_080094c0d_value = CONCAT44(mask, encoded_value);
      if (end_of_string_reached) {
        if ((int)mask < 0) {
          if ((encoded_value | mask & 0x7fffffff) != 0) {
            mask = DAT_080095b4;
          }
          decode_080094c0d_value = (ulonglong)mask << 0x20;
        }
        else {
          decode_080094c0d_value = 0;
        }
      }
    }
    else {
      value_mask = DAT_080095b0 >> (shift & 0xff);
      decode_080094c0d_value = CONCAT44(mask, encoded_value);
      if ((encoded_value & value_mask | mask) != 0) {
        decode_080094c0d_value = FUNC_080082d4(encoded_value, mask, DAT_080095a8, DAT_080095ac, param_4);
        bool end_of_string_reached = is_end_of_string_reached_08008b60((int)decode_080094c0d_value, (int)((ulonglong)decode_080094c0d_value >> 0x20), 0, 0);
        decode_080094c0d_value = CONCAT44(mask, encoded_value);
        if (end_of_string_reached) {
          if ((int)mask < 0) {
            mask = mask + (0x100000 >> (shift & 0xff));
          }
          decode_080094c0d_value = (ulonglong)(mask & ~value_mask) << 0x20;
        }
      }
    }
  }
  else if (shift < 0x34) {
    value_mask = 0xffffffff >> (shift - 0x413 & 0xff);
    decode_080094c0d_value = CONCAT44(mask, encoded_value);
    if ((value_mask & encoded_value) != 0) {
      decode_080094c0d_value = FUNC_080082d4(encoded_value, mask, DAT_080095a8, DAT_080095ac, param_4);
      bool end_of_string_reached = is_end_of_string_reached_08008b60((int)decode_080094c0d_value, (int)((ulonglong)decode_080094c0d_value >> 0x20), 0, 0);
      decode_080094c0d_value = CONCAT44(mask, encoded_value);
      if (end_of_string_reached) {
        if ((int)mask < 0) {
          if (shift == 0x14) {
            mask = mask + 1;
          }
          else {
            uint carry = 1 << (0x34 - shift & 0xff);
            bool carry_occurred = CARRY4(carry, encoded_value);
            encoded_value = carry + encoded_value;
            if (carry_occurred) {
              mask = mask + 1;
            }
          }
        }
        decode_080094c0d_value = CONCAT44(mask, encoded_value & ~value_mask);
      }
    }
  }
  else {
    decode_080094c0d_value = CONCAT44(mask, encoded_value);
    if (shift == 0x400) {
      decode_080094c0d_value = FUNC_080082d4();
    }
  }
  return decode_080094c0d_value;
}
// FUN_08008eec 0x08008eec

uint FUNC_08008eec(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
      goto LAB_0800903c;
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
LAB_0800903c:
  return uVar2 & 0x80000000 | 0x7f800000;
}


// FUN_08006b54 0x08006b54
byte extractNibble_08006b54(byte inputByte)
{
  byte outputByte;
  if ((char)inputByte < '\0') {
    outputByte = *(byte *)((inputByte & 0xf) + DAT_08006b98 + 0x14);
  }
  else {
    outputByte = *(byte *)((char)inputByte + DAT_08006b9c + 0x300);
  }
  return outputByte >> 4;
}
// FUN_08007e84 0x08007e84
uint getByteFromGlobal_08007e84()
{
  uint* targetAddress = DAT_08007ea0 + 4;
  uint value = *targetAddress;
  return value & 0xff;
}
// FUN_080057e4 0x080057e4
void clear_globals_and_check_status_080057e4(void)
{
  clearBitsInGlobals_08007bc2();
  if ((PTR_DAT_0800580c[0x3c] != -1) || ((PTR_DAT_0800580c[2] & 0x20) != 0)) {
    do_nothing();
  }
  return;
}
// FUN_08006d8a 0x08006d8a
int get_data_value_08006d8a(void)
{
  int data_value;
  data_value = get_data_value_08006d8a_08006998();
  return data_value;
}
// FUN_0800b2e8 0x0800b2e8
uint calculate_0800b2e8(uint num1, uint num2, int count, undefined4 param_4)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uVar4 = CONCAT44(num2, num1);
  uint firstBit = (num2 << 1) >> 0x15;
  if (firstBit == 0) {
    if ((num1 | num2 & 0x7fffffff) == 0) {
      return num1;
    }
    uVar4 = FUNC_08008640(num1, num2, 0, DAT_0800b3c8);
    if (count < DAT_0800b3cc) goto LAB_0800b34a;
    firstBit = ((uint)((int)(uVar4 >> 0x20) << 1) >> 0x15) - 0x36;
  }
  else if (firstBit == 0x7ff) {
    uVar1 = FUNC_080082d4(num1, num2, num1, num2, param_4);
    return uVar1;
  }
  uVar3 = (uint)(uVar4 >> 0x20);
  iVar2 = firstBit + count;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return (uint)uVar4;
    }
    if (iVar2 + 0x35 < 0 == SCARRY4(iVar2,0x35)) {
      uVar1 = FUNC_08008640((uint)uVar4,uVar3 & 0x800fffff | (iVar2 + 0x36) * 0x100000,0,DAT_0800b3d8);
      return uVar1;
    }
    if (count < 0xc351) {
      uVar4 = uVar4 & 0x8000000000000000 | (ulonglong)DAT_0800b3d0 | 0x1a56e1f00000000;
LAB_0800b34a:
      uVar1 = FUNC_08008640((int)uVar4,(int)(uVar4 >> 0x20),DAT_0800b3b8,DAT_0800b3bc);
      return uVar1;
    }
  }
  uVar1 = FUNC_08008640(DAT_0800b3d4,uVar3 & 0x80000000 | 0x7e37e43c,DAT_0800b3c0,DAT_0800b3c4);
  return uVar1;
}
// FUN_08005220 0x08005220
void doNothing_08005220()
{
  // This function does nothing
  return;
}
// FUN_08007520 0x08007520
void set_bit_in_short_array_if_odd_08007520(uint input) {
  if ((input & 1) != 0) {
    setBitInShortArray_080073d4(0x3e);
  }
  return;
}
// FUN_08007884 0x08007884
uint get_bits_08007884(void)
{
  int bit_0 = get_bit_at_index(0);
  int bit_1 = get_bit_at_index(0x36);
  int bit_2 = get_bit_at_index(0x37);
  int bit_3 = get_bit_at_index(0x38);
  int bit_4 = get_bit_at_index(0x39);
  int bit_5 = get_bit_at_index(0xf);
  uint result = bit_0 | bit_1 << 4 | bit_2 << 3 | bit_3 << 2 | bit_4 << 1 | bit_5 << 7;
  return result;
}
// FUN_08004250 0x08004250

void FUNC_08004250(void)

{
  undefined4 uVar1;
  
  send_string_to_device_080036c6(PTR_DAT_08004470);
  print_float_08003826(*(undefined4 *)PTR_DAT_08004474);
  send_string_to_device_080036c6(PTR_s___x__step_mm___1__08004478);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 4));
  send_string_to_device_080036c6(PTR_s___y__step_mm___2__0800447c);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 8));
  send_string_to_device_080036c6(PTR_s___z__step_mm___3__08004480);
  print_abs_value_080037fc(PTR_DAT_08004474[0xd]);
  send_string_to_device_080036c6(PTR_s___step_pulse__usec___4__08004484);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x10));
  send_string_to_device_080036c6(PTR_s___default_feed__mm_min___5__08004488);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x14));
  send_string_to_device_080036c6(PTR_s___default_seek__mm_min___6__0800448c);
  print_abs_value_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x18));
  send_string_to_device_080036c6(PTR_s___step_port_invert_mask__int__08004490);
  print_binary_representation_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x18));
  send_string_to_device_080036c6(PTR_s____7__08004494);
  print_abs_value_080037fc(PTR_DAT_08004474[0x3c]);
  send_string_to_device_080036c6(PTR_s___step_idle_delay__msec___8__08004498);
  uVar1 = FUNC_08009054(*(undefined4 *)(PTR_DAT_08004474 + 0x20),DAT_0800449c);
  print_float_08003826(uVar1);
  send_string_to_device_080036c6(PTR_s___acceleration__mm_sec_2___9__080044a0);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x24));
  send_string_to_device_080036c6(PTR_s___junction_deviation__mm___10__080044a4);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x1c));
  send_string_to_device_080036c6(PTR_s___arc__mm_segment___11__080044a8);
  print_abs_value_080037fc(PTR_DAT_08004474[0x3e]);
  send_string_to_device_080036c6(PTR_s___n_arc_correction__int___12__080044ac);
  print_abs_value_080037fc(PTR_DAT_08004474[0x3d]);
  send_string_to_device_080036c6(PTR_s___n_decimals__int___13__080044b0);
  print_abs_value_080037fc((PTR_DAT_08004474[0x28] & 1) != 0);
  send_string_to_device_080036c6(PTR_s___report_inches__bool___14__080044b4);
  print_abs_value_080037fc((PTR_DAT_08004474[0x28] & 2) != 0);
  send_string_to_device_080036c6(PTR_s___auto_start__bool___15__080044b8);
  print_abs_value_080037fc((PTR_DAT_08004474[0x28] & 4) != 0);
  send_string_to_device_080036c6(PTR_s___invert_step_enable__bool___16__080044bc);
  print_abs_value_080037fc((PTR_DAT_08004474[0x28] & 8) != 0);
  send_string_to_device_080036c6(PTR_s___hard_limits__bool___17__080044c0);
  print_abs_value_080037fc((PTR_DAT_08004474[0x28] & 0x10) != 0);
  send_string_to_device_080036c6(PTR_s___homing_cycle__bool___18__080044c4);
  print_abs_value_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x2a));
  send_string_to_device_080036c6(PTR_s___homing_dir_invert_mask__int__080044c8);
  print_binary_representation_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x2a));
  send_string_to_device_080036c6(PTR_s____19__080044cc);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x2c));
  send_string_to_device_080036c6(PTR_s___homing_feed__mm_min___20__080044d0);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x30));
  send_string_to_device_080036c6(PTR_s___homing_seek__mm_min___21__080044d4);
  print_abs_value_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x34));
  send_string_to_device_080036c6(PTR_s___homing_debounce__msec___22__080044d8);
  print_float_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x38));
  send_string_to_device_080036c6(PTR_s___homing_pull_off__mm___23__080044dc);
  print_abs_value_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x1a));
  send_string_to_device_080036c6(PTR_s___dir_port_invert_mask__int__080044e0);
  print_binary_representation_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x1a));
  send_string_to_device_080036c6(PTR_DAT_080044e4);
  return;
}


// FUN_08006dc4 0x08006dc4
void set_bit_in_extended_array_08006dc4(char character) {
  setBitInExtendedArray_08006a58((int)character);
  return;
}
// FUN_08007402 0x08007402
void setBitInMemory_08007402(uint bitIndex)
{
  uint byteIndex = (int)bitIndex >> 4;
  uint* targetAddress = byteIndex * 0x400 + 0x40020018;
  uint bitMask = 1 << (bitIndex & 0xf);
  short* targetShortAddress = (short*)(targetAddress);
  *targetShortAddress = (short)bitMask;
  return;
}
// FUN_08002870 0x08002870
char incrementChar_08002870(char inputChar)
{
  char outputChar = inputChar + 1;
  if (outputChar == '\x12') {
    outputChar = '\0';
  }
  return outputChar;
}
// FUN_08000210 0x08000210
void perform_tasks_08000210(void)
{
  doNothing_080001ec();
  do_nothing_080001d4();
  return;
}
// FUN_08005900 0x08005900
int process_byte_08005900(byte input_byte) {
  if (input_byte == 0x7e) {
    PTR_DAT_08005978[2] |= 2;
    return 1;
  }
  if (input_byte < 0x7f) {
    if (input_byte == 0x3f) {
      PTR_DAT_08005978[2] |= 1;
      return 1;
    }
    if (input_byte < 0x40) {
      if (input_byte == 0x18) {
        enable_task_execution_if_not_already_enabled();
        return 1;
      }
      if (input_byte == 0x21) {
        PTR_DAT_08005978[2] |= 8;
        return 1;
      }
    }
  }
  return 0;
}
// FUN_08002638 0x08002638
uint32_t parse_integer_from_string_08002638(int32_t string_start, uint8_t *string_ptr, uint32_t *result_ptr)
{
  uint8_t current_char;
  bool is_negative = false;
  int32_t integer_start = string_start + (uint32_t)*string_ptr;
  char *integer_ptr = (char *)integer_start + 1;
  char *next_ptr = integer_ptr;
  char *end_ptr = NULL;
  uint32_t integer_value = 0;
  uint32_t digit_count = 0;
  int32_t exponent_value = 0;
  bool has_exponent = false;
  bool has_decimal = false;
  bool is_valid = true;
  current_char = *integer_ptr;
  if (current_char == '-') {
    is_negative = true;
    current_char = *++next_ptr;
  }
  else if (current_char == '+') {
    current_char = *++next_ptr;
  }
  while (current_char != '\0' && is_valid) {
    if (isdigit(current_char)) {
      digit_count++;
      if (digit_count < 9) {
        integer_value = (uint32_t)(current_char - '0') + integer_value * 10;
      }
      else if (has_decimal || has_exponent) {
        end_ptr = next_ptr;
      }
      else {
        exponent_value++;
      }
    }
    else if (current_char == '.') {
      if (has_decimal || has_exponent) {
        is_valid = false;
      }
      else {
        has_decimal = true;
      }
    }
    else if (current_char == 'e' || current_char == 'E') {
      if (has_exponent || digit_count == 0) {
        is_valid = false;
      }
      else {
        has_exponent = true;
        exponent_value = 0;
      }
    }
    else if (current_char == '-' || current_char == '+') {
      if (*(next_ptr - 1) != 'e' && *(next_ptr - 1) != 'E') {
        is_valid = false;
      }
    }
    else {
      is_valid = false;
    }
    current_char = *++next_ptr;
  }
  if (end_ptr == NULL) {
    end_ptr = next_ptr;
  }
  if (is_valid && digit_count > 0) {
    integer_value = integer_value * pow(10, exponent_value);
    if (is_negative) {
      *result_ptr = (uint32_t)(-((int32_t)integer_value));
    }
    else {
      *result_ptr = integer_value;
    }
    *string_ptr = (uint8_t)(end_ptr - (char *)string_start - 1);
    return 1;
  }
  else {
    return 0;
  }
}
// FUN_080051b4 0x080051b4
void validate_and_verify_data_080051b4() {
  int validationResult;
  undefined dataBuffer[15];
  byte dataCounter;

  validationResult = validate_data();
  if (validationResult == 0) {
    send_error_message(10);
    initialize_data(1);
    skip_processing();
  }
  for (dataCounter = 0; dataCounter < 8; dataCounter++) {
    validationResult = verify_checksum(dataCounter, dataBuffer);
    if (validationResult == 0) {
      send_error_message(10);
    }
  }
  return;
}
// FUN_080098d0 0x080098d0
undefined4 process_input_and_return_result_080098d0(undefined4 input_1, undefined4 input_2)
{
  char input_char;
  undefined4 result;
  int input_validity_check;
  undefined4 *result_ptr;
  int *input_length_ptr;
  undefined4 one = 1;
  undefined *data_ptr = PTR_DAT_0800998c;
  undefined4 input_1_copy = input_1;
  undefined4 input_2_copy = input_2;
  undefined4 input_1_copy_2 = input_1;
  undefined4 input_2_copy_2 = input_2;
  result = FUNC_0800a1bc();
  input_char = *PTR_DAT_08009988;
  if (((input_char == -1) || (input_validity_check = is_valid_input_08008b74(input_1, input_2, input_1, input_2), input_validity_check != 0)) || (input_validity_check = is_end_of_input_08008b24(input_1, input_2, 0, 0), input_validity_check == 0)) {
    return result;
  }
  if (input_char == '\0') {
    undefined8 zero = 0;
    do {
      result = zero;
      if (returnZero_0800b2e0(&one) != 0) {
        goto joined_r0x0800997a;
      }
    } while( true );
  }
  else {
    undefined8 skipped_result = FUNC_08008894(0,0,0,0);
    result = skipped_result;
    if (input_char != '\x02') {
      goto LAB_0800996c;
    }
  }
  result_ptr = (undefined4 *)getValueFromPtrPtr_0800b3dc();
  *result_ptr = 0x21;
LAB_0800996c:
  if (input_validity_check != 0) {
    input_length_ptr = (int *)getValueFromPtrPtr_0800b3dc();
    *input_length_ptr = input_validity_check;
  }
  return (undefined4)result;
}

// FUN_08005c30 0x08005c30
bool check_param_within_range_08005c30(int param)
{
  bool is_within_range;
  is_within_range = param < 0x1000000;
  if (is_within_range) {
    DAT_08005c70[1] = param - 1;
    set_data_value_at_index_08005bdc(0xffffffff,0xf);
    DAT_08005c70[2] = 0;
    *DAT_08005c70 = 7;
  }
  return !is_within_range;
}
// FUN_0800b51c 0x0800b51c
void doNothing_0800b51c()
{
  // This function does nothing
  return;
}
// FUN_0800056c 0x0800056c
float calculate_result_0800056c(float input_value)
{
  float result = input_value;
  if (PTR_DAT_080005b0[3] != '\0') {
    float skipped_value = FUNC_08008590(input_value);
    float processed_value = FUNC_08008640((int)skipped_value,(int)((ulonglong)skipped_value >> 0x20),DAT_080005a8,DAT_080005ac);
    result = calculateFloat_08008c30((int)processed_value,(int)((ulonglong)processed_value >> 0x20));
  }
  return result;
}
// FUN_08002f24 0x08002f24
void copyAndIncrementCharThenFillMemoryWithByte_08002f24(void)
{
  copyAndIncrementChar();
  fillMemoryWithByte_0800b430(PTR_DAT_08002f3c, 0, 0x1c);
  return;
}
// FUN_0800981c 0x0800981c
typedef unsigned long long u64;

typedef struct {
    u64 sign;
    u64 exp;
    u64 mant;
} double_bits;

u64 unsigned char hypot_and_classify_0800981c(double_bits *bits) {
    return bits->sign;
}

int is_valid(double_bits *bits) {
    u64 exp = bits->exp;
    return (exp != 0x7ff) && (exp != 0);
}

int is_positive(double_bits *bits) {
    return bits->sign == 0;
}

int is_nan(double_bits *bits) {
    u64 exp = bits->exp;
    u64 mant = bits->mant;
    return (exp == 0x7ff) && (mant != 0);
}

u64 make_double_bits(double d) {
    double_bits bits;
    memcpy(&bits, &d, sizeof(double));
    return *((u64*) &bits);
}

unsigned char hypot_and_classify_0800981c(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    double d1 = *(double*) &a;
    double d2 = *(double*) &c;
    double result = hypot(d1, d2);
    double_bits bits;
    u64 bits_value = make_double_bits(result);
    memcpy(&bits, &bits_value, sizeof(double_bits));
    if (is_nan(&bits)) {
        return 0x22;
    }
    if (!is_valid(&bits)) {
        return *(unsigned char*) PTR_s_hypot_080098c0;
    }
    if (!is_positive(&bits)) {
        return *(unsigned char*) PTR_s_hypot_080098c4;
    }
    return *(unsigned char*) PTR_s_hypot_080098c8;
}
// FUN_080059b4 0x080059b4
void initialize_device_080059b4(void)
{
  unsigned int* DAT_080059f4 = DAT_080059f4;
  *DAT_080059f4 |= 0x200;
  *DAT_080059f4 |= 0x400;
  *DAT_080059f4 |= 0x100;
  validate_device_speed(16000);
  set_device_mode(3);
  doNothing_08005a50();
  return;
}
// FUN_08006c04 0x08006c04
void extractBitsFromUint_08006c04(uint inputUint, uint bitStartIndex, uint bitLength, uint* outputUint1, uint* outputUint2)
{
  uint endIndex = bitStartIndex + bitLength;
  uint bitsToExtract = (1 << bitLength) - 1;
  *outputUint1 = bitsToExtract & inputUint >> bitStartIndex;
  *outputUint2 = bitsToExtract & inputUint << (32 - endIndex);
  return;
}
// FUN_08002e08 0x08002e08
void process_data_08002e08() 
\
{ 
\
  undefined4 value1; 
\
  undefined4 value2; 
\
  undefined *current_data; 
\
  undefined *previous_data; 
\
  byte current_char; 
\
  current_char = *PTR_DAT_08002ed0; 
\
  previous_data = (undefined *)0x0; 
\
  while (current_char != *PTR_DAT_08002ed8) { 
\
    current_data = PTR_DAT_08002ed4 + (uint)current_char * 0x40; 
\
    if ((previous_data != (undefined *)0x0) && ((previous_data[0x24] != '\0' || (current_data[0x24] != '\0')))) { 
\
      value1 = FUNC_08009054(*(undefined4 *)(previous_data + 0x18),*(undefined4 *)(previous_data + 0x14)); 
\
      value2 = FUNC_08009054(*(undefined4 *)(current_data + 0x18),*(undefined4 *)(previous_data + 0x14)); 
\
      calculate_values(previous_data,value1,value2); 
\
      previous_data[0x24] = 0; 
\
    } 
\
    current_char = incrementChar_08002870(current_char); 
\
    previous_data = current_data; 
\
  } 
\
  value1 = FUNC_08009054(*(undefined4 *)(previous_data + 0x18),*(undefined4 *)(previous_data + 0x14)); 
\
  value2 = FUNC_08009054(0,*(undefined4 *)(previous_data + 0x14)); 
\
  calculate_values(previous_data,value1,value2); 
\
  previous_data[0x24] = 0; 
\
  return; 
\
}
// FUN_08006680 0x08006680
uint calculate_shifted_data_08006680(void)
{
  uint shifted_DAT_080066c4 = calculate_DAT_080066c4_and_shift_right();
  uint leading_zeroes_count = count_leading_zeroes(0x380000);
  uint shifted_amount = (*(uint *)(PTR_DAT_080066c8 + 8) & 0x1c00) >> (leading_zeroes_count & 0xff);
  return shifted_DAT_080066c4 >> shifted_amount;
}
// FUN_08000340 0x08000340
void set_memory_value_08000340(uint index, undefined value)
{
  if (*PTR_DAT_0800036c == 0) {
    initialize_memory();
  }
  PTR_DAT_08000370[index & 0x3ff] = value;
  return;
}
// thunk_FUN_08009990 0x08009818
uint calculate_thunk_08009990(uint param1, uint param2, uint param3, uint param4)
{
  int temp1;
  uint temp2;
  uint temp3;
  uint temp4;
  uint temp5;
  uint temp6;
  uint result;

  temp6 = CONCAT44(DAT_08009b04, DAT_08009b00);
  temp4 = param4 & 0x7fffffff;
  if ((DAT_08009b18 < (temp4 | (-param3 | param3) >> 0x1f)) || (temp5 = param2 & 0x7fffffff, DAT_08009b18 < (temp5 | (-param1 | param1) >> 0x1f)))
  {
    result = FUNC_080082d4(param3, param4, param1, param2);
  }
  else
  {
    if ((param4 + 0xc0100000 | param3) == 0)
    {
      result = FUNC_0800af78();
      return result;
    }
    temp3 = (int)param4 >> 0x1e & 2U | param2 >> 0x1f;
    if ((temp5 | param1) == 0)
    {
      temp4 = DAT_08009af0;
      if ((temp3 != 2) && (temp4 = param1, temp3 == 3))
      {
        temp4 = DAT_08009af8;
      }
    }
    else
    {
      if ((temp4 | param3) != 0)
      {
        if (temp4 == DAT_08009b18)
        {
          temp3 = temp3 - 1;
          if (temp5 == temp4)
          {
            if (2 < temp3)
            {
              return DAT_08009b10;
            }
            return *(uint *)(PTR_DAT_08009b20 + temp3 * 8);
          }
          if (temp3 < 3)
          {
            return *(uint *)(PTR_DAT_08009b1c + temp3 * 8);
          }
          return 0;
        }
        if (temp5 != DAT_08009b18)
        {
          temp1 = (int)(temp5 - temp4) >> 0x14;
          if ((int)(temp5 - temp4) < 0x3d00000)
          {
            if (((int)param4 < 0) && (temp1 + 0x3c < 0 != SCARRY4(temp1, 0x3c)))
            {
              temp6 = 0;
            }
            else
            {
              FUNC_08008894(param1, param2, param3, param4, param4);
              doNothing_0800b2cc();
              temp6 = FUNC_0800af78();
            }
          }
          temp2 = (uint)temp6;
          temp4 = (uint)((ulonglong)temp6 >> 0x20);
          if (temp3 == 1)
          {
            return temp2;
          }
          if (temp3 == 2)
          {
            temp6 = FUNC_080082d0(temp2, temp4, DAT_08009ae8, DAT_08009aec);
            temp2 = FUNC_080082d0(DAT_08009af0, DAT_08009af4, (int)temp6, (int)((ulonglong)temp6 >> 0x20));
            return temp2;
          }
          if (temp3 == 0)
          {
            return temp2;
          }
          temp6 = FUNC_080082d0(temp2, temp4, DAT_08009ae8, DAT_08009aec);
          temp2 = FUNC_080082d0((int)temp6, (int)((ulonglong)temp6 >> 0x20), DAT_08009af0, DAT_08009af4);
          return temp2;
        }
      }
      temp4 = DAT_08009b08;
      if (-1 < (int)param2)
      {
        temp4 = DAT_08009b00;
      }
    }
  }
  return temp4;
}
// FUN_08004bf4 0x08004bf4
void set_memory_with_checksum_08004bf4(ushort address_offset, uint32_t data, size_t data_size) {
    ushort address = address_offset + 0x200;
    set_memory_with_checksum_08004bf4_08000374(address, data, data_size);
    return;
}
// FUN_08004d7c 0x08004d7c
bool verify_checksum_08004d7c(byte message_length, undefined4 message_address)
{
  int checksum = calculate_checksum(message_address, (ushort)message_length * 0xd + 0x200, 0xc);
  if (checksum == 0) {
    fillMemoryWithByte_0800b430(message_address, 0xc);
    set_checksum(message_length, message_address);
  }
  return checksum != 0;
}
// FUN_08009278 0x08009278
uint convertFloatToInteger_08009278(uint floatBits)
{
  uint exponent = (floatBits << 1) >> 0x18;
  uint exponentDifference = 0x9e - exponent;
  if (exponent < 0x9f && exponentDifference != 0) {
    uint shiftedValue = (floatBits << 8 | 0x80000000) >> (exponentDifference & 0xff);
    if ((floatBits & 0x80000000) != 0) {
      shiftedValue = -shiftedValue;
    }
    return shiftedValue;
  }
  else if (exponentDifference == 0xffffff9f && (floatBits & 0x7fffff) != 0) {
    return 0;
  }
  else {
    uint signBit = floatBits & 0x80000000;
    if (signBit == 0) {
      return 0x7fffffff;
    }
    else {
      return signBit;
    }
  }
}
// FUN_080004fc 0x080004fc
void calculate_and_store_twos_complement_080004fc(int num1, int num2, int num3) {
  int twos_comp_num1 = calculateTwosComplement_08008e44(num1);
  int twos_comp_num2 = calculateTwosComplement_08008e44(num2);
  int twos_comp_num3 = calculateTwosComplement_08008e44(num3);
  *(int *)(PTR_DAT_08000568 + 0xc) = FUNC_08009054(twos_comp_num1,*(int *)PTR_DAT_08000564);
  *(int *)(PTR_DAT_08000568 + 0x10) = FUNC_08009054(twos_comp_num2,*(int *)(PTR_DAT_08000564 + 4));
  *(int *)(PTR_DAT_08000568 + 0x14) = FUNC_08009054(twos_comp_num3,*(int *)(PTR_DAT_08000564 + 8));
  return;
}
// FUN_08000220 0x08000220
void update_status_08000220(char new_status) {
  if (new_status != *PTR_DAT_08000264) {
    display_alarm_until_condition_met();
    if (new_status == '\x01') {
      do_nothing_080001c8();
    }
    else if (new_status == '\x02') {
      doNothing_080001e0();
    }
    else {
      perform_tasks();
    }
    *PTR_DAT_08000264 = new_status;
  }
  return;
}
// FUN_08005238 0x08005238
void initialize_pointer_to_zero_08005238(void)
{
  *PTR_DAT_0800524c = 0;
  do_nothing_and_return();
  return;
}
// FUN_08007da8 0x08007da8
void setFlagsInMemory_08007da8()
{
  uint* targetAddress1 = DAT_08007dd4;
  uint* targetAddress2 = DAT_08007dd4;
  targetAddress1[8] = targetAddress1[8] | 0x10;
  *targetAddress2 = *targetAddress2 | 1;
  return;
}
// FUN_08004148 0x08004148
void displayAlarmMessage_08004148(char alarmType){
  sendStringToDevice(PTR_s_ALARM__08004190);
  if (alarmType == ABORT_CYCLE) {
    sendStringToDevice(PTR_s_Abort_during_cycle_08004198);
  }
  else if (alarmType == HARD_LIMIT) {
    sendStringToDevice(PTR_s_Hard_limit_08004194);
  }
  sendStringToDevice(PTR_s___MPos__0800419c);
  doNothing_08002814(500);
  return;
}
// FUN_08004940 0x08004940
void printCurrentAndWorkPosition_08004940(void)
{
  float currentPos[3];
  float workPos[3];
  uint8_t i;
  currentPos[0] = *(float *)(PTR_DAT_08004b88 + 4);
  currentPos[1] = *(float *)(PTR_DAT_08004b88 + 8);
  currentPos[2] = *(float *)(PTR_DAT_08004b88 + 0xc);
  if ((byte)PTR_DAT_08004b88[1] < 8) {
    (*(code *)(&switchD_0800495e::switchdataD_08004964)[(byte)PTR_DAT_08004b88[1]])();
    return;
  }
  send_string_to_device_080036c6(PTR_s__MPos__08004ba8);
  for (i = 0; i < 3; i++) {
    currentPos[i] = calculateTwosComplement(currentPos[i]);
    currentPos[i] = FUNC_08009054(currentPos[i],*(float *)(PTR_DAT_08004bac + i * 4));
    if ((PTR_DAT_08004bac[0x28] & 1) != 0) {
      currentPos[i] = calculateFloat(FUNC_08008640(currentPos[i],DAT_08004b80,DAT_08004b84));
    }
    print_float_08003826(currentPos[i]);
    send_string_to_device_080036c6(PTR_DAT_08004bb0);
  }
  send_string_to_device_080036c6(PTR_s_WPos__08004bb4);
  for (i = 0; i < 3; i++) {
    if ((PTR_DAT_08004bac[0x28] & 1) == 0) {
      workPos[i] = FUNC_08008cd8(currentPos[i],FUNC_08008cdc(*(float *)(PTR_DAT_08004bb8 + (i + 8) * 4),*(float *)(PTR_DAT_08004bb8 + (i + 10) * 4 + 4)));
    }
    else {
      workPos[i] = FUNC_08008cdc(*(float *)(PTR_DAT_08004bb8 + (i + 8) * 4),*(float *)(PTR_DAT_08004bb8 + (i + 10) * 4 + 4));
      workPos[i] = calculateFloat(FUNC_08008640(FUNC_080082d0(currentPos[i],FUNC_08008590(workPos[i]),DAT_08004b80,DAT_08004b84)));
    }
    print_float_08003826(workPos[i]);
    if (i < 2) {
      send_string_to_device_080036c6(PTR_DAT_08004bb0);
    }
  }
  send_string_to_device_080036c6(PTR_DAT_08004bbc);
  return;
}
// FUN_08008a74 0x08008a74
uint compareUintValues_08008a74(uint value1, uint value2, uint value3, uint value4)
{
  bool valuesAreInvalid = ((int)(value2 << 1) >> 0x15 == -1 || (int)(value4 << 1) >> 0x15 == -1) && ((((int)(value2 << 1) >> 0x15 == -1 && ((value1 | value2 << 0xc) != 0)) || (((int)(value4 << 1) >> 0x15 == -1 && ((value3 | value4 << 0xc) != 0)))));
  if (valuesAreInvalid) {
    return 1;
  }
  bool valuesAreEqual = value1 == value3 && value2 == value4;
  if (valuesAreEqual) {
    return 0;
  }
  uint xorValue = value2 ^ value4;
  bool valuesAreComparable = -1 < (int)xorValue;
  if (valuesAreComparable) {
    valuesAreComparable = value4 <= value2;
  }
  if (valuesAreEqual || !valuesAreComparable) {
    return 1;
  }
  uint signBit = (int)value4 >> 0x1f;
  if (valuesAreComparable) {
    if (value3 <= value1) {
      signBit = ~signBit;
    }
    return signBit | 1;
  }
}
// FUN_08002fd4 0x08002fd4
void display_alarm_until_condition_met_08002fd4() {
  int pointer_value;

  while ((pointer_value = getPointer_08002f74(), pointer_value != 0 || (PTR_DAT_08003000[1] == '\x03'))) {
    display_alarm_if_needed();
    if (*PTR_DAT_08003000 != '\0') {
      return;
    }
  }
  return;
}
// FUN_08002408 0x08002408
void display_alarm_until_condition_met_08002fd4_08002408(int param) {
  
  undefined4 initial_value = FUNC_08008eec(param,DAT_080024b8);
  undefined8 decoded_value = FUNC_08008590(initial_value);
  decoded_value = decode_080094c0((int)decoded_value,(int)((ulonglong)decoded_value >> 0x20));
  ushort calculated_value = calculate_value_08008bf0((int)decoded_value,(int)((ulonglong)decoded_value >> 0x20));
  
  display_alarm_until_condition_met_08002fd4_08002408();
  
  undefined4 twos_complement = calculateTwosComplement_08008e44((uint)calculated_value * 0x32);
  undefined4 updated_value = FUNC_08008cd8(initial_value,twos_complement);
  decoded_value = FUNC_08008590(updated_value);
  decoded_value = decode_080094c0((int)decoded_value,(int)((ulonglong)decoded_value >> 0x20));
  ushort new_calculated_value = calculate_value_08008bf0((int)decoded_value,(int)((ulonglong)decoded_value >> 0x20));
  
  doNothing_08002814(new_calculated_value);
  
  while ((calculated_value != 0 && (display_alarm_if_needed_08003a74(), *PTR_DAT_080024c0 == '\0'))) {
    wait_for_value_to_be_greater_than_sum_of_value_and_parameter_080002a0(0x32);
    calculated_value = calculated_value - 1;
  }
  return;
}
// FUN_08002a94 0x08002a94
void process_input_and_calculate_result_08002a94() {
  undefined *current_char_ptr;
  undefined *previous_char_ptr;
  undefined *current_data_ptr;
  undefined *previous_data_ptr;
  byte current_char_value;
  
  current_char_value = *PTR_DAT_08002af0;
  current_data_ptr = (undefined *)0x0;
  previous_data_ptr = (undefined *)0x0;
  while (current_char_value != *PTR_DAT_08002af8) {
    current_char_value = adjust_char_value_08002896(current_char_value);
    previous_char_ptr = previous_data_ptr;
    current_data_ptr = PTR_DAT_08002af4 + (uint)current_char_value * 0x40;
    processInputAndCalculateResult_080029d8(current_data_ptr,previous_data_ptr,previous_char_ptr);
    previous_data_ptr = current_data_ptr;
  }
  return;
}
// FUN_08003618 0x08003618
void update_data_at_index_08003618(uint32_t index)
{
  uint8_t data_index = *PTR_DAT_08003694;
  uint32_t current_data = *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x20);
  uint32_t twos_complement = calculate_twos_complement(input);
  twos_complement = apply_skipped_operation(current_data, twos_complement);
  uint32_t current_input = *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x10);
  twos_complement = apply_skipped_operation(twos_complement, calculate_twos_complement(current_input));
  *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x20) = twos_complement;
  *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x10) = input;
  *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x18) = 0;
  *(uint32_t *)(PTR_DAT_08003698 + (uint)data_index * 0x40 + 0x1c) = 0;
  PTR_DAT_08003698[(uint)data_index * 0x40 + 0x25] = 0;
  PTR_DAT_08003698[(uint)data_index * 0x40 + 0x24] = 1;
  process_data();
}

// FUN_0800522c 0x0800522c
void doNothing_0800522c()
{
  // This function does nothing
  return;
}
// FUN_0800af78 0x0800af78

int FUNC_0800af78(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_2c;
  
  uVar9 = CONCAT44(param_2,param_1);
  uVar8 = param_2 & 0x7fffffff;
  if (DAT_0800b298 < (int)uVar8) {
    if ((uVar8 != DAT_0800b29c && (int)DAT_0800b29c <= (int)uVar8) ||
       ((iVar2 = DAT_0800b2a8, uVar8 == DAT_0800b29c && (param_1 != 0)))) {
      iVar2 = FUNC_080082d4(param_1,param_2,param_1);
      return iVar2;
    }
  }
  else {
    if (DAT_0800b2ac < (int)uVar8) {
      uVar9 = doNothing_0800b2cc();
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar3 = (undefined4)uVar9;
      if (DAT_0800b2bc < (int)uVar8) {
        if ((int)uVar8 < DAT_0800b2c0) {
          uVar9 = FUNC_080082d0(uVar3,uVar6,0,DAT_0800b2c4);
          uVar10 = FUNC_08008640(uVar3,uVar6,0,DAT_0800b2c4);
          uVar10 = FUNC_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_0800b2b8);
          uVar9 = FUNC_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                               (int)((ulonglong)uVar10 >> 0x20));
          iVar2 = 2;
        }
        else {
          uVar9 = FUNC_08008894(0,DAT_0800b2c8,uVar3,uVar6);
          iVar2 = 3;
        }
      }
      else if (DAT_0800b2bc + -0xd0000 < (int)uVar8) {
        uVar9 = FUNC_080082d0(uVar3,uVar6,0,DAT_0800b2b8);
        uVar10 = FUNC_080082d4(uVar3,uVar6,0,DAT_0800b2b8);
        uVar9 = FUNC_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
        iVar2 = 1;
      }
      else {
        uVar9 = FUNC_080082d4(uVar3,uVar6,uVar3,uVar6);
        uVar9 = FUNC_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_0800b2b8);
        uVar10 = FUNC_080082d4(uVar3,uVar6,0,0x40000000);
        uVar9 = FUNC_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
        iVar2 = 0;
      }
    }
    else {
      if ((int)uVar8 <= DAT_0800b2ac + -0x1bc0000) {
        uVar10 = FUNC_080082d4(param_1,param_2,DAT_0800b290,DAT_0800b294);
        iVar2 = is_end_of_string_reached_08008b60((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_0800b2b8);
        if (iVar2 != 0) {
          return param_1;
        }
      }
      iVar2 = -1;
    }
    local_2c = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar7 = (undefined4)uVar9;
    uVar9 = FUNC_08008640(uVar7,local_2c,uVar7);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar3 = (undefined4)uVar9;
    uVar9 = FUNC_08008640(uVar3,uVar4,uVar3,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = (undefined4)uVar9;
    uVar9 = FUNC_08008640(uVar6,uVar5,DAT_0800b238,DAT_0800b23c);
    uVar9 = FUNC_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b240,DAT_0800b244);
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUNC_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b248,DAT_0800b24c);
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUNC_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b250,DAT_0800b254);
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUNC_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b258,DAT_0800b25c);
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUNC_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b260,DAT_0800b264);
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = FUNC_08008640(uVar6,uVar5,DAT_0800b268,DAT_0800b26c);
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b270,DAT_0800b274);
    uVar10 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b278,DAT_0800b27c);
    uVar10 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b280,DAT_0800b284);
    uVar10 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b288,DAT_0800b28c);
    uVar10 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar2 == -1) {
      uVar9 = FUNC_080082d4((int)uVar9,uVar3,(int)uVar10,uVar6);
      uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
      iVar2 = FUNC_080082d0(uVar7,local_2c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      return iVar2;
    }
    uVar9 = FUNC_080082d4((int)uVar9,uVar3,(int)uVar10,uVar6);
    puVar1 = PTR_DAT_0800b2b0;
    uVar9 = FUNC_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
    uVar9 = FUNC_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                         *(undefined4 *)(PTR_DAT_0800b2b4 + iVar2 * 8),
                         *(undefined4 *)((int)(PTR_DAT_0800b2b4 + iVar2 * 8) + 4));
    uVar9 = FUNC_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
    iVar2 = FUNC_080082d0(*(undefined4 *)(puVar1 + iVar2 * 8),
                         *(undefined4 *)((int)(puVar1 + iVar2 * 8) + 4),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    if ((int)param_2 < 0) {
      return iVar2;
    }
  }
  return iVar2;
}


// FUN_08007d08 0x08007d08
void initialize_flags_08007d08()
{
  uint32_t *flags = DAT_08007d9c;
  set_flag(flags);
  flags[0] = 0x80;
  flags[1] = 0;
  flags[2] = 0;
  flags[3] = 0;
  flags[4] = 0;
  flags[5] = 1;
  flags[6] = 0x6800;
  flags[7] = 0;
  flags[8] = 0;
  flags[9] = 0;
  flags[10] = (uint32_t)((uint64_t)DAT_08007da4 * (uint64_t)*(uint32_t *)PTR_DAT_08007da0 >> 0x35) - 1;
  flags[11] = 199;
  flags[12] = 0;
  flags[13] = 100;
  flags[14] = 0;
  flags[15] = 0;
  flags[17] = 0;
}
// FUN_080091fc 0x080091fc
void calculate_and_concatenate_results_080091fc(undefined4 num1, undefined4 num2)
{
  calculateResultAndReturnConcatenation_08009204_08009204(num2, num1);
  return;
}
// FUN_080058a0 0x080058a0
void update_or_reset_data_080058a0() {
  int* data_ptr = *(int**)PTR_DAT_080058f0;
  if (*data_ptr == 0) {
    PTR_DAT_080058f4[1] = 0;
  }
  else {
    int index_difference = *(int*)(data_ptr + 4) - *(int*)(PTR_DAT_080058f4 + 4);
    update_data_at_index(index_difference);
    *(int*)(PTR_DAT_080058f4 + 28) = 0;
    calculate_and_update_value(*(int*)(PTR_DAT_080058f4 + 28));
    *(int*)(PTR_DAT_080058f4 + 24) = DAT_080058f8;
    *(int*)(PTR_DAT_080058f4 + 16) = 0;
    PTR_DAT_080058f4[1] = 2;
  }
  return;
}
// FUN_080036c6 0x080036c6
void send_string_to_device_080036c6(char *string_to_send)
{
  char *current_char = string_to_send;
  while (*current_char != '\0') {
    send_byte_to_device(*current_char);
    current_char++;
  }
  return;
}
// FUN_08008190 0x08008190
void initialize_data_08008190()
{
  uint *data_pointer;
  data_pointer = DAT_08008240;
  set_flag_08007ea4(DAT_08008240);
  data_pointer[3] &= 0xffffdfff;
  data_pointer[3] &= 0xffff400c | 0xc;
  data_pointer[4] &= 0xffff8090;
  data_pointer[5] &= 0xfffff000;
  *data_pointer &= 0xfffffc00;
  calculate_shifted_data_08007f54(data_pointer,0x1c200);
  data_pointer[6] = data_pointer[6];
  data_pointer[3] |= 0x2000;
  return;
}
// FUN_080074c8 0x080074c8
void enable_tasks_080074c8(uint task_flags)
{
  if ((task_flags & 1) != 0) {
    set_bit_in_memory(0x3e);
  }
  if ((*(int *)PTR_DAT_08007518 != 0) && ((task_flags & 0x1e) != 0)) {
    enable_task_if_not_enabled();
  }
  if ((*(int *)PTR_DAT_0800751c != 0) && ((task_flags & 0x80) != 0)) {
    enable_task_execution_if_not_already_enabled(task_flags);
  }
  return;
}
// FUN_0800b430 0x0800b430
void fillMemoryWithByte_0800b430(uint32_t* memoryAddress, uint8_t byteValue, uint32_t memorySize)
{
  uint32_t* currentAddress = memoryAddress;
  uint32_t* endAddress = memoryAddress + (memorySize / 4);
  uint32_t remainingBytes = memorySize % 4;
  uint32_t wordValue = (byteValue << 24) | (byteValue << 16) | (byteValue << 8) | byteValue;
  while (currentAddress < endAddress) {
    *currentAddress++ = wordValue;
  }
  uint8_t* remainingByteAddress = (uint8_t*)currentAddress;
  while (remainingBytes-- > 0) {
    *remainingByteAddress++ = byteValue;
  }
  return;
}
// FUN_08004030 0x08004030
void send_error_message_08004030(char error_code) {
  if (error_code == '\0') {
    send_string_to_device(PTR_DAT_08004108);
  }
  else {
    send_string_to_device(PTR_s_error__0800410c);
    switch(error_code) {
      case '\x01':
        send_string_to_device(PTR_s_Bad_number_format_08004110);
        break;
      case '\x02':
        send_string_to_device(PTR_s_Expected_command_letter_08004114);
        break;
      case '\x03':
        send_string_to_device(PTR_s_Unsupported_statement_08004118);
        break;
      case '\x04':
        send_string_to_device(PTR_s_Invalid_radius_0800411c);
        break;
      case '\x05':
        send_string_to_device(PTR_s_Modal_group_violation_08004120);
        break;
      case '\x06':
        send_string_to_device(PTR_s_Invalid_statement_08004124);
        break;
      case '\a':
        send_string_to_device(PTR_s_Setting_disabled_08004128);
        break;
      case '\b':
        send_string_to_device(PTR_s_Value___0_0_0800412c);
        break;
      case '\t':
        send_string_to_device(PTR_s_Value___3_usec_08004130);
        break;
      case '
':
        send_string_to_device(PTR_s_EEPROM_read_fail__Using_defaults_08004134);
        break;
      case '\v':
        send_string_to_device(PTR_s_Busy_or_queued_08004138);
        break;
      case '\f':
        send_string_to_device(PTR_s_Alarm_lock_0800413c);
        break;
      case '\r':
        send_string_to_device(PTR_s_Line_overflow_08004140);
    }
    send_string_to_device(PTR_DAT_08004144);
  }
  return;
}
// FUN_08005360 0x08005360
bool isMemorySizeLessThanThreshold_08005360()
{
  uint32_t currentMemorySize = *(uint32_t*)(DAT_0800539c + 0x18) + *(uint32_t*)(DAT_0800539c + 0x14);
  uint32_t memoryThreshold = DAT_0800539c;
  if (memoryThreshold < currentMemorySize) {
    currentMemorySize -= 420000;
  }
  return memoryThreshold < currentMemorySize;
}
// FUN_08003980 0x08003980
void resetData_08003980()
{
  uint32_t* PTR_DAT_08003998 = PTR_DAT_08003998;
  uint32_t* PTR_DAT_0800399c = PTR_DAT_0800399c;
  *PTR_DAT_08003998 = 0;
  *PTR_DAT_0800399c = 0;
  return;
}
// FUN_08006de0 0x08006de0
int is_bit_set_08006de0(char bit_position) {
  int is_set = isBitSet_08006a18(bit_position);
  return is_set;
}
// FUN_08007540 0x08007540
int initialize_and_run_game_08007540() {
  initialize_device();
  initialize_system();
  process_game_data();
  initialize_flags();
  initialize_memory();
  initialize_game_data();
  checkSystemCallAvailability_08005984(0);
  run_game_loop();
  return 0;
}
// FUN_080052dc 0x080052dc
void updateData_080052dc(uint32_t newData)
{
  uint32_t* dataPointer = (uint32_t*)(DAT_08005308 + 0x14);
  uint32_t mask = 0xfffff55f;
  uint32_t *(uint *)(DAT_08005308 + 0x14) = *dataPointer;
  *dataPointer = newData | (*(uint *)(DAT_08005308 + 0x14) & mask);
  return;
}
// FUN_080064ec 0x080064ec
uint32_t calculate_data_080064ec()
{
  uint32_t* data_flag_pointer = (uint32_t*)(DAT_0800661c + 8);
  uint32_t* DAT_08006620_pointer = (uint32_t*)(DAT_0800661c + 4);
  uint32_t* DAT_08006624_pointer = (uint32_t*)(DAT_0800661c + 4);
  uint32_t data_flag = *data_flag_pointer & 0xc;
  if (data_flag == 8) {
    uint32_t data_value1 = *DAT_08006620_pointer & 0x3f;
    uint32_t leading_zero_count1 = count_leading_zeroes(0x200);
    if ((*DAT_08006620_pointer & 0x400000) >> (leading_zero_count1 & 0xff) == 0) {
      uint32_t leading_zero_count2 = count_leading_zeroes(0x3fe0000);
      uint32_t local_c = ((*DAT_08006620_pointer & 0x7fc0) >> (leading_zero_count2 & 0xff)) * (DAT_08006620 / data_value1);
    }
    else {
      uint32_t leading_zero_count3 = count_leading_zeroes(0x3fe0000);
      uint32_t local_c = ((*DAT_08006620_pointer & 0x7fc0) >> (leading_zero_count3 & 0xff)) * (DAT_08006624 / data_value1);
    }
    uint32_t leading_zero_count4 = count_leading_zeroes(0xc000);
    return local_c / ((((*DAT_08006620_pointer & 0x30000) >> (leading_zero_count4 & 0xff)) + 1) * 2);
  }
  if (data_flag < 9) {
    if (data_flag == 0) {
      return DAT_08006620;
    }
    if (data_flag == 4) {
      return DAT_08006624;
    }
  }
  return DAT_08006620;
}
// FUN_08006ba0 0x08006ba0
uint32_t calculate_bits_08006ba0(uint32_t bits_to_keep, uint32_t bits_to_shift, uint32_t data)
{
  uint32_t bits_to_shift_keep = bits_to_keep & 7;
  uint32_t bits_to_shift_amount = 7 - bits_to_shift_keep;
  if (bits_to_shift_amount > 3) {
    bits_to_shift_amount = 4;
  }
  if (bits_to_keep + 4 < 7) {
    bits_to_shift_keep = 0;
  }
  else {
    bits_to_shift_keep = bits_to_shift_keep - 3;
  }
  return data & (1 << (bits_to_shift_keep & 0xff)) - 1U | ((1 << (bits_to_shift_amount & 0xff)) - 1U & bits_to_shift) << (bits_to_shift_keep & 0xff);
}
// FUN_080003ec 0x080003ec
bool check_sum_080003ec(char *data, int length, int expected_sum){
  char current_byte;
  uint8_t sum = 0;
  
  if (*(int *)PTR_DAT_08000470 == 0) {
    initializeMemory_080002f0();
  }
  
  for (int i = 0; i < length; i++) {
    current_byte = get_memory_value_08000310(i);
    sum += current_byte;
    *data++ = current_byte;
  }
  
  return sum == expected_sum;
}
// FUN_08002896 0x08002896
char adjust_char_value_08002896(char input_char)
{
  char adjusted_value = input_char;
  if (input_char == '\0') {
    adjusted_value = '\x12';
  }
  return adjusted_value - 1;
}
// FUN_0800a348 0x0800a348

undefined4 FUNC_0800a348(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar4 = param_2 & 0x7fffffff;
  if (uVar4 < 0x3e400000) {
    iVar1 = calculateValue_08008ba0();
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = FUNC_08008640(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUNC_08008640(uVar2,uVar3,DAT_0800a558,DAT_0800a55c);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a560,DAT_0800a564);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a568,DAT_0800a56c);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a570,DAT_0800a574);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a578,DAT_0800a57c);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a580,DAT_0800a584);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
  }
  else {
    uVar5 = FUNC_08008640(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUNC_08008640(uVar2,uVar3,DAT_0800a558,DAT_0800a55c);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a560,DAT_0800a564);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a568,DAT_0800a56c);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a570,DAT_0800a574);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a578,DAT_0800a57c);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUNC_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a580,DAT_0800a584);
    uVar6 = FUNC_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    if (DAT_0800a590 < (int)uVar4) {
      if (DAT_0800a594 < (int)uVar4) {
        lVar8 = (ulonglong)DAT_0800a598 << 0x20;
        iVar1 = DAT_0800a59c;
      }
      else {
        lVar8 = FUNC_080082d0(0,DAT_0800a58c,0,uVar4 - 0x200000);
        iVar1 = uVar4 - 0x200000;
      }
      uStack_24 = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_28 = (undefined4)lVar8;
      uVar5 = FUNC_08008640(uVar2,uVar3,0,DAT_0800a588);
      uVar5 = FUNC_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,iVar1);
      uVar6 = FUNC_08008640(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar7 = FUNC_08008640(param_1,param_2,param_3,param_4);
      uVar6 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                           (int)((ulonglong)uVar7 >> 0x20));
      uVar5 = FUNC_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      uVar2 = FUNC_080082d0(local_28,uStack_24,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar2;
    }
  }
  uStack_2c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_30 = (undefined4)uVar6;
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar6 = FUNC_08008640((int)uVar5,uVar2,0,DAT_0800a588);
  uVar5 = FUNC_08008640((int)uVar5,uVar2,local_30,uStack_2c);
  uVar7 = FUNC_08008640(param_1,param_2,param_3,param_4);
  uVar5 = FUNC_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  uVar5 = FUNC_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  uVar2 = FUNC_080082d0(0,DAT_0800a58c,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return uVar2;
}


// FUN_080001ac 0x080001ac
typedef unsigned long long uint64_t;

uint64_t concatenate_080001ac(uint64_t param_1, uint64_t param_2) {
  if (DAT_080001bc != 0) {
    param_1 = PTR_FUN_080001c4;
    param_2 = PTR_DAT_080001c0;
  }
  return ((uint64_t)param_2 << 32) | param_1;
}
// FUN_08003740 0x08003740
void print_binary_representation_08003740(void* data, int num_bits) {
  print_binary_representation_08003740_helper(data, num_bits);
  return;
}

void print_binary_representation_08003740_helper(void* data, int num_bits) {
  print_binary_representation_08003740_080036f0(data, num_bits);
  return;
}
// FUN_08000478 0x08000478
void set_data_values_08000478(undefined data_value_1, undefined data_value_2, undefined data_value_3)
{
  PTR_DAT_080004a8[0x19] = data_value_1;
  PTR_DAT_080004a8[0x1a] = data_value_2;
  PTR_DAT_080004a8[0x1b] = data_value_3;
  return;
}
// FUN_08006d2e 0x08006d2e
void set_bit_08006d2e(char bit_index)
{
  set_bit_08006d2e_at_index_080069b4(bit_index);
  return;
}
// FUN_08007e1c 0x08007e1c
void send_byte_to_device_08007e1c(byte byte_to_send)
{
  // Wait until the device is ready to receive data
  while ((*DAT_08007e48 & 0x80) == 0);
  // Send the byte to the device
  DAT_08007e48[1] = (uint)byte_to_send;
  return;
}
// FUN_0800adf0 0x0800adf0
undefined4 calculateResult_0800adf0(uint32_t input1, uint32_t input2, uint32_t input3, uint32_t input4, int flag)
{
  int calculationResult;
  undefined8 intermediateResult1;
  undefined8 intermediateResult2;
  undefined8 intermediateResult3;
  undefined8 intermediateResult4;
  undefined8 intermediateResult5;
  undefined8 intermediateResult6;
  undefined8 intermediateResult7;
  undefined8 intermediateResult8;
  if (((input2 & 0x7fffffff) < 0x3e400000) && (calculationResult = calculateValue(), calculationResult == 0)) {
    return input1;
  }
  intermediateResult1 = skippedFunction1(input1, input2, input1);
  uint32_t result1 = (uint32_t)(intermediateResult1 >> 0x20);
  uint32_t result2 = (uint32_t)intermediateResult1;
  intermediateResult2 = skippedFunction1(input1, input2, result2, result1);
  uint32_t result3 = (uint32_t)(intermediateResult2 >> 0x20);
  uint32_t result4 = (uint32_t)intermediateResult2;
  intermediateResult3 = skippedFunction2(result2, result1, PTR_DAT_0800af40, PTR_DAT_0800af44);
  intermediateResult3 = skippedFunction3((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), PTR_DAT_0800af48, PTR_DAT_0800af4c);
  intermediateResult3 = skippedFunction1((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), result2, result1);
  intermediateResult3 = skippedFunction4((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), PTR_DAT_0800af50, PTR_DAT_0800af54);
  intermediateResult3 = skippedFunction1((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), result2, result1);
  intermediateResult3 = skippedFunction3((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), PTR_DAT_0800af58, PTR_DAT_0800af5c);
  intermediateResult3 = skippedFunction1((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), result2, result1);
  intermediateResult3 = skippedFunction4((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), PTR_DAT_0800af60, PTR_DAT_0800af64);
  uint32_t result5 = (uint32_t)(intermediateResult3 >> 0x20);
  if (flag != 0) {
    intermediateResult4 = skippedFunction1(input3, input4, 0, PTR_DAT_0800af70);
    intermediateResult5 = skippedFunction1(result2, result1, (int)intermediateResult3, result5);
    intermediateResult5 = skippedFunction3((int)intermediateResult4, (int)(intermediateResult4 >> 0x20), (int)intermediateResult5,
                         (int)(intermediateResult5 >> 0x20));
    intermediateResult5 = skippedFunction1((int)intermediateResult5, (int)(intermediateResult5 >> 0x20), result2, result1);
    intermediateResult5 = skippedFunction3((int)intermediateResult5, (int)(intermediateResult5 >> 0x20), input3, input4);
    intermediateResult4 = skippedFunction1(result2, result1, PTR_DAT_0800af68, PTR_DAT_0800af6c);
    intermediateResult5 = skippedFunction4((int)intermediateResult5, (int)(intermediateResult5 >> 0x20), (int)intermediateResult4,
                         (int)(intermediateResult4 >> 0x20));
    uint32_t result6 = skippedFunction3(input1, input2, (int)intermediateResult5, (int)(intermediateResult5 >> 0x20));
    return result6;
  }
  intermediateResult3 = skippedFunction1(result2, result1, (int)intermediateResult3, result5);
  intermediateResult3 = skippedFunction3((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), PTR_DAT_0800af68, PTR_DAT_0800af6c);
  intermediateResult3 = skippedFunction1((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), result4, result3);
  uint32_t result7 = skippedFunction4((int)intermediateResult3, (int)(intermediateResult3 >> 0x20), input1, input2);
  return result7;
}

// FUN_08003a74 0x08003a74
void display_alarm_if_needed_08003a74() {
  byte alarm_flags = PTR_DAT_08003b90[2];
  if (alarm_flags != 0) {
    if ((alarm_flags & 0x60) != 0) {
      PTR_DAT_08003b90[1] = 6;
      if ((alarm_flags & 0x40) == 0) {
        displayAlarmMessage_08004148(0xfffffffe);
      }
      else {
        displayAlarmMessage_08004148(0xffffffff);
        display_status_message_080041a0(1);
        PTR_DAT_08003b90[2] &= 0xef;
        while ((PTR_DAT_08003b90[2] & 0x10) == 0);
      }
      PTR_DAT_08003b90[2] &= 0x9f;
    }
    if ((alarm_flags & 0x10) == 0) {
      if ((alarm_flags & 1) != 0) {
        printCurrentAndWorkPosition_08004940();
        PTR_DAT_08003b90[2] &= 0xfe;
      }
      if ((alarm_flags & 8) != 0) {
        updateData_0800587c();
        PTR_DAT_08003b90[2] &= 0xf7;
      }
      if ((alarm_flags & 4) != 0) {
        update_or_reset_data_080058a0();
        PTR_DAT_08003b90[2] &= 0xfb;
      }
      if ((alarm_flags & 2) != 0) {
        updateDeviceFlagsIfFlagTwoIsSet_0800585c();
        if ((PTR_DAT_08003b94[0x28] & 2) != 0) {
          PTR_DAT_08003b90[0x10] = 1;
        }
        PTR_DAT_08003b90[2] &= 0xfd;
      }
    }
    else {
      *PTR_DAT_08003b90 = 1;
    }
  }
  return;
}
// FUN_08005cec 0x08005cec

undefined4 FUNC_08005cec(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*param_1 & 1) != 0) {
    if (((DAT_08005fac[2] & 0xc) == 4) ||
       (((DAT_08005fac[2] & 0xc) == 8 && ((DAT_08005fac[1] & 0x400000) == 0x400000)))) {
      if (((*DAT_08005fac & 0x20000) != 0) && (param_1[1] != 1)) {
        return 1;
      }
    }
    else {
      *DAT_08005fb0 = 0;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08005fac & 0x20000) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
      *DAT_08005fb0 = (char)param_1[1];
      if (param_1[1] == 1) {
        iVar1 = getValueFromPointer_08005a84();
        while ((*DAT_08005fac & 0x20000) == 0) {
          uVar2 = getValueFromPointer_08005a84();
          if (iVar1 + 5000U <= uVar2) {
            return 3;
          }
        }
      }
      else {
        iVar1 = getValueFromPointer_08005a84();
        while ((*DAT_08005fac & 0x20000) != 0) {
          uVar2 = getValueFromPointer_08005a84();
          if (iVar1 + 5000U <= uVar2) {
            return 3;
          }
        }
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (((DAT_08005fac[2] & 0xc) == 0) ||
       (((DAT_08005fac[2] & 0xc) == 8 && ((DAT_08005fac[1] & 0x400000) == 0)))) {
      if (((*DAT_08005fac & 2) != 0) && (param_1[3] != 1)) {
        return 1;
      }
    }
    else if (param_1[3] == 0) {
      *DAT_08005fb4 = 0;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08005fac & 2) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005fb4 = 1;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08005fac & 2) == 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
      uVar2 = count_leading_zeroes(0x1f000000);
      *DAT_08005fac = param_1[4] << (uVar2 & 0xff) | *DAT_08005fac & 0xffffff07;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[5] == 0) {
      *DAT_08005fb8 = 0;
      iVar1 = getValueFromPointer_08005a84();
      while ((DAT_08005fac[0x1d] & 2) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005fb8 = 1;
      iVar1 = getValueFromPointer_08005a84();
      while ((DAT_08005fac[0x1d] & 2) == 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    DAT_08005fac[0x10] = DAT_08005fac[0x10] | 0x10000000;
    *DAT_08005fbc = *DAT_08005fbc | 0x100;
    iVar1 = getValueFromPointer_08005a84();
    while ((*DAT_08005fbc & 0x100) == 0) {
      uVar2 = getValueFromPointer_08005a84();
      if (iVar1 + 100U <= uVar2) {
        return 3;
      }
    }
    *DAT_08005fc0 = 0;
    iVar1 = getValueFromPointer_08005a84();
    while ((DAT_08006180[0x1c] & 2) != 0) {
      uVar2 = getValueFromPointer_08005a84();
      if (iVar1 + 5000U <= uVar2) {
        return 3;
      }
    }
    *DAT_08006184 = (char)param_1[2];
    if (param_1[2] == 1) {
      iVar1 = getValueFromPointer_08005a84();
      while ((DAT_08006180[0x1c] & 2) == 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      iVar1 = getValueFromPointer_08005a84();
      while ((DAT_08006180[0x1c] & 2) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
    }
  }
  if (param_1[6] != 0) {
    if ((DAT_08006180[2] & 0xc) == 8) {
      return 1;
    }
    if (param_1[6] == 2) {
      *DAT_08006188 = 0;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08006180 & 0x2000000) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
      uVar2 = count_leading_zeroes(0x3fe0000);
      uVar3 = count_leading_zeroes(0xc000);
      uVar4 = count_leading_zeroes(0xf0);
      DAT_08006180[1] =
           param_1[0xb] << (uVar4 & 0xff) |
           param_1[8] | param_1[9] << (uVar2 & 0xff) | (param_1[10] >> 1) - 1 << (uVar3 & 0xff) |
           param_1[7] | 0x20000000;
      *DAT_08006188 = 1;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08006180 & 0x2000000) == 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08006188 = 0;
      iVar1 = getValueFromPointer_08005a84();
      while ((*DAT_08006180 & 0x2000000) != 0) {
        uVar2 = getValueFromPointer_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  return 0;
}


// FUN_08006b00 0x08006b00
void set_data_value_08006b00(byte data_index, uint data_value)
{
  if ((char)data_index < '\0') {
    // Set the data value at the specified index in the first array
    *(char *)((data_index & 0xf) + DAT_08006b4c + 0x14) = (char)((data_value & 0xff) << 4);
  }
  else {
    // Set the data value at the specified index in the second array
    *(char *)((char)data_index + DAT_08006b50 + 0x300) = (char)((data_value & 0xff) << 4);
  }
  return;
}
// FUN_0800b4d0 0x0800b4d0
void checkAndAddParamToLisIfNotNull_0800b4d0(void)
{
  if (DAT_0800b4dc == 0) {
    addParamToList(0, PTR_LAB_0800b4f0_1_0800b4e0, 0);
    return;
  }
  return;
}
// FUN_08007f54 0x08007f54
void calculate_shifted_data_08007f54(int input1, int input2)
{
  longlong result1;
  int temp1;
  int temp2;
  undefined8 temp3;
  uint mask = 0xf;
  uint shift = 0x25;
  uint constant1 = 0x19;
  uint constant2 = 0x32;
  uint constant3 = -100;
  uint constant4 = 0x10;
  uint constant5 = 0xc;
  uint constant6 = 0x8000;
  uint constant7 = 0x2;
  uint constant8 = 0x1;
  uint constant9 = 0x4;
  uint constant10 = 0x2;
  
  uint* ptr1 = (uint *)(input1 + constant5);
  uint* ptr2 = (uint *)(input1 + 8);
  
  if ((*ptr1 & constant6) == 0) {
    if ((input1 != PTR_DAT_0800818c_08008184) && (input1 != PTR_DAT_0800818c_08008188)) {
      temp3 = calculate_shifted_data_08007f54_08006680();
      result1 = (ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)((int)temp3 * constant1) / (ulonglong)(uint)(input2 << constant10));
      temp1 = calculate_shifted_data_08007f54_08006680((int)temp3,(int)((ulonglong)temp3 >> shift),(int)result1);
      temp2 = calculate_shifted_data_08007f54_08006680();
      *ptr2 = ((uint)result1 >> shift) << constant4 | (uint)PTR_DAT_0800818c_0800818c * (ulonglong)(((uint)(temp1 * constant1) / (uint)(input2 << constant10) + (uint)((ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)(temp2 * constant1) / (ulonglong)(uint)(input2 << constant10)) >> shift) * constant3) * constant4 + constant2) >> shift & mask;
      return;
    }
    temp3 = calculate_shifted_data_08007f54_080066cc();
    result1 = (ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)((int)temp3 * constant1) / (ulonglong)(uint)(input2 << constant10));
    temp1 = calculate_shifted_data_08007f54_080066cc((int)temp3,(int)((ulonglong)temp3 >> shift),(int)result1);
    temp2 = calculate_shifted_data_08007f54_080066cc();
    *ptr2 = ((uint)result1 >> shift) << constant4 | (uint)PTR_DAT_0800818c_0800818c * (ulonglong)(((uint)(temp1 * constant1) / (uint)(input2 << constant10) + (uint)((ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)(temp2 * constant1) / (ulonglong)(uint)(input2 << constant10)) >> shift) * constant3) * constant4 + constant2) >> shift & mask;
  }
  else {
    if ((input1 != PTR_DAT_0800818c_08008184) && (input1 != PTR_DAT_0800818c_08008188)) {
      temp3 = calculate_shifted_data_08007f54_08006680();
      result1 = (ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)((int)temp3 * constant1) / (ulonglong)(uint)(input2 << constant7));
      temp1 = calculate_shifted_data_08007f54_08006680((int)temp3,(int)((ulonglong)temp3 >> shift),(int)result1);
      temp2 = calculate_shifted_data_08007f54_08006680();
      *ptr2 = ((uint)result1 >> shift) << constant4 | (uint)PTR_DAT_0800818c_0800818c * (ulonglong)(((uint)(temp1 * constant1) / (uint)(input2 << constant7) + (uint)((ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)(temp2 * constant1) / (ulonglong)(uint)(input2 << constant7)) >> shift) * constant3) * constant4 + constant2) >> shift & mask;
      return;
    }
    temp3 = calculate_shifted_data_08007f54_080066cc();
    result1 = (ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)((int)temp3 * constant1) / (ulonglong)(uint)(input2 << constant7));
    temp1 = calculate_shifted_data_08007f54_080066cc((int)temp3,(int)((ulonglong)temp3 >> shift),(int)result1);
    temp2 = calculate_shifted_data_08007f54_080066cc();
    *ptr2 = ((uint)result1 >> shift) << constant4 | (uint)PTR_DAT_0800818c_0800818c * (ulonglong)(((uint)(temp1 * constant1) / (uint)(input2 << constant7) + (uint)((ulonglong)PTR_DAT_0800818c_0800818c * ((ulonglong)(uint)(temp2 * constant1) / (ulonglong)(uint)(input2 << constant7)) >> shift) * constant3) * constant4 + constant2) >> shift & mask;
  }
  return;
}
// FUN_08003b98 0x08003b98

uint FUNC_08003b98(char *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_14;
  undefined4 local_10;
  byte local_a;
  byte local_9;
  
  if (*param_1 != '$') {
    uVar4 = FUNC_080005b4(param_1);
    return uVar4;
  }
  local_a = 1;
  local_9 = '\0';
  bVar1 = param_1[1];
  if (bVar1 == 0) {
    printGrblSettings_0800423c();
    return 0;
  }
  if ((0x58 < bVar1) || (bVar1 < 0x23)) goto switchD_08003bdc_caseD_25;
  switch(bVar1) {
  case 0x23:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    verifyAndPrintData_080044e8();
    break;
  case 0x24:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    FUNC_08004250();
    break;
  case 0x43:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (PTR_DAT_08003f2c[1] == '\a') {
      enable_task_execution_if_not_already_enabled_080025e8();
      display_status_message_080041a0(5);
    }
    else {
      if (PTR_DAT_08003f2c[1] != '\0') {
        return 0xb;
      }
      PTR_DAT_08003f2c[1] = 7;
      display_status_message_080041a0(4);
    }
    break;
  case 0x47:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    print_device_info_080046d0();
    break;
  case 0x48:
    if ((PTR_DAT_08003f30[0x28] & 0x10) == 0) {
      return 7;
    }
    if ((PTR_DAT_08003f2c[1] != '\0') && (PTR_DAT_08003f2c[1] != '\x06')) {
      return 0xb;
    }
    initialize_device_080024c4();
    if (*PTR_DAT_08003f2c == '\0') {
      verify_and_send_messages_080039bc();
    }
    break;
  case 0x4e:
    local_a = 2;
    if (param_1[2] == '\0') {
      for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
        iVar2 = verify_checksum_08004d2c(local_9,param_1);
        if (iVar2 == 0) {
          send_error_message_08004030(10);
        }
        else {
          print_device_information_08004900(local_9,param_1);
        }
      }
      return 0;
    }
    local_9 = '\x01';
  default:
switchD_08003bdc_caseD_25:
    iVar2 = parse_integer_from_string_08002638(param_1,&local_a,&local_10);
    if (iVar2 == 0) {
      return 1;
    }
    bVar1 = local_a + 1;
    if (param_1[local_a] != '=') {
      return 3;
    }
    local_a = bVar1;
    if (local_9 == '\0') {
      iVar2 = parse_integer_from_string_08002638(param_1,&local_a,&local_14);
      if (iVar2 == 0) {
        return 1;
      }
      if (param_1[local_a] == '\0') {
        uVar3 = convertFloatToInteger_08009278(local_10);
        uVar4 = FUNC_08004e30(uVar3,local_14);
        return uVar4;
      }
      return 3;
    }
    do {
      param_1[(uint)local_a - (uint)bVar1] = param_1[local_a];
      uVar4 = (uint)local_a;
      local_a = local_a + 1;
    } while (param_1[uVar4] != '\0');
    local_9 = bVar1;
    local_9 = FUNC_080005b4(param_1);
    if (local_9 != 0) {
      return (uint)local_9;
    }
    uVar5 = FUNC_08008590(local_10);
    uVar5 = decode_float_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_9 = calculate_value_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    set_memory_checksum_08004bc0(local_9,param_1);
    break;
  case 0x58:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (PTR_DAT_08003f2c[1] == '\x06') {
      display_status_message_080041a0(3);
      PTR_DAT_08003f2c[1] = 0;
    }
  }
  return 0;
}


// FUN_080024c4 0x080024c4
void initialize_device_080024c4()
{
  int flag_one;
  int flag_two;
  int flag_three;
  char is_alarm_needed;
  char is_fan_on;
  char is_light_on;
  PTR_DAT_080025d8[1] = 5;
  *(int *)PTR_DAT_080025dc = 0;
  update_device_flags_and_check_status();
  display_alarm_if_needed();
  if (*PTR_DAT_080025d8 == 0)
  {
    fill_memory_with_byte(PTR_DAT_080025e0, 0, 0xc);
    set_and_store_twos_complement();
    PTR_DAT_080025d8[1] = 0;
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x20) == 0)
    {
      is_fan_on = -1;
    }
    else
    {
      is_fan_on = 1;
    }
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x80) == 0)
    {
      is_light_on = -1;
    }
    else
    {
      is_light_on = 1;
    }
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x200) == 0)
    {
      is_alarm_needed = -1;
    }
    else
    {
      is_alarm_needed = 1;
    }
    flag_one = calculate_twos_complement(is_fan_on);
    flag_one = FUNC_08008eec(flag_one,*(int *)(PTR_DAT_080025e4 + 0x38));
    flag_two = calculate_twos_complement(is_light_on);
    flag_two = FUNC_08008eec(flag_two,*(int *)(PTR_DAT_080025e4 + 0x38));
    flag_three = calculate_twos_complement(is_alarm_needed);
    flag_three = FUNC_08008eec(flag_three,*(int *)(PTR_DAT_080025e4 + 0x38));
    check_device_status_and_update_if_necessary(flag_one, flag_two, flag_three, *(int *)(PTR_DAT_080025e4 + 0x30), 0);
    update_device_flags_if_flag_two_is_set();
    display_alarm_until_condition_met();
    set_and_store_twos_complement();
    if ((PTR_DAT_080025e4[0x28] & 8) != 0)
    {
      *(int *)PTR_DAT_080025dc = 1;
    }
  }
  return;
}
// FUN_08002f40 0x08002f40
void updateCharIfDifferent_08002f40(void)
{
  undefined newChar;
  if (*PTR_DAT_08002f6c != *PTR_DAT_08002f70) {
    newChar = incrementChar_08002870(*PTR_DAT_08002f70);
    *PTR_DAT_08002f70 = newChar;
  }
  return;
}
// FUN_08009054 0x08009054

uint FUNC_08009054(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  bVar7 = uVar2 == 0;
  if (!bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar2 == 0xff;
  }
  if (!bVar7) {
    bVar7 = param_4 == 0xff;
  }
  if (bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    uVar6 = param_1;
    if (uVar2 == 0xff) {
      if (((param_1 & 0x7fffff) != 0) || (uVar6 = param_2, param_4 == 0xff)) {
LAB_0800904a:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_08009000:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_0800904a;
      }
      bVar7 = (param_1 & 0x7fffffff) == 0;
      if (!bVar7) {
        bVar7 = (param_2 & 0x7fffffff) == 0;
      }
      if (!bVar7) {
        bVar7 = uVar2 == 0;
        uVar6 = param_1 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_1 = param_1 << 1;
            bVar7 = (param_1 & 0x800000) == 0;
          }
          if (!bVar7) break;
          uVar2 = uVar2 - 1;
        }
        param_1 = param_1 | uVar6;
        bVar7 = param_4 == 0;
        uVar6 = param_2 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_2 = param_2 << 1;
            bVar7 = (param_2 & 0x800000) == 0;
          }
          if (!bVar7) break;
          param_4 = param_4 - 1;
        }
        param_2 = param_2 | uVar6;
        goto LAB_0800906c;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_08009000;
        goto LAB_0800904a;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_0800906c:
    iVar3 = uVar2 - param_4;
    if (param_2 << 9 == 0) {
      param_1 = (param_1 ^ param_2) & 0x80000000 | param_1 & 0x7fffff;
      bVar9 = SCARRY4(iVar3,0x7f);
      iVar5 = iVar3 + 0x7f;
      bVar7 = iVar5 < 0;
      bVar8 = iVar5 == 0;
      if (!bVar8 && bVar7 == bVar9) {
        bVar9 = SBORROW4(0xff,iVar5);
        bVar7 = 0xff - iVar5 < 0;
        bVar8 = iVar5 == 0xff;
      }
      if (!bVar8 && bVar7 == bVar9) {
        param_1 = param_1 | iVar5 * 0x800000;
      }
      if (!bVar8 && bVar7 == bVar9) {
        return param_1;
      }
      param_1 = param_1 | 0x800000;
      uVar2 = 0;
      bVar8 = SBORROW4(iVar5,1);
      uVar4 = iVar3 + 0x7e;
      bVar7 = uVar4 == 0;
      uVar6 = uVar4;
    }
    else {
      uVar1 = (param_2 << 9) >> 4 | 0x10000000;
      uVar2 = (param_1 << 9) >> 4 | 0x10000000;
      param_1 = (param_1 ^ param_2) & 0x80000000;
      bVar7 = uVar1 <= uVar2;
      if (!bVar7) {
        uVar2 = uVar2 << 1;
      }
      uVar4 = iVar3 + 0x7d + (uint)bVar7;
      uVar6 = 0x800000;
      do {
        if (uVar1 <= uVar2) {
          uVar2 = uVar2 - uVar1;
          param_1 = param_1 | uVar6;
        }
        bVar7 = uVar1 >> 1 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 1);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 1;
        }
        bVar7 = uVar1 >> 2 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 2);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 2;
        }
        bVar7 = uVar1 >> 3 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 3);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 3;
        }
        uVar2 = uVar2 * 0x10;
        bVar7 = uVar2 == 0;
        if (!bVar7) {
          uVar6 = uVar6 >> 4;
          bVar7 = uVar6 == 0;
        }
      } while (!bVar7);
      bVar8 = SBORROW4(uVar4,0xfd);
      bVar7 = uVar4 == 0xfd;
      uVar6 = uVar4 - 0xfd;
      if (uVar4 < 0xfe) {
        param_1 = param_1 + uVar4 * 0x800000 + (uint)(uVar1 <= uVar2);
        if (uVar2 - uVar1 == 0) {
          param_1 = param_1 & 0xfffffffe;
        }
        return param_1;
      }
    }
    if (bVar7 || (int)uVar6 < 0 != bVar8) {
      bVar7 = (int)(uVar4 + 0x19) < 0;
      if (uVar4 == 0xffffffe7 || bVar7 != SCARRY4(uVar4,0x19)) {
        param_1 = param_1 & 0x80000000;
      }
      if (uVar4 == 0xffffffe7 || bVar7 != SCARRY4(uVar4,0x19)) {
        return param_1;
      }
      uVar6 = (param_1 << 1) >> (-uVar4 & 0xff);
      uVar4 = param_1 << (uVar4 + 0x20 & 0xff);
      uVar6 = ((uint)((param_1 & 0x80000000) != 0) << 0x1f | uVar6 >> 1) + (uint)((byte)uVar6 & 1);
      if ((uVar2 | uVar4 << 1) == 0) {
        uVar6 = uVar6 & ~(uVar4 >> 0x1f);
      }
      return uVar6;
    }
  }
  return param_1 & 0x80000000 | 0x7f800000;
}


// FUN_080025e8 0x080025e8
void enable_task_execution_if_not_already_enabled_080025e8(void)
{
    if ((PTR_DAT_08002634[2] & 0x10) == 0) {
        PTR_DAT_08002634[2] |= 0x10;
        do_nothing_and_return();
        perform_tasks();
        if ((byte)PTR_DAT_08002634[1] - 3 < 3) {
            PTR_DAT_08002634[2] |= 0x20;
            clear_globals_and_check_status();
        }
    }
    return;
}
// FUN_080001c8 0x080001c8
void do_nothing_080001c8()
{
  // This function does nothing
  return;
}
// FUN_08005250 0x08005250
void do_nothing_and_return_08005250(void)
{
  do_nothing();
  return;
}
// FUN_08007430 0x08007430
void wait_indefinitely_08007430()
{
  // This function waits indefinitely by doing nothing in an infinite loop
  while(true) {}
  return;
}
// FUN_08008640 0x08008640

ulonglong FUNC_08008640(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r5;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  uVar12 = CONCAT44(param_2,param_1);
  uVar7 = 0x7ff;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar9 = unaff_r5 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == 0x7ff;
  }
  if (!bVar9) {
    bVar9 = unaff_r5 == 0x7ff;
  }
  if (bVar9) {
    uVar12 = calculate_result_0800881c();
  }
  uVar3 = (uint)(uVar12 >> 0x20);
  iVar5 = uVar4 + unaff_r5;
  uVar4 = uVar3 ^ param_4;
  uVar3 = uVar3 & ~(uVar7 << 0x15);
  param_4 = param_4 & ~(uVar7 << 0x15);
  bVar9 = ((uint)uVar12 | uVar3 << 0xc) == 0;
  if (!bVar9) {
    bVar9 = (param_3 | param_4 << 0xc) == 0;
  }
  uVar3 = uVar3 | 0x100000;
  param_4 = param_4 | 0x100000;
  if (bVar9) {
    param_3 = (uint)uVar12 | param_3;
    param_4 = (uVar4 & 0x80000000 | uVar3) ^ param_4;
    uVar4 = uVar7 >> 1;
    bVar11 = SBORROW4(iVar5,uVar4);
    uVar6 = iVar5 - uVar4;
    bVar9 = uVar6 == 0;
    uVar3 = uVar6;
    if (!bVar9 && (int)uVar4 <= iVar5) {
      bVar11 = SBORROW4(uVar7,uVar6);
      uVar3 = uVar7 - uVar6;
      bVar9 = uVar7 == uVar6;
    }
    if (!bVar9 && (int)uVar3 < 0 == bVar11) {
      param_4 = param_4 | uVar6 * 0x100000;
    }
    if (!bVar9 && (int)uVar3 < 0 == bVar11) {
      return CONCAT44(param_4,param_3);
    }
    param_4 = param_4 | 0x100000;
    uVar7 = 0;
    bVar11 = SBORROW4(uVar6,1);
    uVar6 = uVar6 - 1;
    bVar9 = uVar6 == 0;
    uVar4 = uVar6;
  }
  else {
    uVar1 = (uVar12 & 0xffffffff) * (ulonglong)param_3;
    uVar12 = (uVar12 & 0xffffffff) * (ulonglong)param_4 +
             (ulonglong)uVar3 * (ulonglong)param_3 + (uVar1 >> 0x20);
    uVar8 = (uint)uVar12;
    lVar2 = (ulonglong)uVar3 * (ulonglong)param_4 + (uVar12 >> 0x20);
    uVar7 = (uint)lVar2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((int)uVar1 != 0) {
      uVar8 = uVar8 | 1;
    }
    uVar6 = (iVar5 + -0x3ff) - (uint)(uVar3 < 0x200);
    if (uVar3 < 0x200) {
      bVar9 = (uVar8 & 0x80000000) != 0;
      uVar8 = uVar8 << 1;
      lVar2 = CONCAT44(uVar3 * 2 + (uint)(CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar9)),
                       uVar7 * 2 + (uint)bVar9);
    }
    param_4 = uVar4 & 0x80000000 | (int)((ulonglong)lVar2 >> 0x20) << 0xb | (uint)lVar2 >> 0x15;
    param_3 = (uint)lVar2 << 0xb | uVar8 >> 0x15;
    uVar7 = uVar8 * 0x800;
    bVar10 = 0xfc < uVar6;
    bVar11 = SBORROW4(uVar6,0xfd);
    uVar3 = uVar6 - 0xfd;
    bVar9 = uVar3 == 0;
    uVar4 = uVar3;
    if (bVar10 && !bVar9) {
      bVar10 = 0x6ff < uVar3;
      bVar11 = SBORROW4(uVar3,0x700);
      uVar4 = uVar6 - 0x7fd;
      bVar9 = uVar3 == 0x700;
    }
    if (!bVar10 || bVar9) {
      bVar9 = 0x7fffffff < uVar7;
      if (uVar7 == 0x80000000) {
        bVar9 = (uVar8 >> 0x15 & 1) != 0;
      }
      return CONCAT44(param_4 + uVar6 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar9),param_3 + bVar9
                     );
    }
  }
  if (!bVar9 && (int)uVar4 < 0 == bVar11) {
    return (ulonglong)(param_4 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar10 = SCARRY4(uVar6,0x36);
  bVar9 = (int)(uVar6 + 0x36) < 0;
  bVar11 = uVar6 == 0xffffffca;
  if (bVar11 || bVar9 != bVar10) {
    param_3 = 0;
  }
  if (bVar11 || bVar9 != bVar10) {
    param_4 = param_4 & 0x80000000;
  }
  if (bVar11 || bVar9 != bVar10) {
    return CONCAT44(param_4,param_3);
  }
  uVar4 = -uVar6;
  uVar3 = uVar4 - 0x20;
  if (0x1f < (int)uVar4) {
    uVar6 = param_3 >> (uVar3 & 0xff) | param_4 << (0x20 - uVar3 & 0xff);
    uVar4 = (param_4 >> (uVar3 & 0xff) & ~((param_4 & 0x80000000) >> (uVar3 & 0xff))) -
            ((int)uVar6 >> 0x1f);
    if ((uVar7 | param_3 << (0x20 - uVar3 & 0xff) | uVar6 << 1) == 0) {
      uVar4 = uVar4 & ~(uVar6 >> 0x1f);
    }
    return CONCAT44(param_4,uVar4) & 0x80000000ffffffff;
  }
  iVar5 = uVar4 - 0x14;
  if (iVar5 == 0 || iVar5 < 0 != SCARRY4(uVar3,0xc)) {
    uVar8 = param_3 << (uVar6 + 0x20 & 0xff);
    uVar3 = param_3 >> (uVar4 & 0xff) | param_4 << (uVar6 + 0x20 & 0xff);
    uVar6 = uVar3 + -((int)uVar8 >> 0x1f);
    if ((uVar7 | uVar8 << 1) == 0) {
      uVar6 = uVar6 & ~(uVar8 >> 0x1f);
    }
    return CONCAT44((param_4 & 0x80000000) +
                    ((param_4 & 0x7fffffff) >> (uVar4 & 0xff)) +
                    (uint)CARRY4(uVar3,-((int)uVar8 >> 0x1f)),uVar6);
  }
  uVar4 = 0xc - iVar5;
  uVar6 = param_3 << (uVar4 & 0xff);
  uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | param_4 << (uVar4 & 0xff);
  uVar3 = uVar4 + -((int)uVar6 >> 0x1f);
  if ((uVar7 | uVar6 << 1) == 0) {
    uVar3 = uVar3 & ~(uVar6 >> 0x1f);
  }
  return CONCAT44((param_4 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar3);
}


// FUN_08007436 0x08007436
void initialize_system_08007436(void)
{
  int status;
  uint32_t flag_1 = 1;
  uint32_t flag_2 = 1;
  uint32_t flag_3 = 2;
  uint32_t flag_4 = 0x400000;
  uint32_t flag_5 = 8;
  uint32_t flag_6 = 0x150;
  uint32_t flag_7 = 2;
  uint32_t flag_8 = 7;
  status = check_flag_1(&flag_1);
  if (status != 0) {
    wait_indefinitely();
  }
  uint32_t param_1 = 0xf;
  uint32_t param_2 = 2;
  uint32_t param_3 = 0;
  uint32_t param_4 = 0x1400;
  uint32_t param_5 = 0x1000;
  status = validate_parameters(&param_1, 5);
  if (status != 0) {
    wait_indefinitely();
  }
  *(uint *)(DAT_080074c0 + 0x40) = *(uint *)(DAT_080074c0 + 0x40) | 0x10000000;
  *DAT_080074c4 = *DAT_080074c4 | 0xc000;
  return;
}
// FUN_08005814 0x08005814
void initializeMemoryAndValue_08005814(void)
{
  fillMemoryWithByte_0800b430(PTR_DAT_08005834, 0, 0x24);
  updateValue(800);
  *(int *)PTR_DAT_08005838 = 0;
  return;
}
// FUN_08005bdc 0x08005bdc
void set_data_value_at_index_08005bdc(byte data_index, uint data_value)
{
  if ((char)data_index < '\0') {
    // Set the data value at the specified index in the first array
    *(char *)((data_index & 0xf) + DAT_08005c28 + 0x14) = (char)((data_value & 0xff) << 4);
  }
  else {
    // Set the data value at the specified index in the second array
    *(char *)((char)data_index + DAT_08005c2c + 0x300) = (char)((data_value & 0xff) << 4);
  }
  return;
}
// FUN_080002f0 0x080002f0
void initializeMemory_080002f0(void)
{
  // Fill memory with 0xff
  fillMemoryWithByte_0800b430(PTR_DAT_08000308, 0xff, 4);

  // Set the value at PTR_DAT_0800030c to 1
  *(int *)PTR_DAT_0800030c = 1;
  return;
}
// FUN_080073c0 0x080073c0
void do_nothing_080073c0()
{
  // This function does nothing
  return;
}
// FUN_0800778c 0x0800778c
void process_data_0800778c(void)
{
  int bit_position;
  uint mask1;
  uint mask2;
  uint mask3;
  uint mask4;
  uint* data;
  uint loop_counter;
  for (loop_counter = 0; loop_counter < 0x11; loop_counter++) {
    data = (uint *)(PTR_DAT_0800784c + loop_counter * 0x18);
    *(uint *)(DAT_08007850 + 0x30) |= 1 << (*data >> 4 & 0xff);
    bit_position = 1 << (*data & 0xf);
    mask1 = data[1];
    mask2 = data[2];
    mask3 = data[3];
    mask4 = data[4];
    FUNC_08006e88(((*data >> 4) + 0x100080) * 0x400, &bit_position);
    if (-1 < (int)data[5]) {
      set_parameter(((*data >> 4) + 0x100080) * 0x400, 1 << (*data & 0xf) & 0xffff, data[5] & 0xff);
    }
  }
  return;
}
// FUN_080001d4 0x080001d4
void do_nothing_080001d4()
{
  // This function does nothing
  return;
}
// FUN_08001ddc 0x08001ddc
void run_game_loop_08001ddc(void)
{
  doNothing_08008244();
  validate_and_verify_data();
  update_device_and_clear_globals();
  fillMemoryWithByte_0800b430(PTR_DAT_08001e90, 0, 0x14);
  *PTR_DAT_08001e90 = 1;
  PTR_DAT_08001e90[1] = 1;
  do {
    if (*PTR_DAT_08001e90 != 0) {
      doNothing_08008244();
      copy_and_increment_char_then_fillMemoryWithByte_0800b430();
      initialize_system();
      initialize_game();
      initialize_pointer_to_zero();
      reset_data();
      checkFlagStatus_0800192c();
      initialize_memory_and_value();
      set_and_store_twos_complement();
      *PTR_DAT_08001e90 = 0;
      PTR_DAT_08001e90[2] = 0;
      if ((PTR_DAT_08001e90[4] & 2) != 0) {
        PTR_DAT_08001e90[0x10] = 1;
      }
      if ((PTR_DAT_08001e90[1] == 1) && ((PTR_DAT_08001e90[4] & 0x10) != 0)) {
        PTR_DAT_08001e90[1] = 6;
      }
      if (PTR_DAT_08001e90[1] == 6) {
        display_status_message(2);
      }
      else {
        PTR_DAT_08001e90[1] = 0;
        verify_and_send_messages();
      }
    }
    display_alarm_if_needed();
    process_input_and_send_error_message();
  } while(true);
}
// FUN_080069b4 0x080069b4
void set_bit_at_index_080069b4(byte bit_index)
{
  // Calculate the index of the array and the bit to set
  int array_index = (uint)(int)(char)bit_index >> 5;
  int bit_to_set = 1 << (bit_index & 0x1f);
  // Set the bit at the specified index in the array
  *(int *)(DAT_080069e0 + array_index * 4) = bit_to_set;
  return;
}
// FUN_08009228 0x08009228
bool is_input_empty_08009228(void)
{
  char input_char;
  calculateResultAndReturnConcatenation_08009204_08009204();
  return input_char == '\0';
}
// FUN_08007c7c 0x08007c7c
void clear_flags_and_update_parameters_08007c7c(void)
{
  bool is_flag_2_set = (_DAT_40000010 & 2) != 0;
  bool is_flag_4_set = (_DAT_40000010 & 4) != 0;
  bool is_flag_1_set = (_DAT_40000010 & 1) != 0;
  bool is_flag_2c_set = (_DAT_4000000c & 2) != 0;
  bool is_flag_4c_set = (_DAT_4000000c & 4) != 0;
  bool is_flag_1c_set = (_DAT_4000000c & 1) != 0;

  if (is_flag_2_set && is_flag_2c_set) {
    _DAT_40000010 &= ~2;
    update_parameter_value();
  }
  if (is_flag_4_set && is_flag_4c_set) {
    _DAT_40000010 &= ~4;
    update_parameter();
  }
  if (is_flag_1_set && is_flag_1c_set) {
    _DAT_40000010 &= ~1;
    skip();
  }
  return;
}
// FUN_08007b70 0x08007b70
void set_device_flags_08007b70()
{
  // Initialize the local flag variable
  uint flags = 1;
  // Check if the first global variable is not zero and set the corresponding flag
  if (_DAT_40000034 != 0) {
    flags = 3;
  }
  // Check if the second global variable is not zero and set the corresponding flag
  if (_DAT_40000038 != 0) {
    flags |= 4;
  }
  // Set the device flags using the local flags variable
  _DAT_4000000c |= flags;
  // Set the first bit of the first global variable
  _DAT_40000000 |= 1;
  return;
}
// FUN_08004d2c 0x08004d2c
bool verify_checksum_08004d2c(byte length, undefined *data)
{
  int checksum = calculate_checksum(data, (ushort)length * 0x101 + 0x300, 0x100);
  if (checksum == 0) {
    *data = 0;
    save_checksum(length, data);
  }
  return checksum != 0;
}
// FUN_08003004 0x08003004

void FUNC_08003004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar12 = (ushort *)(PTR_DAT_08003234 + (uint)(byte)*PTR_DAT_08003230 * 0x40);
  uVar3 = FUNC_08008eec(*(undefined4 *)PTR_DAT_08003238,param_1);
  uVar15 = FUNC_08008590(uVar3);
  iVar4 = calculateValue_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar3 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003238 + 4),param_2);
  uVar15 = FUNC_08008590(uVar3);
  iVar5 = calculateValue_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar3 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003238 + 8),param_3);
  uVar15 = FUNC_08008590(uVar3);
  iVar6 = calculateValue_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  *puVar12 = 0;
  if (iVar4 < *(int *)PTR_DAT_0800323c) {
    *puVar12 = *puVar12 | 0x20;
  }
  if (iVar5 < *(int *)(PTR_DAT_0800323c + 4)) {
    *puVar12 = *puVar12 | 0x880;
  }
  if (iVar6 < *(int *)(PTR_DAT_0800323c + 8)) {
    *puVar12 = *puVar12 | 0x200;
  }
  iVar13 = iVar4 - *(int *)PTR_DAT_0800323c;
  if (iVar13 < 0) {
    iVar13 = -iVar13;
  }
  *(int *)(puVar12 + 2) = iVar13;
  iVar13 = iVar5 - *(int *)(PTR_DAT_0800323c + 4);
  if (iVar13 < 0) {
    iVar13 = -iVar13;
  }
  *(int *)(puVar12 + 4) = iVar13;
  iVar13 = iVar6 - *(int *)(PTR_DAT_0800323c + 8);
  if (iVar13 < 0) {
    iVar13 = -iVar13;
  }
  *(int *)(puVar12 + 6) = iVar13;
  uVar11 = *(uint *)(puVar12 + 6);
  if (*(uint *)(puVar12 + 6) < *(uint *)(puVar12 + 4)) {
    uVar11 = *(uint *)(puVar12 + 4);
  }
  uVar14 = *(uint *)(puVar12 + 2);
  if (*(uint *)(puVar12 + 2) < uVar11) {
    uVar14 = uVar11;
  }
  *(uint *)(puVar12 + 8) = uVar14;
  if (*(int *)(puVar12 + 8) != 0) {
    uVar3 = calculateTwosComplement_08008e44(iVar4 - *(int *)PTR_DAT_0800323c);
    uVar3 = FUNC_08009054(uVar3,*(undefined4 *)PTR_DAT_08003238);
    uVar7 = calculateTwosComplement_08008e44(iVar5 - *(int *)(PTR_DAT_0800323c + 4));
    uVar7 = FUNC_08009054(uVar7,*(undefined4 *)(PTR_DAT_08003238 + 4));
    uVar8 = calculateTwosComplement_08008e44(iVar6 - *(int *)(PTR_DAT_0800323c + 8));
    uVar8 = FUNC_08009054(uVar8,*(undefined4 *)(PTR_DAT_08003238 + 8));
    uVar9 = FUNC_08008eec(uVar3,uVar3);
    uVar10 = FUNC_08008eec(uVar7,uVar7);
    uVar9 = FUNC_08008cdc(uVar9,uVar10);
    uVar10 = FUNC_08008eec(uVar8,uVar8);
    uVar9 = FUNC_08008cdc(uVar9,uVar10);
    uVar15 = FUNC_08008590(uVar9);
    uVar15 = process_input_and_return_result_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar9 = calculateFloat_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x10) = uVar9;
    uVar9 = FUNC_08009054(0x3f800000,*(undefined4 *)(puVar12 + 0x10));
    if (param_5 == '\0') {
      local_1c = FUNC_08008eec(param_4,uVar9);
    }
    else {
      local_1c = FUNC_08009054(0x3f800000,param_4);
    }
    uVar10 = FUNC_08008eec(*(undefined4 *)(puVar12 + 0x10),local_1c);
    *(undefined4 *)(puVar12 + 10) = uVar10;
    uVar10 = calculateTwosComplement_08008e44(*(undefined4 *)(puVar12 + 8));
    uVar10 = FUNC_08008eec(uVar10,local_1c);
    uVar15 = FUNC_08008590(uVar10);
    uVar15 = calculate_result_08009318((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar10 = calculate_value_08008bf0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x1e) = uVar10;
    uVar10 = calculateTwosComplement_08008e44(*(undefined4 *)(puVar12 + 8));
    uVar10 = FUNC_08008eec(uVar10,uVar9);
    uVar10 = FUNC_08008eec(uVar10,*(undefined4 *)(PTR_DAT_08003560 + 0x20));
    uVar10 = FUNC_08009054(uVar10,DAT_08003564);
    uVar15 = FUNC_08008590(uVar10);
    uVar15 = calculate_result_08009318((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar10 = calculateValue_08008ba0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x18) = uVar10;
    uVar3 = FUNC_08008eec(uVar3,uVar9);
    uVar7 = FUNC_08008eec(uVar7,uVar9);
    uVar8 = FUNC_08008eec(uVar8,uVar9);
    local_20 = 0;
    if ((*PTR_DAT_08003568 != *PTR_DAT_0800356c) &&
       (iVar13 = is_end_of_input_reached_08009264(*(undefined4 *)(PTR_DAT_08003570 + 0x18),0), iVar13 != 0)) {
      uVar9 = FUNC_08008eec(*(uint *)(PTR_DAT_08003570 + 0xc) ^ 0x80000000,uVar3);
      uVar10 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003570 + 0x10),uVar7);
      uVar9 = FUNC_08008cd8(uVar9,uVar10);
      uVar10 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003570 + 0x14),uVar8);
      uVar9 = FUNC_08008cd8(uVar9,uVar10);
      uVar15 = FUNC_08008590(uVar9);
      iVar13 = is_end_of_input_08008b24((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_08003550,DAT_08003554);
      if (iVar13 != 0) {
        iVar13 = is_input_empty_08009228(*(undefined4 *)(PTR_DAT_08003570 + 0x18),*(undefined4 *)(puVar12 + 10)
                             );
        if (iVar13 == 0) {
          local_20 = *(undefined4 *)(puVar12 + 10);
        }
        else {
          local_20 = *(undefined4 *)(PTR_DAT_08003570 + 0x18);
        }
        uVar15 = FUNC_08008590(uVar9);
        iVar13 = is_end_of_string_reached_08008b60((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_08003558,DAT_0800355c
                             );
        if (iVar13 != 0) {
          uVar15 = FUNC_08008590(uVar9);
          uVar15 = FUNC_080082d0(0,DAT_08003574,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = FUNC_08008640((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,DAT_08003578);
          uVar15 = process_input_and_return_result_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar9 = calculateFloat_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = FUNC_08008590(local_20);
          uVar10 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003560 + 0x20),
                                *(undefined4 *)(PTR_DAT_08003560 + 0x24));
          uVar10 = FUNC_08008eec(uVar10,uVar9);
          uVar16 = FUNC_08008590(uVar10);
          uVar17 = FUNC_08008590(uVar9);
          uVar17 = FUNC_080082d0(0,DAT_08003574,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          uVar16 = FUNC_08008894((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                                (int)((ulonglong)uVar17 >> 0x20));
          uVar16 = process_input_and_return_result_080098d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          iVar13 = is_end_of_input_08008b24((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
          if (iVar13 == 0) {
            uVar10 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08003560 + 0x20),
                                  *(undefined4 *)(PTR_DAT_08003560 + 0x24));
            uVar10 = FUNC_08008eec(uVar10,uVar9);
            uVar15 = FUNC_08008590(uVar10);
            uVar16 = FUNC_08008590(uVar9);
            uVar16 = FUNC_080082d0(0,DAT_08003574,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            uVar15 = FUNC_08008894((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                  (int)((ulonglong)uVar16 >> 0x20));
            uVar15 = process_input_and_return_result_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
            local_20 = calculateFloat_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          }
        }
      }
    }
    *(undefined4 *)(puVar12 + 0xe) = local_20;
    uVar10 = calculate_result_from_input_08002978(*(uint *)(PTR_DAT_08003560 + 0x20) ^ 0x80000000,0,
                          *(undefined4 *)(puVar12 + 0x10));
    iVar13 = is_input_empty_08009228(local_20,uVar10);
    uVar9 = uVar10;
    if (iVar13 != 0) {
      uVar9 = local_20;
    }
    *(undefined4 *)(puVar12 + 0xc) = uVar9;
    iVar13 = check_results_08009250(uVar10,*(undefined4 *)(puVar12 + 10));
    if (iVar13 == 0) {
      *(undefined *)((int)puVar12 + 0x25) = 0;
    }
    else {
      *(undefined *)((int)puVar12 + 0x25) = 1;
    }
    *(undefined *)(puVar12 + 0x12) = 1;
    puVar1 = PTR_DAT_080035e0;
    *(undefined4 *)(PTR_DAT_080035e0 + 0xc) = uVar3;
    *(undefined4 *)(puVar1 + 0x10) = uVar7;
    *(undefined4 *)(puVar1 + 0x14) = uVar8;
    *(undefined4 *)(PTR_DAT_080035e0 + 0x18) = *(undefined4 *)(puVar12 + 10);
    *PTR_DAT_080035e8 = *PTR_DAT_080035e4;
    uVar2 = incrementChar_08002870(*PTR_DAT_080035e8);
    *PTR_DAT_080035e4 = uVar2;
    puVar1 = PTR_DAT_080035e0;
    *(int *)PTR_DAT_080035e0 = iVar4;
    *(int *)(puVar1 + 4) = iVar5;
    *(int *)(puVar1 + 8) = iVar6;
    process_input_and_calculate_result_08002a94_and_process_inputs_08002ba8_and_process_data_08002e08_08002edc();
  }
  return;
}


// FUN_080066cc 0x080066cc
uint calculate_shifted_data_080066cc(void)
{
  uint shifted_data = calculate_data_and_shift_right();
  uint leading_zeroes = count_leading_zeroes(0x70000);
  uint shifted_amount = (*(uint *)(PTR_DAT_08006714 + 8) & 0xe000) >> (leading_zeroes & 0xff);
  return shifted_data >> shifted_amount;
}
// FUN_080018fc 0x080018fc
void set_data_value_080018fc(uint data_value)
{
  // Set the data value at a specific memory location
  *(uint *)(DAT_08001928 + 0x14) = data_value | *(uint *)(DAT_08001928 + 0x14) & 0xfffff55f;
  return;
}
// FUN_080039bc 0x080039bc
void verify_and_send_messages_080039bc(void)
{
  int verification_result;
  undefined4 error_code;
  byte message_index;
  for (message_index = 0; message_index < 2; message_index++) {
    verification_result = verify_checksum(PTR_DAT_08003a14, message_index);
    if (verification_result == 0) {
      send_error_message(10);
    }
    else if (*PTR_DAT_08003a14 != '\0') {
      send_string_to_device(PTR_DAT_08003a14);
      error_code = get_error_code(PTR_DAT_08003a14);
      send_error_message(error_code);
    }
  }
  return;
}
// FUN_0800618c 0x0800618c
uint32_t validate_param_0800618c(uint32_t *param_array, uint32_t param_length) {
  uint32_t value1;
  uint32_t value2;
  uint32_t value3;
  uint32_t value4;
  uint32_t value5;
  uint32_t result = 0;
  if ((*DAT_08006400 & 0xf) < param_length) {
    *(char *)DAT_08006400 = (char)param_length;
    if (param_length != (*DAT_08006400 & 0xf)) {
      return 1;
    }
    if ((*param_array & 1) != 0) {
      uint32_t param_value = param_array[1];
      if (param_value == 1) {
        if ((*DAT_08006404 & 0x20000) == 0) {
          return 1;
        }
      }
      else if (param_value == 2) {
        if ((*DAT_08006404 & 0x2000000) == 0) {
          return 1;
        }
      }
      else if ((*DAT_08006404 & 2) == 0) {
        return 1;
      }
      DAT_08006404[2] = param_value | DAT_08006404[2] & 0xfffffffc;
      value1 = getValueFromPointer_08005a84();
      value2 = value1 + 5000;
      if (param_value == 1) {
        while ((DAT_08006404[2] & 0xc) != 4) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
      else if (param_value == 2) {
        while ((DAT_08006404[2] & 0xc) != 8) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
      else {
        while ((DAT_08006404[2] & 0xc) != 0) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
    }
  }
  else {
    if ((*param_array & 1) != 0) {
      uint32_t param_value = param_array[1];
      if (param_value == 1) {
        if ((*DAT_08006404 & 0x20000) == 0) {
          return 1;
        }
      }
      else if (param_value == 2) {
        if ((*DAT_08006404 & 0x2000000) == 0) {
          return 1;
        }
      }
      else if ((*DAT_08006404 & 2) == 0) {
        return 1;
      }
      DAT_08006404[2] = param_value | DAT_08006404[2] & 0xfffffffc;
      value1 = getValueFromPointer_08005a84();
      value2 = value1 + 5000;
      if (param_value == 1) {
        while ((DAT_08006404[2] & 0xc) != 4) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
      else if (param_value == 2) {
        while ((DAT_08006404[2] & 0xc) != 8) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
      else {
        while ((DAT_08006404[2] & 0xc) != 0) {
          value3 = getValueFromPointer_08005a84();
          if (value2 <= value3) {
            return 3;
          }
        }
      }
    }
    *(char *)DAT_08006400 = (char)param_length;
    if (param_length != (*DAT_08006400 & 0xf)) {
      return 1;
    }
  }
  if ((*param_array & 2) != 0) {
    DAT_08006404[2] = param_array[2] | DAT_08006404[2] & 0xffffff0f;
  }
  if ((*param_array & 4) != 0) {
    DAT_08006404[2] = param_array[3] | DAT_08006404[2] & 0xffffe3ff;
  }
  if ((*param_array & 8) != 0) {
    DAT_08006404[2] = param_array[4] << 3 | DAT_08006404[2] & 0xffff1fff;
  }
  value5 = calculate_data_and_shift_right_08006628();
  uint64_t temp = (uint64_t)PTR_DAT_08006408 * (value5 & 0xffffffff);
  value1 = (uint32_t)(temp >> 0x26);
  value2 = (uint32_t)(value5 >> 0x20);
  value3 = (uint32_t)temp;
  check_param_within_range_08005c30(value1, value2, value3);
  return result;
}
// FUN_08006998 0x08006998
uint get_data_value_08006998()
{
  // Get a specific data value from memory and extract the relevant bits
  uint data_value = *(uint *)(DAT_080069b0 + 0xc);
  uint relevant_bits = data_value >> 8 & 7;
  return relevant_bits;
}
// FUN_080004ac 0x080004ac
void initialize_system_080004ac(void)
{
  int checksum_result;
  // Initialize memory
  fillMemoryWithByte_0800b430(PTR_DAT_080004f0, 0, 0x38);
  // Set data values
  set_data_values_08000478(0, 1, 2);
  // Set flag
  PTR_DAT_080004f0[4] = 1;
  // Verify checksum
  checksum_result = verify_checksum(PTR_DAT_080004f0[0x1c], PTR_DAT_080004f4);
  if (checksum_result == 0) {
    send_error_message(10);
  }
  return;
}
// FUN_080078f4 0x080078f4
uint get_combined_data_value_080078f4()
{
  // Initialize the local variable to hold the combined data value
  uint combined_data_value = 0;
  // Loop through the array and combine the data values
  for (int i = 0; i < 4; i++) {
    combined_data_value |= *(uint *)(PTR_DAT_0800792c + i * 4);
  }
  return combined_data_value;
}
// FUN_080041a0 0x080041a0
void display_status_message_080041a0(int status)
{
  send_string_to_device(PTR_DAT_0800420c);
  switch(status) {
  case 1:
    send_string_to_device(PTR_s_Reset_to_continue_08004210);
    break;
  case 2:
    send_string_to_device(PTR_s___H____X__to_unlock_08004214);
    break;
  case 3:
    send_string_to_device(PTR_s_Caution__Unlocked_08004218);
    break;
  case 4:
    send_string_to_device(PTR_s_Enabled_0800421c);
    break;
  case 5:
    send_string_to_device(PTR_s_Disabled_08004220);
  }
  send_string_to_device(PTR_DAT_08004224);
  return;
}
// FUN_08008bf0 0x08008bf0
uint calculate_value_08008bf0(uint param_1, uint param_2)
{
  // Check if the most significant bit of param_2 is set
  if ((param_2 & 0x80000000) != 0) {
    return 0;
  }
  // Calculate the intermediate value
  int intermediate_value = param_2 * 2 + 0x200000;
  // Check if the intermediate value is less than a certain value
  if (param_2 * 2 < 0xffe00000) {
    // Check if the intermediate value is negative
    if (intermediate_value >= 0) {
      return 0;
    }
    // Calculate the shift amount
    uint shift_amount = -(intermediate_value >> 0x15) - 0x3e1;
    // Check if the shift amount is positive
    if ((int)shift_amount >= 0) {
      return (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (shift_amount & 0xff);
    }
  }
  // Check if param_1 and param_2 are both zero
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  return 0xffffffff;
}
// FUN_08003a18 0x08003a18
void enable_task_execution_if_not_already_enabled_08003a18(uint8_t input_byte) {
    if ((input_byte & 0x80) != 0) {
        enable_task_execution_if_not_already_enabled_08003a18_080025e8();
    }
    else {
        if ((input_byte & 0x40) != 0) {
            PTR_DAT_08003a70[2] |= 8;
        }
        else if ((input_byte & 0x20) != 0) {
            PTR_DAT_08003a70[2] |= 2;
        }
    }
    return;
}
// FUN_08005790 0x08005790
void updateDeviceFlags_08005790(void)
{
  doNothing();
  if (PTR_DAT_080057d4[1] == 0x03) {
    *(unsigned short *)PTR_DAT_080057dc = *(unsigned short *)(PTR_DAT_080057d4 + 0x18);
    *(unsigned short *)(PTR_DAT_080057dc + 2) = *(unsigned short *)(PTR_DAT_080057d4 + 0x1a);
    setGlobalValue_08007c40(0x69);
    setGlobalVariable_08007c5e(((byte)PTR_DAT_080057d4[0xd] + 5) * 0x15);
    set_device_flags_08007b70();
  }
  return;
}
// FUN_08001994 0x08001994

void FUNC_08001994(byte param_1,char param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_61;
  uint local_5c;
  uint local_58;
  uint local_54;
  ushort local_4e;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  ushort local_36;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ushort local_1a;
  uint local_18;
  char local_11;
  
  local_11 = '\0';
  fillMemoryWithByte_0800b430(&local_5c,0,0xc);
  if ((param_1 & 1) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUNC_08008590(*(undefined4 *)PTR_DAT_08001c90);
    local_5c = calculateValue_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 2) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUNC_08008590(*(undefined4 *)(PTR_DAT_08001c90 + 4));
    local_58 = calculateValue_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 4) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUNC_08008590(*(undefined4 *)(PTR_DAT_08001c90 + 8));
    local_54 = calculateValue_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  uVar2 = local_54;
  if (local_54 < local_58) {
    uVar2 = local_58;
  }
  local_40 = local_5c;
  if (local_5c < uVar2) {
    local_40 = uVar2;
  }
  uVar3 = calculateResult_0800854c(local_40);
  uVar4 = calculateResult_0800854c(local_11);
  uVar4 = process_input_and_return_result_080098d0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar3 = FUNC_08008894((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  local_44 = calculateFloat_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = FUNC_08008eec(*(undefined4 *)(PTR_DAT_08001c90 + 0x20),local_44);
  uVar1 = FUNC_08009054(uVar1,DAT_08001c94);
  uVar3 = FUNC_08008590(uVar1);
  uVar3 = calculate_result_08009318((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_48 = calculate_value_08008bf0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar3 = calculateResult_0800854c(local_11);
  uVar3 = process_input_and_return_result_080098d0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar4 = FUNC_08008590(param_4);
  uVar3 = FUNC_08008640((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  uVar1 = calculateFloat_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = FUNC_08008eec(local_44,uVar1);
  uVar1 = FUNC_08009054(DAT_08001c98,uVar1);
  uVar3 = FUNC_08008590(uVar1);
  local_4c = calculateValue_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_18 = DAT_08001c9c;
  if (local_4c < DAT_08001c9c) {
    local_18 = local_4c;
  }
  local_4e = *(ushort *)(PTR_DAT_08001c90 + 0x18);
  local_1a = *(ushort *)(PTR_DAT_08001c90 + 0x1a) ^ *(ushort *)(PTR_DAT_08001c90 + 0x2a) & 0xaa0;
  if (param_2 == '\0') {
    local_1a = local_1a ^ 0xaa0;
  }
  set_data_value_080018fc(local_1a);
  setParam_080018cc(local_4e);
  local_28 = -(local_40 >> 1);
  local_2c = local_18 - (byte)PTR_DAT_08001c90[0xd];
  local_30 = 0;
  local_34 = 10000;
  local_61 = param_1;
  local_24 = local_28;
  local_20 = local_28;
  while( true ) {
    local_36 = local_4e;
    local_3c = get_combined_data_value_080078f4();
    if (param_3 == '\0') {
      local_3c = local_3c ^ 0x1e;
    }
    if (((local_61 & 1) != 0) && (local_20 = local_20 + local_5c, 0 < local_20)) {
      if ((local_3c & 0x10) == 0) {
        local_61 = local_61 & 0xfe;
      }
      else {
        local_36 = local_36 ^ 0x10;
      }
      local_20 = local_20 - local_40;
    }
    if (((local_61 & 2) != 0) && (local_24 = local_24 + local_58, 0 < local_24)) {
      if ((local_3c & 8) == 0) {
        local_61 = local_61 & 0xfd;
      }
      else {
        local_36 = local_36 ^ 0x440;
      }
      local_24 = local_24 - local_40;
    }
    if (((local_61 & 4) != 0) && (local_28 = local_28 + local_54, 0 < local_28)) {
      if ((local_3c & 4) == 0) {
        local_61 = local_61 & 0xfb;
      }
      else {
        local_36 = local_36 ^ 0x100;
      }
      local_28 = local_28 - local_40;
    }
    if ((local_61 == 0) || ((PTR_DAT_08001d40[2] & 0x10) != 0)) break;
    setParam_080018cc(local_36);
    doNothing_08002828(PTR_DAT_08001d44[0xd]);
    setParam_080018cc(local_4e);
    doNothing_08002828(local_2c);
    if ((local_4c < local_18) && (local_34 = local_18 + local_34, 20000 < local_34)) {
      local_34 = local_34 - 20000;
      local_30 = local_48 + local_30;
      local_18 = DAT_08001d48 / local_30;
      if (local_18 < local_4c) {
        local_18 = local_4c;
      }
      local_2c = local_18 - (byte)PTR_DAT_08001d44[0xd];
    }
  }
  return;
}


// FUN_08007854 0x08007854
uint get_bit_at_index_08007854(uint bit_index)
{
  // Calculate the index of the array and the bit to retrieve
  int array_index = (int)bit_index >> 4;
  int bit_offset = bit_index & 0xf;
  // Retrieve the bit at the specified index from the array
  uint bit_value = *(uint *)(array_index * 0x400 + 0x40020010) >> bit_offset & 1;
  return bit_value;
}
// FUN_08004900 0x08004900
void print_device_information_08004900(undefined device_name, undefined4 device_id)
{
  send_string_to_device(device_name);
  print_device_id(device_id);
  send_end_of_device_info();
  return;
}
// FUN_08005318 0x08005318
void do_nothing_08005318(void)
{
  return;
}
// FUN_08004228 0x08004228
void send_help_message_08004228(void)
{
  send_string_to_device(PTR_s__Grbl_0_8c______for_help__08004238);
  return;
}
// FUN_08009b24 0x08009b24

uint FUNC_08009b24(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_3c;
  
  uVar1 = DAT_08009d70;
  param_2 = param_2 & 0x7fffffff;
  param_4 = param_4 & 0x7fffffff;
  uVar3 = param_1;
  uVar7 = param_2;
  if (param_2 < param_4) {
    uVar3 = param_3;
    param_3 = param_1;
    uVar7 = param_4;
    param_4 = param_2;
  }
  if (0x3c00000 < (int)(uVar7 - param_4)) {
    uVar3 = FUNC_080082d4(uVar3,uVar7,param_3,param_4);
    return uVar3;
  }
  if (DAT_08009d68 < (int)uVar7) {
    if (DAT_08009d74 < (int)uVar7) {
      if ((uVar7 & 0xfffff | uVar3) != 0) {
        uVar3 = FUNC_080082d4(uVar3,uVar7,param_3,param_4);
      }
      if ((param_4 ^ 0x7ff00000 | param_3) != 0) {
        return uVar3;
      }
      return param_3;
    }
    uVar7 = uVar7 + 0xda800000;
    param_4 = param_4 + 0xda800000;
    local_3c = 600;
  }
  else {
    local_3c = 0;
  }
  uVar11 = CONCAT44(uVar7,uVar3);
  uVar10 = CONCAT44(param_4,param_3);
  if ((int)param_4 <= DAT_08009d6c) {
    if ((int)param_4 < 0x100000) {
      if ((param_4 | param_3) == 0) {
        return uVar3;
      }
      uVar10 = FUNC_08008640(param_3,param_4,0,DAT_08009d70);
      uVar11 = FUNC_08008640(uVar3,uVar7,0,uVar1);
      local_3c = local_3c + -0x3fe;
    }
    else {
      uVar7 = uVar7 + 0x25800000;
      uVar11 = CONCAT44(uVar7,uVar3);
      param_4 = param_4 + 0x25800000;
      uVar10 = CONCAT44(param_4,param_3);
      local_3c = local_3c + -600;
    }
  }
  uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar8 = (undefined4)uVar11;
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = FUNC_080082d0(uVar8,uVar9,uVar5,iVar6);
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  iVar2 = is_end_of_input_08008b24(uVar5,iVar6,uVar1,iVar4);
  if (iVar2 == 0) {
    uVar10 = FUNC_08008640(0,param_4,0);
    uVar11 = FUNC_08008640(uVar1,iVar4 + -0x80000000,uVar1,iVar4);
    uVar12 = FUNC_080082d4(uVar8,uVar9,uVar8,uVar9);
    uVar12 = FUNC_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = FUNC_08008640((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar5,iVar6);
    uVar13 = FUNC_080082d0(uVar5,iVar6,0,param_4);
    uVar13 = FUNC_08008640((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = FUNC_080082d4((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = FUNC_080082d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = FUNC_0800a1bc();
  }
  else {
    uVar10 = FUNC_08008640(0,uVar7,0,uVar7);
    uVar11 = FUNC_08008640(uVar5,iVar6 + -0x80000000,uVar5,iVar6);
    uVar12 = FUNC_080082d4(uVar8,uVar9,0,uVar7);
    uVar13 = FUNC_080082d0(uVar8,uVar9,0,uVar7);
    uVar12 = FUNC_08008640((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = FUNC_080082d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = FUNC_0800a1bc();
  }
  uVar3 = (uint)uVar10;
  if (local_3c != 0) {
    uVar3 = FUNC_08008640(uVar3,(int)((ulonglong)uVar10 >> 0x20),0,local_3c * 0x100000 + 0x3ff00000);
  }
  return uVar3;
}


// FUN_080076c8 0x080076c8
void updateBit_080076c8(uint num)
{
    uint* PTR_ = (uint*)((int)num >> 4) * 0x400 + 0x40020014;
    uint DAT_ = 1 << (num & 0xf);
    *PTR_ = (*PTR_) ^ DAT_;
    return;
}
// FUN_0800530c 0x0800530c
void doNothing_0800530c(void)
{
  return;
}
// FUN_08006a8c 0x08006a8c
void set_bit_in_array_08006a8c(byte bit_index) {
    int* PTR_DAT_08006abc = (int*)(DAT_08006abc + (((uint)(int)(char)bit_index >> 5) + 0x60) * 4);
    int bit_mask = 1 << (bit_index & 0x1f);
    *PTR_DAT_08006abc = bit_mask;
    return;
}
// FUN_0800283a 0x0800283a
void set_and_store_twos_complement_0800283a(void)
{
  int *(undefined4 *)(PTR_DAT_08002868 + 4) = *(int *)(PTR_DAT_08002868 + 4);
  int *(undefined4 *)(PTR_DAT_08002868 + 8) = *(int *)(PTR_DAT_08002868 + 8);
  int *(undefined4 *)(PTR_DAT_08002868 + 0xc) = *(int *)(PTR_DAT_08002868 + 0xc);
  setValuesInGlobalArray_080035ec(*(undefined4 *)(PTR_DAT_08002868 + 4), *(undefined4 *)(PTR_DAT_08002868 + 8), *(undefined4 *)(PTR_DAT_08002868 + 0xc));
  calculate_and_store_twos_complement_080004fc(*(undefined4 *)(PTR_DAT_08002868 + 4), *(undefined4 *)(PTR_DAT_08002868 + 8), *(undefined4 *)(PTR_DAT_08002868 + 0xc));
  return;
}
// FUN_0800881c 0x0800881c
ulonglong calculate_result_0800881c(uint input_param_1, uint input_param_2, uint input_param_3, uint input_param_4) {
  uint var_1;
  uint var_2;
  uint var_3;
  uint var_4;
  uint var_5;
  uint var_6;
  bool var_7;
  var_2 = input_param_4 >> 0x14;
  var_3 = input_param_2 & 0x80000000;
  var_6 = 0x7ff8000000000000;
  if (input_param_1 != input_param_3 && var_2 != input_param_3) {
    var_7 = (input_param_1 | input_param_2 << 1) == 0;
    if (!var_7) {
      var_7 = (input_param_3 | input_param_4 << 1) == 0;
    }
    if (var_7) {
      return (ulonglong)((input_param_2 ^ input_param_4) & 0x80000000) << 0x20;
    }
    if (input_param_1 == 0) {
      do {
        var_1 = input_param_1 & 0x80000000;
        input_param_1 = input_param_1 << 1;
        input_param_2 = input_param_2 * 2 + (uint)(var_1 != 0);
      } while ((input_param_2 & 0x100000) == 0);
      input_param_2 = input_param_2 | var_3;
      if (var_2 != 0) {
        return CONCAT44(input_param_2, input_param_1);
      }
    }
    do {
      var_2 = input_param_3 & 0x80000000;
      input_param_3 = input_param_3 << 1;
      input_param_4 = input_param_4 * 2 + (uint)(var_2 != 0);
    } while ((input_param_4 & 0x100000) == 0);
    return CONCAT44(input_param_2, input_param_1);
  }
  var_7 = (input_param_1 | input_param_2 << 1) == 0;
  if (var_7) {
    input_param_2 = input_param_4;
    input_param_1 = input_param_3;
  }
  if (!var_7) {
    var_7 = (input_param_3 | input_param_4 << 1) == 0;
  }
  var_5 = input_param_2;
  if (((!var_7) && ((input_param_1 != input_param_3 || ((input_param_2 | input_param_4 << 0xc) == 0)))) && ((var_2 != input_param_3 || (input_param_1 = input_param_3, var_5 = input_param_4, (input_param_3 | input_param_4 << 0xc) == 0)))) {
    return (ulonglong)((input_param_2 ^ input_param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(var_5, input_param_1) | var_6;
}
// FUN_08004bc0 0x08004bc0
void set_memory_checksum_08004bc0(byte data, uint32_t value){
    uint32_t address = (ushort)data * 0x101 + 0x300;
    uint32_t size = 0x100;
    set_memory_with_checksum_08000374(address, value, size);
    return;
}
// FUN_08008b4c 0x08008b4c
bool check_for_zero_or_carry_flag_08008b4c(void)
{
  bool zero_flag = compare_and_return_uint_values();
  bool carry_flag = (bool)in_CY;
  return !carry_flag || zero_flag;
}
// FUN_08004c2a 0x08004c2a
void initializeMemory_08004c2a(void)
{
  setMemoryValue(0, 5);
  setMemoryWithChecksum(1, PTR_DAT_08004c44, 0x40);
  return;
}
// FUN_0800826a 0x0800826a
int send_byte_to_device_0800826a(unsigned char data){
                      send_byte_to_device_0800826a_08007e1c(data);
                      return 0;
                  }
// FUN_08008b60 0x08008b60
bool is_end_of_string_reached_08008b60(void)
{
  char current_char;
  compare_and_return_uint_values();
  return current_char == '\0';
}
// FUN_08005324 0x08005324
void calculateAndUpdateValue_08005324(uint value) {
  uint minimumValue = 800;
  uint calculatedValue = DAT_08005358 / (value < minimumValue ? minimumValue : value);
  *(uint *)(PTR_DAT_0800535c + 0x14) = calculatedValue;
  updateGlobalValue_08007bf0(calculatedValue);
  return;
}
// FUN_08000310 0x08000310
uint32_t get_memory_value_08000310(uint32_t index) {
  if (*PTR_DAT_08000338 == 0) {
    initialize_memory();
  }
  return PTR_DAT_0800033c[index & 0x3ff];
}
// FUN_08005208 0x08005208
void do_nothing_08005208(void)
{
  return;
}
// FUN_08007a70 0x08007a70
void set_data_value_and_set_bit_in_array_08007a70(int data_value, int param_2, int param_3) {
  int index;
  if (data_value == 0x40000000) {
    index = 0x1c;
  }
  else if (data_value == DAT_08007ac8) {
    index = 0x1d;
  }
  else {
    if (data_value != DAT_08007acc) {
      return;
    }
    index = 0x1e;
  }
  set_data_value_at_index_08006cf6(index, param_2, param_3);
  setBitInArray_080079e0(index);
  return;
}
// FUN_0800b5b0 0x0800b5b0
void do_nothing_0800b5b0() {
  return;
}
// FUN_08002978 0x08002978
float calculate_result_from_input_08002978(float input_1, float input_2, float input_3) {
  float intermediate_result_1 = FUNC_08008eec(input_2, input_2);
  float intermediate_result_2 = FUNC_08008cdc(input_1, input_1);
  intermediate_result_2 = FUNC_08008eec(intermediate_result_2, input_3);
  float intermediate_result_3 = FUNC_08008cd8(intermediate_result_1, intermediate_result_2);
  long long intermediate_result_4 = FUNC_08008590(intermediate_result_3);
  int processed_input_1 = (int)intermediate_result_4;
  int processed_input_2 = (int)((unsigned long long)intermediate_result_4 >> 0x20);
  float final_result = calculateFloat_08008c30(processed_input_1, processed_input_2);
  return final_result;
}
// FUN_08009d78 0x08009d78

/* WARNING: Could not reconcile some variable overlaps */

int FUNC_08009d78(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar8 = param_2 & 0x7fffffff;
  if ((int)uVar8 <= DAT_08009fb0) {
    *(undefined4 *)param_3 = param_1;
    *(uint *)((int)param_3 + 4) = param_2;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    return 0;
  }
  if ((int)uVar8 <= DAT_08009fb4) {
    if ((int)param_2 < 1) {
      uVar10 = FUNC_080082d4(param_1,param_2,DAT_08009f88,DAT_08009f8c);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar1 = (undefined4)uVar10;
      if (uVar8 != DAT_0800a1b8) {
        uVar10 = FUNC_080082d4(uVar1,uVar3,DAT_0800a1b0,DAT_0800a1b4);
        *param_3 = uVar10;
        uVar10 = FUNC_080082d0(uVar1,uVar3);
        uVar10 = FUNC_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800a1b0,DAT_0800a1b4
                             );
        param_3[1] = uVar10;
        return -1;
      }
      uVar10 = FUNC_080082d4(uVar1,uVar3,DAT_0800a190,DAT_0800a194);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar11 = FUNC_080082d4((int)uVar10,uVar1,DAT_0800a198,DAT_0800a19c);
      *param_3 = uVar11;
      uVar10 = FUNC_080082d0((int)uVar10,uVar1);
      uVar10 = FUNC_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800a198,DAT_0800a19c);
      param_3[1] = uVar10;
      return -1;
    }
    uVar10 = FUNC_080082d0();
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    if (uVar8 != DAT_08009fb8) {
      uVar10 = FUNC_080082d0(uVar1,uVar3,DAT_08009f90,DAT_08009f94);
      *param_3 = uVar10;
      uVar10 = FUNC_080082d0(uVar1,uVar3);
      uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08009f90,DAT_08009f94);
      param_3[1] = uVar10;
      return 1;
    }
    uVar10 = FUNC_080082d0(uVar1,uVar3,DAT_08009f98,DAT_08009f9c);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUNC_080082d0((int)uVar10,uVar1,DAT_08009fa0,DAT_08009fa4);
    *param_3 = uVar11;
    uVar10 = FUNC_080082d0((int)uVar10,uVar1);
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08009fa0,DAT_08009fa4);
    param_3[1] = uVar10;
    return 1;
  }
  if (DAT_08009fbc < (int)uVar8) {
    if (DAT_08009fc0 < (int)uVar8) {
      uVar10 = FUNC_080082d0(param_1,param_2,param_1,param_2);
      param_3[1] = uVar10;
      *param_3 = uVar10;
      return 0;
    }
    iVar9 = ((int)uVar8 >> 0x14) + -0x416;
    calculateValue_08008ba0();
    local_40 = FUNC_0800856c();
    uVar10 = FUNC_080082d0(param_1,uVar8 + iVar9 * -0x100000,(int)local_40,
                          (int)((ulonglong)local_40 >> 0x20));
    uVar10 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_08009fc4);
    calculateValue_08008ba0();
    local_38 = FUNC_0800856c();
    uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    local_30 = FUNC_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_08009fc4);
    check_input_is_not_null_char_08008b10((int)local_30,(int)((ulonglong)local_30 >> 0x20),0,0);
    iVar9 = FUNC_0800a5a0(&local_40,param_3,iVar9);
    if (-1 < (int)param_2) {
      return iVar9;
    }
    *(int *)((int)param_3 + 4) = *(int *)((int)param_3 + 4) + -0x80000000;
    *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + -0x80000000;
    return -iVar9;
  }
  uVar10 = doNothing_0800b2cc();
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar11 = FUNC_08008640((int)uVar10,uVar3,DAT_08009fa8,DAT_08009fac);
  FUNC_080082d4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_08009fcc);
  iVar9 = calculateValue_08008ba0();
  uVar11 = FUNC_0800856c();
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar1 = (undefined4)uVar11;
  uVar11 = FUNC_08008640(uVar1,uVar4,DAT_08009f88,DAT_08009f8c);
  uVar10 = FUNC_080082d0((int)uVar10,uVar3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (undefined4)uVar10;
  uVar11 = FUNC_08008640(uVar1,uVar4,DAT_08009f90,DAT_08009f94);
  if ((0x1f < iVar9) || (*(uint *)(PTR_DAT_08009fd0 + (iVar9 + -1) * 4) == uVar8)) {
    uVar12 = FUNC_080082d0(uVar3,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)((uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x11)
    goto LAB_0800a0ce;
    uVar11 = FUNC_08008640(uVar1,uVar4,DAT_0800a190,DAT_0800a194);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = FUNC_080082d0(uVar3,uVar5,(int)uVar11,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = (undefined4)uVar10;
    uVar12 = FUNC_080082d0(uVar3,uVar5,uVar2,uVar7);
    uVar11 = FUNC_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar6);
    uVar12 = FUNC_08008640(uVar1,uVar4,DAT_0800a198,DAT_0800a19c);
    uVar11 = FUNC_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    uVar12 = FUNC_080082d0(uVar2,uVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)(((int)uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x32
       ) goto LAB_0800a0ce;
    uVar11 = FUNC_08008640(uVar1,uVar4,DAT_0800a1a0,DAT_0800a1a4);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = FUNC_080082d0(uVar2,uVar7,(int)uVar11,uVar3);
    uVar12 = FUNC_080082d0(uVar2,uVar7);
    uVar11 = FUNC_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar3);
    uVar12 = FUNC_08008640(uVar1,uVar4,DAT_0800a1a8,DAT_0800a1ac);
    uVar11 = FUNC_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
  }
  uVar12 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
LAB_0800a0ce:
  uStack_4c = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_50 = (undefined4)uVar10;
  *param_3 = uVar12;
  uVar10 = FUNC_080082d0(local_50,uStack_4c);
  uVar10 = FUNC_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
  param_3[1] = uVar10;
  if ((int)param_2 < 0) {
    *(int *)param_3 = (int)uVar12;
    *(int *)((int)param_3 + 4) = (int)((ulonglong)uVar12 >> 0x20) + -0x80000000;
    *(int *)(param_3 + 1) = (int)uVar10;
    *(int *)((int)param_3 + 0xc) = (int)((ulonglong)uVar10 >> 0x20) + -0x80000000;
    iVar9 = -iVar9;
  }
  return iVar9;
}


// FUN_08003826 0x08003826
void print_float_08003826(uint input){
  int is_input_empty = is_input_empty_08009228(input,0);
  uint modified_input = input;
  if (is_input_empty != 0) {
    send_byte_to_device_08008250(0x2d);
    modified_input = input ^ 0x80000000;
  }
  for (byte i = PTR_DAT_08003970[0x3d]; i > 1; i -= 2) {
    modified_input = FUNC_08008eec(modified_input,DAT_08003974);
  }
  if (i != 0) {
    modified_input = FUNC_08008eec(modified_input,DAT_08003978);
  }
  uint integer_part = FUNC_08008cdc(modified_input,0x3f000000);
  byte decimal_point_index = (byte)PTR_DAT_08003970[0x3d] + 1;
  char result[14];
  result[decimal_point_index] = '.';
  byte index = decimal_point_index + 1;
  while (integer_part != 0) {
    if (index == PTR_DAT_08003970[0x3d] + 1) {
      index++;
    }
    uint remainder = integer_part % 10;
    integer_part = integer_part / 10;
    result[index] = remainder + '0';
    index++;
  }
  while (index < PTR_DAT_08003970[0x3d] + 1) {
    result[index] = '0';
    index++;
  }
  if (index == PTR_DAT_08003970[0x3d] + 1) {
    byte bVar3 = index + 1;
    index += 2;
    result[bVar3 + 1] = '0';
  }
  for (; index != 0; index--) {
    send_byte_to_device_08008250(result[index]);
  }
}
// FUN_0800923c 0x0800923c
bool check_result_and_return_concatenation_0800923c(void)
{
  bool is_CY_zero;
  bool is_ZR_nonzero;
  calculateResultAndReturnConcatenation_08009204_08009204();
  return !is_CY_zero || is_ZR_nonzero;
}
// FUN_08002afc 0x08002afc
void process_input_08002afc(int input1, int input2) {
  int is_input_empty;
  undefined4 result1;
  undefined4 result2;
  
  if (input1 != 0 && *(char *)(input1 + 0x25) == '\0' && (is_input_empty = is_input_empty_08009228(*(undefined4 *)(input1 + 0x18), *(undefined4 *)(input2 + 0x18))) != 0) {
    result2 = *(undefined4 *)(input2 + 0x18);
    result1 = calculate_result_from_input_08002978(*(uint *)(PTR_DAT_08002ba4 + 0x20) ^ 0x80000000, *(undefined4 *)(input1 + 0x18), *(undefined4 *)(input1 + 0x20));
    is_input_empty = is_input_empty_08009228(result2, result1);
    if (is_input_empty != 0) {
      result2 = *(undefined4 *)(input2 + 0x18);
    }
    else {
      result2 = calculate_result_from_input_08002978(*(uint *)(PTR_DAT_08002ba4 + 0x20) ^ 0x80000000, *(undefined4 *)(input1 + 0x18), *(undefined4 *)(input1 + 0x20));
    }
    if (checkResultIsNotEmpty_08009214(result2, *(undefined4 *)(input2 + 0x18)) == 0) {
      *(undefined4 *)(input2 + 0x18) = result2;
      *(undefined *)(input2 + 0x24) = 1;
    }
  }
  return;
}
// FUN_08004c48 0x08004c48
void initializeData_08004c48(char data)
{
    if (data != '\0') {
        int* PTR_DAT_08004d0c = (int*) PTR_DAT_08004d0c;
        int DAT_08004d10 = DAT_08004d10;
        PTR_DAT_08004d0c[0] = DAT_08004d10;
        PTR_DAT_08004d0c[1] = DAT_08004d10;
        PTR_DAT_08004d0c[2] = DAT_08004d10;
        PTR_DAT_08004d0c[13] = 10;
        PTR_DAT_08004d0c[4] = DAT_08004d14;
        PTR_DAT_08004d0c[5] = DAT_08004d18;
        PTR_DAT_08004d0c[8] = DAT_08004d1c;
        PTR_DAT_08004d0c[7] = DAT_08004d20;
        *(short*)(PTR_DAT_08004d0c + 6) = 0;
        *(short*)(PTR_DAT_08004d0c + 6) = 0xa80;
        PTR_DAT_08004d0c[9] = DAT_08004d24;
    }
    PTR_DAT_08004d0c[40] = 0;
    PTR_DAT_08004d0c[40] |= 2;
    PTR_DAT_08004d0c[40] |= 0x10;
    *(short*)(PTR_DAT_08004d0c + 42) = 0;
    PTR_DAT_08004d0c[44] = DAT_08004d28;
    PTR_DAT_08004d0c[48] = DAT_08004d14;
    *(short*)(PTR_DAT_08004d0c + 52) = 100;
    PTR_DAT_08004d0c[56] = 0x3f800000;
    PTR_DAT_08004d0c[60] = 0x19;
    PTR_DAT_08004d0c[61] = 3;
    PTR_DAT_08004d0c[62] = 0x19;
    initializeMemory_08004c2a();
    return;
}
// FUN_080002a0 0x080002a0
void wait_for_value_to_be_greater_than_sum_of_value_and_parameter_080002a0(int value)
{
  wait_for_value_to_be_greater_than_sum_of_value_and_parameter_080002a0(value);
  return;
}
// FUN_08009250 0x08009250
bool check_results_08009250(void)
{
  bool zero_result;
  bool carry_result;
  calculate_and_concatenate_results();
  return !(bool)carry_result || (bool)zero_result;
}
// FUN_0800640c 0x0800640c
void process_data_0800640c(int data_type, uint32_t param_2, uint32_t param_3) {
  uint32_t* data_ptr = (data_type == 0) ? (uint32_t*)DAT_080064b4 : (uint32_t*)DAT_080064b8;
  uint32_t flag = (data_type == 0) ? 1 : 4;
  *(uint32_t*)(DAT_080064b0 + 0x30) |= flag;
  uint32_t local_1 = (data_type == 0) ? 0x100 : 0x200;
  uint32_t local_2 = 2;
  uint32_t local_3 = 3;
  uint32_t local_4 = 0;
  uint32_t local_5 = 0;
  FUNC_08006e88(data_ptr, &local_1);
  uint32_t mask = (data_type == 0) ? 0xf89fffff : 0x7ffffff;
  *(uint32_t*)(DAT_080064b0 + 8) = (param_2 | (param_3 << 3)) | (*(uint32_t*)(DAT_080064b0 + 8) & mask);
}
// FUN_08008af0 0x08008af0
void compare_and_return_uint_values_08008af0(uint32_t value1, uint32_t value2, uint32_t value3, uint32_t value4)
{
  compare_and_return_uint_values_08008af0_08008b00_08008b00(value3, value4, value1, value2);
  return;
}
// FUN_08006e1a 0x08006e1a
int is_bit_set_08006e1a(int bit_index) {
  int is_set = isBitSet_08006ac0(bit_index);
  return is_set;
}
// FUN_080052ac 0x080052ac
void update_param_080052ac(uint new_param)
{
  uint* PTR_080052d8 = (uint*)(DAT_080052d8 + 0x14);
  uint *PTR_080052d8 = *PTR_080052d8;
  uint mask = 0xfffffaaf;
  *PTR_080052d8 = (new_param | (*PTR_080052d8 & mask));
  return;
}
// FUN_08008286 0x08008286
uint8_t process_next_byte_08008286()
{
  uint8_t byte;
  int bit_set = isBitSet_08007e58();
  if (bit_set) {
    byte = getByteFromGlobal_08007e84();
    int result = process_byte(byte);
    if (result == 0) {
      return byte;
    }
  }
  return 0xff;
}
// FUN_0800b5bc 0x0800b5bc
void doNothing_0800b5bc(void)
{
  return;
}
// FUN_08008b74 0x08008b74
int is_valid_input_08008b74(uint input1, int input2, uint input3, int input4) {
  int is_input2_valid = (((input2 << 1) >> 0x15 != -1) || ((input1 | input2 << 0xc) == 0));
  int is_input4_valid = (((input4 << 1) >> 0x15 != -1 || ((input3 | input4 << 0xc) == 0)));
  if (is_input2_valid && is_input4_valid) {
    return 1;
  }
  return 0;
}
// FUN_0800b524 0x0800b524
int add_param_to_list_0800b524(int param_type, int param_value, int param_3, int param_4) {
  uint list_size;
  int list_ptr;
  int list_end_ptr;
  uint bit_index;
  uint bit_mask;
  list_ptr = *global_list_ptr_ptr;
  do_nothing(*global_list_ptr_ptr);
  list_end_ptr = *(int *)(list_ptr + 0x148);
  if (list_end_ptr == 0) {
    list_end_ptr = list_ptr + 0x14c;
    *(int *)(list_ptr + 0x148) = list_end_ptr;
  }
  list_size = *(uint *)(list_end_ptr + 4);
  if ((int)list_size < 0x20) {
    if (param_type != 0) {
      list_ptr = list_end_ptr + list_size * 4;
      *(int *)(list_ptr + 0x88) = param_3;
      bit_mask = 1 << (list_size & 0xff);
      *(uint *)(list_end_ptr + 0x188) = *(uint *)(list_end_ptr + 0x188) | bit_mask;
      *(int *)(list_ptr + 0x108) = param_4;
      if (param_type == 2) {
        *(uint *)(list_end_ptr + 0x18c) = bit_mask | *(uint *)(list_end_ptr + 0x18c);
      }
    }
    do_nothing(*global_list_ptr_ptr);
    *(uint *)(list_end_ptr + 4) = list_size + 1;
    *(int *)(list_end_ptr + (list_size + 2) * 4) = param_value;
    do_nothing(*global_list_ptr_ptr);
    return 0;
  }
  else {
    do_nothing(*global_list_ptr_ptr);
    return -1;
  }
}
// FUN_08005214 0x08005214
void do_nothing_08005214(void)
{
  return;
}
// FUN_08007ea4 0x08007ea4
void set_flag_08007ea4(uint flag_value) {
  uint* flag_44 = (uint*)(DAT_08007f3c + 0x44);
  uint* flag_40 = (uint*)(DAT_08007f3c + 0x40);
  switch(flag_value) {
    case DAT_08007f38:
      *flag_44 |= 0x10;
      break;
    case DAT_08007f40:
      *flag_40 |= 0x20000;
      break;
    case DAT_08007f44:
      *flag_40 |= 0x40000;
      break;
    case DAT_08007f48:
      *flag_40 |= 0x80000;
      break;
    case DAT_08007f4c:
      *flag_40 |= 0x100000;
      break;
    case DAT_08007f50:
      *flag_44 |= 0x20;
      break;
  }
}
// FUN_08007756 0x08007756
void checkAndUpdateData_08007756(void)
{
  uint currentValue = getValueFromPointer_08005a84();
  if ((currentValue & 0x1ff) == 0) {
    setBit(0x3c);
  }
  if ((currentValue & 0xf) == 0) {
    processData();
  }
  incrementValueInGlobalInt_08005a68();
  return;
}
// FUN_0800b520 0x0800b520
void do_nothing_0800b520(void) {
  return;
}

// FUN_0800423c 0x0800423c
void printGrblSettings_0800423c() {
  send_string_to_device(PTR_s_____view_Grbl_settings______view_0800424c);
  return;
}
// FUN_08009264 0x08009264
bool is_end_of_input_reached_08009264(void)
{
  char current_character;
  calculate_and_concatenate_results();
  return current_character == '\0';
}
// FUN_08007e08 0x08007e08
void initialize_and_set_flags_08007e08(void)
{
  initialize_data();
  initialize_flags();
  setFlagsInMemory_08007da8();
  return;
}
// FUN_08002fac 0x08002fac
bool are_pointers_equal_08002fac() {
  bool are_equal = (*PTR_DAT_08002fcc == *PTR_DAT_08002fd0);
  return are_equal;
}
// FUN_080002b6 0x080002b6
void waitForValueToChange_080002b6(uint baseValue) {
  uint newValueHigh, newValueLow;
  bool isGreaterOrEqual;
  longlong valueToAdd = calculateValueToAddToBaseValue();
  newValueHigh = (uint)(valueToAdd + (ulonglong)baseValue >> 0x20);
  do {
    newValueLow = (uint)((ulonglong)calculateValueToAddToBaseValue() >> 0x20);
    isGreaterOrEqual = newValueHigh <= newValueLow;
    if (newValueLow == newValueHigh) {
      isGreaterOrEqual = (uint)(valueToAdd + (ulonglong)baseValue) <= (uint)calculateValueToAddToBaseValue();
    }
  } while (!isGreaterOrEqual);
  return;
}