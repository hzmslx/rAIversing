
////>>0x000800f4>>FUN_000800f4>>////

undefined4 FUN_000800f4(undefined4 param_1)

{
  if (*PTR_DAT_0008010c == '\0') {
    if (DAT_00080110 != 0) {
      param_1 = DAT_00080114;
    }
    *PTR_DAT_0008010c = 1;
  }
  return param_1;
}


////>>0x00080118>>FUN_00080118>>////

void FUN_00080118(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_00080134 != 0) {
    param_2 = PTR_DAT_0008013c;
  }
  if ((*DAT_00080140 != 0) && (DAT_00080144 != (code *)0x0)) {
    (*DAT_00080144)(DAT_00080140,param_2,param_3,DAT_00080144,param_4);
  }
  return;
}


////>>0x00080164>>FUN_00080164>>////

void FUN_00080164(int **param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_000801ac;
  *param_1 = (int *)PTR_DAT_000801ac;
  (**(code **)(*(int *)puVar1 + 0x18))(PTR_DAT_000801ac);
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081210(*(byte *)((int)param_1 + 6),1);
    FUN_00081318(*(undefined *)((int)param_1 + 6),0);
  }
  do {
    iVar2 = (**(code **)(**param_1 + 0xc))();
  } while (-1 < iVar2);
  *(undefined *)((int)param_1 + 0x49) = 0;
  *(undefined *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}


////>>0x000801b0>>FUN_000801b0>>////

int FUN_000801b0(int **param_1)

{
  bool bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),0);
  }
  bVar1 = false;
  *(undefined *)((int)param_1 + 0x49) = 0;
  if (*(byte *)((int)param_1 + 5) < 4) {
    while (iVar4 = (**(code **)(**param_1 + 8))(), iVar4 != 0) {
      bVar5 = *(byte *)((int)param_1 + 0x49);
      uVar2 = (**(code **)(**param_1 + 0xc))();
      cVar3 = *(char *)((int)param_1 + 0x49);
      *(undefined *)((int)param_1 + bVar5 + 9) = uVar2;
      bVar5 = cVar3 + 1;
      *(byte *)((int)param_1 + 0x49) = bVar5;
      if (0x3f < bVar5) {
        bVar1 = true;
      }
    }
  }
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + 1;
  if (bVar1) {
    cVar3 = -3;
    *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0x15) + 1;
  }
  else {
    cVar3 = *(char *)((int)param_1 + 0x49);
  }
  return (int)cVar3;
}


////>>0x0008021c>>FUN_0008021c>>////

uint FUN_0008021c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0xffff;
  for (iVar1 = param_1; (iVar1 - param_1 & 0xffU) < param_2; iVar1 = iVar1 + 1) {
    uVar2 = uVar2 ^ *(byte *)(iVar1 + 9);
    cVar3 = '\b';
    do {
      uVar4 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      if (uVar4 != 0) {
        uVar2 = uVar2 ^ 0xa001;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  return (uVar2 & 0xff) << 8 | uVar2 >> 8;
}


////>>0x00080258>>FUN_00080258>>////

void FUN_00080258(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)((int)param_1 + 0x49);
  uVar4 = (uint)bVar1;
  uVar2 = FUN_0008021c(param_1,uVar4,param_3,param_4,param_4);
  *(char *)((int)param_1 + uVar4 + 9) = (char)((ushort)uVar2 >> 8);
  *(char *)((int)param_1 + (uVar4 + 1 & 0xff) + 9) = (char)uVar2;
  *(byte *)((int)param_1 + 0x49) = bVar1 + 2;
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),1);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    (**(code **)(**param_1 + 4))(*param_1,(int)param_1 + 9,*(undefined *)((int)param_1 + 0x49));
  }
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),0);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    do {
      iVar3 = (**(code **)(**param_1 + 0xc))();
    } while (-1 < iVar3);
  }
  *(undefined *)((int)param_1 + 0x49) = 0;
  iVar3 = thunk_FUN_00081714();
  param_1[0x17] = (int *)(iVar3 + (uint)*(ushort *)((int)param_1 + 0x56));
  *(short *)((int)param_1 + 0x52) = *(short *)((int)param_1 + 0x52) + 1;
  return;
}


////>>0x000802da>>FUN_000802da>>////

int FUN_000802da(int param_1,ushort param_2,ushort *param_3)

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
  FUN_00080258(param_1);
  *(undefined *)(param_1 + 7) = 1;
  cVar1 = '\0';
LAB_000803cc:
  return (int)cVar1;
}


////>>0x000803d4>>FUN_000803d4>>////

undefined4 FUN_000803d4(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 10) << 0x18) < 0) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
    return 0xfb;
  }
  iVar1 = 0;
  do {
    if (PTR_DAT_0008040c[iVar1] == *(byte *)(param_1 + 10)) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
  return 1;
}


////>>0x00080410>>FUN_00080410>>////

void FUN_00080410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = 0;
  while( true ) {
    uVar4 = (uint)bVar3;
    bVar3 = bVar3 + 1;
    if (*(byte *)(param_1 + 0xb) >> 1 <= uVar4) break;
    iVar2 = (uVar4 * 2 + 3 & 0xff) + param_1;
    iVar5 = *(int *)(param_1 + 0x4c);
    uVar1 = FUN_000815f8(*(undefined *)(iVar2 + 9),*(undefined *)(iVar2 + 10),iVar2,
                         *(byte *)(param_1 + 0xb),param_4);
    *(undefined2 *)(iVar5 + uVar4 * 2) = uVar1;
  }
  return;
}


////>>0x0008043e>>FUN_0008043e>>////

int FUN_0008043e(int **param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint unaff_r6;
  
  if (*(byte *)((int)param_1 + 5) < 4) {
    uVar2 = (**(code **)(**param_1 + 8))();
    unaff_r6 = uVar2 & 0xff;
  }
  piVar3 = (int *)thunk_FUN_00081714();
  if (param_1[0x17] < piVar3) {
    *(undefined *)(param_1 + 2) = 0xff;
    *(undefined *)((int)param_1 + 7) = 0;
    *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0x15) + 1;
  }
  else if (7 < unaff_r6) {
    FUN_000801b0(param_1);
    iVar4 = FUN_000803d4(param_1);
    if (iVar4 == 0) {
      if (*(byte *)((int)param_1 + 10) - 3 < 2) {
        FUN_00080410(param_1);
      }
      *(undefined *)((int)param_1 + 7) = 0;
      cVar1 = *(char *)((int)param_1 + 0x49);
    }
    else {
      *(undefined *)((int)param_1 + 7) = 0;
      cVar1 = (char)iVar4;
    }
    goto LAB_000804a2;
  }
  cVar1 = '\0';
LAB_000804a2:
  return (int)cVar1;
}


////>>0x000804a8>>FUN_000804a8>>////

undefined8 FUN_000804a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_00081210(1,0);
  FUN_00081210(6,1);
  FUN_00081210(0,1);
  FUN_00081210(1,1);
  FUN_00081318(0,0);
  FUN_00081318(1,0);
  puVar2 = PTR_DAT_000805ac;
  puVar1 = PTR_DAT_000805a8;
  *(undefined2 *)(PTR_DAT_000805a8 + 0xe) = 0x13;
  *(undefined2 *)(puVar1 + 0x10) = 10;
  *(undefined **)(puVar1 + 0x14) = puVar2 + 0x26;
  puVar1[1] = 3;
  puVar1[0x19] = 3;
  *(undefined2 *)(puVar1 + 0x1a) = 0x14;
  *(undefined2 *)(puVar1 + 0x28) = 3;
  *(undefined2 *)(puVar1 + 4) = 0x10;
  *(undefined **)(puVar1 + 8) = puVar2;
  puVar1[0xd] = 0x10;
  *(undefined2 *)(puVar1 + 0x1c) = 0xc;
  puVar1[0x25] = 0x10;
  *(undefined2 *)(puVar1 + 0x34) = 8;
  puVar3 = PTR_DAT_000805b0;
  *(undefined2 *)(puVar1 + 0x26) = 0x1c;
  *(undefined **)(puVar1 + 0x2c) = puVar2 + 0x38;
  puVar4 = PTR_DAT_000805b4;
  puVar1[0x30] = 2;
  puVar1[0x31] = 2;
  *(undefined **)(puVar1 + 0x38) = puVar3;
  puVar1[0x3c] = 2;
  *puVar1 = 1;
  puVar1[0xc] = 1;
  puVar1[0x18] = 1;
  puVar1[0x24] = 1;
  *(undefined2 *)(puVar1 + 0x3e) = 1;
  *(undefined2 *)(puVar1 + 0x40) = 1;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined **)(puVar1 + 0x20) = puVar2 + 0x28;
  *(undefined2 *)(puVar1 + 0x32) = 0;
  puVar1[0x3d] = 5;
  *(undefined **)(puVar1 + 0x44) = puVar3 + 2;
  FUN_00080164(puVar4,0x4b00);
  *(undefined2 *)(puVar4 + 0x56) = 2000;
  uVar5 = thunk_FUN_00081714();
  *(undefined4 *)PTR_DAT_000805b8 = uVar5;
  iVar6 = thunk_FUN_00081714();
  *(int *)PTR_DAT_000805bc = iVar6 + 1000;
  iVar6 = thunk_FUN_00081714();
  *(int *)PTR_DAT_000805c0 = iVar6 + 1000;
  iVar6 = thunk_FUN_00081714();
  *(int *)PTR_DAT_000805c4 = iVar6 + 1000;
  iVar6 = thunk_FUN_00081714();
  *(int *)PTR_DAT_000805c8 = iVar6 + 1000;
  *PTR_DAT_000805cc = 0;
  if (*(int *)PTR_DAT_00080160 == 0) {
    software_interrupt(0x3f);
    return 1;
  }
  return 0;
}


////>>0x000805d0>>FUN_000805d0>>////

void FUN_000805d0(void)

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
      uVar11 = thunk_FUN_00081714();
      puVar7 = PTR_DAT_00080890;
      if (*(uint *)PTR_DAT_00080890 < uVar11) {
        *(int *)puVar6 = *(int *)puVar6 + 1;
        iVar15 = thunk_FUN_00081714();
        *(int *)puVar7 = iVar15 + 1000;
      }
    }
    if (*(int *)puVar6 < *(int *)puVar3) goto LAB_000808f4;
    *(int *)PTR_DAT_0008088c = *(int *)puVar3 + 1;
    piVar17 = (int *)PTR_DAT_00080a20;
    puVar3 = PTR_DAT_00080a1c;
    if (*(int *)puVar4 < *(int *)puVar8) {
      uVar11 = thunk_FUN_00081714();
      puVar3 = PTR_DAT_00080890;
      if (*(uint *)PTR_DAT_00080890 < uVar11) {
        *(int *)puVar5 = *(int *)puVar5 + 1;
        iVar15 = thunk_FUN_00081714();
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
      uVar11 = thunk_FUN_00081714();
      puVar8 = PTR_DAT_00080a54;
      if (*(uint *)PTR_DAT_00080a54 < uVar11) {
        *(int *)puVar3 = *(int *)puVar3 + 1;
        iVar15 = thunk_FUN_00081714();
        *(int *)puVar8 = iVar15 + 1000;
      }
    }
    if (0x3b < *(int *)puVar5) {
      *(undefined4 *)PTR_DAT_00080a1c = 0;
      *(int *)puVar4 = *(int *)puVar4 + 1;
    }
  }
LAB_000808f4:
  uVar11 = thunk_FUN_00081714();
  puVar8 = PTR_DAT_00080a60;
  puVar3 = PTR_DAT_00080a5c;
  puVar5 = PTR_DAT_00080a58;
  puVar4 = PTR_DAT_00080a24;
  if (*(uint *)PTR_DAT_00080a58 < uVar11) {
    uVar12 = FUN_0008189c(*(undefined4 *)PTR_DAT_00080a28);
    uVar12 = FUN_00081730(uVar12,*(undefined4 *)PTR_DAT_00080a2c);
    *(undefined4 *)PTR_DAT_00080a30 = uVar12;
    puVar9 = PTR_DAT_00080a34;
    uVar18 = *(undefined4 *)PTR_DAT_00080a34;
    uVar13 = FUN_00081734(uVar12,uVar18);
    uVar13 = FUN_00081944(uVar13,*(undefined4 *)puVar8);
    puVar7 = PTR_DAT_00080a64;
    uVar13 = FUN_00081734(uVar13,*(undefined4 *)PTR_DAT_00080a64);
    *(undefined4 *)puVar8 = uVar13;
    uVar18 = FUN_00081730(uVar12,uVar18);
    uVar18 = FUN_00081944(uVar18,*(undefined4 *)PTR_DAT_00080a38);
    puVar8 = PTR_DAT_00080a3c;
    uVar18 = FUN_00081730(uVar18,*(undefined4 *)PTR_DAT_00080a3c);
    *(undefined4 *)PTR_DAT_00080a38 = uVar18;
    uVar14 = FUN_00081944(uVar12,*(undefined4 *)PTR_DAT_00080a40);
    uVar14 = FUN_00081734(uVar14,uVar13);
    FUN_00081734(uVar14,uVar18);
    uVar14 = FUN_00081cd0();
    *(undefined4 *)PTR_DAT_00080a44 = uVar14;
    uVar14 = FUN_0008189c();
    *(undefined4 *)puVar9 = uVar12;
    *(undefined4 *)puVar4 = uVar14;
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)puVar7 = uVar13;
    *(undefined4 *)puVar8 = uVar18;
    iVar15 = thunk_FUN_00081714();
    *(int *)puVar5 = iVar15 + *(int *)puVar2;
  }
  uVar12 = FUN_0008189c(*(undefined4 *)puVar2);
  iVar15 = FUN_00081ca8(*(undefined4 *)puVar4,uVar12);
  if (iVar15 != 0) {
    *(undefined4 *)PTR_DAT_00080a24 = uVar12;
  }
  iVar15 = FUN_00081c94(*(undefined4 *)puVar4,0);
  if (iVar15 != 0) {
    *(undefined4 *)PTR_DAT_00080a24 = 0;
  }
  uVar10 = FUN_00081d1c(*(undefined4 *)puVar4);
  iVar15 = *(int *)puVar3;
  *(undefined2 *)(puVar1 + 0x2a) = uVar10;
  *(int *)puVar3 = iVar15 + 1;
  *(uint *)PTR_DAT_00080a4c = *(ushort *)PTR_DAT_00080a48 & 1 ^ 1;
  return;
}


////>>0x00080a68>>FUN_00080a68>>////

void FUN_00080a68(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_00080a94;
  FUN_00081682(PTR_DAT_00080a94,PTR_s__00080a98);
  FUN_00081d5c(puVar1,DAT_00080aa0,DAT_00080a9c);
  puVar1 = PTR_DAT_00080aa4;
  PTR_DAT_00080aa4[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 6;
  *(undefined2 *)(puVar1 + 0x56) = 1000;
  return;
}


////>>0x00080aa8>>FUN_00080aa8>>////

void FUN_00080aa8(void)

{
  return;
}


////>>0x00080ab8>>FUN_00080ab8>>////

void FUN_00080ab8(void)

{
  return;
}


////>>0x00080aba>>FUN_00080aba>>////

void FUN_00080aba(void)

{
  return;
}


////>>0x00080abc>>FUN_00080abc>>////

void FUN_00080abc(void)

{
  return;
}


////>>0x00080ae4>>FUN_00080ae4>>////

void FUN_00080ae4(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = DAT_00080be8;
  FUN_00080e9c();
  puVar2 = DAT_00080bec;
  DAT_00080bec[1] = *puVar1 / 1000 - 1;
  *(undefined *)(DAT_00080bf0 + 0x23) = 0xf0;
  puVar2[2] = 0;
  *puVar2 = 7;
  FUN_00081d7c();
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    FUN_00081318(iVar7,0);
    iVar6 = DAT_00080c00;
    iVar5 = DAT_00080bfc;
    iVar4 = DAT_00080bf8;
    iVar3 = DAT_00080bf4;
    iVar7 = iVar8;
  } while (iVar8 != 0x4f);
  *(undefined4 *)(DAT_00080bf4 + 0xa0) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0xa0) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0xa0) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xa0) = 0xffffffff;
  FUN_00080da0(iVar3,1,0x300,0);
  FUN_00081318(0,1);
  FUN_00080da0(iVar3,1,0xc00,0);
  FUN_00080da0(iVar3,1,0x3000,0);
  FUN_00080da0(iVar5,2,0x30,0);
  FUN_00080da0(iVar4,1,0xc00,0);
  FUN_00080da0(iVar3,1,3,0);
  FUN_00080da0(iVar4,1,0xc000,0);
  FUN_00080e18(0x25);
  FUN_00080f9c(DAT_00080c08,*puVar1,DAT_00080c04,0xc);
  FUN_00081042(DAT_00080c08,0,0x300000,1);
  FUN_00081034(DAT_00080c08,0,0);
  FUN_0008106e(DAT_00080c08,0xffffffff);
  FUN_00081066(DAT_00080c08);
  return;
}


////>>0x00080c0c>>FUN_00080c0c>>////

void FUN_00080c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_DAT_00080ca4;
  puVar1 = PTR_DAT_00080ca0;
  FUN_000813a8(PTR_DAT_00080ca0);
  FUN_000813a8(puVar2);
  puVar5 = PTR_DAT_00080cd8;
  puVar3 = PTR_DAT_00080cac;
  FUN_000814e4(PTR_DAT_00080cb0,DAT_00080ca8,8,8,puVar1,puVar2,param_3);
  puVar1 = PTR_DAT_00080cb4;
  FUN_000813a8(puVar5);
  puVar6 = PTR_DAT_00080cdc;
  FUN_000813a8(puVar3);
  puVar2 = PTR_DAT_00080cb8;
  FUN_000813a8(puVar1);
  puVar4 = PTR_DAT_00080cbc;
  FUN_000813a8(puVar6);
  FUN_000813a8(puVar2);
  FUN_000813a8(puVar4);
  FUN_000815d4(PTR_DAT_00080cc4,DAT_00080cc0,0x11,0x11,puVar5,puVar6);
  FUN_000815d4(PTR_DAT_00080ccc,DAT_00080cc8,0x12,0x12,puVar3,puVar2);
  FUN_000815d4(PTR_DAT_00080cd4,DAT_00080cd0,0x14,0x14,puVar1,puVar4);
  return;
}


////>>0x00080ce0>>FUN_00080ce0>>////

void FUN_00080ce0(void)

{
  int iVar1;
  
  iVar1 = FUN_000813e4(PTR_DAT_00080d14);
  if (iVar1 != 0) {
    FUN_00080aa8();
  }
  iVar1 = FUN_000813e4(PTR_DAT_00080d18);
  if (iVar1 != 0) {
    FUN_00080ab8();
  }
  iVar1 = FUN_000813e4(PTR_DAT_00080d1c);
  if (iVar1 != 0) {
    FUN_00080aba();
  }
  iVar1 = FUN_000813e4(PTR_DAT_00080d20);
  if (iVar1 != 0) {
    FUN_00080abc();
  }
  return;
}


////>>0x00080d2e>>FUN_00080d2e>>////

void FUN_00080d2e(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x44) = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    return;
  case 1:
    uVar1 = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0x70) & ~param_3;
    break;
  case 2:
    uVar1 = *(uint *)(param_1 + 0x70) | param_3;
    break;
  default:
    goto switchD_00080d34_caseD_6;
  }
  *(uint *)(param_1 + 0x70) = uVar1;
switchD_00080d34_caseD_6:
  *(uint *)(param_1 + 4) = param_3;
  return;
}


////>>0x00080d54>>FUN_00080d54>>////

void FUN_00080d54(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = (int)(param_3 << 0x1f) < 0;
  param_1[0x11] = param_2;
  if (bVar1) {
    param_1[0x19] = param_2;
  }
  if (!bVar1) {
    param_1[0x18] = param_2;
  }
  bVar1 = (param_3 & 10) != 0;
  if (bVar1) {
    param_1[8] = param_2;
  }
  if (!bVar1) {
    param_1[9] = param_2;
  }
  if (((int)(param_3 << 0x1e) < 0) || ((int)(param_3 << 0x1c) < 0)) {
    param_1[0x20] = param_2;
  }
  param_1[5] = param_2;
  *param_1 = param_2;
  return;
}


////>>0x00080d7a>>FUN_00080d7a>>////

void FUN_00080d7a(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  param_1[0x11] = param_2;
  if (param_5 == 0) {
    param_1[0x18] = param_2;
  }
  else {
    param_1[0x19] = param_2;
  }
  if (param_4 == 0) {
    param_1[0x15] = param_2;
  }
  else {
    param_1[0x14] = param_2;
  }
  if (param_3 == 0) {
    param_1[0xd] = param_2;
  }
  else {
    param_1[0xc] = param_2;
  }
  param_1[4] = param_2;
  *param_1 = param_2;
  return;
}


////>>0x00080da0>>FUN_00080da0>>////

undefined4 FUN_00080da0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    (*DAT_00080df8)(param_1,param_2,param_3);
    bVar1 = (int)(param_4 << 0x1f) < 0;
    *(undefined4 *)(param_1 + 0x44) = param_3;
    if (bVar1) {
      *(undefined4 *)(param_1 + 100) = param_3;
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x60) = param_3;
    }
    break;
  case 3:
    (*DAT_00080dfc)(param_1,param_3,param_4,DAT_00080dfc,param_1);
    break;
  case 4:
  case 5:
    (*DAT_00080e00)(param_1,param_3,param_2 == 5,(param_4 << 0x1d) >> 0x1f,param_4 & 1,param_2,
                    param_3);
    break;
  default:
    return 0;
  }
  return 1;
}


////>>0x00080e04>>FUN_00080e04>>////

uint FUN_00080e04(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & param_2;
  if (uVar1 != 0) {
    if ((param_2 & *(uint *)(param_1 + 0x18)) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


////>>0x00080e18>>FUN_00080e18>>////

undefined4 FUN_00080e18(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 < 0x20) {
      uVar1 = 1 << (param_1 & 0xff);
      if ((uVar1 & *(uint *)(DAT_00080e58 + 0x18)) != uVar1) {
        *(uint *)(DAT_00080e58 + 0x10) = uVar1;
      }
    }
    else {
      uVar1 = 1 << (param_1 - 0x20 & 0xff);
      if ((uVar1 & *(uint *)(DAT_00080e58 + 0x108)) != uVar1) {
        *(uint *)(DAT_00080e58 + 0x100) = uVar1;
      }
    }
    return 0;
  }
  return 1;
}


////>>0x00080e9c>>FUN_00080e9c>>////

void FUN_00080e9c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00080f08;
  *DAT_00080f08 = 0x400;
  puVar1[0x80] = 0x400;
  iVar2 = DAT_00080f0c;
  if (-1 < *(int *)(DAT_00080f0c + 0x20) << 7) {
    *(undefined4 *)(DAT_00080f0c + 0x20) = DAT_00080f14;
    do {
    } while (-1 < *(int *)(iVar2 + 0x68) << 0x1f);
  }
  *(undefined4 *)(iVar2 + 0x20) = DAT_00080f10;
  do {
  } while (-1 < *(int *)(iVar2 + 0x68) << 0xf);
  *(uint *)(DAT_00080f0c + 0x30) = *(uint *)(DAT_00080f0c + 0x30) & 0xfffffffc | 1;
  do {
  } while (-1 < *(int *)(iVar2 + 0x68) << 0x1c);
  *(undefined4 *)(DAT_00080f0c + 0x28) = DAT_00080f18;
  do {
  } while (-1 < *(int *)(iVar2 + 0x68) << 0x1e);
  *(undefined4 *)(DAT_00080f0c + 0x30) = 0x11;
  do {
  } while (-1 < *(int *)(iVar2 + 0x68) << 0x1c);
  *(undefined4 *)(DAT_00080f0c + 0x30) = 0x12;
  do {
  } while (-1 < *(int *)(iVar2 + 0x68) << 0x1c);
  *DAT_00080f20 = DAT_00080f1c;
  return;
}


////>>0x00080f24>>FUN_00080f24>>////

void FUN_00080f24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_Elf32_Rel_ARRAY_00080f80;
  puVar2 = DAT_00080f7c;
  puVar4 = (undefined4 *)PTR_DAT_00080f84;
  if (DAT_00080f7c != PTR_Elf32_Rel_ARRAY_00080f80) {
    for (iVar3 = 0; puVar4 = (undefined4 *)PTR_DAT_00080f84, puVar1 + iVar3 < PTR_DAT_00080f88;
        iVar3 = iVar3 + 4) {
      *(undefined4 *)(puVar1 + iVar3) = *(undefined4 *)(puVar2 + iVar3);
    }
  }
  for (; iVar3 = DAT_00080f94, puVar4 < DAT_00080f8c; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar2 = PTR_DAT_00080f90 + -0x20000000;
  *(uint *)(DAT_00080f94 + 8) = (uint)PTR_DAT_00080f90 & 0x1fffff80;
  if (puVar2 < (undefined *)0x100000) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x20000000;
  }
  (*DAT_00080f98)();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00080f9c>>FUN_00080f9c>>////

undefined4 FUN_00080f9c(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_58 [16];
  
  local_58[0] = *(uint *)PTR_DAT_0008102c;
  local_58[1] = *(undefined4 *)(PTR_DAT_0008102c + 4);
  local_58[2] = *(undefined4 *)(PTR_DAT_0008102c + 8);
  local_58[3] = *(undefined4 *)(PTR_DAT_0008102c + 0xc);
  local_58[4] = *(undefined4 *)(PTR_DAT_0008102c + 0x10);
  local_58[5] = *(undefined4 *)(PTR_DAT_0008102c + 0x14);
  local_58[6] = *(undefined4 *)(PTR_DAT_0008102c + 0x18);
  local_58[7] = *(undefined4 *)(PTR_DAT_0008102c + 0x1c);
  local_58[8] = *(undefined4 *)(PTR_DAT_0008102c + 0x20);
  local_58[9] = *(undefined4 *)(PTR_DAT_0008102c + 0x24);
  local_58[10] = *(undefined4 *)(PTR_DAT_0008102c + 0x28);
  local_58[11] = *(undefined4 *)(PTR_DAT_0008102c + 0x2c);
  local_58[12] = *(undefined4 *)(PTR_DAT_0008102c + 0x30);
  local_58[13] = *(undefined4 *)(PTR_DAT_0008102c + 0x34);
  local_58[14] = *(undefined4 *)(PTR_DAT_0008102c + 0x38);
  local_58[15] = *(undefined4 *)(PTR_DAT_0008102c + 0x3c);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[0x48] = 0x202;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  uVar1 = param_2 / (uint)(param_3 * 2);
  if (param_2 == param_3 * 2 * uVar1) {
    uVar1 = uVar1 - 1;
  }
  uVar2 = 0;
  do {
    if ((uint)(param_4 *
              (int)(((ulonglong)param_2 / (ulonglong)((uVar1 + 1) * 2)) / (ulonglong)DAT_00081030))
        <= local_58[uVar2]) {
      param_1[1] = (uVar2 & 0xf) << 0x10 | (uVar1 & 0xff) << 8 | param_1[1];
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x10);
  return 0xffffffff;
}


////>>0x00081034>>FUN_00081034>>////

void FUN_00081034(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4) | (param_3 & 1) << 7;
  return;
}


////>>0x00081042>>FUN_00081042>>////

void FUN_00081042(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 4) =
       param_3 | *(uint *)(param_1 + 4) | (param_2 & 0xf) << 0x18 | (param_4 & 3) << 0x1c;
  return;
}


////>>0x0008105c>>FUN_0008105c>>////

void FUN_0008105c(int param_1,uint param_2)

{
  *(int *)(param_1 + 0x14) = 1 << (param_2 & 0xff);
  return;
}


////>>0x00081066>>FUN_00081066>>////

void FUN_00081066(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  return;
}


////>>0x0008106e>>FUN_0008106e>>////

void FUN_0008106e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


////>>0x00081184>>FUN_00081184>>////

undefined4 FUN_00081184(void)

{
  return 0;
}


////>>0x0008118c>>FUN_0008118c>>////

int FUN_0008118c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_000811a0;
  if (*(int *)PTR_DAT_000811a0 == 0) {
    *(undefined4 *)PTR_DAT_000811a0 = DAT_000811a4;
  }
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = param_1 + iVar2;
  return iVar2;
}


////>>0x000811ae>>FUN_000811ae>>////

undefined4 FUN_000811ae(void)

{
  return 0xffffffff;
}


////>>0x000811b4>>FUN_000811b4>>////

undefined4 FUN_000811b4(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x000811be>>FUN_000811be>>////

undefined4 FUN_000811be(void)

{
  return 1;
}


////>>0x000811c2>>FUN_000811c2>>////

undefined4 FUN_000811c2(void)

{
  return 0;
}


////>>0x000811c6>>FUN_000811c6>>////

undefined4 FUN_000811c6(void)

{
  return 0;
}


////>>0x000811cc>>FUN_000811cc>>////

uint FUN_000811cc(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < (int)param_3; iVar1 = iVar1 + 1) {
    do {
    } while (-1 < *(int *)(DAT_000811ec + 0x14) << 0x1e);
    *(uint *)(DAT_000811ec + 0x1c) = (uint)*(byte *)(param_2 + iVar1);
  }
  return param_3 & ~((int)param_3 >> 0x1f);
}


////>>0x00081208>>thunk_FUN_00081714>>////

undefined4 thunk_FUN_00081714(void)

{
  return *(undefined4 *)PTR_DAT_0008171c;
}


////>>0x0008120c>>FUN_0008120c>>////

void FUN_0008120c(void)

{
  return;
}


////>>0x00081210>>FUN_00081210>>////

int FUN_00081210(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = PTR_DAT_00081310;
  puVar1 = PTR_DAT_0008130c;
  iVar3 = param_1;
  if (PTR_DAT_0008130c[param_1 * 0x1c + 0xc] != '\0') {
    if ((PTR_DAT_00081310[param_1] & 0xf) == 4) {
      iVar3 = FUN_0008105c(DAT_00081314,PTR_DAT_0008130c[param_1 * 0x1c + 0x19]);
    }
    bVar8 = puVar2[param_1];
    bVar7 = bVar8 & 0xf;
    if ((bVar7 < 3) && (bVar8 != 0)) {
      if (bVar7 == 2) {
        if (param_2 == 0) {
          return iVar3;
        }
      }
      else if (bVar7 == 1) {
        if (param_2 == 2) {
          return iVar3;
        }
      }
      else if (bVar7 == 3) {
        if (param_2 == 1) {
          return iVar3;
        }
        goto LAB_0008126c;
      }
    }
    if (param_2 != 1) {
LAB_0008126c:
      if (param_2 == 0) {
        iVar3 = param_1 * 0x1c;
        FUN_00080e18(*(undefined4 *)(puVar1 + iVar3 + 8));
        iVar3 = FUN_00080da0(*(undefined4 *)(puVar1 + iVar3),3,*(undefined4 *)(puVar1 + iVar3 + 4),0
                            );
        bVar8 = puVar2[param_1] & 0xf0 | 2;
      }
      else {
        if (param_2 != 2) {
          return iVar3;
        }
        iVar3 = param_1 * 0x1c;
        FUN_00080e18(*(undefined4 *)(puVar1 + iVar3 + 8));
        iVar3 = FUN_00080da0(*(undefined4 *)(puVar1 + iVar3),3,*(undefined4 *)(puVar1 + iVar3 + 4),1
                            );
        bVar8 = puVar2[param_1] & 0xf0 | 1;
      }
      puVar2[param_1] = bVar8;
      return iVar3;
    }
    iVar9 = param_1 * 0x1c;
    iVar10 = *(int *)(puVar1 + iVar9);
    if (bVar8 >> 4 == 0) {
      uVar5 = 4;
    }
    else {
      uVar5 = 5;
    }
    iVar3 = FUN_00080da0(iVar10,uVar5,*(undefined4 *)(puVar1 + iVar9 + 4),
                         *(undefined4 *)(puVar1 + iVar9 + 0x10));
    puVar2[param_1] = puVar2[param_1] & 0xf0 | 3;
    if (*(int *)(iVar10 + 0x18) == -1) {
      uVar4 = *(uint *)(puVar1 + iVar9 + 8);
      if (0x2c < uVar4) {
        return 1;
      }
      if (uVar4 < 0x20) {
        uVar4 = 1 << (uVar4 & 0xff);
        uVar6 = *(uint *)(DAT_00080e98 + 0x18) & uVar4;
        if (uVar6 == uVar4) {
          *(uint *)(DAT_00080e98 + 0x14) = uVar6;
        }
      }
      else {
        uVar4 = 1 << (uVar4 - 0x20 & 0xff);
        uVar6 = *(uint *)(DAT_00080e98 + 0x108) & uVar4;
        if (uVar6 == uVar4) {
          *(uint *)(DAT_00080e98 + 0x104) = uVar6;
        }
      }
      return 0;
    }
  }
  return iVar3;
}


////>>0x00081318>>FUN_00081318>>////

void FUN_00081318(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_00081384;
  puVar1 = PTR_DAT_00081380;
  if (PTR_DAT_00081380[param_1 * 0x1c + 0xc] != '\0') {
    if ((PTR_DAT_00081384[param_1] & 0xf) == 5) {
      FUN_00081210(param_1,1,param_3,5,param_1,param_2,param_3);
    }
    puVar2[param_1] = puVar2[param_1] & 0xf | (byte)(param_2 << 4);
    iVar5 = *(int *)(puVar1 + param_1 * 0x1c);
    uVar4 = *(undefined4 *)(puVar1 + param_1 * 0x1c + 4);
    iVar3 = FUN_00080e04(iVar5,uVar4);
    if (iVar3 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(iVar5 + 100) = uVar4;
        return;
      }
      *(undefined4 *)(iVar5 + 0x60) = uVar4;
      return;
    }
    FUN_00080d7a(iVar5,uVar4,param_2,0,1);
  }
  return;
}


////>>0x00081388>>FUN_00081388>>////

void FUN_00081388(void)

{
  int iVar1;
  
  if ((*DAT_000813a0 != -1) && (iVar1 = *DAT_000813a0 + -1, *DAT_000813a0 = iVar1, iVar1 == 0)) {
    (*DAT_000813a4)();
  }
  return;
}


////>>0x000813a8>>FUN_000813a8>>////

int FUN_000813a8(int param_1)

{
  FUN_00082504(param_1,0,0x80);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return param_1;
}


////>>0x000813c2>>FUN_000813c2>>////

void FUN_000813c2(int param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x80) + 1U & 0x7f;
  if (uVar1 != *(uint *)(param_1 + 0x84)) {
    *(undefined *)(param_1 + *(int *)(param_1 + 0x80)) = param_2;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  return;
}


////>>0x000813e4>>FUN_000813e4>>////

uint FUN_000813e4(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x80) - *(int *)(*(int *)(param_1 + 0x10) + 0x84) &
         0x7f;
}


////>>0x00081454>>FUN_00081454>>////

undefined4 FUN_00081454(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(int *)(*(int *)(param_1 + 0x18) + 0x14) << 0x1e < 0) &&
     (*(int *)(iVar1 + 0x84) == *(int *)(iVar1 + 0x80))) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = param_2;
  }
  else {
    uVar2 = DAT_000814a4 & *(int *)(iVar1 + 0x80) + 1U;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffff80) + 1;
    }
    do {
    } while (*(uint *)(iVar1 + 0x84) == uVar2);
    *(char *)(iVar1 + *(int *)(iVar1 + 0x80)) = (char)param_2;
    *(uint *)(*(int *)(param_1 + 0x14) + 0x80) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 2;
  }
  return 1;
}


////>>0x000814e4>>FUN_000814e4>>////

void FUN_000814e4(undefined4 *param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  puVar1 = PTR_PTR_FUN_00081454_1_00081504;
  param_1[6] = param_2;
  *param_1 = puVar1;
  *(undefined *)(param_1 + 7) = param_3;
  param_1[4] = param_5;
  param_1[8] = param_4;
  param_1[5] = param_6;
  return;
}


////>>0x00081508>>FUN_00081508>>////

void FUN_00081508(int param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00080e18(*(undefined4 *)(param_1 + 0x20));
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  puVar3[0x48] = 0x202;
  *puVar3 = 0xac;
  puVar1 = DAT_00081570;
  puVar3[1] = param_3;
  puVar3[8] = *puVar1 / param_2 >> 4;
  puVar3[3] = 0xffffffff;
  puVar3[2] = 0x61;
  *(int *)(DAT_00081574 + ((uint)(int)(char)*(byte *)(param_1 + 0x1c) >> 5) * 4) =
       1 << (uint)(*(byte *)(param_1 + 0x1c) & 0x1f);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *puVar3 = 0x50;
  return;
}


////>>0x000815d4>>FUN_000815d4>>////

undefined4 * FUN_000815d4(undefined4 *param_1,undefined4 param_2)

{
  FUN_000814e4();
  *param_1 = PTR_PTR_FUN_00081454_1_000815f4;
  param_1[9] = param_2;
  return param_1;
}


////>>0x000815f8>>FUN_000815f8>>////

uint FUN_000815f8(int param_1,uint param_2)

{
  return param_2 | param_1 << 8;
}


////>>0x000815fe>>FUN_000815fe>>////

undefined4 * FUN_000815fe(undefined4 *param_1)

{
  FUN_00081e04(*param_1);
  return param_1;
}


////>>0x0008160c>>FUN_0008160c>>////

void FUN_0008160c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00081e04();
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


////>>0x00081622>>FUN_00081622>>////

int FUN_00081622(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000825a0(*param_1,param_2 + 1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *param_1 = iVar1;
    param_1[1] = param_2;
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x0008163a>>FUN_0008163a>>////

undefined4 FUN_0008163a(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 == 0) || ((uint)param_1[1] < param_2)) {
    iVar1 = FUN_00081622(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1[2] == 0) {
      *(undefined *)*param_1 = 0;
    }
  }
  return 1;
}


////>>0x0008165c>>FUN_0008165c>>////

undefined4 * FUN_0008165c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0008163a(param_1,param_3);
  if (iVar1 == 0) {
    FUN_0008160c(param_1);
  }
  else {
    param_1[2] = param_3;
    FUN_00082994(*param_1,param_2);
  }
  return param_1;
}


////>>0x00081682>>FUN_00081682>>////

undefined4 * FUN_00081682(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00082a50(param_2);
    FUN_0008165c(param_1,param_2,uVar1);
  }
  return param_1;
}


////>>0x000816a6>>FUN_000816a6>>////

void FUN_000816a6(void)

{
  return;
}


////>>0x000816a8>>FUN_000816a8>>////

void FUN_000816a8(void)

{
  FUN_000816d4();
  FUN_00080ae4();
  FUN_000816a6();
  FUN_0008120c(1);
  FUN_000804a8();
  do {
    do {
      FUN_000805d0();
    } while (DAT_000816d0 == 0);
    FUN_00080ce0();
  } while( true );
}


////>>0x000816d4>>FUN_000816d4>>////

void FUN_000816d4(void)

{
  *(undefined4 *)(DAT_000816dc + 4) = 0x8000;
  return;
}


////>>0x00081714>>FUN_00081714>>////

undefined4 FUN_00081714(void)

{
  return *(undefined4 *)PTR_DAT_0008171c;
}


////>>0x00081730>>FUN_00081730>>////

uint FUN_00081730(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x00081734>>FUN_00081734>>////

uint FUN_00081734(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x00081894>>FUN_00081894>>////

uint FUN_00081894(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = count_leading_zeroes(param_1);
  uVar2 = iVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (7 < iVar1) {
    uVar4 = 0 << (uVar2 & 0xff);
    uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) +
            (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar4);
    if (uVar4 == 0x80000000) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  uVar4 = param_1 << (iVar1 + 0x18U & 0xff);
  uVar2 = iVar3 + ((param_1 >> (0x20 - (iVar1 + 0x18U) & 0xff)) - ((int)uVar4 >> 0x1f));
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar2 = uVar2 & ~(uVar4 >> 0x1f);
  }
  return uVar2;
}


////>>0x0008189c>>FUN_0008189c>>////

uint FUN_0008189c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = count_leading_zeroes(param_1);
  uVar2 = iVar1 - 8;
  iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
  if (7 < iVar1) {
    uVar5 = 0 << (uVar2 & 0xff);
    uVar3 = iVar4 + (param_1 << (uVar2 & 0xff)) +
            (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar5);
    if (uVar5 == 0x80000000) {
      uVar3 = uVar3 & 0xfffffffe;
    }
    return uVar3;
  }
  uVar2 = param_1 << (iVar1 + 0x18U & 0xff);
  uVar3 = iVar4 + ((param_1 >> (0x20 - (iVar1 + 0x18U) & 0xff)) - ((int)uVar2 >> 0x1f));
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar3 = uVar3 & ~(uVar2 >> 0x1f);
  }
  return uVar3;
}


////>>0x00081944>>FUN_00081944>>////

uint FUN_00081944(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x00081bf4>>FUN_00081bf4>>////

uint FUN_00081bf4(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 * 2;
  uVar3 = param_2 * 2;
  if (((int)uVar2 >> 0x18 == -1 || (int)uVar3 >> 0x18 == -1) &&
     ((((int)uVar2 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar3 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uVar4 = uVar2 | param_2 & 0x7fffffff;
  bVar5 = uVar4 == 0;
  if (!bVar5) {
    uVar4 = param_1 ^ param_2;
    bVar5 = uVar4 == 0;
  }
  bVar1 = -1 < (int)uVar4;
  if (bVar1) {
    param_1 = uVar2 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if ((bVar1 && uVar3 <= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar1 || uVar3 > uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  return param_1;
}


////>>0x00081c54>>FUN_00081c54>>////

void FUN_00081c54(undefined4 param_1,undefined4 param_2)

{
  FUN_00081c5c(param_2,param_1);
  return;
}


////>>0x00081c5c>>FUN_00081c5c>>////

undefined8 FUN_00081c5c(undefined4 param_1,undefined4 param_2)

{
  FUN_00081bf4();
  return CONCAT44(param_2,param_1);
}


////>>0x00081c94>>FUN_00081c94>>////

bool FUN_00081c94(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_00081c5c();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081ca8>>FUN_00081ca8>>////

bool FUN_00081ca8(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_00081c54();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081cd0>>FUN_00081cd0>>////

uint FUN_00081cd0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 << 1 < 0x7f000000) {
    return 0;
  }
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = 0x9e - uVar1;
  if (uVar1 < 0x9f && uVar2 != 0) {
    uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
    if ((param_1 & 0x80000000) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  param_1 = param_1 & 0x80000000;
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}


////>>0x00081d1c>>FUN_00081d1c>>////

uint FUN_00081d1c(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x80000000) != 0) || (param_1 << 1 < 0x7f000000)) {
    return 0;
  }
  uVar1 = 0x9e - ((param_1 << 1) >> 0x18);
  if (-1 < (int)uVar1) {
    return (param_1 << 8 | 0x80000000) >> (uVar1 & 0xff);
  }
  if ((uVar1 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  return 0xffffffff;
}


////>>0x00081d5c>>FUN_00081d5c>>////

undefined4 FUN_00081d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)PTR_DAT_0008396c;
  puVar1 = *(undefined4 **)(iVar3 + 0x148);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(iVar3 + 0x14c);
    *(undefined4 **)(iVar3 + 0x148) = puVar1;
  }
  uVar2 = puVar1[1];
  if (0x1f < (int)uVar2) {
    if ((DAT_00083970 == 0) ||
       (puVar1 = (undefined4 *)FUN_00081df4(400), puVar1 == (undefined4 *)0x0)) {
      return 0xffffffff;
    }
    *puVar1 = *(undefined4 *)(iVar3 + 0x148);
    puVar1[1] = 0;
    uVar2 = 0;
    *(undefined4 **)(iVar3 + 0x148) = puVar1;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
  }
  uVar4 = 1 << (uVar2 & 0xff);
  puVar1[uVar2 + 0x22] = param_1;
  puVar1[0x62] = puVar1[0x62] | uVar4;
  puVar1[uVar2 + 0x42] = param_3;
  puVar1[99] = uVar4 | puVar1[99];
  puVar1[1] = uVar2 + 1;
  puVar1[uVar2 + 2] = param_2;
  return 0;
}


////>>0x00081d7c>>FUN_00081d7c>>////

void FUN_00081d7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  code **ppcVar4;
  int iVar5;
  
  iVar5 = (int)PTR_DAT_00081dbc - (int)PTR_DAT_00081dc0 >> 2;
  if (iVar5 != 0) {
    ppcVar4 = (code **)(PTR_DAT_00081dc0 + -4);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      ppcVar4 = ppcVar4 + 1;
      (**ppcVar4)();
    } while (iVar5 != iVar3);
  }
  puVar2 = PTR_DAT_00081dc8;
  puVar1 = PTR_LAB_00081dc4;
  FUN_00085858();
  iVar5 = (int)puVar1 - (int)puVar2 >> 2;
  if (iVar5 != 0) {
    ppcVar4 = (code **)(puVar2 + -4);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      ppcVar4 = ppcVar4 + 1;
      (**ppcVar4)();
    } while (iVar5 != iVar3);
    return;
  }
  return;
}


////>>0x00081df4>>FUN_00081df4>>////

void FUN_00081df4(undefined4 param_1)

{
  FUN_00081e14(*DAT_00081e00,param_1);
  return;
}


////>>0x00081e04>>FUN_00081e04>>////

void FUN_00081e04(undefined4 param_1)

{
  FUN_00083d9c(*DAT_00081e10,param_1);
  return;
}


////>>0x00081e14>>FUN_00081e14>>////

int * FUN_00081e14(undefined4 *param_1,uint param_2)

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
  FUN_00082598(param_1);
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
      FUN_0008259c(param_1);
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
        FUN_0008259c(param_1);
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
      FUN_0008259c(param_1);
      return (int *)(iVar13 + 8);
    }
    *(int *)(DAT_00082140 + 0x14) = iVar4;
    *(int *)(uVar1 + 0x10) = iVar4;
    if (-1 < (int)uVar8) {
      *(uint *)(uVar6 + iVar13 + 4) = *(uint *)(uVar6 + iVar13 + 4) | 1;
      FUN_0008259c(param_1);
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
            FUN_0008259c(param_1);
            return piVar10 + 2;
          }
          if (-1 < (int)uVar17) {
            iVar13 = piVar10[2];
            iVar4 = piVar10[3];
            *(uint *)((int)piVar10 + uVar8 + 4) = *(uint *)((int)piVar10 + uVar8 + 4) | 1;
            *(int *)(iVar13 + 0xc) = iVar4;
            *(int *)(iVar4 + 8) = iVar13;
            FUN_0008259c(param_1);
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
  uVar6 = FUN_00082970(param_1,uVar17);
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
      iVar4 = FUN_00082970(param_1,iVar13);
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
          FUN_00083d9c(param_1,uVar18 + 8);
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
    FUN_0008259c(param_1);
    return (int *)0x0;
  }
LAB_0008211e:
  *(uint *)(uVar6 + 4) = uVar15 | 1;
  *(uint *)(uVar1 + 8) = uVar15 + uVar6;
  *(uint *)(uVar15 + uVar6 + 4) = uVar8 | 1;
  FUN_0008259c(param_1);
  return (int *)(uVar6 + 8);
}


////>>0x0008234c>>FUN_0008234c>>////

undefined4 * FUN_0008234c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


////>>0x00082438>>FUN_00082438>>////

void FUN_00082438(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  
  if ((param_2 < param_1) && (puVar4 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar4)) {
    puVar6 = (undefined *)((int)param_1 + param_3);
    iVar1 = param_3 - 1;
    if (param_3 != 0) {
      do {
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        iVar1 = iVar1 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined *)puVar4;
      } while (iVar1 != -1);
    }
    return;
  }
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    puVar4 = param_1;
    puVar3 = param_2;
    do {
      puVar2 = puVar4 + 4;
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar4 = puVar2;
      puVar3 = puVar3 + 4;
    } while (puVar2 != (undefined4 *)((int)param_1 + (param_3 - 0x10 & 0xfffffff0) + 0x10));
    iVar1 = (param_3 - 0x10 >> 4) + 1;
    uVar7 = param_3 & 0xf;
    param_2 = param_2 + iVar1 * 4;
    param_1 = param_1 + iVar1 * 4;
    uVar5 = uVar7;
    puVar4 = param_1;
    puVar3 = param_2;
    if (3 < uVar7) {
      do {
        uVar5 = uVar5 - 4;
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (3 < uVar5);
      iVar1 = (uVar7 - 4 & 0xfffffffc) + 4;
      param_1 = (undefined4 *)((int)param_1 + iVar1);
      param_2 = (undefined4 *)((int)param_2 + iVar1);
      uVar7 = param_3 & 3;
    }
    param_3 = uVar7;
    if (param_3 == 0) {
      return;
    }
  }
  puVar4 = param_1;
  do {
    puVar3 = (undefined4 *)((int)puVar4 + 1);
    *(undefined *)puVar4 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = puVar3;
  } while (puVar3 != (undefined4 *)(param_3 + (int)param_1));
  return;
}


////>>0x00082504>>FUN_00082504>>////

void FUN_00082504(undefined4 *param_1,undefined param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) != 0) {
    bVar5 = param_3 == 0;
    puVar1 = param_1;
    param_3 = param_3 - 1;
    if (bVar5) {
      return;
    }
    while( true ) {
      param_1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      if (((uint)param_1 & 3) == 0) break;
      bVar5 = param_3 == 0;
      puVar1 = param_1;
      param_3 = param_3 - 1;
      if (bVar5) {
        return;
      }
    }
  }
  if (3 < param_3) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    uVar4 = param_3;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar4 = param_3 - 0x10;
      do {
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined4 *)((int)param_1 + (uVar4 & 0xfffffff0) + 0x10));
      param_3 = param_3 & 0xf;
      param_1 = param_1 + ((uVar4 >> 4) + 1) * 4;
      uVar4 = param_3;
      puVar1 = param_1;
      if (param_3 < 4) goto LAB_00082580;
    }
    do {
      param_3 = param_3 - 4;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    } while (3 < param_3);
    param_1 = (undefined4 *)((int)puVar1 + (uVar4 - 4 & 0xfffffffc) + 4);
    param_3 = uVar4 & 3;
  }
LAB_00082580:
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(param_3 + (int)param_1));
  }
  return;
}


////>>0x00082598>>FUN_00082598>>////

void FUN_00082598(void)

{
  return;
}


////>>0x0008259c>>FUN_0008259c>>////

void FUN_0008259c(void)

{
  return;
}


////>>0x000825a0>>FUN_000825a0>>////

void FUN_000825a0(undefined4 param_1,undefined4 param_2)

{
  FUN_000825b0(*DAT_000825ac,param_1,param_2);
  return;
}


////>>0x000825b0>>FUN_000825b0>>////

int * FUN_000825b0(undefined4 *param_1,int *param_2,uint param_3)

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
    piVar2 = (int *)FUN_00081e14(param_1,param_3);
    return piVar2;
  }
  FUN_00082598();
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
        FUN_0008259c(param_1);
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
              FUN_00082438(piVar2,param_2);
            }
            *(uint *)(iVar4 + 8) = (int)piVar9 + uVar8;
            *(uint *)((int)piVar9 + uVar8 + 4) = (uVar3 + uVar5) - uVar8 | 1;
            piVar9[1] = uVar8 | piVar9[1] & 1U;
            FUN_0008259c(param_1);
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
              FUN_00082438(piVar6,param_2);
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
          FUN_00082438(piVar6,param_2);
          uVar5 = piVar9[1];
          piVar2 = piVar9;
          param_2 = piVar6;
        }
        goto LAB_0008268c;
      }
    }
    piVar9 = (int *)FUN_00081e14(param_1,param_3);
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
        FUN_00082438(piVar9,param_2);
      }
      FUN_00083d9c(param_1,param_2);
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
    FUN_00083d9c(param_1,(int)piVar2 + uVar8 + 8);
  }
LAB_000826a4:
  FUN_0008259c(param_1);
  return piVar9;
}


////>>0x00082970>>FUN_00082970>>////

void FUN_00082970(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_00082990;
  *(undefined4 *)PTR_DAT_00082990 = 0;
  iVar2 = FUN_0008118c(param_2);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
    return;
  }
  return;
}


////>>0x00082994>>FUN_00082994>>////

void FUN_00082994(uint *param_1,uint *param_2)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) != 0) {
    do {
      cVar1 = *(char *)param_2;
      *(char *)param_1 = cVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    } while (cVar1 != '\0');
    return;
  }
  if (((uint)param_2 & 3) != 0) {
    puVar4 = param_2;
    if (((uint)param_2 & 1) != 0) {
      puVar4 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)param_2;
      *(char *)param_1 = cVar1;
      param_1 = (uint *)((int)param_1 + 1);
      if (cVar1 == '\0') {
        return;
      }
    }
    param_2 = puVar4;
    if (((uint)puVar4 & 2) != 0) {
      param_2 = (uint *)((int)puVar4 + 2);
      uVar2 = *(ushort *)puVar4;
      bVar8 = (uVar2 & 0xff) == 0;
      if (bVar8) {
        *(char *)param_1 = (char)uVar2;
      }
      else {
        *(ushort *)param_1 = uVar2;
        bVar8 = (uVar2 & 0xff00) == 0;
        param_1 = (uint *)((int)param_1 + 2);
      }
      if (bVar8) {
        return;
      }
    }
  }
  uVar5 = *param_2;
  puVar4 = param_2 + 1;
  puVar7 = param_1;
  if (((uint)param_2 & 4) != 0) {
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_000829f8;
    puVar7 = param_1 + 1;
    *param_1 = uVar5;
    puVar4 = param_2 + 2;
    uVar5 = param_2[1];
  }
  while( true ) {
    puVar3 = puVar4 + 1;
    uVar6 = *puVar4;
    param_1 = puVar7;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
    param_1 = puVar7 + 1;
    *puVar7 = uVar5;
    uVar5 = uVar6;
    if ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) != 0) break;
    puVar4 = puVar4 + 2;
    uVar5 = *puVar3;
    puVar7 = puVar7 + 2;
    *param_1 = uVar6;
  }
LAB_000829f8:
  do {
    *(char *)param_1 = (char)uVar5;
    uVar6 = uVar5 & 0xff;
    uVar5 = uVar5 >> 8 | uVar5 << 0x18;
    param_1 = (uint *)((int)param_1 + 1);
  } while (uVar6 != 0);
  return;
}


////>>0x00082a50>>FUN_00082a50>>////

int FUN_00082a50(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)(param_1 & 0xfffffffc);
  iVar1 = -(param_1 & 3);
  uVar3 = *puVar2;
  if ((param_1 & 3) != 0) {
    uVar3 = uVar3 | 0xffffffffU >> ((iVar1 + 4U & 0x1f) << 3);
  }
  while (puVar2 = puVar2 + 1, (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
    iVar1 = iVar1 + 4;
    uVar3 = *puVar2;
  }
  bVar4 = (uVar3 & 0xff) == 0;
  if (!bVar4) {
    iVar1 = iVar1 + 1;
    bVar4 = (uVar3 & 0xff00) == 0;
  }
  if (!bVar4) {
    iVar1 = iVar1 + 1;
    bVar4 = (uVar3 & 0xff0000) == 0;
  }
  if (!bVar4) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


////>>0x00082ac0>>FUN_00082ac0>>////

int FUN_00082ac0(undefined4 param_1,int param_2,int **param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (-1 < *(int *)(param_2 + 100) << 0x12) {
    iVar2 = FUN_00083f34();
    param_3[2] = (int *)0x0;
    param_3[1] = (int *)0x0;
    return iVar2;
  }
  piVar3 = param_3[2];
  piVar1 = *param_3;
  while (piVar3 != (int *)0x0) {
    uVar6 = piVar1[1];
    uVar7 = uVar6 >> 2;
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)(*piVar1 + -4);
      uVar4 = 0;
      do {
        puVar5 = puVar5 + 1;
        iVar2 = FUN_00083c40(param_1,*puVar5,param_2);
        uVar4 = uVar4 + 1;
        if (iVar2 == -1) goto LAB_00082b00;
      } while (uVar7 != uVar4);
      piVar3 = param_3[2];
    }
    piVar3 = (int *)((int)piVar3 - (uVar6 & 0xfffffffc));
    param_3[2] = piVar3;
    piVar1 = piVar1 + 2;
  }
  iVar2 = 0;
LAB_00082b00:
  param_3[2] = (int *)0x0;
  param_3[1] = (int *)0x0;
  return iVar2;
}


////>>0x00082b38>>FUN_00082b38>>////

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00082b38(int param_1,int param_2,byte *******param_3,int **param_4)

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
    FUN_00083b14();
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
    iVar11 = FUN_00083808(param_1,param_2);
    if (iVar11 != 0) {
      return (byte *)0xffffffff;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x1a) != 10) goto LAB_00082b8a;
  }
  if (-1 < *(short *)(param_2 + 0xe)) {
    pbVar8 = (byte *)FUN_0008378c(param_1,param_2,param_3,param_4);
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
        iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
          local_d4 = (byte *******)FUN_00082a50(ppppppppbVar29);
          pppppppbVar14 = (byte *******)0x0;
          cVar4 = local_a1;
        }
        else {
          pppppppbVar14 = (byte *******)FUN_00084384(ppppppppbVar29,0,local_d4);
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
          cVar13 = '\n';
          FUN_00084750((int)lVar31,uVar28,10,0);
          *(char *)ppppppppbVar29 = cVar13 + '0';
          lVar31 = FUN_00084750((int)lVar31,uVar28,10,0);
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
    FUN_00082ac0(param_1,param_2,&local_9c);
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
          iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
      iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
        iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
      iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
          iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
      iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
       (local_98 = pppppppbVar20, iVar11 = FUN_00082ac0(param_1,param_2,&local_9c), iVar11 != 0))
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
          iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
      iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
          iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
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
      iVar11 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar11 != 0) goto LAB_000833de;
    }
  }
  if ((int)local_dc < (int)pppppppbVar25) {
    local_dc = pppppppbVar25;
  }
  local_c4 = local_c4 + (int)local_dc;
  if ((local_94 != (byte *******)0x0) &&
     (iVar11 = FUN_00082ac0(param_1,param_2,&local_9c), iVar11 != 0)) goto LAB_000833de;
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


////>>0x0008378c>>FUN_0008378c>>////

int FUN_0008378c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *local_488 [2];
  undefined4 local_480;
  ushort local_47c;
  undefined2 local_47a;
  undefined *local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_464;
  undefined4 local_424;
  undefined auStack_420 [1024];
  
  local_424 = *(undefined4 *)(param_2 + 100);
  local_46c = *(undefined4 *)(param_2 + 0x1c);
  local_47a = *(undefined2 *)(param_2 + 0xe);
  local_464 = *(undefined4 *)(param_2 + 0x24);
  local_488[0] = auStack_420;
  local_47c = *(ushort *)(param_2 + 0xc) & 0xfffd;
  local_480 = 0x400;
  local_474 = 0x400;
  local_470 = 0;
  local_478 = local_488[0];
  iVar1 = FUN_00082b38(param_1,local_488);
  if ((-1 < iVar1) && (iVar2 = FUN_00083adc(param_1,local_488), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((int)((uint)local_47c << 0x19) < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  return iVar1;
}


////>>0x00083808>>FUN_00083808>>////

undefined4 FUN_00083808(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((*DAT_000838c8 != 0) && (*(int *)(*DAT_000838c8 + 0x38) == 0)) {
    FUN_00083b14();
  }
  uVar4 = *(ushort *)(param_2 + 3);
  uVar3 = (uint)uVar4;
  if ((int)(uVar3 << 0x1c) < 0) {
    iVar2 = param_2[4];
  }
  else {
    if (-1 < (int)(uVar3 << 0x1b)) {
      *param_1 = 9;
      *(ushort *)(param_2 + 3) = uVar4 | 0x40;
      return 0xffffffff;
    }
    if ((int)(uVar3 << 0x1d) < 0) {
      if ((int *)param_2[0xc] != (int *)0x0) {
        if ((int *)param_2[0xc] != param_2 + 0x10) {
          FUN_00083d9c(param_1);
          uVar4 = *(ushort *)(param_2 + 3);
        }
        param_2[0xc] = 0;
      }
      iVar2 = param_2[4];
      uVar4 = uVar4 & 0xffdb;
      *param_2 = iVar2;
      param_2[1] = 0;
    }
    else {
      iVar2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = uVar4 | 8;
    uVar3 = (uint)(uVar4 | 8);
  }
  if ((iVar2 == 0) && ((uVar3 & 0x280) != 0x200)) {
    FUN_000842a4(param_1,param_2);
    uVar3 = (uint)*(ushort *)(param_2 + 3);
    iVar2 = param_2[4];
  }
  uVar1 = uVar3 & 1;
  if (uVar1 == 0) {
    if (-1 < (int)(uVar3 << 0x1e)) {
      uVar1 = param_2[5];
    }
    param_2[2] = uVar1;
  }
  else {
    param_2[6] = -param_2[5];
    param_2[2] = 0;
  }
  if ((iVar2 == 0) && ((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0)) {
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    return 0xffffffff;
  }
  return 0;
}


////>>0x00083974>>FUN_00083974>>////

/* WARNING: Removing unreachable block (ram,0x00083934) */
/* WARNING: Removing unreachable block (ram,0x00083954) */

undefined4 FUN_00083974(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_00083984;
  if (DAT_00083980 == 0) {
    return param_1;
  }
  iVar4 = *(int *)PTR_DAT_0008396c;
  puVar2 = *(undefined4 **)(iVar4 + 0x148);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(iVar4 + 0x14c);
    *(undefined4 **)(iVar4 + 0x148) = puVar2;
  }
  iVar3 = puVar2[1];
  if (0x1f < iVar3) {
    if ((DAT_00083970 == 0) ||
       (puVar2 = (undefined4 *)FUN_00081df4(400), puVar2 == (undefined4 *)0x0)) {
      return 0xffffffff;
    }
    *puVar2 = *(undefined4 *)(iVar4 + 0x148);
    puVar2[1] = 0;
    iVar3 = 0;
    *(undefined4 **)(iVar4 + 0x148) = puVar2;
    puVar2[0x62] = 0;
    puVar2[99] = 0;
  }
  puVar2[1] = iVar3 + 1;
  puVar2[iVar3 + 2] = puVar1;
  return 0;
}


////>>0x00083adc>>FUN_00083adc>>////

undefined4 FUN_00083adc(int *param_1,int *param_2)

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
    FUN_00083b14();
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
    FUN_00083d9c(param_1);
  }
  param_2[0xc] = 0;
  return 0;
}


////>>0x00083b14>>FUN_00083b14>>////

void FUN_00083b14(int param_1)

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
    FUN_00082504(puVar5 + 0x17,0,8);
    puVar4 = PTR_LAB_000844bc_1_00083c04;
    puVar3 = PTR_FUN_0008449c_1_00083c00;
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
    FUN_00082504(puVar6 + 0x17,0,8);
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
    FUN_00082504(puVar5 + 0x17,0,8);
    puVar5[7] = puVar5;
    puVar5[8] = puVar1;
    puVar5[9] = uVar2;
    puVar5[10] = puVar3;
    puVar5[0xb] = puVar4;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}


////>>0x00083c08>>FUN_00083c08>>////

void FUN_00083c08(void)

{
  return;
}


////>>0x00083c0c>>FUN_00083c0c>>////

void FUN_00083c0c(void)

{
  return;
}


////>>0x00083c40>>FUN_00083c40>>////

uint FUN_00083c40(undefined4 param_1,uint param_2,byte **param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_1c;
  byte abStack_1b [3];
  
  if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x12)) {
    *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) | 0x2000;
    param_3[0x19] = (byte *)((uint)param_3[0x19] | 0x2000);
  }
  uVar1 = FUN_00084298();
  if ((uVar1 == 1) && (param_2 - 1 < 0xff)) {
    uVar3 = param_2 & 0xff;
    local_1c = (byte)uVar3;
  }
  else {
    uVar1 = FUN_0008456c(param_1,&local_1c,param_2,param_3 + 0x17);
    if (uVar1 == 0xffffffff) {
      *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) | 0x40;
      return 0xffffffff;
    }
    if (uVar1 == 0) {
      return param_2;
    }
    uVar3 = (uint)local_1c;
  }
  uVar5 = 0;
  do {
    pbVar4 = param_3[2] + -1;
    param_3[2] = pbVar4;
    if ((int)pbVar4 < 0) {
      if ((int)param_3[6] <= (int)pbVar4) {
        **param_3 = (byte)uVar3;
        pbVar4 = *param_3;
        uVar3 = (uint)*pbVar4;
        if (uVar3 != 10) goto LAB_00083c90;
      }
      iVar2 = FUN_000844c4(param_1,uVar3,param_3);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
    else {
      **param_3 = (byte)uVar3;
      pbVar4 = *param_3;
LAB_00083c90:
      *param_3 = pbVar4 + 1;
    }
    if (uVar1 <= uVar5 + 1) {
      return param_2;
    }
    uVar3 = (uint)abStack_1b[uVar5];
    uVar5 = uVar5 + 1;
  } while( true );
}


////>>0x00083d00>>FUN_00083d00>>////

undefined4 FUN_00083d00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_00083d90;
  FUN_00082598();
  uVar4 = *(uint *)(*(int *)(iVar1 + 8) + 4) & 0xfffffffc;
  iVar5 = ((uVar4 - param_2) + 0xfef & 0xfffff000) - 0x1000;
  if (0xfff < iVar5) {
    iVar3 = FUN_00082970(param_1,0);
    if (iVar3 == *(int *)(iVar1 + 8) + uVar4) {
      iVar3 = FUN_00082970(param_1,-iVar5);
      puVar2 = PTR_DAT_00083d94;
      if (iVar3 != -1) {
        iVar3 = *(int *)PTR_DAT_00083d94;
        *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar4 - iVar5 | 1;
        *(int *)puVar2 = iVar3 - iVar5;
        FUN_0008259c(param_1);
        return 1;
      }
      iVar5 = FUN_00082970(param_1,0);
      puVar2 = PTR_DAT_00083d94;
      uVar4 = iVar5 - *(int *)(iVar1 + 8);
      if (0xf < (int)uVar4) {
        iVar3 = *DAT_00083d98;
        *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar4 | 1;
        *(int *)puVar2 = iVar5 - iVar3;
      }
    }
  }
  FUN_0008259c(param_1);
  return 0;
}


////>>0x00083d9c>>FUN_00083d9c>>////

void FUN_00083d9c(undefined4 param_1,int param_2)

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
  FUN_00082598();
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
      FUN_00083d00(param_1,*(undefined4 *)PTR_DAT_00083f30);
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
        FUN_0008259c(param_1);
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
  FUN_0008259c(param_1);
  return;
}


////>>0x00083f34>>FUN_00083f34>>////

undefined4 FUN_00083f34(undefined4 *param_1,uint *param_2,uint **param_3)

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
      iVar1 = FUN_00083808(param_1,param_2);
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
                uVar7 = FUN_00081e14(param_1,uVar2);
                if (uVar7 == 0) {
                  *param_1 = 0xc;
                  uVar3 = *(ushort *)(param_2 + 3);
                  goto LAB_00084030;
                }
                FUN_0008234c(uVar7,param_2[4],iVar1);
                *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
              }
              else {
                uVar7 = FUN_000825b0(param_1);
                if (uVar7 == 0) {
                  FUN_00083d9c(param_1,param_2[4]);
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
            FUN_00082438(uVar4,uVar9,uVar2);
            param_2[2] = param_2[2] - uVar2;
            *param_2 = *param_2 + uVar2;
            uVar2 = uVar8;
          }
          else if ((param_2[4] < *param_2) || (uVar4 = param_2[5], uVar8 < uVar4)) {
            if (uVar8 < uVar2) {
              uVar2 = uVar8;
            }
            FUN_00082438(*param_2,uVar9,uVar2);
            uVar4 = param_2[2];
            param_2[2] = uVar4 - uVar2;
            *param_2 = *param_2 + uVar2;
            if ((uVar4 - uVar2 == 0) && (iVar1 = FUN_00083adc(param_1,param_2), iVar1 != 0))
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
            iVar1 = FUN_00084384(uVar10,10,uVar2);
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
            FUN_00082438(uVar8,uVar10,uVar11);
            *param_2 = *param_2 + uVar11;
            iVar1 = FUN_00083adc(param_1,param_2);
            if (iVar1 != 0) goto LAB_0008402e;
          }
          else if ((int)uVar4 < (int)uVar9) {
            FUN_00082438(uVar8,uVar10,uVar4);
            param_2[2] = param_2[2] - uVar4;
            *param_2 = uVar4 + *param_2;
            uVar11 = uVar4;
          }
          else {
            uVar11 = (*(code *)param_2[9])(param_1,param_2[7],uVar10,uVar9);
            if ((int)uVar11 < 1) goto LAB_0008402e;
          }
          uVar7 = uVar7 - uVar11;
          if ((uVar7 == 0) && (iVar1 = FUN_00083adc(param_1,param_2), local_2c = uVar7, iVar1 != 0))
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


////>>0x00084290>>FUN_00084290>>////

undefined4 FUN_00084290(void)

{
  return DAT_00084294;
}


////>>0x00084298>>FUN_00084298>>////

undefined4 FUN_00084298(void)

{
  return *DAT_000842a0;
}


////>>0x000842a4>>FUN_000842a4>>////

void FUN_000842a4(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined auStack_54 [4];
  uint local_50;
  
  uVar1 = *(ushort *)(param_2 + 3);
  uVar4 = (uint)uVar1;
  if ((int)(uVar4 << 0x1e) < 0) {
    *param_2 = (int)param_2 + 0x43;
    param_2[4] = (int)param_2 + 0x43;
    param_2[5] = 1;
    return;
  }
  if (-1 < *(short *)((int)param_2 + 0xe)) {
    iVar2 = FUN_000846b4(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_54);
    if (-1 < iVar2) {
      bVar5 = (local_50 & 0xf000) == 0x2000;
      if (((local_50 & 0xf000) == 0x8000) &&
         ((undefined *)param_2[10] == PTR_FUN_0008449c_1_00084380)) {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        param_2[0x13] = 0x400;
      }
      else {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
      }
      goto LAB_00084300;
    }
    uVar1 = *(ushort *)(param_2 + 3);
    uVar4 = (uint)uVar1;
  }
  *(ushort *)(param_2 + 3) = uVar1 | 0x800;
  if ((uVar4 & 0x80) == 0) {
    iVar2 = 0x400;
  }
  else {
    iVar2 = 0x40;
  }
  bVar5 = false;
LAB_00084300:
  iVar3 = FUN_00081e14(param_1,iVar2);
  uVar1 = *(ushort *)(param_2 + 3);
  if (iVar3 == 0) {
    if (-1 < (int)((uint)uVar1 << 0x16)) {
      *(ushort *)(param_2 + 3) = uVar1 | 2;
      *param_2 = (int)param_2 + 0x43;
      param_2[4] = (int)param_2 + 0x43;
      param_2[5] = 1;
    }
  }
  else {
    *(undefined **)(param_1 + 0x3c) = PTR_LAB_00083b08_1_0008437c;
    *(ushort *)(param_2 + 3) = uVar1 | 0x80;
    *param_2 = iVar3;
    param_2[4] = iVar3;
    param_2[5] = iVar2;
    if ((bVar5) && (iVar2 = FUN_000846dc(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0))
    {
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 1;
    }
  }
  return;
}


////>>0x00084384>>FUN_00084384>>////

uint * FUN_00084384(uint *param_1,char param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) == 0) {
LAB_000843b4:
    puVar1 = param_1;
    if ((uint *)0x3 < param_3) {
      do {
        uVar2 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        puVar1 = param_1;
        if ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) != 0) break;
        param_3 = param_3 + -1;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while ((uint *)0x3 < param_3);
    }
    param_1 = param_3;
    pcVar4 = (char *)((int)param_1 + -1);
    if ((param_1 != (uint *)0x0) && (param_1 = puVar1, *(char *)puVar1 != param_2)) {
      pcVar3 = (char *)0x0;
      do {
        param_1 = (uint *)((int)param_1 + 1);
        bVar5 = pcVar3 == pcVar4;
        pcVar3 = pcVar3 + 1;
        if (bVar5) goto LAB_000843dc;
      } while (*(char *)param_1 != param_2);
    }
  }
  else if (param_3 == (uint *)0x0) {
LAB_000843dc:
    param_1 = (uint *)0x0;
  }
  else if (*(char *)param_1 != param_2) {
    puVar1 = (uint *)((int)param_1 + 1);
    param_3 = (uint *)((int)param_3 + -1);
    do {
      param_1 = puVar1;
      if (((uint)param_1 & 3) == 0) goto LAB_000843b4;
      if (param_3 == (uint *)0x0) goto LAB_000843dc;
      puVar1 = (uint *)((int)param_1 + 1);
      param_3 = (uint *)((int)param_3 + -1);
    } while (*(char *)param_1 != param_2);
  }
  return param_1;
}


////>>0x00084464>>FUN_00084464>>////

void FUN_00084464(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar4 = *(ushort *)(param_2 + 0xc);
  if ((int)((uint)uVar4 << 0x17) < 0) {
    FUN_00084700(param_1,(int)*(short *)(param_2 + 0xe),0,2);
    uVar4 = *(ushort *)(param_2 + 0xc);
  }
  *(ushort *)(param_2 + 0xc) = uVar4 & 0xefff;
  puVar2 = PTR_DAT_000845fc;
  sVar1 = *(short *)(param_2 + 0xe);
  *(undefined4 *)PTR_DAT_000845fc = 0;
  iVar3 = FUN_000811cc((int)sVar1,param_3,param_4,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  if ((iVar3 == -1) && (*(int *)puVar2 != 0)) {
    *param_1 = *(int *)puVar2;
    return;
  }
  return;
}


////>>0x0008449c>>FUN_0008449c>>////

void FUN_0008449c(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_00084700(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 == -1) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (iVar1 != -1) {
    *(int *)(param_2 + 0x50) = iVar1;
  }
  *(ushort *)(param_2 + 0xc) = uVar2;
  return;
}


////>>0x000844c4>>FUN_000844c4>>////

uint FUN_000844c4(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_00083b14();
  }
  uVar1 = *(ushort *)(param_3 + 3);
  uVar2 = (uint)uVar1;
  param_3[2] = param_3[6];
  if ((-1 < (int)(uVar2 << 0x1c)) || (iVar4 = param_3[4], iVar4 == 0)) {
    iVar4 = FUN_00083808(param_1,param_3,uVar1,uVar2,param_4);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(param_3 + 3);
    iVar4 = param_3[4];
    uVar2 = (uint)uVar1;
  }
  param_2 = param_2 & 0xff;
  if ((int)(uVar2 << 0x12) < 0) {
    puVar3 = (undefined *)*param_3;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) {
LAB_000844f6:
      iVar4 = iVar4 + 1;
      goto LAB_000844f8;
    }
  }
  else {
    param_3[0x19] = param_3[0x19] & 0xffffdfff;
    puVar3 = (undefined *)*param_3;
    *(ushort *)(param_3 + 3) = uVar1 | 0x2000;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) goto LAB_000844f6;
  }
  iVar4 = FUN_00083adc(param_1,param_3);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  puVar3 = (undefined *)*param_3;
  iVar4 = 1;
LAB_000844f8:
  param_3[2] = param_3[2] + -1;
  *param_3 = puVar3 + 1;
  *puVar3 = (char)param_2;
  if (((param_3[5] == iVar4) ||
      (((int)((uint)*(ushort *)(param_3 + 3) << 0x1f) < 0 && (param_2 == 10)))) &&
     (iVar4 = FUN_00083adc(param_1,param_3), iVar4 != 0)) {
    return 0xffffffff;
  }
  return param_2;
}


////>>0x0008456c>>FUN_0008456c>>////

void FUN_0008456c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined auStack_24 [12];
  
  if (param_2 == 0) {
    pcVar3 = *(code **)PTR_DAT_000845b8;
    uVar1 = FUN_00084290();
    iVar2 = (*pcVar3)(param_1,auStack_24,0,uVar1,param_4);
  }
  else {
    pcVar3 = *(code **)PTR_DAT_000845b8;
    uVar1 = FUN_00084290();
    iVar2 = (*pcVar3)(param_1,param_2,param_3,uVar1,param_4);
  }
  if (iVar2 == -1) {
    *param_4 = 0;
    *param_1 = 0x8a;
  }
  return;
}


////>>0x000845bc>>FUN_000845bc>>////

undefined4 FUN_000845bc(undefined4 *param_1,undefined *param_2,uint param_3)

{
  if (param_2 == (undefined *)0x0) {
    return 0;
  }
  if (param_3 < 0x100) {
    *param_2 = (char)param_3;
    return 1;
  }
  *param_1 = 0x8a;
  return 0xffffffff;
}


////>>0x000846a4>>FUN_000846a4>>////

undefined4 FUN_000846a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_000846b0;
  if (param_1 != 0) {
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x38) == 0)) {
      FUN_00083b14();
    }
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar1 = FUN_00083adc(iVar3,param_1);
      if ((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x2c))(iVar3,*(undefined4 *)(param_1 + 0x1c)), iVar2 < 0))
      {
        uVar1 = 0xffffffff;
      }
      if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x18) < 0) {
        FUN_00083d9c(iVar3,*(undefined4 *)(param_1 + 0x10));
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        if (*(int *)(param_1 + 0x30) != param_1 + 0x40) {
          FUN_00083d9c(iVar3);
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_00083d9c(iVar3);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      FUN_00083c08();
      *(undefined2 *)(param_1 + 0xc) = 0;
      FUN_00083c0c();
      return uVar1;
    }
  }
  return 0;
}


////>>0x000846b4>>FUN_000846b4>>////

void FUN_000846b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_000846d8;
  *(undefined4 *)PTR_DAT_000846d8 = 0;
  iVar2 = FUN_000811b4(param_2,param_3,param_3,0,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
    return;
  }
  return;
}


////>>0x000846dc>>FUN_000846dc>>////

void FUN_000846dc(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_000846fc;
  *(undefined4 *)PTR_DAT_000846fc = 0;
  iVar2 = FUN_000811be(param_2);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
    return;
  }
  return;
}


////>>0x00084700>>FUN_00084700>>////

void FUN_00084700(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_00084724;
  *(undefined4 *)PTR_DAT_00084724 = 0;
  iVar2 = FUN_000811c2(param_2,param_3,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
    return;
  }
  return;
}


////>>0x00084728>>FUN_00084728>>////

void FUN_00084728(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0008474c;
  *(undefined4 *)PTR_DAT_0008474c = 0;
  iVar2 = FUN_000811c6(param_2,param_3,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
    return;
  }
  return;
}


////>>0x00084750>>FUN_00084750>>////

int FUN_00084750(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_1 = -1;
    }
    return param_1;
  }
  iVar1 = FUN_000847ac();
  return iVar1;
}


////>>0x0008477c>>FUN_0008477c>>////

void FUN_0008477c(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_000847e0();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847ac>>FUN_000847ac>>////

void FUN_000847ac(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00084a80();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847e0>>FUN_000847e0>>////

undefined8 FUN_000847e0(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00084a80>>FUN_00084a80>>////

undefined8 FUN_00084a80(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00085858>>FUN_00085858>>////

void FUN_00085858(void)

{
  return;
}

