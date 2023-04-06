
////>>0x08000188>>FUN_08000188>>////

undefined * FUN_08000188(undefined *param_1)

{
  if (*PTR_DAT_080001a0 == '\0') {
    if (DAT_080001a4 != 0) {
      param_1 = PTR_FUN_080001a8;
    }
    *PTR_DAT_080001a0 = 1;
  }
  return param_1;
}


////>>0x080001ac>>FUN_080001ac>>////

undefined8 FUN_080001ac(undefined *param_1,undefined *param_2)

{
  if (DAT_080001bc != 0) {
    param_1 = PTR_FUN_080001c4;
    param_2 = PTR_DAT_080001c0;
  }
  return CONCAT44(param_2,param_1);
}


////>>0x080001c8>>FUN_080001c8>>////

void FUN_080001c8(void)

{
  return;
}


////>>0x080001d4>>FUN_080001d4>>////

void FUN_080001d4(void)

{
  return;
}


////>>0x080001e0>>FUN_080001e0>>////

void FUN_080001e0(void)

{
  return;
}


////>>0x080001ec>>FUN_080001ec>>////

void FUN_080001ec(void)

{
  return;
}


////>>0x080001f8>>FUN_080001f8>>////

void FUN_080001f8(void)

{
  *PTR_DAT_0800020c = 0;
  FUN_08000210();
  return;
}


////>>0x08000210>>FUN_08000210>>////

void FUN_08000210(void)

{
  FUN_080001ec();
  FUN_080001d4();
  return;
}


////>>0x08000220>>FUN_08000220>>////

void FUN_08000220(char param_1)

{
  if (param_1 != *PTR_DAT_08000264) {
    FUN_08002fd4();
    if (param_1 == '\x01') {
      FUN_080001c8();
    }
    else if (param_1 == '\x02') {
      FUN_080001e0();
    }
    else {
      FUN_08000210();
    }
    *PTR_DAT_08000264 = param_1;
  }
  return;
}


////>>0x08000268>>FUN_08000268>>////

int FUN_08000268(void)

{
  int iVar1;
  
  iVar1 = FUN_08005a84();
  return (iVar1 + 1) * 1000 -
         (uint)((ulonglong)DAT_0800029c * (ulonglong)(*(uint *)(DAT_08000298 + 8) >> 3) >> 0x21);
}


////>>0x080002a0>>FUN_080002a0>>////

void FUN_080002a0(undefined4 param_1)

{
  FUN_08005a98(param_1);
  return;
}


////>>0x080002b6>>FUN_080002b6>>////

void FUN_080002b6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_08000268();
  uVar2 = (uint)(lVar4 + (ulonglong)param_1 >> 0x20);
  do {
    uVar5 = FUN_08000268();
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar3 = (uint)(lVar4 + (ulonglong)param_1) <= (uint)uVar5;
    }
  } while (!bVar3);
  return;
}


////>>0x080002f0>>FUN_080002f0>>////

void FUN_080002f0(void)

{
  FUN_0800b430(PTR_DAT_08000308,0xff,4);
  *(undefined4 *)PTR_DAT_0800030c = 1;
  return;
}


////>>0x08000310>>FUN_08000310>>////

undefined FUN_08000310(uint param_1)

{
  if (*(int *)PTR_DAT_08000338 == 0) {
    FUN_080002f0();
  }
  return PTR_DAT_0800033c[param_1 & 0x3ff];
}


////>>0x08000340>>FUN_08000340>>////

void FUN_08000340(uint param_1,undefined param_2)

{
  if (*(int *)PTR_DAT_0800036c == 0) {
    FUN_080002f0();
  }
  PTR_DAT_08000370[param_1 & 0x3ff] = param_2;
  return;
}


////>>0x08000374>>FUN_08000374>>////

void FUN_08000374(int param_1,char *param_2,int param_3)

{
  int local_1c;
  char *local_18;
  int local_14;
  char local_9;
  
  local_9 = '\0';
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (*(int *)PTR_DAT_080003e8 == 0) {
    FUN_080002f0();
    local_18 = param_2;
    local_14 = param_1;
  }
  for (; local_1c != 0; local_1c = local_1c + -1) {
    local_9 = (local_9 != '\0') + *local_18;
    FUN_08000340(local_14,*local_18);
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  FUN_08000340(local_14,local_9);
  return;
}


////>>0x080003ec>>FUN_080003ec>>////

bool FUN_080003ec(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int local_1c;
  int local_18;
  char *local_14;
  byte local_9;
  
  local_9 = 0;
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (*(int *)PTR_DAT_08000470 == 0) {
    FUN_080002f0();
    local_18 = param_2;
    local_14 = param_1;
  }
  for (; local_1c != 0; local_1c = local_1c + -1) {
    cVar1 = FUN_08000310(local_18);
    local_9 = cVar1 + (local_9 != 0);
    *local_14 = cVar1;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  uVar2 = FUN_08000310(local_18);
  return local_9 == uVar2;
}


////>>0x08000478>>FUN_08000478>>////

void FUN_08000478(undefined param_1,undefined param_2,undefined param_3)

{
  PTR_DAT_080004a8[0x19] = param_1;
  PTR_DAT_080004a8[0x1a] = param_2;
  PTR_DAT_080004a8[0x1b] = param_3;
  return;
}


////>>0x080004ac>>FUN_080004ac>>////

void FUN_080004ac(void)

{
  int iVar1;
  
  FUN_0800b430(PTR_DAT_080004f0,0,0x38);
  *(undefined4 *)(PTR_DAT_080004f0 + 8) = *(undefined4 *)(PTR_DAT_080004f4 + 0x10);
  FUN_08000478(0,1,2);
  PTR_DAT_080004f0[4] = 1;
  iVar1 = FUN_08004d7c(PTR_DAT_080004f0[0x1c],PTR_DAT_080004f8);
  if (iVar1 == 0) {
    FUN_08004030(10);
  }
  return;
}


////>>0x080004fc>>FUN_080004fc>>////

void FUN_080004fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08008e44(param_1);
  uVar1 = FUN_08009054(uVar1,*(undefined4 *)PTR_DAT_08000564);
  *(undefined4 *)(PTR_DAT_08000568 + 0xc) = uVar1;
  uVar1 = FUN_08008e44(param_2);
  uVar1 = FUN_08009054(uVar1,*(undefined4 *)(PTR_DAT_08000564 + 4));
  *(undefined4 *)(PTR_DAT_08000568 + 0x10) = uVar1;
  uVar1 = FUN_08008e44(param_3);
  uVar1 = FUN_08009054(uVar1,*(undefined4 *)(PTR_DAT_08000564 + 8));
  *(undefined4 *)(PTR_DAT_08000568 + 0x14) = uVar1;
  return;
}


////>>0x0800056c>>FUN_0800056c>>////

undefined4 FUN_0800056c(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (PTR_DAT_080005b0[3] != '\0') {
    uVar1 = FUN_08008590(param_1);
    uVar1 = FUN_08008640((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_080005a8,DAT_080005ac);
    param_1 = FUN_08008c30((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  }
  return param_1;
}


////>>0x080005b4>>FUN_080005b4>>////

uint FUN_080005b4(undefined4 param_1)

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
    FUN_0800b430(auStack_70 + 3,0,0xc);
    FUN_0800b430(auStack_70,0,0xc);
    *PTR_DAT_08000810 = 0;
    local_2f = 0;
    while (iVar3 = FUN_0800184c(&local_52,auStack_70 + 6,param_1,local_51), iVar3 != 0) {
      uVar7 = FUN_08008590(local_58);
      uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      local_24 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
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
          FUN_08000478(0,1,2);
          break;
        case 0x12:
          FUN_08000478(2,0,1);
          break;
        case 0x13:
          FUN_08000478(1,2,0);
          break;
        case 0x14:
          PTR_DAT_08000ca0[3] = 1;
          break;
        case 0x15:
          PTR_DAT_08000ca0[3] = 0;
          break;
        case 0x1c:
        case 0x1e:
          uVar4 = FUN_08008eec(local_58,DAT_08000ca4);
          uVar7 = FUN_08008590(uVar4);
          uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
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
          uVar4 = FUN_08008eec(local_58,DAT_08000ca4);
          uVar7 = FUN_08008590(uVar4);
          uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
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
      iVar3 = FUN_0800184c(&local_52,auStack_70 + 6,param_1,local_51);
      if (iVar3 != 0) {
        switch(local_52) {
        case 0x46:
          iVar3 = FUN_0800923c(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          if (PTR_DAT_08000ff0[2] == '\0') {
            uVar4 = FUN_0800056c(local_58);
            *(undefined4 *)(PTR_DAT_08000ff0 + 8) = uVar4;
          }
          else {
            local_2c = FUN_0800056c(local_58);
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
          uVar4 = FUN_0800056c(local_58);
          auStack_70[uVar5 - 0x49] = uVar4;
          break;
        case 0x4c:
          uVar7 = FUN_08008590(local_58);
          uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_39 = FUN_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          break;
        case 0x50:
          local_34 = local_58;
          break;
        case 0x52:
          local_38 = FUN_0800056c(local_58);
          break;
        case 0x53:
          iVar3 = FUN_08009228(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          break;
        case 0x54:
          iVar3 = FUN_08009228(local_58,0);
          if (iVar3 != 0) {
            *PTR_DAT_08000ff0 = 6;
          }
          uVar7 = FUN_08008590(local_58);
          uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          uVar2 = FUN_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          PTR_DAT_08000ff0[0x18] = uVar2;
          break;
        case 0x58:
          auStack_70[3] = FUN_0800056c(local_58);
          local_27 = local_27 | 1;
          break;
        case 0x59:
          auStack_70[4] = FUN_0800056c(local_58);
          local_27 = local_27 | 2;
          break;
        case 0x5a:
          auStack_70[5] = FUN_0800056c(local_58);
          local_27 = local_27 | 4;
        }
        goto switchD_08000d18_caseD_47;
      }
      if (*PTR_DAT_08000ff0 == '\0') {
        if (PTR_DAT_08000ff4[1] != '\a') {
          FUN_0800525c((int)(char)PTR_DAT_08000ff0[6]);
          FUN_08000220(PTR_DAT_08000ff0[7]);
        }
        if ((local_26 & 0x200) != 0) {
          iVar3 = FUN_08004d7c(PTR_DAT_08000ff0[0x1c],&local_7c);
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
          iVar3 = FUN_08009228(local_34,0);
          if (iVar3 == 0) {
            if (PTR_DAT_08000ff4[1] != '\a') {
              FUN_08002408(local_34);
            }
          }
          else {
            *PTR_DAT_08000ff0 = 6;
          }
          break;
        case '\x02':
          uVar7 = FUN_08008590(local_34);
          uVar7 = FUN_08009798((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          local_24 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
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
              iVar3 = FUN_08004d7c(local_24 & 0xff,local_94);
              if (iVar3 == 0) {
                return 10;
              }
              for (local_3a = 0; local_3a < 3; local_3a = local_3a + 1) {
                if (((int)(uint)local_27 >> local_3a & 1U) != 0) {
                  if (local_39 == '\x14') {
                    uVar5 = (uint)local_3a;
                    uVar4 = FUN_08008cd8(*(undefined4 *)(PTR_DAT_08001304 + (local_3a + 2) * 4 + 4),
                                         auStack_70[local_3a + 3]);
                    local_94[uVar5] = uVar4;
                  }
                  else {
                    local_94[local_3a] = auStack_70[local_3a + 3];
                  }
                }
              }
              FUN_08004bf4(local_24 & 0xff,local_94);
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
                uVar4 = FUN_08008cdc(auStack_70[local_3b + 3],
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3b + 2) * 4 + 4));
                auStack_70[uVar5 + 3] = uVar4;
              }
              else {
                uVar6 = auStack_70[local_3b + 3];
                uVar4 = FUN_08008cdc(*(undefined4 *)(PTR_DAT_08001304 + (local_3b + 8) * 4),
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3b + 10) * 4 + 4));
                uVar5 = (uint)local_3b;
                uVar4 = FUN_08008cdc(uVar6,uVar4);
                auStack_70[uVar5 + 3] = uVar4;
              }
            }
            FUN_08001e98(auStack_70[3],auStack_70[4],auStack_70[5],
                         *(undefined4 *)(PTR_DAT_08001308 + 0x14),0);
          }
          if (local_2e == '\x05') {
            iVar3 = FUN_08004d7c(7,local_94 + 3);
            if (iVar3 == 0) {
              return 10;
            }
          }
          else {
            iVar3 = FUN_08004d7c(6,local_94 + 3);
            if (iVar3 == 0) {
              return 10;
            }
          }
          FUN_08001e98(local_94[3],local_84,local_80,*(undefined4 *)(PTR_DAT_08001308 + 0x14),0);
          puVar1 = PTR_DAT_08001304;
          *(undefined4 *)(PTR_DAT_08001304 + 0xc) = local_94[3];
          *(undefined4 *)(puVar1 + 0x10) = local_84;
          *(undefined4 *)(puVar1 + 0x14) = local_80;
          local_27 = 0;
          break;
        case '\x04':
        case '\x06':
          if (local_2e == '\x06') {
            FUN_08004bf4(7,PTR_DAT_0800130c);
          }
          else {
            FUN_08004bf4(6,PTR_DAT_0800130c);
          }
          break;
        case '\a':
          if (local_27 == 0) {
            *PTR_DAT_08001304 = 6;
          }
          else {
            for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
              if (((int)(uint)local_27 >> local_3c & 1U) != 0) {
                uVar4 = FUN_08008cd8(*(undefined4 *)(PTR_DAT_08001304 + (local_3c + 2) * 4 + 4),
                                     *(undefined4 *)(PTR_DAT_08001304 + (local_3c + 8) * 4));
                uVar5 = (uint)local_3c;
                uVar4 = FUN_08008cd8(uVar4,auStack_70[local_3c + 3]);
                *(undefined4 *)(PTR_DAT_08001304 + (uVar5 + 10) * 4 + 4) = uVar4;
              }
            }
          }
          local_27 = 0;
          break;
        case '\b':
          FUN_0800b430(PTR_DAT_08001310,0,0xc);
        }
        if (((local_26 & 4) != 0) || (local_27 != 0)) {
          if ((PTR_DAT_08001574[2] != '\0') &&
             ((iVar3 = FUN_08009228(local_2c,0), iVar3 != 0 && (PTR_DAT_08001574[1] != '\x04')))) {
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
                uVar4 = FUN_08008cdc(auStack_70[local_3d + 3],
                                     *(undefined4 *)(PTR_DAT_08001574 + (local_3d + 2) * 4 + 4));
                auStack_70[uVar5 + 3] = uVar4;
              }
              else {
                uVar6 = auStack_70[local_3d + 3];
                uVar4 = FUN_08008cdc(*(undefined4 *)(PTR_DAT_08001574 + (local_3d + 8) * 4),
                                     *(undefined4 *)(PTR_DAT_08001574 + (local_3d + 10) * 4 + 4));
                uVar5 = (uint)local_3d;
                uVar4 = FUN_08008cdc(uVar6,uVar4);
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
          FUN_08002fd4();
          PTR_DAT_08001848[0x10] = 0;
          if (PTR_DAT_08001840[5] == '\x02') {
            FUN_080025e8();
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


////>>0x0800184c>>FUN_0800184c>>////

undefined4 FUN_0800184c(byte *param_1,undefined4 param_2,int param_3,byte *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_3 + (uint)*param_4) == '\0') {
    uVar2 = 0;
  }
  else {
    *param_1 = *(byte *)(param_3 + (uint)*param_4);
    if ((*param_1 < 0x41) || (0x5a < *param_1)) {
      *PTR_DAT_080018c8 = 2;
      uVar2 = 0;
    }
    else {
      *param_4 = *param_4 + 1;
      iVar1 = FUN_08002638(param_3,param_4,param_2);
      if (iVar1 == 0) {
        *PTR_DAT_080018c8 = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


////>>0x080018cc>>FUN_080018cc>>////

void FUN_080018cc(uint param_1)

{
  *(uint *)(DAT_080018f8 + 0x14) = param_1 | *(uint *)(DAT_080018f8 + 0x14) & 0xfffffaaf;
  return;
}


////>>0x080018fc>>FUN_080018fc>>////

void FUN_080018fc(uint param_1)

{
  *(uint *)(DAT_08001928 + 0x14) = param_1 | *(uint *)(DAT_08001928 + 0x14) & 0xfffff55f;
  return;
}


////>>0x0800192c>>FUN_0800192c>>////

void FUN_0800192c(void)

{
  if ((PTR_DAT_08001954[0x28] & 8) == 0) {
    *(undefined4 *)PTR_DAT_08001958 = 0;
  }
  else {
    *(undefined4 *)PTR_DAT_08001958 = 1;
  }
  return;
}


////>>0x0800195c>>FUN_0800195c>>////

void FUN_0800195c(void)

{
  if ((PTR_DAT_08001990[1] != '\x06') && ((PTR_DAT_08001990[2] & 0x20) == 0)) {
    FUN_080025e8();
    PTR_DAT_08001990[2] = PTR_DAT_08001990[2] | 0x40;
  }
  return;
}


////>>0x08001994>>FUN_08001994>>////

void FUN_08001994(byte param_1,char param_2,char param_3,undefined4 param_4)

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
  FUN_0800b430(&local_5c,0,0xc);
  if ((param_1 & 1) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUN_08008590(*(undefined4 *)PTR_DAT_08001c90);
    local_5c = FUN_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 2) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUN_08008590(*(undefined4 *)(PTR_DAT_08001c90 + 4));
    local_58 = FUN_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 4) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = FUN_08008590(*(undefined4 *)(PTR_DAT_08001c90 + 8));
    local_54 = FUN_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  uVar2 = local_54;
  if (local_54 < local_58) {
    uVar2 = local_58;
  }
  local_40 = local_5c;
  if (local_5c < uVar2) {
    local_40 = uVar2;
  }
  uVar3 = FUN_0800854c(local_40);
  uVar4 = FUN_0800854c(local_11);
  uVar4 = FUN_080098d0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar3 = FUN_08008894((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  local_44 = FUN_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08001c90 + 0x20),local_44);
  uVar1 = FUN_08009054(uVar1,DAT_08001c94);
  uVar3 = FUN_08008590(uVar1);
  uVar3 = FUN_08009318((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_48 = FUN_08008bf0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar3 = FUN_0800854c(local_11);
  uVar3 = FUN_080098d0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar4 = FUN_08008590(param_4);
  uVar3 = FUN_08008640((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  uVar1 = FUN_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = FUN_08008eec(local_44,uVar1);
  uVar1 = FUN_08009054(DAT_08001c98,uVar1);
  uVar3 = FUN_08008590(uVar1);
  local_4c = FUN_080095b8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_18 = DAT_08001c9c;
  if (local_4c < DAT_08001c9c) {
    local_18 = local_4c;
  }
  local_4e = *(ushort *)(PTR_DAT_08001c90 + 0x18);
  local_1a = *(ushort *)(PTR_DAT_08001c90 + 0x1a) ^ *(ushort *)(PTR_DAT_08001c90 + 0x2a) & 0xaa0;
  if (param_2 == '\0') {
    local_1a = local_1a ^ 0xaa0;
  }
  FUN_080018fc(local_1a);
  FUN_080018cc(local_4e);
  local_28 = -(local_40 >> 1);
  local_2c = local_18 - (byte)PTR_DAT_08001c90[0xd];
  local_30 = 0;
  local_34 = 10000;
  local_61 = param_1;
  local_24 = local_28;
  local_20 = local_28;
  while( true ) {
    local_36 = local_4e;
    local_3c = FUN_080078f4();
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
    FUN_080018cc(local_36);
    FUN_08002828(PTR_DAT_08001d44[0xd]);
    FUN_080018cc(local_4e);
    FUN_08002828(local_2c);
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


////>>0x08001d4c>>FUN_08001d4c>>////

void FUN_08001d4c(void)

{
  char cVar1;
  char local_9;
  
  FUN_08005790();
  FUN_08001994(4,1,0,*(undefined4 *)(PTR_DAT_08001dd8 + 0x30));
  FUN_08001994(3,1,0,*(undefined4 *)(PTR_DAT_08001dd8 + 0x30));
  FUN_08002814(*(undefined2 *)(PTR_DAT_08001dd8 + 0x34));
  local_9 = '\x02';
  while( true ) {
    cVar1 = local_9 + -1;
    if (local_9 == '\0') break;
    FUN_08001994(7,0,1,*(undefined4 *)(PTR_DAT_08001dd8 + 0x2c));
    FUN_08002814(*(undefined2 *)(PTR_DAT_08001dd8 + 0x34));
    local_9 = cVar1;
    if ('\0' < cVar1) {
      FUN_08001994(7,1,0,*(undefined4 *)(PTR_DAT_08001dd8 + 0x2c));
      FUN_08002814(*(undefined2 *)(PTR_DAT_08001dd8 + 0x34));
    }
  }
  FUN_080057e4();
  return;
}


////>>0x08001ddc>>FUN_08001ddc>>////

void FUN_08001ddc(void)

{
  FUN_08008244();
  FUN_080051b4();
  FUN_0800583c();
  FUN_0800b430(PTR_DAT_08001e90,0,0x14);
  *PTR_DAT_08001e90 = 1;
  PTR_DAT_08001e90[1] = 1;
  do {
    if (*PTR_DAT_08001e90 != '\0') {
      FUN_080082ba();
      FUN_08002f24();
      FUN_080004ac();
      FUN_080039a0();
      FUN_08005238();
      FUN_080001f8();
      FUN_0800192c();
      FUN_08005814();
      FUN_0800283a();
      *PTR_DAT_08001e90 = 0;
      PTR_DAT_08001e90[2] = 0;
      if ((PTR_DAT_08001e94[0x28] & 2) != 0) {
        PTR_DAT_08001e90[0x10] = 1;
      }
      if ((PTR_DAT_08001e90[1] == '\x01') && ((PTR_DAT_08001e94[0x28] & 0x10) != 0)) {
        PTR_DAT_08001e90[1] = 6;
      }
      if (PTR_DAT_08001e90[1] == '\x06') {
        FUN_080041a0(2);
      }
      else {
        PTR_DAT_08001e90[1] = 0;
        FUN_080039bc();
      }
    }
    FUN_08003a74();
    FUN_08003f34();
  } while( true );
}


////>>0x08001e98>>FUN_08001e98>>////

void FUN_08001e98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined param_5)

{
  int iVar1;
  
  if (PTR_DAT_08001efc[1] != '\a') {
    do {
      FUN_08003a74();
      if (*PTR_DAT_08001efc != '\0') {
        return;
      }
      iVar1 = FUN_08002fac();
    } while (iVar1 != 0);
    FUN_08003004(param_1,param_2,param_3,param_4,param_5);
    if (PTR_DAT_08001efc[1] == '\0') {
      PTR_DAT_08001efc[1] = 2;
    }
    if (PTR_DAT_08001efc[0x10] != '\0') {
      FUN_0800585c();
    }
  }
  return;
}


////>>0x08001f00>>FUN_08001f00>>////

void FUN_08001f00(int param_1,undefined4 *param_2,int param_3,byte param_4,byte param_5,byte param_6
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
  
  local_2c = FUN_08008cdc(*(undefined4 *)((uint)param_4 * 4 + param_1),
                          *(undefined4 *)((uint)param_4 * 4 + param_3));
  local_30 = FUN_08008cdc(*(undefined4 *)((uint)param_5 * 4 + param_1),
                          *(undefined4 *)((uint)param_5 * 4 + param_3));
  local_34 = FUN_08008cd8(param_2[param_6],*(undefined4 *)((uint)param_6 * 4 + param_1));
  local_1c = *(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000;
  local_20 = *(uint *)((uint)param_5 * 4 + param_3) ^ 0x80000000;
  local_38 = FUN_08008cd8(param_2[param_4],local_2c);
  local_3c = FUN_08008cd8(param_2[param_5],local_30);
  uVar1 = FUN_08008eec(local_1c,local_3c);
  uVar2 = FUN_08008eec(local_20,local_38);
  uVar1 = FUN_08008cd8(uVar1,uVar2);
  uVar5 = FUN_08008590(uVar1);
  uVar1 = FUN_08008eec(local_1c,local_38);
  uVar2 = FUN_08008eec(local_20,local_3c);
  uVar1 = FUN_08008cdc(uVar1,uVar2);
  uVar6 = FUN_08008590(uVar1);
  uVar5 = thunk_FUN_08009990((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                             (int)((ulonglong)uVar6 >> 0x20));
  local_24 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  if (param_10 == '\0') {
    iVar3 = FUN_0800923c(local_24,0);
    if (iVar3 != 0) {
      uVar5 = FUN_08008590(local_24);
      uVar5 = FUN_080082d4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_08002240,DAT_08002244);
      local_24 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  else {
    iVar3 = FUN_08009250(local_24,0);
    if (iVar3 != 0) {
      uVar5 = FUN_08008590(local_24);
      uVar5 = FUN_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_08002240,DAT_08002244);
      local_24 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  uVar1 = FUN_08008eec(local_24,param_9);
  uVar5 = FUN_08008590(uVar1);
  uVar6 = FUN_08008590(local_34 & 0x7fffffff);
  uVar5 = FUN_0800981c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  local_40 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  iVar3 = FUN_08009214(local_40,0);
  if (iVar3 == 0) {
    uVar1 = FUN_08009054(local_40,*(undefined4 *)(PTR_DAT_08002248 + 0x1c));
    uVar5 = FUN_08008590(uVar1);
    uVar5 = FUN_080094c0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_42 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (param_8 != '\0') {
      uVar1 = FUN_08008e44(local_42);
      param_7 = FUN_08008eec(param_7,uVar1);
    }
    uVar1 = FUN_08008e44(local_42);
    local_48 = FUN_08009054(local_24,uVar1);
    uVar1 = FUN_08008e44(local_42);
    local_4c = FUN_08009054(local_34,uVar1);
    uVar5 = FUN_08008590(local_48);
    uVar5 = FUN_08008640((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,DAT_0800224c);
    uVar6 = FUN_08008590(local_48);
    uVar5 = FUN_08008640((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20));
    uVar5 = FUN_080082d0(0,DAT_08002250,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_50 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_54 = local_48;
    local_27 = '\0';
    local_6c[param_6] = *(uint *)(param_1 + (uint)param_6 * 4);
    for (local_26 = 1; local_26 < local_42; local_26 = local_26 + 1) {
      if ((int)local_27 < (int)(uint)(byte)PTR_DAT_08002248[0x3e]) {
        uVar1 = FUN_08008eec(local_1c,local_54);
        uVar2 = FUN_08008eec(local_20,local_50);
        local_6c[3] = FUN_08008cdc(uVar1,uVar2);
        uVar1 = FUN_08008eec(local_1c,local_50);
        uVar2 = FUN_08008eec(local_20,local_54);
        local_1c = FUN_08008cd8(uVar1,uVar2);
        local_20 = local_6c[3];
        local_27 = local_27 + '\x01';
      }
      else {
        uVar1 = FUN_08008e44(local_26);
        uVar1 = FUN_08008eec(uVar1,local_48);
        uVar5 = FUN_08008590(uVar1);
        uVar5 = FUN_08009410((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_58 = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = FUN_08008e44(local_26);
        uVar1 = FUN_08008eec(uVar1,local_48);
        uVar5 = FUN_08008590(uVar1);
        uVar5 = FUN_080096e8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_5c = FUN_08008c30((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = FUN_08008eec(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_58);
        uVar2 = FUN_08008eec(*(undefined4 *)((uint)param_5 * 4 + param_3),local_5c);
        local_1c = FUN_08008cdc(uVar1,uVar2);
        uVar1 = FUN_08008eec(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_5c);
        uVar2 = FUN_08008eec(*(undefined4 *)((uint)param_5 * 4 + param_3),local_58);
        local_20 = FUN_08008cd8(uVar1,uVar2);
        local_27 = '\0';
      }
      uVar4 = FUN_08008cdc(local_2c,local_1c);
      local_6c[param_4] = uVar4;
      uVar4 = FUN_08008cdc(local_30,local_20);
      local_6c[param_5] = uVar4;
      uVar4 = FUN_08008cdc(local_6c[param_6],local_4c);
      local_6c[param_6] = uVar4;
      FUN_08001e98(local_6c[0],local_6c[1],local_6c[2],param_7,param_8);
      if (*PTR_DAT_08002404 != '\0') {
        return;
      }
    }
    FUN_08001e98(*param_2,param_2[1],param_2[2],param_7,param_8);
  }
  return;
}


////>>0x08002408>>FUN_08002408>>////

void FUN_08002408(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort local_12;
  
  uVar2 = FUN_08008eec(param_1,DAT_080024b8);
  uVar4 = FUN_08008590(uVar2);
  uVar4 = FUN_080094c0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  local_12 = FUN_08008bf0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  FUN_08002fd4();
  uVar2 = FUN_08008eec(param_1,DAT_080024bc);
  uVar3 = FUN_08008e44((uint)local_12 * 0x32);
  uVar2 = FUN_08008cd8(uVar2,uVar3);
  uVar4 = FUN_08008590(uVar2);
  uVar4 = FUN_080094c0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar1 = FUN_08008bf0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  FUN_08002814(uVar1);
  while ((local_12 != 0 && (FUN_08003a74(), *PTR_DAT_080024c0 == '\0'))) {
    FUN_080002a0(0x32);
    local_12 = local_12 - 1;
  }
  return;
}


////>>0x080024c4>>FUN_080024c4>>////

void FUN_080024c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_13;
  char local_12;
  char local_11;
  
  PTR_DAT_080025d8[1] = 5;
  *(undefined4 *)PTR_DAT_080025dc = 0;
  FUN_08001d4c();
  FUN_08003a74();
  if (*PTR_DAT_080025d8 == '\0') {
    FUN_0800b430(PTR_DAT_080025e0,0,0xc);
    FUN_0800283a();
    PTR_DAT_080025d8[1] = 0;
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x20) == 0) {
      local_11 = -1;
    }
    else {
      local_11 = '\x01';
    }
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x80) == 0) {
      local_12 = -1;
    }
    else {
      local_12 = '\x01';
    }
    if ((*(ushort *)(PTR_DAT_080025e4 + 0x2a) & 0x200) == 0) {
      local_13 = -1;
    }
    else {
      local_13 = '\x01';
    }
    uVar1 = FUN_08008e44((int)local_11);
    uVar1 = FUN_08008eec(uVar1,*(undefined4 *)(PTR_DAT_080025e4 + 0x38));
    uVar2 = FUN_08008e44((int)local_12);
    uVar2 = FUN_08008eec(uVar2,*(undefined4 *)(PTR_DAT_080025e4 + 0x38));
    uVar3 = FUN_08008e44((int)local_13);
    uVar3 = FUN_08008eec(uVar3,*(undefined4 *)(PTR_DAT_080025e4 + 0x38));
    FUN_08001e98(uVar1,uVar2,uVar3,*(undefined4 *)(PTR_DAT_080025e4 + 0x30),0);
    FUN_0800585c();
    FUN_08002fd4();
    FUN_0800283a();
    if ((PTR_DAT_080025e4[0x28] & 8) != 0) {
      *(undefined4 *)PTR_DAT_080025dc = 1;
    }
  }
  return;
}


////>>0x080025e8>>FUN_080025e8>>////

void FUN_080025e8(void)

{
  if ((PTR_DAT_08002634[2] & 0x10) == 0) {
    PTR_DAT_08002634[2] = PTR_DAT_08002634[2] | 0x10;
    FUN_08005250();
    FUN_08000210();
    if ((byte)PTR_DAT_08002634[1] - 3 < 3) {
      PTR_DAT_08002634[2] = PTR_DAT_08002634[2] | 0x20;
      FUN_080057e4();
    }
  }
  return;
}


////>>0x08002638>>FUN_08002638>>////

undefined4 FUN_08002638(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_1c;
  byte local_16;
  char local_15;
  int local_14;
  char local_d;
  char *local_c;
  
  pcVar6 = (char *)(param_1 + (uint)*param_2);
  pcVar5 = pcVar6 + 1;
  local_d = *pcVar6;
  bVar2 = false;
  if (local_d == '-') {
    bVar2 = true;
    local_d = *pcVar5;
    local_c = pcVar6 + 2;
  }
  else {
    local_c = pcVar5;
    if (local_d == '+') {
      local_c = pcVar6 + 2;
      local_d = *pcVar5;
    }
  }
  local_14 = 0;
  local_15 = '\0';
  local_16 = 0;
  bVar3 = false;
  do {
    bVar1 = local_d - 0x30;
    if (bVar1 < 10) {
      local_16 = local_16 + 1;
      if (local_16 < 9) {
        if (bVar3) {
          local_15 = local_15 + -1;
        }
        local_14 = (uint)bVar1 + local_14 * 10;
      }
      else if (!bVar3) {
        local_15 = local_15 + '\x01';
      }
    }
    else {
      if ((bVar1 != 0xfe) || (bVar3)) {
        if (local_16 == 0) {
          uVar7 = 0;
        }
        else {
          local_1c = FUN_08008e3c(local_14);
          iVar4 = FUN_08009214(local_1c,0);
          if (iVar4 == 0) {
            for (; local_15 < -1; local_15 = local_15 + '\x02') {
              uVar8 = FUN_08008590(local_1c);
              uVar8 = FUN_08008640((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_08002800,
                                   DAT_08002804);
              local_1c = FUN_08008c30((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
            }
            if (local_15 < '\0') {
              uVar8 = FUN_08008590(local_1c);
              uVar8 = FUN_08008640((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_08002808,
                                   DAT_0800280c);
              local_1c = FUN_08008c30((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
            }
            else {
              for (; '\0' < local_15; local_15 = local_15 + -1) {
                local_1c = FUN_08008eec(local_1c,DAT_08002810);
              }
            }
          }
          if (bVar2) {
            *param_3 = local_1c ^ 0x80000000;
          }
          else {
            *param_3 = local_1c;
          }
          *param_2 = ((char)local_c - (char)param_1) - 1;
          uVar7 = 1;
        }
        return uVar7;
      }
      bVar3 = true;
    }
    local_d = *local_c;
    local_c = local_c + 1;
  } while( true );
}


////>>0x08002814>>FUN_08002814>>////

void FUN_08002814(void)

{
  return;
}


////>>0x08002828>>FUN_08002828>>////

void FUN_08002828(void)

{
  return;
}


////>>0x0800283a>>FUN_0800283a>>////

void FUN_0800283a(void)

{
  FUN_080035ec(*(undefined4 *)(PTR_DAT_08002868 + 4),*(undefined4 *)(PTR_DAT_08002868 + 8),
               *(undefined4 *)(PTR_DAT_08002868 + 0xc));
  FUN_080004fc(*(undefined4 *)(PTR_DAT_08002868 + 4),*(undefined4 *)(PTR_DAT_08002868 + 8),
               *(undefined4 *)(PTR_DAT_08002868 + 0xc));
  return;
}


////>>0x08002870>>FUN_08002870>>////

char FUN_08002870(char param_1)

{
  char local_9;
  
  local_9 = param_1 + '\x01';
  if (local_9 == '\x12') {
    local_9 = '\0';
  }
  return local_9;
}


////>>0x08002896>>FUN_08002896>>////

char FUN_08002896(char param_1)

{
  char local_9;
  
  local_9 = param_1;
  if (param_1 == '\0') {
    local_9 = '\x12';
  }
  return local_9 + -1;
}


////>>0x080028bc>>FUN_080028bc>>////

undefined4 FUN_080028bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08008eec(param_2,param_2);
  uVar2 = FUN_08008eec(param_1,param_1);
  uVar1 = FUN_08008cd8(uVar1,uVar2);
  uVar2 = FUN_08008cdc(param_3,param_3);
  uVar1 = FUN_08009054(uVar1,uVar2);
  return uVar1;
}


////>>0x08002908>>FUN_08002908>>////

undefined4 FUN_08002908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08008cdc(param_3,param_3);
  uVar1 = FUN_08008eec(uVar1,param_4);
  uVar2 = FUN_08008eec(param_1,param_1);
  uVar1 = FUN_08008cd8(uVar1,uVar2);
  uVar2 = FUN_08008eec(param_2,param_2);
  uVar1 = FUN_08008cdc(uVar1,uVar2);
  uVar2 = FUN_08008eec(param_3,0x40800000);
  uVar1 = FUN_08009054(uVar1,uVar2);
  return uVar1;
}


////>>0x08002978>>FUN_08002978>>////

undefined4 FUN_08002978(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_08008eec(param_2,param_2);
  uVar2 = FUN_08008cdc(param_1,param_1);
  uVar2 = FUN_08008eec(uVar2,param_3);
  uVar1 = FUN_08008cd8(uVar1,uVar2);
  uVar3 = FUN_08008590(uVar1);
  uVar3 = FUN_080098d0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = FUN_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar1;
}


////>>0x080029d8>>FUN_080029d8>>////

void FUN_080029d8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_2 != 0) && (param_3 != 0)) &&
     (iVar1 = FUN_08009214(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c)),
     iVar1 == 0)) {
    if ((*(char *)(param_2 + 0x25) == '\0') &&
       (iVar1 = FUN_08009264(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_3 + 0x18)),
       iVar1 != 0)) {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar2 = FUN_08002978(*(uint *)(PTR_DAT_08002a90 + 0x20) ^ 0x80000000,
                           *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_2 + 0x20));
      iVar1 = FUN_08009228(uVar3,uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_08002978(*(uint *)(PTR_DAT_08002a90 + 0x20) ^ 0x80000000,
                             *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_2 + 0x20));
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
      }
      *(undefined4 *)(param_2 + 0x18) = uVar2;
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined *)(param_2 + 0x24) = 1;
  }
  return;
}


////>>0x08002a94>>FUN_08002a94>>////

void FUN_08002a94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  undefined *local_14;
  byte local_9;
  
  local_9 = *PTR_DAT_08002af0;
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  while (puVar1 = local_14, local_9 != *PTR_DAT_08002af8) {
    local_9 = FUN_08002896(local_9);
    local_14 = local_18;
    puVar2 = PTR_DAT_08002af4 + (uint)local_9 * 0x40;
    FUN_080029d8(puVar2,local_18,puVar1);
    local_18 = puVar2;
  }
  return;
}


////>>0x08002afc>>FUN_08002afc>>////

void FUN_08002afc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 0x25) == '\0')) &&
     (iVar1 = FUN_08009228(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x18)),
     iVar1 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = FUN_08002978(*(uint *)(PTR_DAT_08002ba4 + 0x20) ^ 0x80000000,
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    iVar1 = FUN_08009228(uVar3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_08002978(*(uint *)(PTR_DAT_08002ba4 + 0x20) ^ 0x80000000,
                           *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    iVar1 = FUN_08009214(uVar2,*(undefined4 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined *)(param_2 + 0x24) = 1;
    }
  }
  return;
}


////>>0x08002ba8>>FUN_08002ba8>>////

void FUN_08002ba8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_14;
  undefined *local_10;
  byte local_9;
  
  local_9 = *PTR_DAT_08002c0c;
  local_14 = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
  while (puVar2 = local_14, local_9 != *PTR_DAT_08002c14) {
    local_14 = local_10;
    puVar1 = PTR_DAT_08002c10 + (uint)local_9 * 0x40;
    FUN_08002afc(puVar2,local_10,puVar1);
    local_9 = FUN_08002870(local_9);
    puVar3 = puVar2;
    local_10 = puVar1;
  }
  FUN_08002afc(local_14,local_10,0,local_14,puVar3);
  return;
}


////>>0x08002c18>>FUN_08002c18>>////

void FUN_08002c18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_20;
  uint local_1c;
  
  uVar1 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x3c));
  uVar1 = FUN_08008eec(uVar1,param_2);
  uVar7 = FUN_08008590(uVar1);
  uVar7 = FUN_08009318((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = FUN_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x3c));
  uVar1 = FUN_08008eec(uVar1,param_3);
  uVar7 = FUN_08008590(uVar1);
  uVar7 = FUN_08009318((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = FUN_08008bf0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar7 = FUN_0800856c(*(int *)(param_1 + 0x30) * 0x32);
  uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_08002e04);
  iVar2 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x28));
  uVar3 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = FUN_08008e44(iVar2);
  uVar1 = FUN_080028bc(uVar1,uVar3,uVar4);
  uVar7 = FUN_08008590(uVar1);
  uVar7 = FUN_08009318((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_1c = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x3c));
  uVar3 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x2c));
  uVar4 = FUN_08008e44(-iVar2);
  uVar1 = FUN_080028bc(uVar1,uVar3,uVar4);
  uVar7 = FUN_08008590(uVar1);
  uVar7 = FUN_080094c0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_20 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_20 = (*(int *)(param_1 + 0x10) - local_1c) - local_20;
  if (local_20 < 0) {
    uVar1 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x28));
    uVar3 = FUN_08008e3c(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = FUN_08008e44(iVar2);
    uVar5 = FUN_08008e44(*(undefined4 *)(param_1 + 0x10));
    uVar1 = FUN_08002908(uVar1,uVar3,uVar4,uVar5);
    uVar7 = FUN_08008590(uVar1);
    uVar7 = FUN_08009318((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar6 = FUN_08008ba0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
    local_1c = *(uint *)(param_1 + 0x10);
    if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x10)) {
      local_1c = uVar6;
    }
    local_20 = 0;
  }
  *(uint *)(param_1 + 0x34) = local_1c;
  *(uint *)(param_1 + 0x38) = local_20 + local_1c;
  return;
}


////>>0x08002e08>>FUN_08002e08>>////

void FUN_08002e08(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *local_18;
  byte local_11;
  
  local_11 = *PTR_DAT_08002ed0;
  local_18 = (undefined *)0x0;
  while (local_11 != *PTR_DAT_08002ed8) {
    puVar3 = PTR_DAT_08002ed4 + (uint)local_11 * 0x40;
    if ((local_18 != (undefined *)0x0) && ((local_18[0x24] != '\0' || (puVar3[0x24] != '\0')))) {
      uVar1 = FUN_08009054(*(undefined4 *)(local_18 + 0x18),*(undefined4 *)(local_18 + 0x14));
      uVar2 = FUN_08009054(*(undefined4 *)(puVar3 + 0x18),*(undefined4 *)(local_18 + 0x14));
      FUN_08002c18(local_18,uVar1,uVar2);
      local_18[0x24] = 0;
    }
    local_11 = FUN_08002870(local_11);
    local_18 = puVar3;
  }
  uVar1 = FUN_08009054(*(undefined4 *)(local_18 + 0x18),*(undefined4 *)(local_18 + 0x14));
  uVar2 = FUN_08009054(0,*(undefined4 *)(local_18 + 0x14));
  FUN_08002c18(local_18,uVar1,uVar2);
  local_18[0x24] = 0;
  return;
}


////>>0x08002edc>>FUN_08002edc>>////

void FUN_08002edc(void)

{
  FUN_08002a94();
  FUN_08002ba8();
  FUN_08002e08();
  return;
}


////>>0x08002ef0>>FUN_08002ef0>>////

void FUN_08002ef0(void)

{
  undefined uVar1;
  
  *PTR_DAT_08002f1c = *PTR_DAT_08002f18;
  uVar1 = FUN_08002870(*PTR_DAT_08002f18);
  *PTR_DAT_08002f20 = uVar1;
  return;
}


////>>0x08002f24>>FUN_08002f24>>////

void FUN_08002f24(void)

{
  FUN_08002ef0();
  FUN_0800b430(PTR_DAT_08002f3c,0,0x1c);
  return;
}


////>>0x08002f40>>FUN_08002f40>>////

void FUN_08002f40(void)

{
  undefined uVar1;
  
  if (*PTR_DAT_08002f6c != *PTR_DAT_08002f70) {
    uVar1 = FUN_08002870(*PTR_DAT_08002f70);
    *PTR_DAT_08002f70 = uVar1;
  }
  return;
}


////>>0x08002f74>>FUN_08002f74>>////

undefined * FUN_08002f74(void)

{
  undefined *puVar1;
  
  if (*PTR_DAT_08002fa0 == *PTR_DAT_08002fa4) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_DAT_08002fa8 + (uint)(byte)*PTR_DAT_08002fa4 * 0x40;
  }
  return puVar1;
}


////>>0x08002fac>>FUN_08002fac>>////

bool FUN_08002fac(void)

{
  return *PTR_DAT_08002fcc == *PTR_DAT_08002fd0;
}


////>>0x08002fd4>>FUN_08002fd4>>////

void FUN_08002fd4(void)

{
  int iVar1;
  
  while ((iVar1 = FUN_08002f74(), iVar1 != 0 || (PTR_DAT_08003000[1] == '\x03'))) {
    FUN_08003a74();
    if (*PTR_DAT_08003000 != '\0') {
      return;
    }
  }
  return;
}


////>>0x08003004>>FUN_08003004>>////

void FUN_08003004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = FUN_08008eec(*(undefined4 *)PTR_DAT_08003238,param_1);
  uVar15 = FUN_08008590(uVar3);
  iVar4 = FUN_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar3 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003238 + 4),param_2);
  uVar15 = FUN_08008590(uVar3);
  iVar5 = FUN_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar3 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003238 + 8),param_3);
  uVar15 = FUN_08008590(uVar3);
  iVar6 = FUN_080095b8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
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
    uVar3 = FUN_08008e44(iVar4 - *(int *)PTR_DAT_0800323c);
    uVar3 = FUN_08009054(uVar3,*(undefined4 *)PTR_DAT_08003238);
    uVar7 = FUN_08008e44(iVar5 - *(int *)(PTR_DAT_0800323c + 4));
    uVar7 = FUN_08009054(uVar7,*(undefined4 *)(PTR_DAT_08003238 + 4));
    uVar8 = FUN_08008e44(iVar6 - *(int *)(PTR_DAT_0800323c + 8));
    uVar8 = FUN_08009054(uVar8,*(undefined4 *)(PTR_DAT_08003238 + 8));
    uVar9 = FUN_08008eec(uVar3,uVar3);
    uVar10 = FUN_08008eec(uVar7,uVar7);
    uVar9 = FUN_08008cdc(uVar9,uVar10);
    uVar10 = FUN_08008eec(uVar8,uVar8);
    uVar9 = FUN_08008cdc(uVar9,uVar10);
    uVar15 = FUN_08008590(uVar9);
    uVar15 = FUN_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar9 = FUN_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x10) = uVar9;
    uVar9 = FUN_08009054(0x3f800000,*(undefined4 *)(puVar12 + 0x10));
    if (param_5 == '\0') {
      local_1c = FUN_08008eec(param_4,uVar9);
    }
    else {
      local_1c = FUN_08009054(0x3f800000,param_4);
    }
    uVar10 = FUN_08008eec(*(undefined4 *)(puVar12 + 0x10),local_1c);
    *(undefined4 *)(puVar12 + 10) = uVar10;
    uVar10 = FUN_08008e44(*(undefined4 *)(puVar12 + 8));
    uVar10 = FUN_08008eec(uVar10,local_1c);
    uVar15 = FUN_08008590(uVar10);
    uVar15 = FUN_08009318((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar10 = FUN_08008bf0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x1e) = uVar10;
    uVar10 = FUN_08008e44(*(undefined4 *)(puVar12 + 8));
    uVar10 = FUN_08008eec(uVar10,uVar9);
    uVar10 = FUN_08008eec(uVar10,*(undefined4 *)(PTR_DAT_08003560 + 0x20));
    uVar10 = FUN_08009054(uVar10,DAT_08003564);
    uVar15 = FUN_08008590(uVar10);
    uVar15 = FUN_08009318((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar10 = FUN_08008ba0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    *(undefined4 *)(puVar12 + 0x18) = uVar10;
    uVar3 = FUN_08008eec(uVar3,uVar9);
    uVar7 = FUN_08008eec(uVar7,uVar9);
    uVar8 = FUN_08008eec(uVar8,uVar9);
    local_20 = 0;
    if ((*PTR_DAT_08003568 != *PTR_DAT_0800356c) &&
       (iVar13 = FUN_08009264(*(undefined4 *)(PTR_DAT_08003570 + 0x18),0), iVar13 != 0)) {
      uVar9 = FUN_08008eec(*(uint *)(PTR_DAT_08003570 + 0xc) ^ 0x80000000,uVar3);
      uVar10 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003570 + 0x10),uVar7);
      uVar9 = FUN_08008cd8(uVar9,uVar10);
      uVar10 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003570 + 0x14),uVar8);
      uVar9 = FUN_08008cd8(uVar9,uVar10);
      uVar15 = FUN_08008590(uVar9);
      iVar13 = FUN_08008b24((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_08003550,DAT_08003554);
      if (iVar13 != 0) {
        iVar13 = FUN_08009228(*(undefined4 *)(PTR_DAT_08003570 + 0x18),*(undefined4 *)(puVar12 + 10)
                             );
        if (iVar13 == 0) {
          local_20 = *(undefined4 *)(puVar12 + 10);
        }
        else {
          local_20 = *(undefined4 *)(PTR_DAT_08003570 + 0x18);
        }
        uVar15 = FUN_08008590(uVar9);
        iVar13 = FUN_08008b60((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_08003558,DAT_0800355c
                             );
        if (iVar13 != 0) {
          uVar15 = FUN_08008590(uVar9);
          uVar15 = FUN_080082d0(0,DAT_08003574,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = FUN_08008640((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,DAT_08003578);
          uVar15 = FUN_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar9 = FUN_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          uVar15 = FUN_08008590(local_20);
          uVar10 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003560 + 0x20),
                                *(undefined4 *)(PTR_DAT_08003560 + 0x24));
          uVar10 = FUN_08008eec(uVar10,uVar9);
          uVar16 = FUN_08008590(uVar10);
          uVar17 = FUN_08008590(uVar9);
          uVar17 = FUN_080082d0(0,DAT_08003574,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          uVar16 = FUN_08008894((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                                (int)((ulonglong)uVar17 >> 0x20));
          uVar16 = FUN_080098d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          iVar13 = FUN_08008b24((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                (int)((ulonglong)uVar16 >> 0x20));
          if (iVar13 == 0) {
            uVar10 = FUN_08008eec(*(undefined4 *)(PTR_DAT_08003560 + 0x20),
                                  *(undefined4 *)(PTR_DAT_08003560 + 0x24));
            uVar10 = FUN_08008eec(uVar10,uVar9);
            uVar15 = FUN_08008590(uVar10);
            uVar16 = FUN_08008590(uVar9);
            uVar16 = FUN_080082d0(0,DAT_08003574,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            uVar15 = FUN_08008894((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                  (int)((ulonglong)uVar16 >> 0x20));
            uVar15 = FUN_080098d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
            local_20 = FUN_08008c30((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          }
        }
      }
    }
    *(undefined4 *)(puVar12 + 0xe) = local_20;
    uVar10 = FUN_08002978(*(uint *)(PTR_DAT_08003560 + 0x20) ^ 0x80000000,0,
                          *(undefined4 *)(puVar12 + 0x10));
    iVar13 = FUN_08009228(local_20,uVar10);
    uVar9 = uVar10;
    if (iVar13 != 0) {
      uVar9 = local_20;
    }
    *(undefined4 *)(puVar12 + 0xc) = uVar9;
    iVar13 = FUN_08009250(uVar10,*(undefined4 *)(puVar12 + 10));
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
    uVar2 = FUN_08002870(*PTR_DAT_080035e8);
    *PTR_DAT_080035e4 = uVar2;
    puVar1 = PTR_DAT_080035e0;
    *(int *)PTR_DAT_080035e0 = iVar4;
    *(int *)(puVar1 + 4) = iVar5;
    *(int *)(puVar1 + 8) = iVar6;
    FUN_08002edc();
  }
  return;
}


////>>0x080035ec>>FUN_080035ec>>////

void FUN_080035ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)PTR_DAT_08003614 = param_1;
  *(undefined4 *)(PTR_DAT_08003614 + 4) = param_2;
  *(undefined4 *)(PTR_DAT_08003614 + 8) = param_3;
  return;
}


////>>0x08003618>>FUN_08003618>>////

void FUN_08003618(undefined4 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = PTR_DAT_08003698;
  bVar1 = *PTR_DAT_08003694;
  uVar4 = *(undefined4 *)(PTR_DAT_08003698 + (uint)bVar1 * 0x40 + 0x20);
  uVar3 = FUN_08008e44(param_1);
  uVar3 = FUN_08008eec(uVar4,uVar3);
  uVar4 = FUN_08008e44(*(undefined4 *)(puVar2 + (uint)bVar1 * 0x40 + 0x10));
  uVar3 = FUN_08009054(uVar3,uVar4);
  *(undefined4 *)(puVar2 + (uint)bVar1 * 0x40 + 0x20) = uVar3;
  *(undefined4 *)(puVar2 + (uint)bVar1 * 0x40 + 0x10) = param_1;
  *(undefined4 *)(puVar2 + (uint)bVar1 * 0x40 + 0x18) = 0;
  *(undefined4 *)(puVar2 + (uint)bVar1 * 0x40 + 0x1c) = 0;
  puVar2[(uint)bVar1 * 0x40 + 0x25] = 0;
  puVar2[(uint)bVar1 * 0x40 + 0x24] = 1;
  FUN_08002edc();
  return;
}


////>>0x0800369c>>FUN_0800369c>>////

void FUN_0800369c(char *param_1)

{
  char *local_c;
  
  local_c = param_1;
  while (*local_c != '\0') {
    FUN_08008250(*local_c);
    local_c = local_c + 1;
  }
  return;
}


////>>0x080036c6>>FUN_080036c6>>////

void FUN_080036c6(char *param_1)

{
  char *local_c;
  
  local_c = param_1;
  while (*local_c != '\0') {
    FUN_08008250(*local_c);
    local_c = local_c + 1;
  }
  return;
}


////>>0x080036f0>>FUN_080036f0>>////

void FUN_080036f0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int local_10;
  uint local_c;
  
  local_c = 1 << (param_2 - 1U & 0xff);
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    if ((local_c & param_1) == 0) {
      uVar1 = 0x30;
    }
    else {
      uVar1 = 0x31;
    }
    FUN_08008250(uVar1);
    local_c = local_c >> 1;
  }
  return;
}


////>>0x08003740>>FUN_08003740>>////

void FUN_08003740(undefined param_1)

{
  FUN_080036f0(param_1,8);
  return;
}


////>>0x0800375c>>FUN_0800375c>>////

void FUN_0800375c(undefined2 param_1)

{
  FUN_080036f0(param_1,0x10);
  return;
}


////>>0x08003778>>FUN_08003778>>////

void FUN_08003778(uint param_1)

{
  uint uVar1;
  uint local_1c;
  char acStack_15 [12];
  byte local_9;
  
  local_9 = 0;
  local_1c = param_1;
  if (param_1 == 0) {
    FUN_08008250(0x30);
  }
  else {
    for (; local_1c != 0; local_1c = (uint)((ulonglong)DAT_080037f8 * (ulonglong)local_1c >> 0x23))
    {
      uVar1 = (uint)local_9;
      local_9 = local_9 + 1;
      acStack_15[uVar1 + 1] =
           (char)local_1c +
           (char)(uint)((ulonglong)DAT_080037f8 * (ulonglong)local_1c >> 0x23) * -10 + '0';
    }
    for (; local_9 != 0; local_9 = local_9 - 1) {
      FUN_08008250(acStack_15[local_9]);
    }
  }
  return;
}


////>>0x080037fc>>FUN_080037fc>>////

void FUN_080037fc(int param_1)

{
  int local_c;
  
  local_c = param_1;
  if (param_1 < 0) {
    FUN_08008250(0x2d);
    local_c = -param_1;
  }
  FUN_08003778(local_c);
  return;
}


////>>0x08003826>>FUN_08003826>>////

void FUN_08003826(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint local_24;
  char acStack_1d [13];
  uint local_10;
  byte local_a;
  byte local_9;
  
  iVar1 = FUN_08009228(param_1,0);
  local_24 = param_1;
  if (iVar1 != 0) {
    FUN_08008250(0x2d);
    local_24 = param_1 ^ 0x80000000;
  }
  for (local_9 = PTR_DAT_08003970[0x3d]; 1 < local_9; local_9 = local_9 - 2) {
    local_24 = FUN_08008eec(local_24,DAT_08003974);
  }
  if (local_9 != 0) {
    local_24 = FUN_08008eec(local_24,DAT_08003978);
  }
  uVar2 = FUN_08008cdc(local_24,0x3f000000);
  local_a = 0;
  local_10 = FUN_08009278(uVar2);
  acStack_1d[(byte)PTR_DAT_08003970[0x3d] + 1] = '.';
  for (; local_10 != 0; local_10 = (uint)((ulonglong)DAT_0800397c * (ulonglong)local_10 >> 0x23)) {
    if (local_a == PTR_DAT_08003970[0x3d]) {
      local_a = local_a + 1;
    }
    uVar4 = (uint)local_a;
    local_a = local_a + 1;
    acStack_1d[uVar4 + 1] =
         (char)local_10 + (char)(uint)((ulonglong)DAT_0800397c * (ulonglong)local_10 >> 0x23) * -10
         + '0';
  }
  while (local_a < (byte)PTR_DAT_08003970[0x3d]) {
    uVar4 = (uint)local_a;
    local_a = local_a + 1;
    acStack_1d[uVar4 + 1] = '0';
  }
  if (local_a == PTR_DAT_08003970[0x3d]) {
    bVar3 = local_a + 1;
    local_a = local_a + 2;
    acStack_1d[bVar3 + 1] = '0';
  }
  for (; local_a != 0; local_a = local_a - 1) {
    FUN_08008250(acStack_1d[local_a]);
  }
  return;
}


////>>0x08003980>>FUN_08003980>>////

void FUN_08003980(void)

{
  *PTR_DAT_08003998 = 0;
  *PTR_DAT_0800399c = 0;
  return;
}


////>>0x080039a0>>FUN_080039a0>>////

void FUN_080039a0(void)

{
  FUN_08003980();
  FUN_08004228();
  *(undefined4 *)PTR_DAT_080039b8 = 1;
  return;
}


////>>0x080039bc>>FUN_080039bc>>////

void FUN_080039bc(void)

{
  int iVar1;
  undefined4 uVar2;
  byte local_9;
  
  for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
    iVar1 = FUN_08004d2c(local_9,PTR_DAT_08003a14);
    if (iVar1 == 0) {
      FUN_08004030(10);
    }
    else if (*PTR_DAT_08003a14 != '\0') {
      FUN_0800369c(PTR_DAT_08003a14);
      uVar2 = FUN_080005b4(PTR_DAT_08003a14);
      FUN_08004030(uVar2);
    }
  }
  return;
}


////>>0x08003a18>>FUN_08003a18>>////

void FUN_08003a18(uint param_1)

{
  if ((param_1 & 0x80) == 0) {
    if ((param_1 & 0x40) == 0) {
      if ((param_1 & 0x20) != 0) {
        PTR_DAT_08003a70[2] = PTR_DAT_08003a70[2] | 2;
      }
    }
    else {
      PTR_DAT_08003a70[2] = PTR_DAT_08003a70[2] | 8;
    }
  }
  else {
    FUN_080025e8();
  }
  return;
}


////>>0x08003a74>>FUN_08003a74>>////

void FUN_08003a74(void)

{
  byte bVar1;
  
  if (PTR_DAT_08003b90[2] != '\0') {
    bVar1 = PTR_DAT_08003b90[2];
    if ((bVar1 & 0x60) != 0) {
      PTR_DAT_08003b90[1] = 6;
      if ((bVar1 & 0x40) == 0) {
        FUN_08004148(0xfffffffe);
      }
      else {
        FUN_08004148(0xffffffff);
        FUN_080041a0(1);
        PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0xef;
        do {
        } while ((PTR_DAT_08003b90[2] & 0x10) == 0);
      }
      PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0x9f;
    }
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 1) != 0) {
        FUN_08004940();
        PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0xfe;
      }
      if ((bVar1 & 8) != 0) {
        FUN_0800587c();
        PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0xf7;
      }
      if ((bVar1 & 4) != 0) {
        FUN_080058a0();
        PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0xfb;
      }
      if ((bVar1 & 2) != 0) {
        FUN_0800585c();
        if ((PTR_DAT_08003b94[0x28] & 2) != 0) {
          PTR_DAT_08003b90[0x10] = 1;
        }
        PTR_DAT_08003b90[2] = PTR_DAT_08003b90[2] & 0xfd;
      }
    }
    else {
      *PTR_DAT_08003b90 = 1;
    }
  }
  return;
}


////>>0x08003b98>>FUN_08003b98>>////

uint FUN_08003b98(char *param_1)

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
    uVar4 = FUN_080005b4(param_1);
    return uVar4;
  }
  local_a = 1;
  local_9 = '\0';
  bVar1 = param_1[1];
  if (bVar1 == 0) {
    FUN_0800423c();
    return 0;
  }
  if ((0x58 < bVar1) || (bVar1 < 0x23)) goto switchD_08003bdc_caseD_25;
  switch(bVar1) {
  case 0x23:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    FUN_080044e8();
    break;
  case 0x24:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    FUN_08004250();
    break;
  case 0x43:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (PTR_DAT_08003f2c[1] == '\a') {
      FUN_080025e8();
      FUN_080041a0(5);
    }
    else {
      if (PTR_DAT_08003f2c[1] != '\0') {
        return 0xb;
      }
      PTR_DAT_08003f2c[1] = 7;
      FUN_080041a0(4);
    }
    break;
  case 0x47:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    FUN_080046d0();
    break;
  case 0x48:
    if ((PTR_DAT_08003f30[0x28] & 0x10) == 0) {
      return 7;
    }
    if ((PTR_DAT_08003f2c[1] != '\0') && (PTR_DAT_08003f2c[1] != '\x06')) {
      return 0xb;
    }
    FUN_080024c4();
    if (*PTR_DAT_08003f2c == '\0') {
      FUN_080039bc();
    }
    break;
  case 0x4e:
    local_a = 2;
    if (param_1[2] == '\0') {
      for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
        iVar2 = FUN_08004d2c(local_9,param_1);
        if (iVar2 == 0) {
          FUN_08004030(10);
        }
        else {
          FUN_08004900(local_9,param_1);
        }
      }
      return 0;
    }
    local_9 = '\x01';
  default:
switchD_08003bdc_caseD_25:
    iVar2 = FUN_08002638(param_1,&local_a,&local_10);
    if (iVar2 == 0) {
      return 1;
    }
    bVar1 = local_a + 1;
    if (param_1[local_a] != '=') {
      return 3;
    }
    local_a = bVar1;
    if (local_9 == '\0') {
      iVar2 = FUN_08002638(param_1,&local_a,&local_14);
      if (iVar2 == 0) {
        return 1;
      }
      if (param_1[local_a] == '\0') {
        uVar3 = FUN_08009278(local_10);
        uVar4 = FUN_08004e30(uVar3,local_14);
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
    local_9 = FUN_080005b4(param_1);
    if (local_9 != 0) {
      return (uint)local_9;
    }
    uVar5 = FUN_08008590(local_10);
    uVar5 = FUN_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_9 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    FUN_08004bc0(local_9,param_1);
    break;
  case 0x58:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (PTR_DAT_08003f2c[1] == '\x06') {
      FUN_080041a0(3);
      PTR_DAT_08003f2c[1] = 0;
    }
  }
  return 0;
}


////>>0x08003f34>>FUN_08003f34>>////

void FUN_08003f34(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  while( true ) {
    while( true ) {
      bVar2 = FUN_08008286();
      if (bVar2 == 0xff) {
        return;
      }
      if ((bVar2 == 10) || (bVar2 == 0xd)) break;
      if (*PTR_DAT_08004028 == '\0') {
        if ((0x20 < bVar2) && (bVar2 != 0x2f)) {
          if (bVar2 == 0x28) {
            *PTR_DAT_08004028 = 1;
          }
          else if (*PTR_DAT_08004020 == -1) {
            FUN_08004030(0xd);
            FUN_08003980();
          }
          else if ((bVar2 < 0x61) || (0x7a < bVar2)) {
            bVar1 = *PTR_DAT_08004020;
            *PTR_DAT_08004020 = bVar1 + 1;
            PTR_DAT_08004024[bVar1] = bVar2;
          }
          else {
            bVar1 = *PTR_DAT_08004020;
            *PTR_DAT_08004020 = bVar1 + 1;
            PTR_DAT_08004024[bVar1] = bVar2 - 0x20;
          }
        }
      }
      else if (bVar2 == 0x29) {
        *PTR_DAT_08004028 = 0;
      }
    }
    FUN_08003a74();
    if (*PTR_DAT_0800401c != '\0') break;
    if (*PTR_DAT_08004020 == '\0') {
      FUN_08004030(0);
    }
    else {
      PTR_DAT_08004024[(byte)*PTR_DAT_08004020] = 0;
      uVar3 = FUN_08003b98(PTR_DAT_08004024);
      FUN_08004030(uVar3);
    }
    FUN_08003980();
  }
  return;
}


////>>0x08004030>>FUN_08004030>>////

void FUN_08004030(char param_1)

{
  if (param_1 == '\0') {
    FUN_080036c6(PTR_DAT_08004108);
  }
  else {
    FUN_080036c6(PTR_s_error__0800410c);
    switch(param_1) {
    case '\x01':
      FUN_080036c6(PTR_s_Bad_number_format_08004110);
      break;
    case '\x02':
      FUN_080036c6(PTR_s_Expected_command_letter_08004114);
      break;
    case '\x03':
      FUN_080036c6(PTR_s_Unsupported_statement_08004118);
      break;
    case '\x04':
      FUN_080036c6(PTR_s_Invalid_radius_0800411c);
      break;
    case '\x05':
      FUN_080036c6(PTR_s_Modal_group_violation_08004120);
      break;
    case '\x06':
      FUN_080036c6(PTR_s_Invalid_statement_08004124);
      break;
    case '\a':
      FUN_080036c6(PTR_s_Setting_disabled_08004128);
      break;
    case '\b':
      FUN_080036c6(PTR_s_Value___0_0_0800412c);
      break;
    case '\t':
      FUN_080036c6(PTR_s_Value___3_usec_08004130);
      break;
    case '\n':
      FUN_080036c6(PTR_s_EEPROM_read_fail__Using_defaults_08004134);
      break;
    case '\v':
      FUN_080036c6(PTR_s_Busy_or_queued_08004138);
      break;
    case '\f':
      FUN_080036c6(PTR_s_Alarm_lock_0800413c);
      break;
    case '\r':
      FUN_080036c6(PTR_s_Line_overflow_08004140);
    }
    FUN_080036c6(PTR_DAT_08004144);
  }
  return;
}


////>>0x08004148>>FUN_08004148>>////

void FUN_08004148(char param_1)

{
  FUN_080036c6(PTR_s_ALARM__08004190);
  if (param_1 == -2) {
    FUN_080036c6(PTR_s_Abort_during_cycle_08004198);
  }
  else if (param_1 == -1) {
    FUN_080036c6(PTR_s_Hard_limit_08004194);
  }
  FUN_080036c6(PTR_s___MPos__0800419c);
  FUN_08002814(500);
  return;
}


////>>0x080041a0>>FUN_080041a0>>////

void FUN_080041a0(undefined param_1)

{
  FUN_080036c6(PTR_DAT_0800420c);
  switch(param_1) {
  case 1:
    FUN_080036c6(PTR_s_Reset_to_continue_08004210);
    break;
  case 2:
    FUN_080036c6(PTR_s___H____X__to_unlock_08004214);
    break;
  case 3:
    FUN_080036c6(PTR_s_Caution__Unlocked_08004218);
    break;
  case 4:
    FUN_080036c6(PTR_s_Enabled_0800421c);
    break;
  case 5:
    FUN_080036c6(PTR_s_Disabled_08004220);
  }
  FUN_080036c6(PTR_DAT_08004224);
  return;
}


////>>0x08004228>>FUN_08004228>>////

void FUN_08004228(void)

{
  FUN_080036c6(PTR_s__Grbl_0_8c______for_help__08004238);
  return;
}


////>>0x0800423c>>FUN_0800423c>>////

void FUN_0800423c(void)

{
  FUN_080036c6(PTR_s_____view_Grbl_settings______view_0800424c);
  return;
}


////>>0x08004250>>FUN_08004250>>////

void FUN_08004250(void)

{
  undefined4 uVar1;
  
  FUN_080036c6(PTR_DAT_08004470);
  FUN_08003826(*(undefined4 *)PTR_DAT_08004474);
  FUN_080036c6(PTR_s___x__step_mm___1__08004478);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 4));
  FUN_080036c6(PTR_s___y__step_mm___2__0800447c);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 8));
  FUN_080036c6(PTR_s___z__step_mm___3__08004480);
  FUN_080037fc(PTR_DAT_08004474[0xd]);
  FUN_080036c6(PTR_s___step_pulse__usec___4__08004484);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x10));
  FUN_080036c6(PTR_s___default_feed__mm_min___5__08004488);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x14));
  FUN_080036c6(PTR_s___default_seek__mm_min___6__0800448c);
  FUN_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x18));
  FUN_080036c6(PTR_s___step_port_invert_mask__int__08004490);
  FUN_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x18));
  FUN_080036c6(PTR_s____7__08004494);
  FUN_080037fc(PTR_DAT_08004474[0x3c]);
  FUN_080036c6(PTR_s___step_idle_delay__msec___8__08004498);
  uVar1 = FUN_08009054(*(undefined4 *)(PTR_DAT_08004474 + 0x20),DAT_0800449c);
  FUN_08003826(uVar1);
  FUN_080036c6(PTR_s___acceleration__mm_sec_2___9__080044a0);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x24));
  FUN_080036c6(PTR_s___junction_deviation__mm___10__080044a4);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x1c));
  FUN_080036c6(PTR_s___arc__mm_segment___11__080044a8);
  FUN_080037fc(PTR_DAT_08004474[0x3e]);
  FUN_080036c6(PTR_s___n_arc_correction__int___12__080044ac);
  FUN_080037fc(PTR_DAT_08004474[0x3d]);
  FUN_080036c6(PTR_s___n_decimals__int___13__080044b0);
  FUN_080037fc((PTR_DAT_08004474[0x28] & 1) != 0);
  FUN_080036c6(PTR_s___report_inches__bool___14__080044b4);
  FUN_080037fc((PTR_DAT_08004474[0x28] & 2) != 0);
  FUN_080036c6(PTR_s___auto_start__bool___15__080044b8);
  FUN_080037fc((PTR_DAT_08004474[0x28] & 4) != 0);
  FUN_080036c6(PTR_s___invert_step_enable__bool___16__080044bc);
  FUN_080037fc((PTR_DAT_08004474[0x28] & 8) != 0);
  FUN_080036c6(PTR_s___hard_limits__bool___17__080044c0);
  FUN_080037fc((PTR_DAT_08004474[0x28] & 0x10) != 0);
  FUN_080036c6(PTR_s___homing_cycle__bool___18__080044c4);
  FUN_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x2a));
  FUN_080036c6(PTR_s___homing_dir_invert_mask__int__080044c8);
  FUN_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x2a));
  FUN_080036c6(PTR_s____19__080044cc);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x2c));
  FUN_080036c6(PTR_s___homing_feed__mm_min___20__080044d0);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x30));
  FUN_080036c6(PTR_s___homing_seek__mm_min___21__080044d4);
  FUN_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x34));
  FUN_080036c6(PTR_s___homing_debounce__msec___22__080044d8);
  FUN_08003826(*(undefined4 *)(PTR_DAT_08004474 + 0x38));
  FUN_080036c6(PTR_s___homing_pull_off__mm___23__080044dc);
  FUN_080037fc(*(undefined2 *)(PTR_DAT_08004474 + 0x1a));
  FUN_080036c6(PTR_s___dir_port_invert_mask__int__080044e0);
  FUN_0800375c(*(undefined2 *)(PTR_DAT_08004474 + 0x1a));
  FUN_080036c6(PTR_DAT_080044e4);
  return;
}


////>>0x080044e8>>FUN_080044e8>>////

void FUN_080044e8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 auStack_18 [3];
  byte local_a;
  byte local_9;
  
  local_9 = 0;
  while( true ) {
    if (7 < local_9) {
      FUN_080036c6(PTR_s__G92__080046c8);
      for (local_a = 0; local_a < 3; local_a = local_a + 1) {
        if ((PTR_DAT_080046bc[0x28] & 1) == 0) {
          FUN_08003826(*(undefined4 *)(PTR_DAT_080046cc + (local_a + 10) * 4 + 4));
        }
        else {
          uVar3 = FUN_08008590(*(undefined4 *)(PTR_DAT_080046cc + (local_a + 10) * 4 + 4));
          uVar3 = FUN_08008640((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_08004690,DAT_08004694)
          ;
          uVar2 = FUN_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
          FUN_08003826(uVar2);
        }
        if (local_a < 2) {
          FUN_080036c6(PTR_DAT_080046c0);
        }
        else {
          FUN_080036c6(PTR_DAT_080046c4);
        }
      }
      return;
    }
    iVar1 = FUN_08004d7c(local_9,auStack_18);
    if (iVar1 == 0) break;
    FUN_080036c6(PTR_DAT_08004698);
    switch(local_9) {
    case 0:
      FUN_080036c6(PTR_DAT_0800469c);
      break;
    case 1:
      FUN_080036c6(PTR_DAT_080046a0);
      break;
    case 2:
      FUN_080036c6(PTR_DAT_080046a4);
      break;
    case 3:
      FUN_080036c6(PTR_DAT_080046a8);
      break;
    case 4:
      FUN_080036c6(PTR_DAT_080046ac);
      break;
    case 5:
      FUN_080036c6(PTR_DAT_080046b0);
      break;
    case 6:
      FUN_080036c6(PTR_DAT_080046b4);
      break;
    case 7:
      FUN_080036c6(PTR_DAT_080046b8);
    }
    for (local_a = 0; local_a < 3; local_a = local_a + 1) {
      if ((PTR_DAT_080046bc[0x28] & 1) == 0) {
        FUN_08003826(auStack_18[local_a]);
      }
      else {
        uVar3 = FUN_08008590(auStack_18[local_a]);
        uVar3 = FUN_08008640((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_08004690,DAT_08004694);
        uVar2 = FUN_08008c30((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
        FUN_08003826(uVar2);
      }
      if (local_a < 2) {
        FUN_080036c6(PTR_DAT_080046c0);
      }
      else {
        FUN_080036c6(PTR_DAT_080046c4);
      }
    }
    local_9 = local_9 + 1;
  }
  FUN_08004030(10);
  return;
}


////>>0x080046d0>>FUN_080046d0>>////

void FUN_080046d0(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (4 < (byte)PTR_DAT_08004890[1]) {
    FUN_080036c6(PTR_DAT_080048a8);
    FUN_080037fc((byte)PTR_DAT_08004890[0x1c] + 0x36);
    if (PTR_DAT_08004890[0x19] == '\0') {
      if (PTR_DAT_08004890[0x1a] == '\x01') {
        FUN_080036c6(PTR_DAT_080048ac);
      }
      else {
        FUN_080036c6(PTR_DAT_080048b0);
      }
    }
    else {
      FUN_080036c6(PTR_DAT_080048b4);
    }
    if (PTR_DAT_08004890[3] == '\0') {
      FUN_080036c6(PTR_DAT_080048bc);
    }
    else {
      FUN_080036c6(PTR_DAT_080048b8);
    }
    if (PTR_DAT_08004890[4] == '\0') {
      FUN_080036c6(PTR_DAT_080048c4);
    }
    else {
      FUN_080036c6(PTR_DAT_080048c0);
    }
    if (PTR_DAT_08004890[2] == '\0') {
      FUN_080036c6(PTR_DAT_080048cc);
    }
    else {
      FUN_080036c6(PTR_DAT_080048c8);
    }
    bVar1 = PTR_DAT_08004890[5];
    if (bVar1 == 2) {
      FUN_080036c6(PTR_DAT_080048d8);
    }
    else if (bVar1 < 3) {
      if (bVar1 == 0) {
        FUN_080036c6(PTR_DAT_080048d0);
      }
      else if (bVar1 == 1) {
        FUN_080036c6(PTR_DAT_080048d4);
      }
    }
    cVar2 = PTR_DAT_08004890[6];
    if (cVar2 == '\x01') {
      FUN_080036c6(PTR_DAT_080048dc);
    }
    else if (cVar2 < '\x02') {
      if (cVar2 == -1) {
        FUN_080036c6(PTR_DAT_080048e0);
      }
      else if (cVar2 == '\0') {
        FUN_080036c6(PTR_DAT_080048e4);
      }
    }
    bVar1 = PTR_DAT_08004890[7];
    if (bVar1 == 2) {
      FUN_080036c6(PTR_DAT_080048f0);
    }
    else if (bVar1 < 3) {
      if (bVar1 == 0) {
        FUN_080036c6(PTR_DAT_080048e8);
      }
      else if (bVar1 == 1) {
        FUN_080036c6(PTR_DAT_080048ec);
      }
    }
    FUN_080036c6(PTR_DAT_080048f4);
    FUN_080037fc(PTR_DAT_08004890[0x18]);
    FUN_080036c6(PTR_DAT_080048f8);
    if (PTR_DAT_08004890[3] == '\0') {
      FUN_08003826(*(undefined4 *)(PTR_DAT_08004890 + 8));
    }
    else {
      uVar4 = FUN_08008590(*(undefined4 *)(PTR_DAT_08004890 + 8));
      uVar4 = FUN_08008640((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_08004888,DAT_0800488c);
      uVar3 = FUN_08008c30((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      FUN_08003826(uVar3);
    }
    FUN_080036c6(PTR_DAT_080048fc);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x080046de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_080046de::switchdataD_080046e4)[(byte)PTR_DAT_08004890[1]])();
  return;
}


////>>0x08004900>>FUN_08004900>>////

void FUN_08004900(undefined param_1,undefined4 param_2)

{
  FUN_080036c6(PTR_DAT_08004934);
  FUN_080037fc(param_1);
  FUN_080036c6(PTR_DAT_08004938);
  FUN_0800369c(param_2);
  FUN_080036c6(PTR_DAT_0800493c);
  return;
}


////>>0x08004940>>FUN_08004940>>////

void FUN_08004940(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_2c [6];
  byte local_11;
  
  auStack_2c[3] = *(undefined4 *)(PTR_DAT_08004b88 + 4);
  auStack_2c[4] = *(undefined4 *)(PTR_DAT_08004b88 + 8);
  auStack_2c[5] = *(undefined4 *)(PTR_DAT_08004b88 + 0xc);
  if ((byte)PTR_DAT_08004b88[1] < 8) {
                    /* WARNING: Could not recover jumptable at 0x0800495e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0800495e::switchdataD_08004964)[(byte)PTR_DAT_08004b88[1]])();
    return;
  }
  FUN_080036c6(PTR_s__MPos__08004ba8);
  for (local_11 = 0; local_11 < 3; local_11 = local_11 + 1) {
    uVar1 = FUN_08008e44(auStack_2c[local_11 + 3]);
    uVar2 = (uint)local_11;
    uVar1 = FUN_08009054(uVar1,*(undefined4 *)(PTR_DAT_08004bac + (uint)local_11 * 4));
    auStack_2c[uVar2] = uVar1;
    if ((PTR_DAT_08004bac[0x28] & 1) != 0) {
      uVar4 = FUN_08008590(auStack_2c[local_11]);
      uVar4 = FUN_08008640((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_08004b80,DAT_08004b84);
      uVar2 = (uint)local_11;
      uVar1 = FUN_08008c30((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      auStack_2c[uVar2] = uVar1;
    }
    FUN_08003826(auStack_2c[local_11]);
    FUN_080036c6(PTR_DAT_08004bb0);
  }
  FUN_080036c6(PTR_s_WPos__08004bb4);
  for (local_11 = 0; local_11 < 3; local_11 = local_11 + 1) {
    if ((PTR_DAT_08004bac[0x28] & 1) == 0) {
      uVar3 = auStack_2c[local_11];
      uVar1 = FUN_08008cdc(*(undefined4 *)(PTR_DAT_08004bb8 + (local_11 + 8) * 4),
                           *(undefined4 *)(PTR_DAT_08004bb8 + (local_11 + 10) * 4 + 4));
      uVar2 = (uint)local_11;
      uVar1 = FUN_08008cd8(uVar3,uVar1);
      auStack_2c[uVar2] = uVar1;
    }
    else {
      uVar4 = FUN_08008590(auStack_2c[local_11]);
      uVar1 = FUN_08008cdc(*(undefined4 *)(PTR_DAT_08004bb8 + (local_11 + 8) * 4),
                           *(undefined4 *)(PTR_DAT_08004bb8 + (local_11 + 10) * 4 + 4));
      uVar5 = FUN_08008590(uVar1);
      uVar5 = FUN_08008640((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_08004b80,DAT_08004b84);
      uVar4 = FUN_080082d0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                           (int)((ulonglong)uVar5 >> 0x20));
      uVar2 = (uint)local_11;
      uVar1 = FUN_08008c30((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      auStack_2c[uVar2] = uVar1;
    }
    FUN_08003826(auStack_2c[local_11]);
    if (local_11 < 2) {
      FUN_080036c6(PTR_DAT_08004bb0);
    }
  }
  FUN_080036c6(PTR_DAT_08004bbc);
  return;
}


////>>0x08004bc0>>FUN_08004bc0>>////

void FUN_08004bc0(byte param_1,undefined4 param_2)

{
  FUN_08000374((ushort)param_1 * 0x101 + 0x300,param_2,0x100);
  return;
}


////>>0x08004bf4>>FUN_08004bf4>>////

void FUN_08004bf4(byte param_1,undefined4 param_2)

{
  FUN_08000374((ushort)param_1 * 0xd + 0x200,param_2,0xc);
  return;
}


////>>0x08004c2a>>FUN_08004c2a>>////

void FUN_08004c2a(void)

{
  FUN_08000340(0,5);
  FUN_08000374(1,PTR_DAT_08004c44,0x40);
  return;
}


////>>0x08004c48>>FUN_08004c48>>////

void FUN_08004c48(char param_1)

{
  if (param_1 != '\0') {
    *(undefined4 *)PTR_DAT_08004d0c = DAT_08004d10;
    *(undefined4 *)(PTR_DAT_08004d0c + 4) = DAT_08004d10;
    *(undefined4 *)(PTR_DAT_08004d0c + 8) = DAT_08004d10;
    PTR_DAT_08004d0c[0xd] = 10;
    *(undefined4 *)(PTR_DAT_08004d0c + 0x10) = DAT_08004d14;
    *(undefined4 *)(PTR_DAT_08004d0c + 0x14) = DAT_08004d18;
    *(undefined4 *)(PTR_DAT_08004d0c + 0x20) = DAT_08004d1c;
    *(undefined4 *)(PTR_DAT_08004d0c + 0x1c) = DAT_08004d20;
    *(undefined2 *)(PTR_DAT_08004d0c + 0x18) = 0;
    *(undefined2 *)(PTR_DAT_08004d0c + 0x1a) = 0xa80;
    *(undefined4 *)(PTR_DAT_08004d0c + 0x24) = DAT_08004d24;
  }
  PTR_DAT_08004d0c[0x28] = 0;
  PTR_DAT_08004d0c[0x28] = PTR_DAT_08004d0c[0x28] | 2;
  PTR_DAT_08004d0c[0x28] = PTR_DAT_08004d0c[0x28] | 0x10;
  *(undefined2 *)(PTR_DAT_08004d0c + 0x2a) = 0;
  *(undefined4 *)(PTR_DAT_08004d0c + 0x2c) = DAT_08004d28;
  *(undefined4 *)(PTR_DAT_08004d0c + 0x30) = DAT_08004d14;
  *(undefined2 *)(PTR_DAT_08004d0c + 0x34) = 100;
  *(undefined4 *)(PTR_DAT_08004d0c + 0x38) = 0x3f800000;
  PTR_DAT_08004d0c[0x3c] = 0x19;
  PTR_DAT_08004d0c[0x3d] = 3;
  PTR_DAT_08004d0c[0x3e] = 0x19;
  FUN_08004c2a();
  return;
}


////>>0x08004d2c>>FUN_08004d2c>>////

bool FUN_08004d2c(byte param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = FUN_080003ec(param_2,(ushort)param_1 * 0x101 + 0x300,0x100);
  if (iVar1 == 0) {
    *param_2 = 0;
    FUN_08004bc0(param_1,param_2);
  }
  return iVar1 != 0;
}


////>>0x08004d7c>>FUN_08004d7c>>////

bool FUN_08004d7c(byte param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_080003ec(param_2,(ushort)param_1 * 0xd + 0x200,0xc);
  if (iVar1 == 0) {
    FUN_0800b430(param_2,0,0xc);
    FUN_08004bf4(param_1,param_2);
  }
  return iVar1 != 0;
}


////>>0x08004dd2>>FUN_08004dd2>>////

undefined4 FUN_08004dd2(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = FUN_08000310(0);
  if (bVar1 == 5) {
    iVar2 = FUN_080003ec(PTR_DAT_08004e2c,1,0x40);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    if (4 < bVar1) {
      return 0;
    }
    iVar2 = FUN_080003ec(PTR_DAT_08004e2c,1,0x28);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_08004c48(0);
  }
  return 1;
}


////>>0x08004e30>>FUN_08004e30>>////

undefined4 FUN_08004e30(int param_1,uint param_2)

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
    iVar4 = FUN_0800923c(param_2,0);
    if (iVar4 != 0) {
      return 8;
    }
    *(uint *)(PTR_DAT_080051a8 + param_1 * 4) = param_2;
    break;
  case 3:
    iVar4 = FUN_08009228(param_2,DAT_080051ac);
    if (iVar4 != 0) {
      return 9;
    }
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0xd] = uVar1;
    break;
  case 4:
    *(uint *)(PTR_DAT_080051a8 + 0x10) = param_2;
    break;
  case 5:
    *(uint *)(PTR_DAT_080051a8 + 0x14) = param_2;
    break;
  case 6:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x18) = uVar2;
    break;
  case 7:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3c] = uVar1;
    break;
  case 8:
    uVar3 = FUN_08008eec(param_2,DAT_080051b0);
    uVar3 = FUN_08008eec(uVar3,DAT_080051b0);
    *(undefined4 *)(PTR_DAT_080051a8 + 0x20) = uVar3;
    break;
  case 9:
    *(uint *)(PTR_DAT_080051a8 + 0x24) = param_2 & 0x7fffffff;
    break;
  case 10:
    *(uint *)(PTR_DAT_080051a8 + 0x1c) = param_2;
    break;
  case 0xb:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3e] = uVar1;
    break;
  case 0xc:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar1 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    PTR_DAT_080051a8[0x3d] = uVar1;
    break;
  case 0xd:
    iVar4 = FUN_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 1;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfe;
    }
    break;
  case 0xe:
    iVar4 = FUN_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 2;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfd;
    }
    break;
  case 0xf:
    iVar4 = FUN_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 4;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xfb;
    }
    break;
  case 0x10:
    iVar4 = FUN_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 8;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xf7;
    }
    FUN_0800192c();
    break;
  case 0x11:
    iVar4 = FUN_08009214(param_2,0);
    if (iVar4 == 0) {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] | 0x10;
    }
    else {
      PTR_DAT_080051a8[0x28] = PTR_DAT_080051a8[0x28] & 0xef;
    }
    break;
  case 0x12:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x2a) = uVar2;
    break;
  case 0x13:
    *(uint *)(PTR_DAT_080051a8 + 0x2c) = param_2;
    break;
  case 0x14:
    *(uint *)(PTR_DAT_080051a8 + 0x30) = param_2;
    break;
  case 0x15:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009654((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x34) = uVar2;
    break;
  case 0x16:
    *(uint *)(PTR_DAT_080051a8 + 0x38) = param_2;
    break;
  case 0x17:
    uVar5 = FUN_08008590(param_2);
    uVar5 = FUN_08009798((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    uVar2 = FUN_08008bf0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    *(undefined2 *)(PTR_DAT_080051a8 + 0x1a) = uVar2;
    break;
  default:
    return 6;
  }
  FUN_08004c2a();
  return 0;
}


////>>0x080051b4>>FUN_080051b4>>////

void FUN_080051b4(void)

{
  int iVar1;
  undefined auStack_18 [15];
  byte local_9;
  
  iVar1 = FUN_08004dd2();
  if (iVar1 == 0) {
    FUN_08004030(10);
    FUN_08004c48(1);
    FUN_08004250();
  }
  for (local_9 = 0; local_9 < 8; local_9 = local_9 + 1) {
    iVar1 = FUN_08004d7c(local_9,auStack_18);
    if (iVar1 == 0) {
      FUN_08004030(10);
    }
  }
  return;
}


////>>0x08005208>>FUN_08005208>>////

void FUN_08005208(void)

{
  return;
}


////>>0x08005214>>FUN_08005214>>////

void FUN_08005214(void)

{
  return;
}


////>>0x08005220>>FUN_08005220>>////

void FUN_08005220(void)

{
  return;
}


////>>0x0800522c>>FUN_0800522c>>////

void FUN_0800522c(void)

{
  return;
}


////>>0x08005238>>FUN_08005238>>////

void FUN_08005238(void)

{
  *PTR_DAT_0800524c = 0;
  FUN_08005250();
  return;
}


////>>0x08005250>>FUN_08005250>>////

void FUN_08005250(void)

{
  FUN_08005214();
  return;
}


////>>0x0800525c>>FUN_0800525c>>////

void FUN_0800525c(char param_1)

{
  if ((int)param_1 != (uint)(byte)*PTR_DAT_080052a8) {
    FUN_08002fd4();
    if (param_1 == '\0') {
      FUN_08005250();
    }
    else {
      if (param_1 < '\x01') {
        FUN_0800522c();
      }
      else {
        FUN_08005220();
      }
      FUN_08005208();
    }
    *PTR_DAT_080052a8 = param_1;
  }
  return;
}


////>>0x080052ac>>FUN_080052ac>>////

void FUN_080052ac(uint param_1)

{
  *(uint *)(DAT_080052d8 + 0x14) = param_1 | *(uint *)(DAT_080052d8 + 0x14) & 0xfffffaaf;
  return;
}


////>>0x080052dc>>FUN_080052dc>>////

void FUN_080052dc(uint param_1)

{
  *(uint *)(DAT_08005308 + 0x14) = param_1 | *(uint *)(DAT_08005308 + 0x14) & 0xfffff55f;
  return;
}


////>>0x0800530c>>FUN_0800530c>>////

void FUN_0800530c(void)

{
  return;
}


////>>0x08005318>>FUN_08005318>>////

void FUN_08005318(void)

{
  return;
}


////>>0x08005324>>FUN_08005324>>////

void FUN_08005324(uint param_1)

{
  uint local_14;
  
  local_14 = param_1;
  if (param_1 < 800) {
    local_14 = 800;
  }
  local_14 = DAT_08005358 / local_14;
  *(uint *)(PTR_DAT_0800535c + 0x14) = local_14;
  FUN_08007bf0(local_14);
  return;
}


////>>0x08005360>>FUN_08005360>>////

bool FUN_08005360(void)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)(PTR_DAT_08005398 + 0x18) =
       *(int *)(PTR_DAT_08005398 + 0x14) + *(int *)(PTR_DAT_08005398 + 0x18);
  uVar1 = DAT_0800539c;
  uVar2 = *(uint *)(PTR_DAT_08005398 + 0x18);
  if (DAT_0800539c < uVar2) {
    *(int *)(PTR_DAT_08005398 + 0x18) = *(int *)(PTR_DAT_08005398 + 0x18) + -420000;
  }
  return uVar1 < uVar2;
}


////>>0x080053a0>>FUN_080053a0>>////

void FUN_080053a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_080052dc(*(undefined2 *)PTR_DAT_080055f0);
  *(undefined2 *)PTR_DAT_080055f8 = *(undefined2 *)PTR_DAT_080055f4;
  if (*(int *)PTR_DAT_080055fc == 0) {
    uVar1 = FUN_08002f74();
    *(undefined4 *)PTR_DAT_080055fc = uVar1;
    if (*(int *)PTR_DAT_080055fc == 0) {
      FUN_080057e4();
      PTR_DAT_08005600[2] = PTR_DAT_08005600[2] | 4;
    }
    else {
      if (PTR_DAT_08005600[1] == '\x03') {
        *(undefined4 *)(PTR_DAT_08005604 + 0x1c) = *(undefined4 *)(*(int *)PTR_DAT_080055fc + 0x28);
        FUN_08005324(*(undefined4 *)(PTR_DAT_08005604 + 0x1c));
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
        iVar2 = FUN_08005360();
        if (iVar2 != 0) {
          if (*(uint *)(*(int *)PTR_DAT_080055fc + 0x30) < *(uint *)(PTR_DAT_08005604 + 0x1c)) {
            *(int *)(PTR_DAT_08005604 + 0x1c) =
                 *(int *)(PTR_DAT_08005604 + 0x1c) - *(int *)(*(int *)PTR_DAT_080055fc + 0x30);
            FUN_08005324(*(undefined4 *)(PTR_DAT_08005604 + 0x1c));
          }
          else {
            FUN_080057e4();
            PTR_DAT_08005600[2] = PTR_DAT_08005600[2] | 4;
          }
        }
      }
      else if (*(uint *)(PTR_DAT_08005748 + 0x10) < *(uint *)(*(int *)PTR_DAT_0800574c + 0x34)) {
        iVar2 = FUN_08005360();
        if (iVar2 != 0) {
          *(int *)(PTR_DAT_08005748 + 0x1c) =
               *(int *)(PTR_DAT_08005748 + 0x1c) + *(int *)(*(int *)PTR_DAT_0800574c + 0x30);
          if (*(uint *)(*(int *)PTR_DAT_0800574c + 0x3c) <= *(uint *)(PTR_DAT_08005748 + 0x1c)) {
            *(undefined4 *)(PTR_DAT_08005748 + 0x1c) =
                 *(undefined4 *)(*(int *)PTR_DAT_0800574c + 0x3c);
          }
          FUN_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
        }
      }
      else if (*(uint *)(PTR_DAT_08005748 + 0x10) < *(uint *)(*(int *)PTR_DAT_0800574c + 0x38)) {
        if (*(int *)(PTR_DAT_08005748 + 0x1c) != *(int *)(*(int *)PTR_DAT_0800574c + 0x3c)) {
          *(undefined4 *)(PTR_DAT_08005748 + 0x1c) =
               *(undefined4 *)(*(int *)PTR_DAT_0800574c + 0x3c);
          FUN_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
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
        iVar2 = FUN_08005360();
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
          FUN_08005324(*(undefined4 *)(PTR_DAT_08005748 + 0x1c));
        }
      }
    }
    else {
      *(undefined2 *)PTR_DAT_08005754 = 0;
      *(undefined4 *)PTR_DAT_0800574c = 0;
      FUN_08002f40();
    }
  }
  *(ushort *)PTR_DAT_08005754 = *(ushort *)PTR_DAT_08005754 ^ *(ushort *)(PTR_DAT_08005758 + 0x18);
  *(ushort *)PTR_DAT_0800575c = *(ushort *)PTR_DAT_0800575c ^ *(ushort *)(PTR_DAT_08005758 + 0x1a);
  return;
}


////>>0x08005760>>FUN_08005760>>////

void FUN_08005760(void)

{
  FUN_080052ac(*(undefined2 *)(PTR_DAT_08005774 + 0x18));
  return;
}


////>>0x08005778>>FUN_08005778>>////

void FUN_08005778(void)

{
  FUN_080052ac(*(undefined2 *)PTR_DAT_0800578c);
  return;
}


////>>0x08005790>>FUN_08005790>>////

void FUN_08005790(void)

{
  FUN_08005318();
  if (PTR_DAT_080057d4[1] == '\x03') {
    *(undefined2 *)PTR_DAT_080057dc = *(undefined2 *)(PTR_DAT_080057d8 + 0x18);
    *(undefined2 *)PTR_DAT_080057e0 = *(undefined2 *)(PTR_DAT_080057d8 + 0x1a);
    FUN_08007c40(0x69);
    FUN_08007c5e(((byte)PTR_DAT_080057d8[0xd] + 5) * 0x15);
    FUN_08007b70();
  }
  return;
}


////>>0x080057e4>>FUN_080057e4>>////

void FUN_080057e4(void)

{
  FUN_08007bc2();
  if ((PTR_DAT_0800580c[0x3c] != -1) || ((PTR_DAT_08005810[2] & 0x20) != 0)) {
    FUN_0800530c();
  }
  return;
}


////>>0x08005814>>FUN_08005814>>////

void FUN_08005814(void)

{
  FUN_0800b430(PTR_DAT_08005834,0,0x24);
  FUN_08005324(800);
  *(undefined4 *)PTR_DAT_08005838 = 0;
  return;
}


////>>0x0800583c>>FUN_0800583c>>////

void FUN_0800583c(void)

{
  FUN_080052ac(*(undefined2 *)(PTR_DAT_08005858 + 0x18));
  FUN_08005790();
  FUN_080057e4();
  return;
}


////>>0x0800585c>>FUN_0800585c>>////

void FUN_0800585c(void)

{
  if (PTR_DAT_08005878[1] == '\x02') {
    PTR_DAT_08005878[1] = 3;
    FUN_08005790();
  }
  return;
}


////>>0x0800587c>>FUN_0800587c>>////

void FUN_0800587c(void)

{
  if (PTR_DAT_0800589c[1] == '\x03') {
    PTR_DAT_0800589c[1] = 4;
    PTR_DAT_0800589c[0x10] = 0;
  }
  return;
}


////>>0x080058a0>>FUN_080058a0>>////

void FUN_080058a0(void)

{
  if (*(int *)PTR_DAT_080058f0 == 0) {
    PTR_DAT_080058fc[1] = 0;
  }
  else {
    FUN_08003618(*(int *)(*(int *)PTR_DAT_080058f0 + 0x10) - *(int *)(PTR_DAT_080058f4 + 0x10));
    *(undefined4 *)(PTR_DAT_080058f4 + 0x1c) = 0;
    FUN_08005324(*(undefined4 *)(PTR_DAT_080058f4 + 0x1c));
    *(undefined4 *)(PTR_DAT_080058f4 + 0x18) = DAT_080058f8;
    *(undefined4 *)(PTR_DAT_080058f4 + 0x10) = 0;
    PTR_DAT_080058fc[1] = 2;
  }
  return;
}


////>>0x08005900>>FUN_08005900>>////

undefined4 FUN_08005900(byte param_1)

{
  if (param_1 == 0x7e) {
    PTR_DAT_08005978[2] = PTR_DAT_08005978[2] | 2;
    return 1;
  }
  if (param_1 < 0x7f) {
    if (param_1 == 0x3f) {
      PTR_DAT_08005978[2] = PTR_DAT_08005978[2] | 1;
      return 1;
    }
    if (param_1 < 0x40) {
      if (param_1 == 0x18) {
        FUN_080025e8();
        return 1;
      }
      if (param_1 == 0x21) {
        PTR_DAT_08005978[2] = PTR_DAT_08005978[2] | 8;
        return 1;
      }
    }
  }
  return 0;
}


////>>0x0800597c>>FUN_0800597c>>////

void FUN_0800597c(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x08005984>>FUN_08005984>>////

undefined4 FUN_08005984(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)PTR_DAT_080059b0 == 0) {
    uVar1 = FUN_0800597c(1,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x080059b4>>FUN_080059b4>>////

undefined4 FUN_080059b4(void)

{
  *DAT_080059f4 = *DAT_080059f4 | 0x200;
  *DAT_080059f4 = *DAT_080059f4 | 0x400;
  *DAT_080059f4 = *DAT_080059f4 | 0x100;
  FUN_08006d72(16000);
  FUN_08006ce0(3);
  FUN_08005a50();
  return 0;
}


////>>0x080059f8>>FUN_080059f8>>////

undefined4 FUN_080059f8(void)

{
  *(undefined4 *)(DAT_08005a4c + 0x20) = 0xffffffff;
  *(undefined4 *)(DAT_08005a4c + 0x20) = 0;
  *(undefined4 *)(DAT_08005a4c + 0x24) = 0xffffffff;
  *(undefined4 *)(DAT_08005a4c + 0x24) = 0;
  *(undefined4 *)(DAT_08005a4c + 0x10) = 0xffffffff;
  *(undefined4 *)(DAT_08005a4c + 0x10) = 0;
  *(undefined4 *)(DAT_08005a4c + 0x14) = 0xffffffff;
  *(undefined4 *)(DAT_08005a4c + 0x14) = 0;
  *(undefined4 *)(DAT_08005a4c + 0x18) = 0xffffffff;
  *(undefined4 *)(DAT_08005a4c + 0x18) = 0;
  FUN_08005a5c();
  return 0;
}


////>>0x08005a50>>FUN_08005a50>>////

void FUN_08005a50(void)

{
  return;
}


////>>0x08005a5c>>FUN_08005a5c>>////

void FUN_08005a5c(void)

{
  return;
}


////>>0x08005a68>>FUN_08005a68>>////

void FUN_08005a68(void)

{
  *(int *)PTR_DAT_08005a80 = *(int *)PTR_DAT_08005a80 + 1;
  return;
}


////>>0x08005a84>>FUN_08005a84>>////

undefined4 FUN_08005a84(void)

{
  return *(undefined4 *)PTR_DAT_08005a94;
}


////>>0x08005a98>>FUN_08005a98>>////

void FUN_08005a98(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08005a84();
  do {
    uVar2 = FUN_08005a84();
  } while (uVar2 < (uint)(param_1 + iVar1));
  return;
}


////>>0x08005bdc>>FUN_08005bdc>>////

void FUN_08005bdc(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((param_1 & 0xf) + DAT_08005c28 + 0x14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + DAT_08005c2c + 0x300) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x08005c30>>FUN_08005c30>>////

bool FUN_08005c30(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    DAT_08005c70[1] = param_1 + -1;
    FUN_08005bdc(0xffffffff,0xf);
    DAT_08005c70[2] = 0;
    *DAT_08005c70 = 7;
  }
  return !bVar1;
}


////>>0x08005cec>>FUN_08005cec>>////

undefined4 FUN_08005cec(uint *param_1)

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
      iVar1 = FUN_08005a84();
      while ((*DAT_08005fac & 0x20000) != 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
      *DAT_08005fb0 = (char)param_1[1];
      if (param_1[1] == 1) {
        iVar1 = FUN_08005a84();
        while ((*DAT_08005fac & 0x20000) == 0) {
          uVar2 = FUN_08005a84();
          if (iVar1 + 5000U <= uVar2) {
            return 3;
          }
        }
      }
      else {
        iVar1 = FUN_08005a84();
        while ((*DAT_08005fac & 0x20000) != 0) {
          uVar2 = FUN_08005a84();
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
      iVar1 = FUN_08005a84();
      while ((*DAT_08005fac & 2) != 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005fb4 = 1;
      iVar1 = FUN_08005a84();
      while ((*DAT_08005fac & 2) == 0) {
        uVar2 = FUN_08005a84();
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
      iVar1 = FUN_08005a84();
      while ((DAT_08005fac[0x1d] & 2) != 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005fb8 = 1;
      iVar1 = FUN_08005a84();
      while ((DAT_08005fac[0x1d] & 2) == 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    DAT_08005fac[0x10] = DAT_08005fac[0x10] | 0x10000000;
    *DAT_08005fbc = *DAT_08005fbc | 0x100;
    iVar1 = FUN_08005a84();
    while ((*DAT_08005fbc & 0x100) == 0) {
      uVar2 = FUN_08005a84();
      if (iVar1 + 100U <= uVar2) {
        return 3;
      }
    }
    *DAT_08005fc0 = 0;
    iVar1 = FUN_08005a84();
    while ((DAT_08006180[0x1c] & 2) != 0) {
      uVar2 = FUN_08005a84();
      if (iVar1 + 5000U <= uVar2) {
        return 3;
      }
    }
    *DAT_08006184 = (char)param_1[2];
    if (param_1[2] == 1) {
      iVar1 = FUN_08005a84();
      while ((DAT_08006180[0x1c] & 2) == 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      iVar1 = FUN_08005a84();
      while ((DAT_08006180[0x1c] & 2) != 0) {
        uVar2 = FUN_08005a84();
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
      iVar1 = FUN_08005a84();
      while ((*DAT_08006180 & 0x2000000) != 0) {
        uVar2 = FUN_08005a84();
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
      iVar1 = FUN_08005a84();
      while ((*DAT_08006180 & 0x2000000) == 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      *DAT_08006188 = 0;
      iVar1 = FUN_08005a84();
      while ((*DAT_08006180 & 0x2000000) != 0) {
        uVar2 = FUN_08005a84();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  return 0;
}


////>>0x0800618c>>FUN_0800618c>>////

undefined4 FUN_0800618c(uint *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((*DAT_08006400 & 0xf) < param_2) {
    *(char *)DAT_08006400 = (char)param_2;
    if (param_2 != (*DAT_08006400 & 0xf)) {
      return 1;
    }
    if ((*param_1 & 1) != 0) {
      if (param_1[1] == 1) {
        if ((*DAT_08006404 & 0x20000) == 0) {
          return 1;
        }
      }
      else if ((param_1[1] != 2) && ((*DAT_08006404 & 2) == 0)) {
        return 1;
      }
      DAT_08006404[2] = param_1[1] | DAT_08006404[2] & 0xfffffffc;
      iVar2 = FUN_08005a84();
      uVar4 = iVar2 + 5000;
      if (param_1[1] == 1) {
        while ((DAT_08006404[2] & 0xc) != 4) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
      else if (param_1[1] == 2) {
        while ((DAT_08006404[2] & 0xc) != 8) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
      else {
        while ((DAT_08006404[2] & 0xc) != 0) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
    }
  }
  else {
    if ((*param_1 & 1) != 0) {
      if (param_1[1] == 1) {
        if ((*DAT_08006404 & 0x20000) == 0) {
          return 1;
        }
      }
      else if (param_1[1] == 2) {
        if ((*DAT_08006404 & 0x2000000) == 0) {
          return 1;
        }
      }
      else if ((*DAT_08006404 & 2) == 0) {
        return 1;
      }
      DAT_08006404[2] = param_1[1] | DAT_08006404[2] & 0xfffffffc;
      iVar2 = FUN_08005a84();
      uVar4 = iVar2 + 5000;
      if (param_1[1] == 1) {
        while ((DAT_08006404[2] & 0xc) != 4) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
      else if (param_1[1] == 2) {
        while ((DAT_08006404[2] & 0xc) != 8) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
      else {
        while ((DAT_08006404[2] & 0xc) != 0) {
          uVar3 = FUN_08005a84();
          if (uVar4 <= uVar3) {
            return 3;
          }
        }
      }
    }
    *(char *)DAT_08006400 = (char)param_2;
    if (param_2 != (*DAT_08006400 & 0xf)) {
      return 1;
    }
  }
  if ((*param_1 & 2) != 0) {
    DAT_08006404[2] = param_1[2] | DAT_08006404[2] & 0xffffff0f;
  }
  if ((*param_1 & 4) != 0) {
    DAT_08006404[2] = param_1[3] | DAT_08006404[2] & 0xffffe3ff;
  }
  if ((*param_1 & 8) != 0) {
    DAT_08006404[2] = param_1[4] << 3 | DAT_08006404[2] & 0xffff1fff;
  }
  uVar5 = FUN_08006628();
  lVar1 = (ulonglong)DAT_08006408 * (uVar5 & 0xffffffff);
  FUN_08005c30((uint)((ulonglong)lVar1 >> 0x26),(int)(uVar5 >> 0x20),(int)lVar1);
  return 0;
}


////>>0x0800640c>>FUN_0800640c>>////

void FUN_0800640c(int param_1,uint param_2,uint param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == 0) {
    *(uint *)(DAT_080064b0 + 0x30) = *(uint *)(DAT_080064b0 + 0x30) | 1;
    local_1c = 0x100;
    local_18 = 2;
    local_10 = 3;
    local_14 = 0;
    local_c = 0;
    FUN_08006e88(DAT_080064b4,&local_1c);
    *(uint *)(DAT_080064b0 + 8) = param_3 | param_2 | *(uint *)(DAT_080064b0 + 8) & 0xf89fffff;
  }
  else {
    *(uint *)(DAT_080064b0 + 0x30) = *(uint *)(DAT_080064b0 + 0x30) | 4;
    local_1c = 0x200;
    local_18 = 2;
    local_10 = 3;
    local_14 = 0;
    local_c = 0;
    FUN_08006e88(DAT_080064b8,&local_1c);
    *(uint *)(DAT_080064b0 + 8) = param_2 | param_3 << 3 | *(uint *)(DAT_080064b0 + 8) & 0x7ffffff;
  }
  return;
}


////>>0x080064ec>>FUN_080064ec>>////

uint FUN_080064ec(void)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  uVar1 = *(uint *)(DAT_0800661c + 8) & 0xc;
  if (uVar1 == 8) {
    uVar2 = *(uint *)(DAT_0800661c + 4) & 0x3f;
    uVar1 = count_leading_zeroes(0x200);
    if ((*(uint *)(DAT_0800661c + 4) & 0x400000) >> (uVar1 & 0xff) == 0) {
      uVar1 = count_leading_zeroes(0x3fe0000);
      local_c = ((*(uint *)(DAT_0800661c + 4) & 0x7fc0) >> (uVar1 & 0xff)) * (DAT_08006620 / uVar2);
    }
    else {
      uVar1 = count_leading_zeroes(0x3fe0000);
      local_c = ((*(uint *)(DAT_0800661c + 4) & 0x7fc0) >> (uVar1 & 0xff)) * (DAT_08006624 / uVar2);
    }
    uVar1 = count_leading_zeroes(0xc000);
    return local_c / ((((*(uint *)(DAT_0800661c + 4) & 0x30000) >> (uVar1 & 0xff)) + 1) * 2);
  }
  if (uVar1 < 9) {
    if (uVar1 == 0) {
      return DAT_08006620;
    }
    if (uVar1 == 4) {
      return DAT_08006624;
    }
  }
  return DAT_08006620;
}


////>>0x08006628>>FUN_08006628>>////

undefined4 FUN_08006628(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_080064ec();
  uVar2 = count_leading_zeroes(0xf000000);
  *(uint *)PTR_DAT_0800667c =
       uVar1 >> PTR_DAT_08006678[(*(uint *)(DAT_08006674 + 8) & 0xf0) >> (uVar2 & 0xff)];
  return *(undefined4 *)PTR_DAT_0800667c;
}


////>>0x08006680>>FUN_08006680>>////

uint FUN_08006680(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_08006628();
  uVar2 = count_leading_zeroes(0x380000);
  return uVar1 >> PTR_DAT_080066c8[(*(uint *)(DAT_080066c4 + 8) & 0x1c00) >> (uVar2 & 0xff)];
}


////>>0x080066cc>>FUN_080066cc>>////

uint FUN_080066cc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_08006628();
  uVar2 = count_leading_zeroes(0x70000);
  return uVar1 >> PTR_DAT_08006714[(*(uint *)(DAT_08006710 + 8) & 0xe000) >> (uVar2 & 0xff)];
}


////>>0x08006950>>FUN_08006950>>////

void FUN_08006950(uint param_1)

{
  *(uint *)(DAT_08006994 + 0xc) =
       *(uint *)(DAT_08006994 + 0xc) & 0xf8ff | (param_1 & 7) << 8 | 0x5fa0000;
  return;
}


////>>0x08006998>>FUN_08006998>>////

uint FUN_08006998(void)

{
  return *(uint *)(DAT_080069b0 + 0xc) >> 8 & 7;
}


////>>0x080069b4>>FUN_080069b4>>////

void FUN_080069b4(byte param_1)

{
  *(int *)(DAT_080069e0 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x080069e4>>FUN_080069e4>>////

void FUN_080069e4(byte param_1)

{
  *(int *)(DAT_08006a14 + (((uint)(int)(char)param_1 >> 5) + 0x20) * 4) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006a18>>FUN_08006a18>>////

bool FUN_08006a18(byte param_1)

{
  return (*(uint *)(DAT_08006a54 + (((uint)(int)(char)param_1 >> 5) + 0x40) * 4) &
         1 << (param_1 & 0x1f)) != 0;
}


////>>0x08006a58>>FUN_08006a58>>////

void FUN_08006a58(byte param_1)

{
  *(int *)(DAT_08006a88 + (((uint)(int)(char)param_1 >> 5) + 0x40) * 4) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006a8c>>FUN_08006a8c>>////

void FUN_08006a8c(byte param_1)

{
  *(int *)(DAT_08006abc + (((uint)(int)(char)param_1 >> 5) + 0x60) * 4) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006ac0>>FUN_08006ac0>>////

bool FUN_08006ac0(byte param_1)

{
  return (*(uint *)(DAT_08006afc + (((uint)(int)(char)param_1 >> 5) + 0x80) * 4) &
         1 << (param_1 & 0x1f)) != 0;
}


////>>0x08006b00>>FUN_08006b00>>////

void FUN_08006b00(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((param_1 & 0xf) + DAT_08006b4c + 0x14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + DAT_08006b50 + 0x300) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x08006b54>>FUN_08006b54>>////

byte FUN_08006b54(byte param_1)

{
  byte bVar1;
  
  if ((char)param_1 < '\0') {
    bVar1 = *(byte *)((param_1 & 0xf) + DAT_08006b98 + 0x14);
  }
  else {
    bVar1 = *(byte *)((char)param_1 + DAT_08006b9c + 0x300);
  }
  return bVar1 >> 4;
}


////>>0x08006ba0>>FUN_08006ba0>>////

uint FUN_08006ba0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 7;
  uVar1 = 7 - param_1;
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (param_1 + 4 < 7) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 - 3;
  }
  return param_3 & (1 << (param_1 & 0xff)) - 1U |
         ((1 << (uVar1 & 0xff)) - 1U & param_2) << (param_1 & 0xff);
}


////>>0x08006c04>>FUN_08006c04>>////

void FUN_08006c04(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  param_2 = param_2 & 7;
  uVar1 = 7 - param_2;
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (param_2 + 4 < 7) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 - 3;
  }
  *param_3 = (1 << (uVar1 & 0xff)) - 1U & param_1 >> (param_2 & 0xff);
  *param_4 = (1 << (param_2 & 0xff)) - 1U & param_1;
  return;
}


////>>0x08006c70>>FUN_08006c70>>////

void FUN_08006c70(void)

{
  DataSynchronizationBarrier(0xf);
  *(uint *)(DAT_08006c94 + 0xc) = DAT_08006c98 | *(uint *)(DAT_08006c94 + 0xc) & 0x700;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08006c9c>>FUN_08006c9c>>////

bool FUN_08006c9c(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    DAT_08006cdc[1] = param_1 + -1;
    FUN_08006b00(0xffffffff,0xf);
    DAT_08006cdc[2] = 0;
    *DAT_08006cdc = 7;
  }
  return !bVar1;
}


////>>0x08006ce0>>FUN_08006ce0>>////

void FUN_08006ce0(undefined4 param_1)

{
  FUN_08006950(param_1);
  return;
}


////>>0x08006cf6>>FUN_08006cf6>>////

void FUN_08006cf6(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006998();
  uVar1 = FUN_08006ba0(uVar1,param_2,param_3);
  FUN_08006b00((int)param_1,uVar1);
  return;
}


////>>0x08006d2e>>FUN_08006d2e>>////

void FUN_08006d2e(char param_1)

{
  FUN_080069b4((int)param_1);
  return;
}


////>>0x08006d4a>>FUN_08006d4a>>////

void FUN_08006d4a(char param_1)

{
  FUN_080069e4((int)param_1);
  return;
}


////>>0x08006d66>>FUN_08006d66>>////

void FUN_08006d66(void)

{
  FUN_08006c70();
  return;
}


////>>0x08006d72>>FUN_08006d72>>////

undefined4 FUN_08006d72(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006c9c(param_1);
  return uVar1;
}


////>>0x08006d8a>>FUN_08006d8a>>////

undefined4 FUN_08006d8a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006998();
  return uVar1;
}


////>>0x08006d98>>FUN_08006d98>>////

void FUN_08006d98(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006b54((int)param_1);
  FUN_08006c04(uVar1,param_2,param_3,param_4);
  return;
}


////>>0x08006dc4>>FUN_08006dc4>>////

void FUN_08006dc4(char param_1)

{
  FUN_08006a58((int)param_1);
  return;
}


////>>0x08006de0>>FUN_08006de0>>////

undefined4 FUN_08006de0(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006a18((int)param_1);
  return uVar1;
}


////>>0x08006dfe>>FUN_08006dfe>>////

void FUN_08006dfe(char param_1)

{
  FUN_08006a8c((int)param_1);
  return;
}


////>>0x08006e1a>>FUN_08006e1a>>////

undefined4 FUN_08006e1a(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006ac0((int)param_1);
  return uVar1;
}


////>>0x08006e88>>FUN_08006e88>>////

void FUN_08006e88(uint *param_1,uint *param_2)

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


////>>0x0800733e>>FUN_0800733e>>////

void FUN_0800733e(int param_1,undefined2 param_2,char param_3)

{
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x1a) = param_2;
  }
  else {
    *(undefined2 *)(param_1 + 0x18) = param_2;
  }
  return;
}


////>>0x0800738e>>FUN_0800738e>>////

void FUN_0800738e(ushort param_1)

{
  if (((uint)param_1 & *(uint *)(DAT_080073bc + 0x14)) != 0) {
    *(uint *)(DAT_080073bc + 0x14) = (uint)param_1;
    FUN_080073c0(param_1);
  }
  return;
}


////>>0x080073c0>>FUN_080073c0>>////

void FUN_080073c0(void)

{
  return;
}


////>>0x080073d4>>FUN_080073d4>>////

void FUN_080073d4(uint param_1)

{
  *(short *)(((int)param_1 >> 4) * 0x400 + 0x4002001a) = (short)(1 << (param_1 & 0xf));
  return;
}


////>>0x08007402>>FUN_08007402>>////

void FUN_08007402(uint param_1)

{
  *(short *)(((int)param_1 >> 4) * 0x400 + 0x40020018) = (short)(1 << (param_1 & 0xf));
  return;
}


////>>0x08007430>>FUN_08007430>>////

void FUN_08007430(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007436>>FUN_08007436>>////

void FUN_08007436(void)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(uint *)(DAT_080074c0 + 0x40) = *(uint *)(DAT_080074c0 + 0x40) | 0x10000000;
  *DAT_080074c4 = *DAT_080074c4 | 0xc000;
  local_4c = 1;
  local_48 = 1;
  local_34 = 2;
  local_30 = 0x400000;
  local_2c = 8;
  local_28 = 0x150;
  local_24 = 2;
  local_20 = 7;
  iVar1 = FUN_08005cec(&local_4c);
  if (iVar1 != 0) {
    FUN_08007430();
  }
  local_1c = 0xf;
  local_18 = 2;
  local_14 = 0;
  local_10 = 0x1400;
  local_c = 0x1000;
  iVar1 = FUN_0800618c(&local_1c,5);
  if (iVar1 != 0) {
    FUN_08007430();
  }
  return;
}


////>>0x080074c8>>FUN_080074c8>>////

void FUN_080074c8(uint param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_08007402(0x3e);
  }
  if ((*(int *)PTR_DAT_08007518 != 0) && ((param_1 & 0x1e) != 0)) {
    FUN_0800195c();
  }
  if ((*(int *)PTR_DAT_0800751c != 0) && ((param_1 & 0x80) != 0)) {
    FUN_08003a18(param_1);
  }
  return;
}


////>>0x08007520>>FUN_08007520>>////

void FUN_08007520(uint param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_080073d4(0x3e);
  }
  return;
}


////>>0x08007540>>FUN_08007540>>////

undefined4 FUN_08007540(void)

{
  FUN_080059b4();
  FUN_08007436();
  FUN_0800778c();
  FUN_08007e08();
  FUN_080079c0();
  FUN_08008190();
  FUN_08005984(0);
  FUN_08001ddc();
  return 0;
}


////>>0x0800756c>>FUN_0800756c>>////

void FUN_0800756c(void)

{
  *DAT_080075bc = *DAT_080075bc | 1;
  DAT_080075bc[2] = 0;
  *DAT_080075bc = *DAT_080075bc & 0xfef6ffff;
  DAT_080075bc[1] = DAT_080075c0;
  *DAT_080075bc = *DAT_080075bc & 0xfffbffff;
  DAT_080075bc[3] = 0;
  *(undefined4 *)(DAT_080075c4 + 8) = 0x8000000;
  return;
}


////>>0x080076c8>>FUN_080076c8>>////

void FUN_080076c8(uint param_1)

{
  *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020014) =
       *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020014) ^ 1 << (param_1 & 0xf);
  return;
}


////>>0x08007756>>FUN_08007756>>////

void FUN_08007756(void)

{
  uint uVar1;
  
  uVar1 = FUN_08005a84();
  if ((uVar1 & 0x1ff) == 0) {
    FUN_080076c8(0x3c);
  }
  if ((uVar1 & 0xf) == 0) {
    FUN_08007930();
  }
  FUN_08005a68();
  return;
}


////>>0x0800778c>>FUN_0800778c>>////

void FUN_0800778c(void)

{
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    local_10 = (uint *)(PTR_DAT_0800784c + local_c * 0x18);
    *(uint *)(DAT_08007850 + 0x30) = *(uint *)(DAT_08007850 + 0x30) | 1 << (*local_10 >> 4 & 0xff);
    local_24 = 1 << (*local_10 & 0xf);
    local_20 = local_10[1];
    local_1c = local_10[2];
    local_18 = local_10[3];
    local_14 = local_10[4];
    FUN_08006e88(((*local_10 >> 4) + 0x100080) * 0x400,&local_24);
    if (-1 < (int)local_10[5]) {
      FUN_0800733e(((*local_10 >> 4) + 0x100080) * 0x400,1 << (*local_10 & 0xf) & 0xffff,
                   local_10[5] & 0xff);
    }
  }
  return;
}


////>>0x08007854>>FUN_08007854>>////

uint FUN_08007854(uint param_1)

{
  return *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020010) >> (param_1 & 0xf) & 1;
}


////>>0x08007884>>FUN_08007884>>////

uint FUN_08007884(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = FUN_08007854(0x36);
  iVar2 = FUN_08007854(0x37);
  iVar3 = FUN_08007854(0x38);
  iVar4 = FUN_08007854(0x39);
  iVar5 = FUN_08007854(0xf);
  uVar6 = FUN_08007854(0);
  return uVar6 | iVar1 << 4 | iVar2 << 3 | iVar3 << 2 | iVar4 << 1 | iVar5 << 7;
}


////>>0x080078f4>>FUN_080078f4>>////

uint FUN_080078f4(void)

{
  int local_10;
  uint local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    local_c = *(uint *)(PTR_DAT_0800792c + local_10 * 4) | local_c;
  }
  return local_c;
}


////>>0x08007930>>FUN_08007930>>////

void FUN_08007930(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_080079b8;
  if (*(int *)PTR_DAT_080079bc != 0) {
    iVar5 = *(int *)(PTR_DAT_080079b8 + 0x14);
    uVar2 = FUN_08007884();
    *(undefined4 *)(puVar1 + iVar5 * 4) = uVar2;
    if (*(int *)(puVar1 + 0x14) == 3) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(puVar1 + 0x14) + 1;
    }
    *(int *)(puVar1 + 0x14) = iVar5;
    uVar3 = FUN_080078f4();
    if (uVar3 != *(uint *)(puVar1 + 0x10)) {
      uVar4 = *(uint *)(puVar1 + 0x10);
      if ((~*(uint *)(puVar1 + 0x10) & uVar3) != 0) {
        FUN_080074c8(~*(uint *)(puVar1 + 0x10) & uVar3);
      }
      if ((~uVar3 & uVar4) != 0) {
        FUN_08007520(~uVar3 & uVar4);
      }
      *(uint *)(puVar1 + 0x10) = uVar3;
    }
  }
  return;
}


////>>0x080079c0>>FUN_080079c0>>////

void FUN_080079c0(void)

{
  FUN_0800b430(PTR_DAT_080079d8,0,0x18);
  *(undefined4 *)PTR_DAT_080079dc = 1;
  return;
}


////>>0x080079e0>>FUN_080079e0>>////

void FUN_080079e0(byte param_1)

{
  *(int *)(DAT_08007a0c + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08007a10>>FUN_08007a10>>////

void FUN_08007a10(int param_1)

{
  if (param_1 == 0x40000000) {
    *(uint *)(DAT_08007a64 + 0x40) = *(uint *)(DAT_08007a64 + 0x40) | 1;
  }
  else if (param_1 == DAT_08007a68) {
    *(uint *)(DAT_08007a64 + 0x40) = *(uint *)(DAT_08007a64 + 0x40) | 2;
  }
  else if (param_1 == DAT_08007a6c) {
    *(uint *)(DAT_08007a64 + 0x40) = *(uint *)(DAT_08007a64 + 0x40) | 4;
  }
  return;
}


////>>0x08007a70>>FUN_08007a70>>////

void FUN_08007a70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_c;
  
  if (param_1 == 0x40000000) {
    local_c = 0x1c;
  }
  else if (param_1 == DAT_08007ac8) {
    local_c = 0x1d;
  }
  else {
    if (param_1 != DAT_08007acc) {
      return;
    }
    local_c = 0x1e;
  }
  FUN_08006cf6(local_c,param_2,param_3);
  FUN_080079e0(local_c);
  return;
}


////>>0x08007ad0>>FUN_08007ad0>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007ad0(void)

{
  FUN_08007a10(0x40000000);
  _DAT_40000000 = 0;
  _DAT_40000004 = 0;
  _DAT_40000008 = 0;
  _DAT_4000000c = 0;
  _DAT_40000010 = 0;
  _DAT_40000018 = 0;
  _DAT_4000001c = 0;
  _DAT_40000020 = 0;
  _DAT_40000024 = 0;
  _DAT_40000028 = (uint)((ulonglong)DAT_08007b6c * (ulonglong)*(uint *)PTR_DAT_08007b68 >> 0x38) - 1
  ;
  _DAT_4000002c = 0;
  _DAT_40000034 = 0;
  _DAT_40000038 = 0;
  _DAT_4000003c = 0;
  _DAT_40000040 = 0;
  _DAT_40000048 = 0;
  _DAT_4000004c = 0;
  FUN_08007a70(0x40000000,0,0);
  return;
}


////>>0x08007b70>>FUN_08007b70>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007b70(void)

{
  uint local_c;
  
  local_c = 1;
  if (_DAT_40000034 != 0) {
    local_c = 3;
  }
  if (_DAT_40000038 != 0) {
    local_c = local_c | 4;
  }
  _DAT_4000000c = _DAT_4000000c | local_c;
  _DAT_40000000 = _DAT_40000000 | 1;
  return;
}


////>>0x08007bc2>>FUN_08007bc2>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007bc2(void)

{
  _DAT_40000000 = _DAT_40000000 & 0xfffffffe;
  _DAT_4000000c = _DAT_4000000c & 0xfffffff8;
  return;
}


////>>0x08007bf0>>FUN_08007bf0>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007bf0(uint param_1)

{
  _DAT_4000002c = param_1;
  if (param_1 <= _DAT_40000024) {
    _DAT_40000024 = param_1;
  }
  return;
}


////>>0x08007c40>>FUN_08007c40>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007c40(undefined4 param_1)

{
  _DAT_40000034 = param_1;
  return;
}


////>>0x08007c5e>>FUN_08007c5e>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007c5e(undefined4 param_1)

{
  _DAT_40000038 = param_1;
  return;
}


////>>0x08007c7c>>FUN_08007c7c>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007c7c(void)

{
  if (((_DAT_40000010 & 2) != 0) && ((_DAT_4000000c & 2) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffd;
    FUN_08005778();
  }
  if (((_DAT_40000010 & 4) != 0) && ((_DAT_4000000c & 4) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffb;
    FUN_08005760();
  }
  if (((_DAT_40000010 & 1) != 0) && ((_DAT_4000000c & 1) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffe;
    FUN_080053a0();
  }
  return;
}


////>>0x08007d08>>FUN_08007d08>>////

void FUN_08007d08(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08007d9c;
  FUN_08007a10(DAT_08007d9c);
  *puVar1 = 0x80;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0x6800;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = (uint)((ulonglong)DAT_08007da4 * (ulonglong)*(uint *)PTR_DAT_08007da0 >> 0x35) - 1;
  puVar1[0xb] = 199;
  puVar1[0xd] = 0;
  puVar1[0xe] = 100;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[5] = 1;
  return;
}


////>>0x08007da8>>FUN_08007da8>>////

void FUN_08007da8(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08007dd4;
  DAT_08007dd4[8] = DAT_08007dd4[8] | 0x10;
  *puVar1 = *puVar1 | 1;
  return;
}


////>>0x08007e08>>FUN_08007e08>>////

void FUN_08007e08(void)

{
  FUN_08007ad0();
  FUN_08007d08();
  FUN_08007da8();
  return;
}


////>>0x08007e1c>>FUN_08007e1c>>////

void FUN_08007e1c(byte param_1)

{
  do {
  } while ((*DAT_08007e48 & 0x80) == 0);
  DAT_08007e48[1] = (uint)param_1;
  return;
}


////>>0x08007e58>>FUN_08007e58>>////

bool FUN_08007e58(void)

{
  return (*DAT_08007e80 & 0x20) != 0;
}


////>>0x08007e84>>FUN_08007e84>>////

uint FUN_08007e84(void)

{
  return *(uint *)(DAT_08007ea0 + 4) & 0xff;
}


////>>0x08007ea4>>FUN_08007ea4>>////

void FUN_08007ea4(int param_1)

{
  if (param_1 == DAT_08007f38) {
    *(uint *)(DAT_08007f3c + 0x44) = *(uint *)(DAT_08007f3c + 0x44) | 0x10;
  }
  else if (param_1 == DAT_08007f40) {
    *(uint *)(DAT_08007f3c + 0x40) = *(uint *)(DAT_08007f3c + 0x40) | 0x20000;
  }
  else if (param_1 == DAT_08007f44) {
    *(uint *)(DAT_08007f3c + 0x40) = *(uint *)(DAT_08007f3c + 0x40) | 0x40000;
  }
  else if (param_1 == DAT_08007f48) {
    *(uint *)(DAT_08007f3c + 0x40) = *(uint *)(DAT_08007f3c + 0x40) | 0x80000;
  }
  else if (param_1 == DAT_08007f4c) {
    *(uint *)(DAT_08007f3c + 0x40) = *(uint *)(DAT_08007f3c + 0x40) | 0x100000;
  }
  else if (param_1 == DAT_08007f50) {
    *(uint *)(DAT_08007f3c + 0x44) = *(uint *)(DAT_08007f3c + 0x44) | 0x20;
  }
  return;
}


////>>0x08007f54>>FUN_08007f54>>////

void FUN_08007f54(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 0xc) & 0x8000) == 0) {
    if ((param_1 != DAT_08008184) && (param_1 != DAT_08008188)) {
      uVar4 = FUN_08006680();
      lVar1 = (ulonglong)DAT_0800818c *
              ((ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 2));
      iVar2 = FUN_08006680((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)lVar1);
      iVar3 = FUN_08006680();
      *(uint *)(param_1 + 8) =
           (uint)((ulonglong)lVar1 >> 0x25) << 4 |
           (uint)((ulonglong)DAT_0800818c *
                  (ulonglong)
                  (((uint)(iVar2 * 0x19) / (uint)(param_2 << 2) +
                   (uint)((ulonglong)DAT_0800818c *
                          ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 2)) >>
                         0x25) * -100) * 0x10 + 0x32) >> 0x25) & 0xf;
      return;
    }
    uVar4 = FUN_080066cc();
    lVar1 = (ulonglong)DAT_0800818c *
            ((ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 2));
    iVar2 = FUN_080066cc((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)lVar1);
    iVar3 = FUN_080066cc();
    *(uint *)(param_1 + 8) =
         (uint)((ulonglong)lVar1 >> 0x25) << 4 |
         (uint)((ulonglong)DAT_0800818c *
                (ulonglong)
                (((uint)(iVar2 * 0x19) / (uint)(param_2 << 2) +
                 (uint)((ulonglong)DAT_0800818c *
                        ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 2)) >> 0x25)
                 * -100) * 0x10 + 0x32) >> 0x25) & 0xf;
  }
  else {
    if ((param_1 != DAT_08008184) && (param_1 != DAT_08008188)) {
      uVar4 = FUN_08006680();
      lVar1 = (ulonglong)DAT_0800818c *
              ((ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 1));
      iVar2 = FUN_08006680((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)lVar1);
      iVar3 = FUN_08006680();
      *(uint *)(param_1 + 8) =
           (uint)((ulonglong)lVar1 >> 0x25) << 4 |
           (uint)((ulonglong)DAT_0800818c *
                  (ulonglong)
                  (((uint)(iVar2 * 0x19) / (uint)(param_2 << 1) +
                   (uint)((ulonglong)DAT_0800818c *
                          ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 1)) >>
                         0x25) * -100) * 0x10 + 0x32) >> 0x25) & 0xf;
      return;
    }
    uVar4 = FUN_080066cc();
    lVar1 = (ulonglong)DAT_0800818c *
            ((ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 1));
    iVar2 = FUN_080066cc((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)lVar1);
    iVar3 = FUN_080066cc();
    *(uint *)(param_1 + 8) =
         (uint)((ulonglong)lVar1 >> 0x25) << 4 |
         (uint)((ulonglong)DAT_0800818c *
                (ulonglong)
                (((uint)(iVar2 * 0x19) / (uint)(param_2 << 1) +
                 (uint)((ulonglong)DAT_0800818c *
                        ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 1)) >> 0x25)
                 * -100) * 0x10 + 0x32) >> 0x25) & 0xf;
  }
  return;
}


////>>0x08008190>>FUN_08008190>>////

void FUN_08008190(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08008240;
  FUN_08007ea4(DAT_08008240);
  puVar1[3] = puVar1[3] & 0xffffdfff;
  puVar1[3] = puVar1[3] & 0xffff400c | 0xc;
  puVar1[4] = puVar1[4] & 0xffff8090;
  puVar1[5] = puVar1[5] & 0xfffff000;
  *puVar1 = *puVar1 & 0xfffffc00;
  FUN_08007f54(puVar1,0x1c200);
  puVar1[6] = puVar1[6];
  puVar1[3] = puVar1[3] | 0x2000;
  return;
}


////>>0x08008244>>FUN_08008244>>////

void FUN_08008244(void)

{
  return;
}


////>>0x08008250>>FUN_08008250>>////

void FUN_08008250(undefined param_1)

{
  FUN_08007e1c(param_1);
  return;
}


////>>0x0800826a>>FUN_0800826a>>////

undefined4 FUN_0800826a(undefined param_1)

{
  FUN_08007e1c(param_1);
  return 0;
}


////>>0x08008286>>FUN_08008286>>////

undefined FUN_08008286(void)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_08007e58();
  if (iVar2 != 0) {
    uVar1 = FUN_08007e84();
    iVar2 = FUN_08005900(uVar1);
    if (iVar2 == 0) {
      return uVar1;
    }
  }
  return 0xff;
}


////>>0x080082ba>>FUN_080082ba>>////

void FUN_080082ba(void)

{
  return;
}


////>>0x080082d0>>FUN_080082d0>>////

ulonglong FUN_080082d0(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x080082d4>>FUN_080082d4>>////

ulonglong FUN_080082d4(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x0800854c>>FUN_0800854c>>////

ulonglong FUN_0800854c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar3 = count_leading_zeroes(param_1);
  uVar4 = iVar3 + 0x15;
  bVar7 = SBORROW4(uVar4,0x20);
  uVar2 = iVar3 - 0xb;
  bVar5 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  if ((int)uVar4 < 0x20) {
    bVar7 = SCARRY4(uVar2,0xc);
    iVar3 = iVar3 + 1;
    bVar5 = iVar3 < 0;
    bVar6 = iVar3 == 0;
    uVar2 = uVar4;
    if (!bVar6 && bVar5 == bVar7) {
      uVar1 = param_1 << (uVar4 & 0xff);
      param_1 = param_1 >> (0xcU - iVar3 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    in_r12 = 0x20 - uVar2;
  }
  param_1 = param_1 << (uVar2 & 0xff);
  if (bVar6 || bVar5 != bVar7) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
  }
  if (bVar6 || bVar5 != bVar7) {
    uVar1 = 0 << (uVar2 & 0xff);
  }
LAB_08008458:
  if ((int)uVar4 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000,uVar1);
  }
  uVar2 = ~(0x432 - uVar4);
  if (0x1e < (int)uVar2) {
    return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
  }
  iVar3 = uVar2 - 0x13;
  if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f,0xc)) {
    uVar2 = uVar2 + 1;
    return CONCAT44(param_1 >> (uVar2 & 0xff),
                    uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
  }
  return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) | param_1 << (0xcU - iVar3 & 0xff));
}


////>>0x0800856c>>FUN_0800856c>>////

ulonglong FUN_0800856c(uint param_1)

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


////>>0x08008590>>FUN_08008590>>////

ulonglong FUN_08008590(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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


////>>0x08008640>>FUN_08008640>>////

ulonglong FUN_08008640(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar12 = FUN_0800881c();
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


////>>0x0800881c>>FUN_0800881c>>////

ulonglong FUN_0800881c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar2 != in_r12) {
    bVar4 = (param_1 | param_2 << 1) == 0;
    if (!bVar4) {
      bVar4 = (param_3 | param_4 << 1) == 0;
    }
    if (bVar4) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar3 = param_2 & 0x80000000;
      do {
        uVar1 = param_1 & 0x80000000;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 + (uint)(uVar1 != 0);
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar3;
      if (uVar2 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      uVar2 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 + (uint)(uVar2 != 0);
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar4 = (param_1 | param_2 << 1) == 0;
  if (bVar4) {
    param_2 = param_4;
    param_1 = param_3;
  }
  if (!bVar4) {
    bVar4 = (param_3 | param_4 << 1) == 0;
  }
  uVar3 = param_2;
  if (((!bVar4) && ((unaff_r4 != in_r12 || ((param_1 | param_2 << 0xc) == 0)))) &&
     ((uVar2 != in_r12 || (param_1 = param_3, uVar3 = param_4, (param_3 | param_4 << 0xc) == 0)))) {
    return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x08008894>>FUN_08008894>>////

ulonglong FUN_08008894(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar17 = FUN_08008a02();
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


////>>0x08008a02>>FUN_08008a02>>////

ulonglong FUN_08008a02(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  uVar3 = param_2;
  if (unaff_r4 != in_r12 || uVar2 != in_r12) {
    if (unaff_r4 == in_r12) {
      if (((param_1 | param_2 << 0xc) == 0) && (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)
         ) {
LAB_08008874:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if ((param_3 | param_4 << 0xc) == 0) {
LAB_08008838:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      bVar4 = (param_1 | param_2 << 1) == 0;
      if (!bVar4) {
        bVar4 = (param_3 | param_4 << 1) == 0;
      }
      if (!bVar4) {
        if (unaff_r4 == 0) {
          uVar3 = param_2 & 0x80000000;
          do {
            uVar1 = param_1 & 0x80000000;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 + (uint)(uVar1 != 0);
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar3;
          if (uVar2 != 0) {
            return CONCAT44(param_2,param_1);
          }
        }
        do {
          uVar3 = param_3 & 0x80000000;
          param_3 = param_3 << 1;
          param_4 = param_4 * 2 + (uint)(uVar3 != 0);
        } while ((param_4 & 0x100000) == 0);
        return CONCAT44(param_2,param_1);
      }
      if ((param_1 | param_2 << 1) != 0) goto LAB_08008874;
      if ((param_3 | param_4 << 1) != 0) goto LAB_08008838;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x08008a74>>FUN_08008a74>>////

uint FUN_08008a74(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && ((param_1 | param_2 << 0xc) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && ((param_3 | param_4 << 0xc) != 0)))))) {
    return 1;
  }
  bVar2 = (param_1 | param_2 << 1) == 0;
  if (bVar2) {
    bVar2 = (param_3 | param_4 << 1) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (bVar2) {
    bVar2 = param_1 == param_3;
  }
  if (!bVar2) {
    uVar1 = param_2 ^ param_4;
    bVar2 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar2 = param_2 == param_4;
    }
    bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar2) {
      bVar3 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar3) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}


////>>0x08008af0>>FUN_08008af0>>////

void FUN_08008af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08008b00(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08008b00>>FUN_08008b00>>////

undefined4 FUN_08008b00(undefined4 param_1)

{
  FUN_08008a74();
  return param_1;
}


////>>0x08008b10>>FUN_08008b10>>////

bool FUN_08008b10(void)

{
  char in_ZR;
  
  FUN_08008b00();
  return in_ZR != '\0';
}


////>>0x08008b24>>FUN_08008b24>>////

bool FUN_08008b24(void)

{
  char in_CY;
  
  FUN_08008b00();
  return in_CY == '\0';
}


////>>0x08008b4c>>FUN_08008b4c>>////

bool FUN_08008b4c(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_08008af0();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08008b60>>FUN_08008b60>>////

bool FUN_08008b60(void)

{
  char in_CY;
  
  FUN_08008af0();
  return in_CY == '\0';
}


////>>0x08008b74>>FUN_08008b74>>////

undefined4 FUN_08008b74(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08008ba0>>FUN_08008ba0>>////

uint FUN_08008ba0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar2) {
      return 0;
    }
    uVar1 = iVar2 >> 0x15;
    uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
      if ((param_2 & 0x80000000) != 0) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}


////>>0x08008bf0>>FUN_08008bf0>>////

uint FUN_08008bf0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 0x80000000) != 0) {
    return 0;
  }
  iVar1 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar1) {
      return 0;
    }
    uVar2 = -(iVar1 >> 0x15) - 0x3e1;
    if (-1 < (int)uVar2) {
      return (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar2 & 0xff);
    }
  }
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  return 0xffffffff;
}


////>>0x08008c30>>FUN_08008c30>>////

uint FUN_08008c30(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  bool bVar5;
  
  uVar2 = param_2 * 2;
  bVar5 = uVar2 < 0x70000000;
  uVar3 = uVar2 + 0x90000000;
  uVar1 = uVar3;
  if (!bVar5) {
    in_r12 = uVar2 + 0x8fe00000;
    uVar1 = in_r12;
  }
  bVar4 = uVar1 == 0;
  if (!bVar5 && uVar3 >= 0x200000) {
    bVar4 = in_r12 == 0x1fc00000;
  }
  if (((bVar5 || uVar3 < 0x200000) || 0x1fc00000 < in_r12) || bVar4) {
    if ((param_2 & 0x40000000) != 0) {
      if (((int)uVar2 >> 0x15 == -1) && ((param_1 | param_2 << 0xc) != 0)) {
        return 0x7fc00000;
      }
      return param_2 & 0x80000000 | 0x7f800000;
    }
    if ((int)(uVar2 + 0x92e00000) < 0 != SCARRY4(uVar3,0x2e00000)) {
      return param_2 & 0x80000000;
    }
    uVar2 = 0x18 - (uVar2 + 0x92e00000 >> 0x15);
    uVar1 = param_1 >> (uVar2 & 0xff);
    if (param_1 << (0x20 - uVar2 & 0xff) != 0) {
      uVar1 = uVar1 | 1;
    }
    uVar3 = param_2 & 0x1fffff | 0x100000;
    param_1 = uVar1 | uVar3 << (0x20 - uVar2 & 0xff);
    uVar3 = (uVar3 >> (uVar2 & 0xff)) << 1;
  }
  uVar1 = (param_2 & 0x80000000 | param_1 >> 0x1d) + uVar3 * 4 + (uint)(0x7fffffff < param_1 * 8);
  if (param_1 * 8 == 0x80000000) {
    uVar1 = uVar1 & 0xfffffffe;
  }
  return uVar1;
}


////>>0x08008cd8>>FUN_08008cd8>>////

uint FUN_08008cd8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08008cdc>>FUN_08008cdc>>////

uint FUN_08008cdc(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08008e3c>>FUN_08008e3c>>////

uint FUN_08008e3c(uint param_1)

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


////>>0x08008e44>>FUN_08008e44>>////

uint FUN_08008e44(uint param_1)

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


////>>0x08008eec>>FUN_08008eec>>////

uint FUN_08008eec(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08009054>>FUN_08009054>>////

uint FUN_08009054(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x0800919c>>FUN_0800919c>>////

uint FUN_0800919c(uint param_1,uint param_2)

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


////>>0x080091fc>>FUN_080091fc>>////

void FUN_080091fc(undefined4 param_1,undefined4 param_2)

{
  FUN_08009204(param_2,param_1);
  return;
}


////>>0x08009204>>FUN_08009204>>////

undefined8 FUN_08009204(undefined4 param_1,undefined4 param_2)

{
  FUN_0800919c();
  return CONCAT44(param_2,param_1);
}


////>>0x08009214>>FUN_08009214>>////

bool FUN_08009214(void)

{
  char in_ZR;
  
  FUN_08009204();
  return in_ZR != '\0';
}


////>>0x08009228>>FUN_08009228>>////

bool FUN_08009228(void)

{
  char in_CY;
  
  FUN_08009204();
  return in_CY == '\0';
}


////>>0x0800923c>>FUN_0800923c>>////

bool FUN_0800923c(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_08009204();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009250>>FUN_08009250>>////

bool FUN_08009250(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_080091fc();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009264>>FUN_08009264>>////

bool FUN_08009264(void)

{
  char in_CY;
  
  FUN_080091fc();
  return in_CY == '\0';
}


////>>0x08009278>>FUN_08009278>>////

uint FUN_08009278(uint param_1)

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


////>>0x080092c4>>FUN_080092c4>>////

void FUN_080092c4(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; puVar2 = (undefined4 *)PTR_DAT_0800930c,
      PTR_DAT_08009304 + iVar1 < PTR_DAT_08009308; iVar1 = iVar1 + 4) {
    *(undefined4 *)(PTR_DAT_08009304 + iVar1) = *(undefined4 *)(DAT_08009300 + iVar1);
  }
  for (; puVar2 < PTR_DAT_08009310; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_0800756c();
  FUN_0800b3e8();
  UNRECOVERED_JUMPTABLE = (code *)0x80092fa;
  FUN_08007540();
                    /* WARNING: Could not recover jumptable at 0x080092fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08009318>>FUN_08009318>>////

longlong FUN_08009318(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar3 = (param_2 << 1) >> 0x15;
  uVar2 = uVar3 - 0x3ff;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      uVar5 = FUN_080082d4(param_1,param_2,DAT_08009400,DAT_08009404,param_4);
      iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          param_1 = param_1 | param_2;
          lVar6 = CONCAT44(param_1,param_1);
          if (param_1 != 0) {
            lVar6 = (ulonglong)DAT_0800940c << 0x20;
          }
        }
      }
    }
    else {
      uVar3 = DAT_08009408 >> (uVar2 & 0xff);
      lVar6 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar3 | param_1) != 0) {
        uVar5 = FUN_080082d4(param_1,param_2,DAT_08009400,DAT_08009404,param_4);
        iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        lVar6 = CONCAT44(param_2,param_1);
        if (iVar1 != 0) {
          if (0 < (int)param_2) {
            param_2 = param_2 + (0x100000 >> (uVar2 & 0xff));
          }
          lVar6 = (ulonglong)(param_2 & ~uVar3) << 0x20;
        }
      }
    }
  }
  else if ((int)uVar2 < 0x34) {
    uVar3 = 0xffffffff >> (uVar3 - 0x413 & 0xff);
    lVar6 = CONCAT44(param_2,param_1);
    if ((uVar3 & param_1) != 0) {
      uVar5 = FUN_080082d4(param_1,param_2,DAT_08009400,DAT_08009404,param_4);
      iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if (0 < (int)param_2) {
          if (uVar2 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = 1 << (0x34 - uVar2 & 0xff);
            bVar4 = CARRY4(uVar2,param_1);
            param_1 = uVar2 + param_1;
            if (bVar4 != false) {
              param_2 = param_2 + 1;
            }
          }
        }
        lVar6 = CONCAT44(param_2,param_1 & ~uVar3);
      }
    }
  }
  else {
    lVar6 = CONCAT44(param_2,param_1);
    if (uVar2 == 0x400) {
      lVar6 = FUN_080082d4();
    }
  }
  return lVar6;
}


////>>0x08009410>>FUN_08009410>>////

undefined4 FUN_08009410(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (DAT_080094b4 < (int)(param_2 & 0x7fffffff)) {
    if (DAT_080094b8 < (int)(param_2 & 0x7fffffff)) {
      uVar1 = FUN_080082d0(param_1,param_2,param_1,param_2);
    }
    else {
      uVar2 = FUN_08009d78(param_1,param_2,&local_28);
      uVar2 = uVar2 & 3;
      if (uVar2 == 1) {
        uVar1 = FUN_0800adf0(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar2 == 2) {
        uVar1 = FUN_0800a348(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar2 == 0) {
        uVar1 = FUN_0800a348(local_28,uStack_24,local_20,uStack_1c);
      }
      else {
        uVar1 = FUN_0800adf0(local_28,uStack_24,local_20,uStack_1c,1);
      }
    }
    return uVar1;
  }
  uVar1 = FUN_0800a348(param_1,param_2,0,0);
  return uVar1;
}


////>>0x080094c0>>FUN_080094c0>>////

longlong FUN_080094c0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar3 = (param_2 << 1) >> 0x15;
  uVar2 = uVar3 - 0x3ff;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      uVar5 = FUN_080082d4(param_1,param_2,DAT_080095a8,DAT_080095ac,param_4);
      iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          if ((param_1 | param_2 & 0x7fffffff) != 0) {
            param_2 = DAT_080095b4;
          }
          lVar6 = (ulonglong)param_2 << 0x20;
        }
        else {
          lVar6 = 0;
        }
      }
    }
    else {
      uVar3 = DAT_080095b0 >> (uVar2 & 0xff);
      lVar6 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar3 | param_1) != 0) {
        uVar5 = FUN_080082d4(param_1,param_2,DAT_080095a8,DAT_080095ac,param_4);
        iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        lVar6 = CONCAT44(param_2,param_1);
        if (iVar1 != 0) {
          if ((int)param_2 < 0) {
            param_2 = param_2 + (0x100000 >> (uVar2 & 0xff));
          }
          lVar6 = (ulonglong)(param_2 & ~uVar3) << 0x20;
        }
      }
    }
  }
  else if ((int)uVar2 < 0x34) {
    uVar3 = 0xffffffff >> (uVar3 - 0x413 & 0xff);
    lVar6 = CONCAT44(param_2,param_1);
    if ((uVar3 & param_1) != 0) {
      uVar5 = FUN_080082d4(param_1,param_2,DAT_080095a8,DAT_080095ac,param_4);
      iVar1 = FUN_08008b60((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          if (uVar2 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = 1 << (0x34 - uVar2 & 0xff);
            bVar4 = CARRY4(uVar2,param_1);
            param_1 = uVar2 + param_1;
            if (bVar4 != false) {
              param_2 = param_2 + 1;
            }
          }
        }
        lVar6 = CONCAT44(param_2,param_1 & ~uVar3);
      }
    }
  }
  else {
    lVar6 = CONCAT44(param_2,param_1);
    if (uVar2 == 0x400) {
      lVar6 = FUN_080082d4();
    }
  }
  return lVar6;
}


////>>0x080095b8>>FUN_080095b8>>////

int FUN_080095b8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar5 = uVar2 - 0x3ff;
  if ((int)param_2 < 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 1;
  }
  uVar3 = param_2 & 0xfffff | 0x100000;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      if (uVar5 != 0xffffffff) {
        iVar4 = 0;
      }
      return iVar4;
    }
    uVar3 = uVar3 + (0x80000 >> (uVar5 & 0xff)) >> (0x14 - uVar5 & 0xff);
  }
  else {
    if (0x1e < uVar5) {
      iVar4 = FUN_08008ba0();
      return iVar4;
    }
    if ((int)uVar5 < 0x34) {
      uVar1 = 0x80000000 >> (uVar2 - 0x413 & 0xff);
      if (CARRY4(uVar1,param_1) != false) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff);
      if (uVar5 != 0x14) {
        uVar3 = uVar3 | uVar1 + param_1 >> (0x34 - uVar5 & 0xff);
      }
    }
    else {
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff) | param_1 << (uVar2 - 0x433 & 0xff);
    }
  }
  return uVar3 * iVar4;
}


////>>0x08009654>>FUN_08009654>>////

longlong FUN_08009654(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_2,param_1);
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      param_2 = param_2 & 0x80000000;
      if (uVar1 == 0xffffffff) {
        param_2 = param_2 | 0x3ff00000;
      }
      lVar3 = (ulonglong)param_2 << 0x20;
    }
    else {
      uVar2 = DAT_080096e4 >> (uVar1 & 0xff);
      lVar3 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar2 | param_1) != 0) {
        lVar3 = (ulonglong)(param_2 + (0x80000 >> (uVar1 & 0xff)) & ~uVar2) << 0x20;
      }
    }
  }
  else if ((int)uVar1 < 0x34) {
    uVar2 = 0xffffffff >> (uVar2 - 0x413 & 0xff);
    if ((param_1 & uVar2) != 0) {
      uVar1 = 1 << (0x33 - uVar1 & 0xff);
      if (CARRY4(param_1,uVar1) != false) {
        param_2 = param_2 + 1;
      }
      lVar3 = CONCAT44(param_2,param_1 + uVar1 & ~uVar2);
    }
  }
  else {
    lVar3 = CONCAT44(param_2,param_1);
    if (uVar1 == 0x400) {
      lVar3 = FUN_080082d4();
    }
  }
  return lVar3;
}


////>>0x080096e8>>FUN_080096e8>>////

undefined4 FUN_080096e8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (DAT_08009790 < (int)(param_2 & 0x7fffffff)) {
    if (DAT_08009794 < (int)(param_2 & 0x7fffffff)) {
      uVar1 = FUN_080082d0(param_1,param_2,param_1,param_2);
    }
    else {
      uVar2 = FUN_08009d78(param_1,param_2,&local_28);
      uVar2 = uVar2 & 3;
      if (uVar2 == 1) {
        uVar1 = FUN_0800a348(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar2 == 2) {
        uVar1 = FUN_0800adf0(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar2 == 0) {
        uVar1 = FUN_0800adf0(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else {
        uVar1 = FUN_0800a348(local_28,uStack_24,local_20,uStack_1c);
      }
    }
    return uVar1;
  }
  uVar1 = FUN_0800adf0(param_1,param_2,0,0,0);
  return uVar1;
}


////>>0x08009798>>FUN_08009798>>////

longlong FUN_08009798(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      return ((ulonglong)param_2 & 0x80000000) << 0x20;
    }
    lVar3 = (ulonglong)(param_2 & ~(DAT_08009814 >> (uVar1 & 0xff))) << 0x20;
  }
  else {
    if ((int)uVar1 < 0x34) {
      return CONCAT44(param_2,param_1 & ~(0xffffffffU >> (uVar2 - 0x413 & 0xff)));
    }
    if (uVar1 != 0x400) {
      return CONCAT44(param_2,param_1);
    }
    lVar3 = FUN_080082d4(param_1,param_2,param_1,param_2,param_4);
  }
  return lVar3;
}


////>>0x08009818>>thunk_FUN_08009990>>////

uint thunk_FUN_08009990(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(DAT_08009b04,DAT_08009b00);
  uVar4 = param_4 & 0x7fffffff;
  if ((DAT_08009b18 < (uVar4 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar5 = param_2 & 0x7fffffff, DAT_08009b18 < (uVar5 | (-param_1 | param_1) >> 0x1f))) {
    uVar4 = FUN_080082d4(param_3,param_4,param_1,param_2);
  }
  else {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      uVar4 = FUN_0800af78();
      return uVar4;
    }
    uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if ((uVar5 | param_1) == 0) {
      uVar4 = DAT_08009af0;
      if ((uVar3 != 2) && (uVar4 = param_1, uVar3 == 3)) {
        uVar4 = DAT_08009af8;
      }
    }
    else {
      if ((uVar4 | param_3) != 0) {
        if (uVar4 == DAT_08009b18) {
          uVar3 = uVar3 - 1;
          if (uVar5 == uVar4) {
            if (2 < uVar3) {
              return DAT_08009b10;
            }
            return *(uint *)(PTR_DAT_08009b20 + uVar3 * 8);
          }
          if (uVar3 < 3) {
            return *(uint *)(PTR_DAT_08009b1c + uVar3 * 8);
          }
          return 0;
        }
        if (uVar5 != DAT_08009b18) {
          iVar1 = (int)(uVar5 - uVar4) >> 0x14;
          if ((int)(uVar5 - uVar4) < 0x3d00000) {
            if (((int)param_4 < 0) && (iVar1 + 0x3c < 0 != SCARRY4(iVar1,0x3c))) {
              uVar6 = 0;
            }
            else {
              FUN_08008894(param_1,param_2,param_3,param_4,param_4);
              FUN_0800b2cc();
              uVar6 = FUN_0800af78();
            }
          }
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar4 = (uint)uVar6;
          if (uVar3 == 1) {
            return uVar4;
          }
          if (uVar3 == 2) {
            uVar6 = FUN_080082d0(uVar4,uVar2,DAT_08009ae8,DAT_08009aec);
            uVar4 = FUN_080082d0(DAT_08009af0,DAT_08009af4,(int)uVar6,
                                 (int)((ulonglong)uVar6 >> 0x20));
            return uVar4;
          }
          if (uVar3 == 0) {
            return uVar4;
          }
          uVar6 = FUN_080082d0(uVar4,uVar2,DAT_08009ae8,DAT_08009aec);
          uVar4 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_08009af0,DAT_08009af4)
          ;
          return uVar4;
        }
      }
      uVar4 = DAT_08009b08;
      if (-1 < (int)param_2) {
        uVar4 = DAT_08009b00;
      }
    }
  }
  return uVar4;
}


////>>0x0800981c>>FUN_0800981c>>////

undefined8 FUN_0800981c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 local_50;
  undefined *puStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  
  puVar2 = PTR_DAT_080098cc;
  uVar6 = FUN_08009b24();
  if (*puVar2 == -1) {
    return uVar6;
  }
  local_30 = FUN_0800b2d4();
  if (local_30 != 0) {
    return uVar6;
  }
  iVar3 = FUN_0800b2d4(param_1,param_2);
  if (iVar3 == 0) {
    return uVar6;
  }
  iVar3 = FUN_0800b2d4(param_3,param_4);
  if (iVar3 == 0) {
    return uVar6;
  }
  cVar1 = *puVar2;
  local_50 = 3;
  puStack_4c = PTR_s_hypot_080098c0;
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_3;
  uStack_3c = param_4;
  if (cVar1 == '\0') {
    local_38 = 0xe0000000;
    uStack_34 = DAT_080098c8;
LAB_080098aa:
    iVar3 = FUN_0800b2e0(&local_50);
    if (iVar3 != 0) goto LAB_08009896;
  }
  else {
    local_38 = 0;
    uStack_34 = DAT_080098c4;
    if (cVar1 != '\x02') goto LAB_080098aa;
  }
  puVar4 = (undefined4 *)FUN_0800b3dc();
  *puVar4 = 0x22;
LAB_08009896:
  uVar6 = CONCAT44(uStack_34,local_38);
  if (local_30 != 0) {
    piVar5 = (int *)FUN_0800b3dc();
    uVar6 = CONCAT44(uStack_34,local_38);
    *piVar5 = local_30;
  }
  return uVar6;
}


////>>0x080098d0>>FUN_080098d0>>////

/* WARNING: Could not reconcile some variable overlaps */

undefined4 FUN_080098d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  
  uVar2 = FUN_0800a1bc();
  cVar1 = *PTR_DAT_08009988;
  if (((cVar1 == -1) || (local_30 = FUN_08008b74(param_1,param_2,param_1,param_2), local_30 != 0))
     || (iVar3 = FUN_08008b24(param_1,param_2,0,0), iVar3 == 0)) {
    return uVar2;
  }
  local_50 = 1;
  local_4c = PTR_DAT_0800998c;
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_1;
  uStack_3c = param_2;
  if (cVar1 == '\0') {
    local_38 = 0;
LAB_0800996c:
    iVar3 = FUN_0800b2e0(&local_50);
    if (iVar3 != 0) goto joined_r0x0800997a;
  }
  else {
    local_38 = FUN_08008894(0,0,0,0);
    if (cVar1 != '\x02') goto LAB_0800996c;
  }
  puVar4 = (undefined4 *)FUN_0800b3dc();
  *puVar4 = 0x21;
joined_r0x0800997a:
  if (local_30 != 0) {
    piVar5 = (int *)FUN_0800b3dc();
    *piVar5 = local_30;
  }
  return (undefined4)local_38;
}


////>>0x08009990>>FUN_08009990>>////

uint FUN_08009990(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(DAT_08009b04,DAT_08009b00);
  uVar4 = param_4 & 0x7fffffff;
  if ((DAT_08009b18 < (uVar4 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar5 = param_2 & 0x7fffffff, DAT_08009b18 < (uVar5 | (-param_1 | param_1) >> 0x1f))) {
    uVar4 = FUN_080082d4(param_3,param_4,param_1,param_2);
  }
  else {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      uVar4 = FUN_0800af78();
      return uVar4;
    }
    uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if ((uVar5 | param_1) == 0) {
      uVar4 = DAT_08009af0;
      if ((uVar3 != 2) && (uVar4 = param_1, uVar3 == 3)) {
        uVar4 = DAT_08009af8;
      }
    }
    else {
      if ((uVar4 | param_3) != 0) {
        if (uVar4 == DAT_08009b18) {
          uVar3 = uVar3 - 1;
          if (uVar5 == uVar4) {
            if (2 < uVar3) {
              return DAT_08009b10;
            }
            return *(uint *)(PTR_DAT_08009b20 + uVar3 * 8);
          }
          if (uVar3 < 3) {
            return *(uint *)(PTR_DAT_08009b1c + uVar3 * 8);
          }
          return 0;
        }
        if (uVar5 != DAT_08009b18) {
          iVar1 = (int)(uVar5 - uVar4) >> 0x14;
          if ((int)(uVar5 - uVar4) < 0x3d00000) {
            if (((int)param_4 < 0) && (iVar1 + 0x3c < 0 != SCARRY4(iVar1,0x3c))) {
              uVar6 = 0;
            }
            else {
              FUN_08008894(param_1,param_2,param_3,param_4,param_4);
              FUN_0800b2cc();
              uVar6 = FUN_0800af78();
            }
          }
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar4 = (uint)uVar6;
          if (uVar3 == 1) {
            return uVar4;
          }
          if (uVar3 == 2) {
            uVar6 = FUN_080082d0(uVar4,uVar2,DAT_08009ae8,DAT_08009aec);
            uVar4 = FUN_080082d0(DAT_08009af0,DAT_08009af4,(int)uVar6,
                                 (int)((ulonglong)uVar6 >> 0x20));
            return uVar4;
          }
          if (uVar3 == 0) {
            return uVar4;
          }
          uVar6 = FUN_080082d0(uVar4,uVar2,DAT_08009ae8,DAT_08009aec);
          uVar4 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_08009af0,DAT_08009af4)
          ;
          return uVar4;
        }
      }
      uVar4 = DAT_08009b08;
      if (-1 < (int)param_2) {
        uVar4 = DAT_08009b00;
      }
    }
  }
  return uVar4;
}


////>>0x08009b24>>FUN_08009b24>>////

uint FUN_08009b24(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar3 = FUN_080082d4(uVar3,uVar7,param_3,param_4);
    return uVar3;
  }
  if (DAT_08009d68 < (int)uVar7) {
    if (DAT_08009d74 < (int)uVar7) {
      if ((uVar7 & 0xfffff | uVar3) != 0) {
        uVar3 = FUN_080082d4(uVar3,uVar7,param_3,param_4);
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
      uVar10 = FUN_08008640(param_3,param_4,0,DAT_08009d70);
      uVar11 = FUN_08008640(uVar3,uVar7,0,uVar1);
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
  uVar10 = FUN_080082d0(uVar8,uVar9,uVar5,iVar6);
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  iVar2 = FUN_08008b24(uVar5,iVar6,uVar1,iVar4);
  if (iVar2 == 0) {
    uVar10 = FUN_08008640(0,param_4,0);
    uVar11 = FUN_08008640(uVar1,iVar4 + -0x80000000,uVar1,iVar4);
    uVar12 = FUN_080082d4(uVar8,uVar9,uVar8,uVar9);
    uVar12 = FUN_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = FUN_08008640((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar5,iVar6);
    uVar13 = FUN_080082d0(uVar5,iVar6,0,param_4);
    uVar13 = FUN_08008640((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = FUN_080082d4((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = FUN_080082d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = FUN_0800a1bc();
  }
  else {
    uVar10 = FUN_08008640(0,uVar7,0,uVar7);
    uVar11 = FUN_08008640(uVar5,iVar6 + -0x80000000,uVar5,iVar6);
    uVar12 = FUN_080082d4(uVar8,uVar9,0,uVar7);
    uVar13 = FUN_080082d0(uVar8,uVar9,0,uVar7);
    uVar12 = FUN_08008640((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = FUN_080082d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = FUN_0800a1bc();
  }
  uVar3 = (uint)uVar10;
  if (local_3c != 0) {
    uVar3 = FUN_08008640(uVar3,(int)((ulonglong)uVar10 >> 0x20),0,local_3c * 0x100000 + 0x3ff00000);
  }
  return uVar3;
}


////>>0x08009d78>>FUN_08009d78>>////

/* WARNING: Could not reconcile some variable overlaps */

int FUN_08009d78(undefined4 param_1,uint param_2,undefined8 *param_3)

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
      uVar10 = FUN_080082d4(param_1,param_2,DAT_08009f88,DAT_08009f8c);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar1 = (undefined4)uVar10;
      if (uVar8 != DAT_0800a1b8) {
        uVar10 = FUN_080082d4(uVar1,uVar3,DAT_0800a1b0,DAT_0800a1b4);
        *param_3 = uVar10;
        uVar10 = FUN_080082d0(uVar1,uVar3);
        uVar10 = FUN_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800a1b0,DAT_0800a1b4
                             );
        param_3[1] = uVar10;
        return -1;
      }
      uVar10 = FUN_080082d4(uVar1,uVar3,DAT_0800a190,DAT_0800a194);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar11 = FUN_080082d4((int)uVar10,uVar1,DAT_0800a198,DAT_0800a19c);
      *param_3 = uVar11;
      uVar10 = FUN_080082d0((int)uVar10,uVar1);
      uVar10 = FUN_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800a198,DAT_0800a19c);
      param_3[1] = uVar10;
      return -1;
    }
    uVar10 = FUN_080082d0();
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    if (uVar8 != DAT_08009fb8) {
      uVar10 = FUN_080082d0(uVar1,uVar3,DAT_08009f90,DAT_08009f94);
      *param_3 = uVar10;
      uVar10 = FUN_080082d0(uVar1,uVar3);
      uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08009f90,DAT_08009f94);
      param_3[1] = uVar10;
      return 1;
    }
    uVar10 = FUN_080082d0(uVar1,uVar3,DAT_08009f98,DAT_08009f9c);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUN_080082d0((int)uVar10,uVar1,DAT_08009fa0,DAT_08009fa4);
    *param_3 = uVar11;
    uVar10 = FUN_080082d0((int)uVar10,uVar1);
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_08009fa0,DAT_08009fa4);
    param_3[1] = uVar10;
    return 1;
  }
  if (DAT_08009fbc < (int)uVar8) {
    if (DAT_08009fc0 < (int)uVar8) {
      uVar10 = FUN_080082d0(param_1,param_2,param_1,param_2);
      param_3[1] = uVar10;
      *param_3 = uVar10;
      return 0;
    }
    iVar9 = ((int)uVar8 >> 0x14) + -0x416;
    FUN_08008ba0();
    local_40 = FUN_0800856c();
    uVar10 = FUN_080082d0(param_1,uVar8 + iVar9 * -0x100000,(int)local_40,
                          (int)((ulonglong)local_40 >> 0x20));
    uVar10 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_08009fc4);
    FUN_08008ba0();
    local_38 = FUN_0800856c();
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    local_30 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_08009fc4);
    FUN_08008b10((int)local_30,(int)((ulonglong)local_30 >> 0x20),0,0);
    iVar9 = FUN_0800a5a0(&local_40,param_3,iVar9);
    if (-1 < (int)param_2) {
      return iVar9;
    }
    *(int *)((int)param_3 + 4) = *(int *)((int)param_3 + 4) + -0x80000000;
    *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + -0x80000000;
    return -iVar9;
  }
  uVar10 = FUN_0800b2cc();
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar11 = FUN_08008640((int)uVar10,uVar3,DAT_08009fa8,DAT_08009fac);
  FUN_080082d4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_08009fcc);
  iVar9 = FUN_08008ba0();
  uVar11 = FUN_0800856c();
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar1 = (undefined4)uVar11;
  uVar11 = FUN_08008640(uVar1,uVar4,DAT_08009f88,DAT_08009f8c);
  uVar10 = FUN_080082d0((int)uVar10,uVar3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (undefined4)uVar10;
  uVar11 = FUN_08008640(uVar1,uVar4,DAT_08009f90,DAT_08009f94);
  if ((0x1f < iVar9) || (*(uint *)(PTR_DAT_08009fd0 + (iVar9 + -1) * 4) == uVar8)) {
    uVar12 = FUN_080082d0(uVar3,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)((uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x11)
    goto LAB_0800a0ce;
    uVar11 = FUN_08008640(uVar1,uVar4,DAT_0800a190,DAT_0800a194);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = FUN_080082d0(uVar3,uVar5,(int)uVar11,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = (undefined4)uVar10;
    uVar12 = FUN_080082d0(uVar3,uVar5,uVar2,uVar7);
    uVar11 = FUN_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar6);
    uVar12 = FUN_08008640(uVar1,uVar4,DAT_0800a198,DAT_0800a19c);
    uVar11 = FUN_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    uVar12 = FUN_080082d0(uVar2,uVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)(((int)uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x32
       ) goto LAB_0800a0ce;
    uVar11 = FUN_08008640(uVar1,uVar4,DAT_0800a1a0,DAT_0800a1a4);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = FUN_080082d0(uVar2,uVar7,(int)uVar11,uVar3);
    uVar12 = FUN_080082d0(uVar2,uVar7);
    uVar11 = FUN_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar3);
    uVar12 = FUN_08008640(uVar1,uVar4,DAT_0800a1a8,DAT_0800a1ac);
    uVar11 = FUN_080082d0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
  }
  uVar12 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
LAB_0800a0ce:
  uStack_4c = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_50 = (undefined4)uVar10;
  *param_3 = uVar12;
  uVar10 = FUN_080082d0(local_50,uStack_4c);
  uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
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


////>>0x0800a1bc>>FUN_0800a1bc>>////

uint FUN_0800a1bc(uint param_1,uint param_2)

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
    uVar14 = FUN_08008640(param_1,param_2,param_1,param_2);
    uVar8 = FUN_080082d4((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),param_1,param_2);
    return uVar8;
  }
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return param_1;
    }
    if (param_2 != 0) {
      uVar14 = FUN_080082d0(param_1,param_2,param_1);
      uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar8 = FUN_08008894((int)uVar14,uVar5,(int)uVar14,uVar5);
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


////>>0x0800a348>>FUN_0800a348>>////

undefined4 FUN_0800a348(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
    iVar1 = FUN_08008ba0();
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = FUN_08008640(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUN_08008640(uVar2,uVar3,DAT_0800a558,DAT_0800a55c);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a560,DAT_0800a564);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a568,DAT_0800a56c);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a570,DAT_0800a574);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a578,DAT_0800a57c);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a580,DAT_0800a584);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
  }
  else {
    uVar5 = FUN_08008640(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = FUN_08008640(uVar2,uVar3,DAT_0800a558,DAT_0800a55c);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a560,DAT_0800a564);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a568,DAT_0800a56c);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a570,DAT_0800a574);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a578,DAT_0800a57c);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = FUN_080082d4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0800a580,DAT_0800a584);
    uVar6 = FUN_08008640((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    if (DAT_0800a590 < (int)uVar4) {
      if (DAT_0800a594 < (int)uVar4) {
        lVar8 = (ulonglong)DAT_0800a598 << 0x20;
        iVar1 = DAT_0800a59c;
      }
      else {
        lVar8 = FUN_080082d0(0,DAT_0800a58c,0,uVar4 - 0x200000);
        iVar1 = uVar4 - 0x200000;
      }
      uStack_24 = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_28 = (undefined4)lVar8;
      uVar5 = FUN_08008640(uVar2,uVar3,0,DAT_0800a588);
      uVar5 = FUN_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,iVar1);
      uVar6 = FUN_08008640(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar7 = FUN_08008640(param_1,param_2,param_3,param_4);
      uVar6 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                           (int)((ulonglong)uVar7 >> 0x20));
      uVar5 = FUN_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
      uVar2 = FUN_080082d0(local_28,uStack_24,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar2;
    }
  }
  uStack_2c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_30 = (undefined4)uVar6;
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar6 = FUN_08008640((int)uVar5,uVar2,0,DAT_0800a588);
  uVar5 = FUN_08008640((int)uVar5,uVar2,local_30,uStack_2c);
  uVar7 = FUN_08008640(param_1,param_2,param_3,param_4);
  uVar5 = FUN_080082d0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  uVar5 = FUN_080082d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  uVar2 = FUN_080082d0(0,DAT_0800a58c,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return uVar2;
}


////>>0x0800a5a0>>FUN_0800a5a0>>////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0800a5a0(int param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6)

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
      uVar26 = FUN_0800856c(*(undefined4 *)(param_6 + iVar17 * 4));
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
          uVar25 = FUN_08008640(*puVar18,puVar23[3],*(undefined4 *)(puVar19 + -1),
                                *(undefined4 *)((int)puVar19 + -4));
          uVar26 = FUN_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
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
        FUN_08008640((int)uVar26,uVar6,0,DAT_0800a89c);
        FUN_08008ba0();
        uVar25 = FUN_0800856c();
        uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar27 = FUN_08008640((int)uVar25,uVar8,0,DAT_0800a8a0);
        FUN_080082d0((int)uVar26,uVar6,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        uVar2 = FUN_08008ba0();
        puVar22 = puVar16 + -1;
        uVar6 = *(undefined4 *)puVar22;
        uVar11 = *(undefined4 *)((int)puVar16 + -4);
        *puVar5 = uVar2;
        uVar26 = FUN_080082d4((int)uVar25,uVar8,uVar6,uVar11);
        puVar16 = puVar22;
        puVar5 = puVar5 + 1;
      } while (puVar22 != &uStack_c8);
    }
    uVar26 = FUN_0800b2e8((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),local_270);
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    FUN_08008640((int)uVar26,uVar8,0,0x3fc00000);
    uVar25 = FUN_080094c0();
    uVar25 = FUN_08008640((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,DAT_0800a8a4);
    uVar26 = FUN_080082d0((int)uVar26,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar2 = FUN_08008ba0();
    uVar25 = FUN_0800856c();
    uVar26 = FUN_080082d0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar8 = (undefined4)uVar26;
    if (local_270 < 1) {
      if (local_270 == 0) {
        iVar21 = (int)local_258[iVar17 + -1] >> 0x17;
        goto joined_r0x0800a8b8;
      }
      iVar21 = FUN_08008b4c(uVar8,uVar6,0,DAT_0800ac3c);
      if (iVar21 != 0) {
        uVar2 = uVar2 + 1;
        if (iVar17 < 1) {
          uVar26 = FUN_080082d0(0,DAT_0800ac38,uVar8,uVar6);
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
          uVar26 = FUN_080082d0(0,DAT_0800ac38,uVar8,uVar6);
          if (uVar12 != 0) {
            uVar25 = FUN_0800b2e8(0,DAT_0800ac38,local_270);
            uVar26 = FUN_080082d0((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                  (int)((ulonglong)uVar25 >> 0x20));
          }
        }
      }
    }
LAB_0800a7a4:
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar4 = FUN_08008b10((int)uVar26,uVar8,0,0);
    if (iVar4 == 0) {
      uVar26 = FUN_0800b2e8((int)uVar26,uVar8,-local_270);
      uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar8 = (undefined4)uVar26;
      iVar9 = FUN_08008b4c(uVar8,uVar6,0,DAT_0800ade4);
      if (iVar9 == 0) {
        uVar12 = FUN_08008ba0(uVar8,uVar6);
        local_258[iVar17] = uVar12;
        iVar4 = iVar17;
      }
      else {
        FUN_08008640(uVar8,uVar6,0,DAT_0800ade8);
        uVar12 = FUN_08008ba0();
        uVar26 = FUN_0800856c();
        uVar26 = FUN_08008640((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,DAT_0800ade4);
        FUN_080082d0(uVar8,uVar6,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
        uVar3 = FUN_08008ba0();
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
      uVar26 = FUN_0800856c(*puVar23);
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
          uVar26 = FUN_08008640((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*puVar1,puVar18[3]);
          uVar25 = FUN_080082d4((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
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
  uVar26 = FUN_0800b2e8(0,DAT_0800ac38,local_270);
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
      uVar25 = FUN_0800856c(*puVar5);
      uVar25 = FUN_08008640((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,uVar8);
      puVar16 = puVar16 + -1;
      *puVar16 = uVar25;
      uVar26 = FUN_08008640((int)uVar26,uVar8,0,DAT_0800ac40);
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
          uVar25 = FUN_08008640(*(undefined4 *)puVar16,*(undefined4 *)((int)puVar16 + 4),uVar8,uVar6
                               );
          uVar26 = FUN_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
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
            uVar28 = FUN_080082d4(uVar8,uVar6,uVar11,uVar20);
            uVar26 = FUN_080082d0(uVar11,uVar20,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
            uVar26 = FUN_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar8,uVar6);
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
              uVar28 = FUN_080082d4(uVar8,uVar6,uVar11,uVar20);
              uVar26 = FUN_080082d0(uVar11,uVar20,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
              uVar26 = FUN_080082d4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar8,uVar6);
              *puVar16 = uVar26;
              puVar16 = puVar16 + -1;
              *puVar16 = uVar28;
            } while (&local_168 + 1 != puVar16);
            uVar28 = 0;
            puVar16 = &local_168 + iVar4 + 1;
            do {
              puVar22 = puVar16 + -1;
              uVar28 = FUN_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),
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
        uVar28 = FUN_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),*(undefined4 *)puVar22,
                              *(undefined4 *)((int)puVar16 + -4));
        puVar16 = puVar22;
      } while (&local_168 != puVar22);
      goto LAB_0800aafc;
    }
    uVar28 = 0;
    puVar16 = &local_168 + iVar4 + 1;
    do {
      puVar22 = puVar16 + -1;
      uVar28 = FUN_080082d4((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),*(undefined4 *)puVar22,
                            *(undefined4 *)((int)puVar16 + -4));
      puVar16 = puVar22;
    } while (&local_168 != puVar22);
  }
  iVar9 = (int)((ulonglong)uVar28 >> 0x20);
  uVar8 = (undefined4)uVar28;
  if (iVar21 == 0) {
    *(undefined8 *)local_260[1] = uVar28;
    uVar29 = FUN_080082d0((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (iVar4 < 1) goto LAB_0800ad26;
LAB_0800ad04:
    iVar9 = 1;
    puVar16 = &local_168;
    do {
      uVar29 = FUN_080082d4((int)uVar29,(int)(uVar29 >> 0x20),*(undefined4 *)(puVar16 + 1),
                            *(undefined4 *)((int)puVar16 + 0xc));
      iVar9 = iVar9 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar9 <= iVar4);
    if (iVar21 == 0) goto LAB_0800ad26;
  }
  else {
    *local_260[1] = uVar8;
    *(int *)((int)local_260[1] + 4) = iVar9 + -0x80000000;
    uVar29 = FUN_080082d0((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (0 < iVar4) goto LAB_0800ad04;
  }
  uVar29 = uVar29 & 0xffffffff | (ulonglong)((int)(uVar29 >> 0x20) + 0x80000000) << 0x20;
LAB_0800ad26:
  *(ulonglong *)((int)local_260[1] + 8) = uVar29;
  return uVar2 & 7;
}


////>>0x0800adf0>>FUN_0800adf0>>////

undefined4
FUN_0800adf0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((param_2 & 0x7fffffff) < 0x3e400000) && (iVar1 = FUN_08008ba0(), iVar1 == 0)) {
    return param_1;
  }
  uVar7 = FUN_08008640(param_1,param_2,param_1);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = FUN_08008640(param_1,param_2,uVar3,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = FUN_08008640(uVar3,uVar4,DAT_0800af40,DAT_0800af44);
  uVar7 = FUN_080082d0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800af48,DAT_0800af4c);
  uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_080082d4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800af50,DAT_0800af54);
  uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_080082d0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800af58,DAT_0800af5c);
  uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = FUN_080082d4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800af60,DAT_0800af64);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_5 != 0) {
    uVar8 = FUN_08008640(param_3,param_4,0,DAT_0800af70);
    uVar7 = FUN_08008640(uVar2,uVar5,(int)uVar7,uVar6);
    uVar7 = FUN_080082d0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
    uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
    uVar7 = FUN_080082d0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4);
    uVar8 = FUN_08008640(uVar2,uVar5,DAT_0800af68,DAT_0800af6c);
    uVar7 = FUN_080082d4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
    uVar3 = FUN_080082d0(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    return uVar3;
  }
  uVar7 = FUN_08008640(uVar3,uVar4,(int)uVar7,uVar6);
  uVar7 = FUN_080082d0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800af68,DAT_0800af6c);
  uVar7 = FUN_08008640((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar5);
  uVar3 = FUN_080082d4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_1,param_2);
  return uVar3;
}


////>>0x0800af78>>FUN_0800af78>>////

int FUN_0800af78(int param_1,uint param_2)

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
      iVar2 = FUN_080082d4(param_1,param_2,param_1);
      return iVar2;
    }
  }
  else {
    if (DAT_0800b2ac < (int)uVar8) {
      uVar9 = FUN_0800b2cc();
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar3 = (undefined4)uVar9;
      if (DAT_0800b2bc < (int)uVar8) {
        if ((int)uVar8 < DAT_0800b2c0) {
          uVar9 = FUN_080082d0(uVar3,uVar6,0,DAT_0800b2c4);
          uVar10 = FUN_08008640(uVar3,uVar6,0,DAT_0800b2c4);
          uVar10 = FUN_080082d4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_0800b2b8);
          uVar9 = FUN_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                               (int)((ulonglong)uVar10 >> 0x20));
          iVar2 = 2;
        }
        else {
          uVar9 = FUN_08008894(0,DAT_0800b2c8,uVar3,uVar6);
          iVar2 = 3;
        }
      }
      else if (DAT_0800b2bc + -0xd0000 < (int)uVar8) {
        uVar9 = FUN_080082d0(uVar3,uVar6,0,DAT_0800b2b8);
        uVar10 = FUN_080082d4(uVar3,uVar6,0,DAT_0800b2b8);
        uVar9 = FUN_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
        iVar2 = 1;
      }
      else {
        uVar9 = FUN_080082d4(uVar3,uVar6,uVar3,uVar6);
        uVar9 = FUN_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_0800b2b8);
        uVar10 = FUN_080082d4(uVar3,uVar6,0,0x40000000);
        uVar9 = FUN_08008894((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
        iVar2 = 0;
      }
    }
    else {
      if ((int)uVar8 <= DAT_0800b2ac + -0x1bc0000) {
        uVar10 = FUN_080082d4(param_1,param_2,DAT_0800b290,DAT_0800b294);
        iVar2 = FUN_08008b60((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,DAT_0800b2b8);
        if (iVar2 != 0) {
          return param_1;
        }
      }
      iVar2 = -1;
    }
    local_2c = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar7 = (undefined4)uVar9;
    uVar9 = FUN_08008640(uVar7,local_2c,uVar7);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar3 = (undefined4)uVar9;
    uVar9 = FUN_08008640(uVar3,uVar4,uVar3,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = (undefined4)uVar9;
    uVar9 = FUN_08008640(uVar6,uVar5,DAT_0800b238,DAT_0800b23c);
    uVar9 = FUN_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b240,DAT_0800b244);
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUN_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b248,DAT_0800b24c);
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUN_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b250,DAT_0800b254);
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUN_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b258,DAT_0800b25c);
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
    uVar9 = FUN_080082d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0800b260,DAT_0800b264);
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = FUN_08008640(uVar6,uVar5,DAT_0800b268,DAT_0800b26c);
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b270,DAT_0800b274);
    uVar10 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b278,DAT_0800b27c);
    uVar10 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b280,DAT_0800b284);
    uVar10 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar10 = FUN_080082d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_0800b288,DAT_0800b28c);
    uVar10 = FUN_08008640((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar2 == -1) {
      uVar9 = FUN_080082d4((int)uVar9,uVar3,(int)uVar10,uVar6);
      uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
      iVar2 = FUN_080082d0(uVar7,local_2c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      return iVar2;
    }
    uVar9 = FUN_080082d4((int)uVar9,uVar3,(int)uVar10,uVar6);
    puVar1 = PTR_DAT_0800b2b0;
    uVar9 = FUN_08008640((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
    uVar9 = FUN_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                         *(undefined4 *)(PTR_DAT_0800b2b4 + iVar2 * 8),
                         *(undefined4 *)((int)(PTR_DAT_0800b2b4 + iVar2 * 8) + 4));
    uVar9 = FUN_080082d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,local_2c);
    iVar2 = FUN_080082d0(*(undefined4 *)(puVar1 + iVar2 * 8),
                         *(undefined4 *)((int)(puVar1 + iVar2 * 8) + 4),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
    if ((int)param_2 < 0) {
      return iVar2;
    }
  }
  return iVar2;
}


////>>0x0800b2cc>>FUN_0800b2cc>>////

void FUN_0800b2cc(void)

{
  return;
}


////>>0x0800b2d4>>FUN_0800b2d4>>////

uint FUN_0800b2d4(undefined4 param_1,uint param_2)

{
  return (param_2 | 0x80000000) + 0x100000 >> 0x1f;
}


////>>0x0800b2e0>>FUN_0800b2e0>>////

undefined4 FUN_0800b2e0(void)

{
  return 0;
}


////>>0x0800b2e8>>FUN_0800b2e8>>////

uint FUN_0800b2e8(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  uVar1 = (param_2 << 1) >> 0x15;
  if (uVar1 == 0) {
    if ((param_1 | param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    uVar4 = FUN_08008640(param_1,param_2,0,DAT_0800b3c8);
    if (param_3 < DAT_0800b3cc) goto LAB_0800b34a;
    uVar1 = ((uint)((int)(uVar4 >> 0x20) << 1) >> 0x15) - 0x36;
  }
  else if (uVar1 == 0x7ff) {
    uVar1 = FUN_080082d4(param_1,param_2,param_1,param_2,param_4);
    return uVar1;
  }
  uVar3 = (uint)(uVar4 >> 0x20);
  iVar2 = uVar1 + param_3;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return (uint)uVar4;
    }
    if (iVar2 + 0x35 < 0 == SCARRY4(iVar2,0x35)) {
      uVar1 = FUN_08008640((uint)uVar4,uVar3 & 0x800fffff | (iVar2 + 0x36) * 0x100000,0,DAT_0800b3d8
                          );
      return uVar1;
    }
    if (param_3 < 0xc351) {
      uVar4 = uVar4 & 0x8000000000000000 | (ulonglong)DAT_0800b3d0 | 0x1a56e1f00000000;
LAB_0800b34a:
      uVar1 = FUN_08008640((int)uVar4,(int)(uVar4 >> 0x20),DAT_0800b3b8,DAT_0800b3bc);
      return uVar1;
    }
  }
  uVar1 = FUN_08008640(DAT_0800b3d4,uVar3 & 0x80000000 | 0x7e37e43c,DAT_0800b3c0,DAT_0800b3c4);
  return uVar1;
}


////>>0x0800b3dc>>FUN_0800b3dc>>////

undefined4 FUN_0800b3dc(void)

{
  return *(undefined4 *)PTR_PTR_DAT_0800b3e4;
}


////>>0x0800b3e8>>FUN_0800b3e8>>////

void FUN_0800b3e8(void)

{
  int iVar1;
  code **ppcVar2;
  int iVar3;
  
  iVar3 = (int)PTR_DAT_0800b420 - (int)PTR_DAT_0800b424 >> 2;
  if (iVar3 != 0) {
    iVar1 = 0;
    ppcVar2 = (code **)PTR_DAT_0800b424;
    do {
      iVar1 = iVar1 + 1;
      (**ppcVar2)();
      ppcVar2 = ppcVar2 + 1;
    } while (iVar3 != iVar1);
  }
  ppcVar2 = (code **)PTR_DAT_0800b42c;
  iVar3 = (int)PTR_DAT_0800b428 - (int)PTR_DAT_0800b42c;
  FUN_0800b5b0();
  iVar3 = iVar3 >> 2;
  if (iVar3 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      (**ppcVar2)();
      ppcVar2 = ppcVar2 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}


////>>0x0800b430>>FUN_0800b430>>////

void FUN_0800b430(undefined4 *param_1,undefined param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) != 0) {
    uVar3 = param_3 - 1;
    puVar1 = param_1;
    if (param_3 == 0) {
      return;
    }
    while( true ) {
      param_1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      param_3 = uVar3;
      if (((uint)param_1 & 3) == 0) break;
      bVar5 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      puVar1 = param_1;
      if (bVar5) {
        return;
      }
    }
  }
  if (3 < param_3) {
    uVar4 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (0xf < param_3) {
      puVar1 = param_1 + 4;
      do {
        puVar1[-4] = uVar4;
        puVar1[-3] = uVar4;
        puVar1[-2] = uVar4;
        puVar1[-1] = uVar4;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined4 *)((int)param_1 + (param_3 - 0x10 & 0xfffffff0) + 0x20));
      uVar3 = param_3 & 0xc;
      param_1 = param_1 + ((param_3 - 0x10 >> 4) + 1) * 4;
      param_3 = param_3 & 0xf;
      if (uVar3 == 0) goto joined_r0x0800b4a8;
    }
    puVar1 = (undefined4 *)((param_3 - 4 & 0xfffffffc) + 4 + (int)param_1);
    do {
      puVar2 = param_1 + 1;
      *param_1 = uVar4;
      param_1 = puVar2;
    } while (puVar1 != puVar2);
    param_3 = param_3 & 3;
    param_1 = puVar1;
  }
joined_r0x0800b4a8:
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      puVar1 = puVar2;
    } while ((undefined4 *)(param_3 + (int)param_1) != puVar2);
  }
  return;
}


////>>0x0800b4d0>>FUN_0800b4d0>>////

void FUN_0800b4d0(void)

{
  if (DAT_0800b4dc != 0) {
    FUN_0800b524(0,PTR_LAB_0800b4f0_1_0800b4e0,0);
    return;
  }
  return;
}


////>>0x0800b51c>>FUN_0800b51c>>////

void FUN_0800b51c(void)

{
  return;
}


////>>0x0800b520>>FUN_0800b520>>////

void FUN_0800b520(void)

{
  return;
}


////>>0x0800b524>>FUN_0800b524>>////

undefined4 FUN_0800b524(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = PTR_PTR_DAT_0800b5ac;
  FUN_0800b51c(*(undefined4 *)PTR_PTR_DAT_0800b5ac);
  iVar4 = *(int *)PTR_PTR_DAT_0800b5a8;
  iVar5 = *(int *)(iVar4 + 0x148);
  if (iVar5 == 0) {
    iVar5 = iVar4 + 0x14c;
    *(int *)(iVar4 + 0x148) = iVar5;
  }
  uVar6 = *(uint *)(iVar5 + 4);
  if ((int)uVar6 < 0x20) {
    if (param_1 != 0) {
      iVar4 = iVar5 + uVar6 * 4;
      *(undefined4 *)(iVar4 + 0x88) = param_3;
      uVar3 = 1 << (uVar6 & 0xff);
      *(uint *)(iVar5 + 0x188) = *(uint *)(iVar5 + 0x188) | uVar3;
      *(undefined4 *)(iVar4 + 0x108) = param_4;
      if (param_1 == 2) {
        *(uint *)(iVar5 + 0x18c) = uVar3 | *(uint *)(iVar5 + 0x18c);
      }
    }
    uVar2 = *(undefined4 *)puVar1;
    *(uint *)(iVar5 + 4) = uVar6 + 1;
    *(undefined4 *)(iVar5 + (uVar6 + 2) * 4) = param_2;
    FUN_0800b520(uVar2);
    uVar2 = 0;
  }
  else {
    FUN_0800b520(*(undefined4 *)puVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x0800b5b0>>FUN_0800b5b0>>////

void FUN_0800b5b0(void)

{
  return;
}


////>>0x0800b5bc>>FUN_0800b5bc>>////

void FUN_0800b5bc(void)

{
  return;
}

