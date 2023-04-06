
////>>0x0800010c>>FUN_0800010c>>////

undefined * FUN_0800010c(undefined *param_1)

{
  if (*PTR_DAT_08000124 == '\0') {
    if (DAT_08000128 != 0) {
      param_1 = PTR_FUN_0800012c;
    }
    *PTR_DAT_08000124 = 1;
  }
  return param_1;
}


////>>0x08000178>>FUN_08000178>>////

char * FUN_08000178(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}


////>>0x08000188>>FUN_08000188>>////

void FUN_08000188(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x0800018c>>FUN_0800018c>>////

undefined4 FUN_0800018c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)PTR_DAT_080001a4 != 0) {
    return 0;
  }
  uVar1 = FUN_08000188(1,param_1,0,0,param_4);
  return uVar1;
}


////>>0x08000214>>FUN_08000214>>////

void FUN_08000214(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  if (0x3b < (int)param_1) {
    return;
  }
  iVar2 = FUN_08002fa0(PTR_DAT_080002d8,param_1,param_3,param_4,param_4);
  if (iVar2 == 3) {
    if (param_1 < 0x3c) {
      if (PTR_DAT_080002dc[param_1] == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_080002dc[param_1]);
          if (iVar2 == 1) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0800738a((int)(char)PTR_DAT_080002dc[param_1],PTR_DAT_080002e8);
          }
        }
      }
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      FUN_080088e0(param_1,param_2);
    }
    FUN_08002fc2(PTR_DAT_080002d8,param_1,param_2);
  }
  else if (iVar2 == 4) {
    if (param_1 < 0x3c) {
      if (PTR_DAT_080002dc[param_1] == -1) {
        bVar1 = false;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_080002dc[param_1]);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_080026b0(PTR_DAT_080002e4 + (uint)(byte)PTR_DAT_080002e0[param_1] * 3,param_2);
    }
    FUN_08002fc2(PTR_DAT_080002d8,param_1,param_2);
    return;
  }
  return;
}


////>>0x0800021a>>FUN_0800021a>>////

void FUN_0800021a(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_08002fa0(PTR_DAT_080002d8,param_1,param_3,param_4,param_4);
  if (iVar2 == 3) {
    if (param_1 < 0x3c) {
      if (PTR_DAT_080002dc[param_1] == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_080002dc[param_1]);
          if (iVar2 == 1) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0800738a((int)(char)PTR_DAT_080002dc[param_1],PTR_DAT_080002e8);
          }
        }
      }
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      FUN_080088e0(param_1,param_2);
    }
    FUN_08002fc2(PTR_DAT_080002d8,param_1,param_2);
  }
  else if (iVar2 == 4) {
    if (param_1 < 0x3c) {
      if (PTR_DAT_080002dc[param_1] == -1) {
        bVar1 = false;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_080002dc[param_1]);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_080026b0(PTR_DAT_080002e4 + (uint)(byte)PTR_DAT_080002e0[param_1] * 3,param_2);
    }
    FUN_08002fc2(PTR_DAT_080002d8,param_1,param_2);
    return;
  }
  return;
}


////>>0x08000488>>FUN_08000488>>////

void FUN_08000488(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)param_1 < 0xe) {
    if (param_2 == 0) {
      *(uint *)PTR_DAT_080004c8 = *(uint *)PTR_DAT_080004c8 & ~(1 << (param_1 & 0xff));
      return;
    }
    *(uint *)PTR_DAT_080004c8 = 1 << (param_1 & 0xff) | *(uint *)PTR_DAT_080004c8;
    if (*PTR_DAT_080004cc == '\0') {
      uVar1 = FUN_08008880();
      FUN_08002ef2(PTR_DAT_080004d0,param_1,uVar1);
      return;
    }
  }
  return;
}


////>>0x080004d4>>FUN_080004d4>>////

void FUN_080004d4(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    puVar2 = PTR_DAT_080004fc;
    for (iVar1 = 0xb; -1 < iVar1; iVar1 = iVar1 + -1) {
      FUN_08002580(puVar2);
      puVar2 = puVar2 + 3;
    }
  }
  return;
}


////>>0x08000500>>FUN_08000500>>////

void FUN_08000500(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *PTR_DAT_0800056c;
  if (0xb < bVar1) {
    FUN_08002f14(PTR_DAT_08000584,PTR_s_Max_servos_attached_08000580,param_3,param_4,param_4);
    return;
  }
  bVar2 = *PTR_DAT_08000570;
  if (bVar2 == 0) {
    PTR_DAT_08000578[param_1] = bVar1;
    *PTR_DAT_0800056c = bVar1 + 1;
  }
  else {
    PTR_DAT_08000578[param_1] = PTR_DAT_08000574[bVar2 - 1];
    *PTR_DAT_08000570 = bVar2 - 1;
  }
  if ((0 < param_2) && (0 < param_3)) {
    FUN_080025ac(PTR_DAT_0800057c + (uint)(byte)PTR_DAT_08000578[param_1] * 3,param_1,param_2,
                 param_3);
    return;
  }
  FUN_08002634(PTR_DAT_0800057c + (uint)(byte)PTR_DAT_08000578[param_1] * 3,param_1);
  return;
}


////>>0x08000588>>FUN_08000588>>////

void FUN_08000588(int param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_080005cc;
  FUN_08002644(PTR_DAT_080005d0 + (uint)(byte)PTR_DAT_080005cc[param_1] * 3);
  cVar2 = puVar3[param_1];
  cVar1 = *PTR_DAT_080005d4;
  if ((cVar2 == cVar1) && (cVar1 != '\0')) {
    *PTR_DAT_080005d4 = cVar1 + -1;
  }
  else if (cVar1 != '\0') {
    cVar1 = *PTR_DAT_080005d8;
    *PTR_DAT_080005d8 = cVar1 + 1U;
    PTR_DAT_080005dc[(byte)(cVar1 + 1U) - 1] = cVar2;
  }
  PTR_DAT_080005cc[param_1] = 0xff;
  return;
}


////>>0x080005e0>>FUN_080005e0>>////

void FUN_080005e0(void)

{
  *PTR_DAT_080005f0 = 0;
  *PTR_DAT_080005f4 = 0xff;
  return;
}


////>>0x080005f8>>FUN_080005f8>>////

void FUN_080005f8(uint param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  
  iVar2 = FUN_08002fa0(PTR_DAT_08000874,param_1);
  if (iVar2 != 0x7f) {
    iVar2 = FUN_08002fa0(PTR_DAT_08000874,param_1);
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
      FUN_080005e0();
    }
    if (param_1 < 0x3c) {
      if (PTR_DAT_08000878[param_1] == -1) {
        bVar4 = false;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000878[param_1]);
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
        iVar2 = FUN_080026f8(PTR_DAT_08000884 + (uint)(byte)PTR_DAT_08000880[param_1] * 3);
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        FUN_08000588(param_1);
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
      iVar2 = FUN_080036ac(iVar2);
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
        iVar2 = FUN_080036ac(iVar2);
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
      FUN_08000488(uVar5,param_2 == 2);
    }
    if (param_1 < 0x3c) {
      if (PTR_DAT_08000878[param_1] == -1) {
        bVar4 = false;
      }
      else {
        iVar2 = FUN_080036ac();
        if (iVar2 == 0) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000878[param_1]);
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
    FUN_08002fc2(PTR_DAT_08000874,param_1,0);
    switch(param_2) {
    case 0:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000878[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000878[param_1]);
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
        FUN_08008990(param_1,0);
        FUN_08002fa8(PTR_DAT_08000874,param_1,0);
        return;
      }
      break;
    case 1:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
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
        iVar2 = FUN_08002fa0(PTR_DAT_08000a44,param_1);
        if (iVar2 == 3) {
          FUN_08008a24(param_1,0);
        }
        FUN_08008990(param_1,1);
        FUN_08002fa8(PTR_DAT_08000a44,param_1,1);
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
        iVar2 = FUN_080036ac(iVar2);
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
          iVar2 = FUN_080036ac(iVar2);
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
            iVar2 = FUN_080036ac();
            if (iVar2 == 0) {
              bVar4 = false;
            }
            else {
              iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000878[param_1]);
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
          FUN_08008990(param_1,0);
        }
        FUN_08002fa8(PTR_DAT_08000874,param_1,2);
        return;
      }
      break;
    case 3:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a4c);
            }
          }
        }
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        FUN_08008990(param_1,1);
        FUN_080088e0(param_1,0);
        FUN_08002fa8(PTR_DAT_08000a44,param_1,3);
        return;
      }
      break;
    case 4:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          bVar4 = false;
        }
        else {
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
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
        FUN_08002fa8(PTR_DAT_08000a44,param_1,4);
        if (((byte)PTR_DAT_08000a50[param_1] != 0xff) &&
           (iVar2 = FUN_080026f8(PTR_DAT_08000a54 + (uint)(byte)PTR_DAT_08000a50[param_1] * 3),
           iVar2 != 0)) {
          bVar4 = false;
        }
        if (bVar4) {
          FUN_08000500(param_1,0xffffffff);
          return;
        }
      }
      break;
    default:
      FUN_08002f14(PTR_DAT_08000a44,PTR_s_Unknown_pin_mode_08000a60);
      break;
    case 6:
      if (param_1 < 0x3c) {
        if (PTR_DAT_08000a48[param_1] == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000a48[param_1]);
            if (iVar2 == 1) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a58);
              if (iVar2 == 0) {
                iVar2 = FUN_0800738a((int)(char)PTR_DAT_08000a48[param_1],PTR_DAT_08000a5c);
              }
            }
          }
        }
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        FUN_08002fa8(PTR_DAT_08000a44,param_1,6);
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
          iVar2 = FUN_080036ac();
          if (iVar2 == 0) {
            bVar4 = false;
          }
          else {
            iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000878[param_1]);
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
        FUN_08008990(param_1,2);
        puVar1 = PTR_DAT_08000a44;
        FUN_08002fa8(PTR_DAT_08000a44,param_1,0xb);
        FUN_08002fc2(puVar1,param_1,1);
        return;
      }
    }
  }
  return;
}


////>>0x08000a64>>FUN_08000a64>>////

void FUN_08000a64(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 0x3c; uVar2 = uVar2 + 1 & 0xff) {
    if (uVar2 < 0x3c) {
      if (PTR_DAT_08000ad8[uVar2] == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_080036ac();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_080036ac((int)(char)PTR_DAT_08000ad8[uVar2]);
          if (iVar1 == 1) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_0800738a((int)(char)PTR_DAT_08000ad8[uVar2],PTR_DAT_08000adc);
            if (iVar1 == 0) {
              iVar1 = FUN_0800738a((int)(char)PTR_DAT_08000ad8[uVar2],PTR_DAT_08000ae0);
            }
          }
        }
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      FUN_080005f8(uVar2,6);
    }
  }
  *PTR_DAT_08000ae4 = 1;
  FUN_08002a26(PTR_DAT_08000ae8);
  return;
}


////>>0x08000aec>>FUN_08000aec>>////

void FUN_08000aec(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  *PTR_DAT_08000bc0 = 1;
  if (*PTR_DAT_08000bc4 != '\0') {
    FUN_080005e0();
  }
  for (uVar3 = 0; uVar3 < 5; uVar3 = uVar3 + 1 & 0xff) {
    PTR_DAT_08000bc8[uVar3] = 0;
    PTR_DAT_08000bcc[uVar3] = 0;
    PTR_DAT_08000bd0[uVar3] = 0;
  }
  for (uVar3 = 0; uVar3 < 0x3c; uVar3 = uVar3 + 1 & 0xff) {
    if ((uVar3 - 0x2e & 0xff) < 0xe) {
      if (uVar3 < 0x3c) {
        iVar2 = (int)(char)PTR_DAT_08000bd4[uVar3];
      }
      else {
        iVar2 = -1;
      }
      iVar2 = FUN_080036ac(iVar2);
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        if (uVar3 < 0x3c) {
          iVar2 = (int)(char)PTR_DAT_08000bd4[uVar3];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = FUN_080036ac(iVar2);
        if (iVar2 == 1) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_080005f8(uVar3,2);
    }
    else {
      if (uVar3 < 0x3c) {
        if (((PTR_DAT_08000bd4[uVar3] != -1) && (iVar2 = FUN_080036ac(), iVar2 != 0)) &&
           (iVar2 = FUN_080036ac((int)(char)PTR_DAT_08000bd4[uVar3]), iVar2 != 1)) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        FUN_080005f8(uVar3,1);
      }
    }
    PTR_DAT_08000bd8[uVar3] = 0xff;
  }
  *(undefined4 *)PTR_DAT_08000bdc = 0;
  *PTR_DAT_08000be0 = 0;
  *PTR_DAT_08000be4 = 0;
  *PTR_DAT_08000bc0 = 0;
  return;
}


////>>0x08000be8>>FUN_08000be8>>////

void FUN_08000be8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)((byte)PTR_DAT_08000c0c[param_1] & param_2);
  puVar1 = PTR_DAT_08000c0c;
  if ((param_3 != 0) ||
     (puVar1 = (undefined *)(uint)(byte)PTR_DAT_08000c10[param_1], puVar2 != puVar1)) {
    FUN_08002efe(PTR_DAT_08000c14,param_1,puVar2,puVar1,param_4);
    PTR_DAT_08000c10[param_1] = (char)puVar2;
  }
  return;
}


////>>0x08000ef8>>FUN_08000ef8>>////

void FUN_08000ef8(void)

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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)*PTR_DAT_08001190);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = FUN_08008a6c(0);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[1]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(1);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[2]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(2);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[3]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(3);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[4]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(4);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[5]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(5);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[6]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(6);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001190[7]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(7);
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
    FUN_08000be8(0,bVar4);
  }
  if (PTR_DAT_08001188[1] != '\0') {
    bVar1 = PTR_DAT_0800118c[1];
    if (PTR_DAT_08001190[8] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[8]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = FUN_08008a6c(8);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[9]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(9);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[10]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(10);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0xb]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0xb);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0xc]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0xc);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0xd]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0xd);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0xe]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0xe);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0xf]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0xf);
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
    FUN_08000be8(1,bVar4,0);
  }
  if (PTR_DAT_08001428[2] != '\0') {
    bVar1 = PTR_DAT_0800142c[2];
    if (PTR_DAT_08001424[0x10] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001424[0x10]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = FUN_08008a6c(0x10);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x11]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x11);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x12]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x12);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x13]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x13);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x14]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x14);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x15]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x15);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x16]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x16);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x17]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x17);
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
    FUN_08000be8(2,bVar4,0);
  }
  if (PTR_DAT_080016c8[3] != '\0') {
    bVar1 = PTR_DAT_080016cc[3];
    if (PTR_DAT_080016c4[0x18] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_080016c4[0x18]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = FUN_08008a6c(0x18);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x19]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x19);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1a]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1a);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1b]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1b);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1c]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1c);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1d]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1d);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1e]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1e);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x1f]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x1f);
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
    FUN_08000be8(3,bVar4,0);
  }
  if (PTR_DAT_08001964[4] != '\0') {
    bVar1 = PTR_DAT_08001968[4];
    if (PTR_DAT_08001960[0x20] == -1) {
      bVar4 = 0;
    }
    else {
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x20]);
        if (iVar2 == 1) {
          bVar4 = 0;
        }
        else if ((bVar1 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          iVar2 = FUN_08008a6c(0x20);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001960[0x21]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 2) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x21);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x22]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 4) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x22);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x23]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 8) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x23);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x24]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x10) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x24);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x25]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x20) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x25);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x26]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x40) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x26);
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
      iVar2 = FUN_080036ac();
      if (iVar2 == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_080036ac((int)(char)PTR_DAT_08001b44[0x27]);
        if (iVar2 == 1) {
          bVar3 = false;
        }
        else if ((bVar1 & 0x80) == 0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_08008a6c(0x27);
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
    FUN_08000be8(4,bVar4,0);
  }
  return;
}


////>>0x08001b48>>FUN_08001b48>>////

void FUN_08001b48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_08001bc0;
  FUN_08002e44(PTR_DAT_08001bc0,PTR_s__home_bo_p2im_p2im_real_firmware_08001bc4,2,5);
  FUN_08002f2c(puVar1,0xe0,PTR_FUN_08000214_1_08001bc8);
  FUN_08002f2c(puVar1,0x90,PTR_LAB_080002ec_1_08001bcc);
  FUN_08002f2c(puVar1,0xc0,DAT_08001bd0);
  FUN_08002f2c(puVar1,0xd0,PTR_LAB_08000c18_1_08001bd4);
  FUN_08002f2c(puVar1,0xf4,DAT_08001bd8);
  FUN_08002f2c(puVar1,0xf5,PTR_LAB_080001a8_1_08001bdc);
  FUN_08002f94(puVar1,0xf0,PTR_FUN_08001cd0_1_08001be0);
  FUN_08002f84(puVar1,0xff,DAT_08001be4);
  FUN_08003048(puVar1,0xe100);
  FUN_08000aec();
  FUN_0800018c(0);
  return;
}


////>>0x08001bf8>>FUN_08001bf8>>////

void FUN_08001bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800288c(PTR_DAT_08001c04,param_1,param_3,param_4,param_4);
  return;
}


////>>0x08001c08>>FUN_08001c08>>////

undefined FUN_08001c08(void)

{
  undefined uVar1;
  
  uVar1 = FUN_08002720(PTR_DAT_08001c14);
  return uVar1;
}


////>>0x08001c18>>FUN_08001c18>>////

void FUN_08001c18(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = PTR_DAT_08001cbc;
  if (param_2 == 0xffffffff) {
    param_2 = 0;
  }
  else {
    FUN_08002a30(PTR_DAT_08001cbc,param_1);
    FUN_08001bf8(param_2 & 0xff);
    FUN_08002a58(puVar1,param_4);
  }
  puVar1 = PTR_DAT_08001cbc;
  FUN_08002c14(PTR_DAT_08001cbc,param_1,param_3);
  iVar3 = FUN_0800270c(puVar1);
  if (param_3 < iVar3) {
    FUN_08002f14(PTR_DAT_08001cc4,PTR_s_I2C__Too_many_bytes_received_08001cc0);
  }
  else {
    iVar3 = FUN_0800270c(PTR_DAT_08001cbc);
    if (iVar3 < param_3) {
      FUN_08002f14(PTR_DAT_08001cc4,PTR_s_I2C__Too_few_bytes_received_08001ccc);
    }
  }
  puVar1 = PTR_DAT_08001cc8;
  *PTR_DAT_08001cc8 = (char)param_1;
  puVar1[1] = (char)param_2;
  iVar3 = 0;
  while( true ) {
    if (iVar3 < param_3) {
      iVar4 = FUN_0800270c(PTR_DAT_08001cbc);
      if (iVar4 == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) break;
    uVar2 = FUN_08001c08();
    PTR_DAT_08001cc8[iVar3 + 2] = uVar2;
    iVar3 = iVar3 + 1;
  }
  FUN_08002f0a(PTR_DAT_08001cc4,0x77,param_3 + 2U & 0xff,PTR_DAT_08001cc8);
  return;
}


////>>0x08001cd0>>FUN_08001cd0>>////

void FUN_08001cd0(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4)

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
    FUN_08002f1e(PTR_DAT_080022e8,0xf0);
    FUN_08002f1e(puVar5,0x6a);
    for (uVar12 = 0; uVar12 < 0x3c; uVar12 = uVar12 + 1 & 0xff) {
      uVar13 = uVar12 - 0x2e & 0xff;
      if (uVar13 < 0xe) {
        if (uVar12 < 0x3c) {
          iVar9 = (int)(char)PTR_DAT_080022e4[uVar12];
        }
        else {
          iVar9 = -1;
        }
        iVar9 = FUN_080036ac(iVar9);
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
          iVar9 = FUN_080036ac(iVar9);
          if (iVar9 == 1) {
            uVar13 = 0x7f;
          }
        }
      }
      else {
        uVar13 = 0x7f;
      }
      FUN_08002f1e(PTR_DAT_080022e8,uVar13);
    }
    FUN_08002f1e(PTR_DAT_080022e8,0xf7);
    break;
  case 0x6b:
    FUN_08002f1e(PTR_DAT_08002044,0xf0);
    FUN_08002f1e(puVar4,0x6c);
    for (uVar12 = 0; uVar12 < 0x3c; uVar12 = uVar12 + 1 & 0xff) {
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          bVar15 = false;
        }
        else {
          iVar9 = FUN_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = FUN_080036ac((int)(char)PTR_DAT_08002060[uVar12]);
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
        FUN_08002f1e(PTR_DAT_08002044,0);
        FUN_08002f1e(puVar4,1);
        FUN_08002f1e(puVar4,0xb);
        FUN_08002f1e(puVar4,1);
        FUN_08002f1e(puVar4,1);
        FUN_08002f1e(puVar4,1);
      }
      if ((uVar12 - 0x2e & 0xff) < 0xe) {
        if (uVar12 < 0x3c) {
          iVar9 = (int)(char)PTR_DAT_08002060[uVar12];
        }
        else {
          iVar9 = -1;
        }
        iVar9 = FUN_080036ac(iVar9);
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
          iVar9 = FUN_080036ac(iVar9);
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
        FUN_08002f1e(PTR_DAT_080022e8,2);
        FUN_08002f1e(puVar4,10);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_080036ac();
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
            if (iVar9 == 1) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022ec);
            }
          }
        }
      }
      else {
        iVar9 = 0;
      }
      puVar4 = PTR_DAT_080022e8;
      if (iVar9 != 0) {
        FUN_08002f1e(PTR_DAT_080022e8,3);
        FUN_08002f1e(puVar4,8);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          bVar15 = false;
        }
        else {
          iVar9 = FUN_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = FUN_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
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
        FUN_08002f1e(PTR_DAT_080022e8,4);
        FUN_08002f1e(puVar4,0xe);
      }
      if (uVar12 < 0x3c) {
        if (PTR_DAT_080022e4[uVar12] == -1) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_080036ac();
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_080036ac((int)(char)PTR_DAT_080022e4[uVar12]);
            if (iVar9 == 1) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022f0);
              if (iVar9 == 0) {
                iVar9 = FUN_0800738a((int)(char)PTR_DAT_080022e4[uVar12],PTR_DAT_080022f4);
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
        FUN_08002f1e(PTR_DAT_080022e8,6);
        FUN_08002f1e(puVar4,1);
      }
      FUN_08002f1e(PTR_DAT_080022e8,0x7f);
    }
    FUN_08002f1e(PTR_DAT_080022e8,0xf7);
    return;
  case 0x6d:
    if (param_2 != 0) {
      bVar1 = *param_3;
      FUN_08002f1e(PTR_DAT_080022e8,0xf0);
      FUN_08002f1e(puVar5,0x6e);
      FUN_08002f1e(puVar5,bVar1);
      if (bVar1 < 0x3c) {
        uVar6 = FUN_08002fa0(puVar5,bVar1);
        FUN_08002f1e(puVar5,uVar6);
        uVar12 = FUN_08002fba(puVar5,bVar1);
        FUN_08002f1e(puVar5,uVar12 & 0x7f);
        uVar12 = FUN_08002fba(puVar5,bVar1);
        if ((uVar12 & 0xff80) != 0) {
          iVar9 = FUN_08002fba(puVar5,bVar1);
          FUN_08002f1e(puVar5,(uint)(iVar9 << 0x12) >> 0x19);
        }
        uVar12 = FUN_08002fba(PTR_DAT_080022e8,bVar1);
        puVar4 = PTR_DAT_080022e8;
        if ((uVar12 & 0xc000) != 0) {
          iVar9 = FUN_08002fba(PTR_DAT_080022e8,bVar1);
          FUN_08002f1e(puVar4,(uint)(iVar9 << 0xb) >> 0x19);
        }
      }
      FUN_08002f1e(PTR_DAT_080022e8,0xf7);
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
      FUN_08000214(*param_3,uVar12);
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
          iVar9 = FUN_080036ac();
          if (iVar9 == 0) {
            bVar15 = false;
          }
          else {
            iVar9 = FUN_080036ac((int)(char)PTR_DAT_08002060[uVar12]);
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
          iVar9 = FUN_080026f8(PTR_DAT_08002068 + (uint)(byte)PTR_DAT_08002064[uVar12] * 3);
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          FUN_08000588(uVar12);
        }
        FUN_08000500(uVar12,(uint)bVar1 + (uint)bVar7 * 0x80,(uint)bVar2 + (uint)bVar3 * 0x80);
        FUN_080005f8(uVar12,4);
        return;
      }
    }
    break;
  case 0x76:
    bVar1 = param_3[1];
    bVar7 = bVar1 & 0x18;
    if ((bVar1 & 0x20) != 0) {
      FUN_08002f14(PTR_DAT_08002044,PTR_s_10_bit_addressing_not_supported_08002040,bVar7,bVar1,
                   param_4);
      return;
    }
    bVar2 = *param_3;
    bVar15 = (bVar1 & 0x40) == 0;
    if (bVar7 < 0x19) {
      switch(bVar7) {
      case 0:
        FUN_08002a30(PTR_DAT_08002048,bVar2);
        for (uVar12 = 2; (int)uVar12 < param_2; uVar12 = uVar12 + 2 & 0xff) {
          FUN_08001bf8(param_3[uVar12 + 1] * -0x80 + param_3[uVar12]);
        }
        FUN_08002ac0(PTR_DAT_08002048);
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
        FUN_08001c18(bVar2,iVar9,cVar8);
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
        FUN_08002f14(PTR_DAT_08002044,PTR_s_too_many_queries_08002054,(int)cVar8,bVar15,param_4);
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
      FUN_08000a64();
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


////>>0x080022f8>>FUN_080022f8>>////

void FUN_080022f8(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_08000ef8();
  while (iVar2 = FUN_08002ec4(PTR_DAT_080023e0), iVar2 != 0) {
    FUN_08002ed2(PTR_DAT_080023e0);
  }
  iVar2 = FUN_08008abc();
  *(int *)PTR_DAT_080023e4 = iVar2;
  if (*(uint *)PTR_DAT_080023ec < (uint)(iVar2 - *(int *)PTR_DAT_080023e8)) {
    *(uint *)PTR_DAT_080023e8 = *(int *)PTR_DAT_080023e8 + *(uint *)PTR_DAT_080023ec;
    for (uVar4 = 0; uVar4 < 0x3c; uVar4 = uVar4 + 1 & 0xff) {
      uVar5 = uVar4 - 0x2e & 0xff;
      if (uVar5 < 0xe) {
        if (uVar4 < 0x3c) {
          iVar2 = (int)(char)PTR_DAT_080023f4[uVar4];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = FUN_080036ac(iVar2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          if (uVar4 < 0x3c) {
            iVar2 = (int)(char)PTR_DAT_080023f4[uVar4];
          }
          else {
            iVar2 = -1;
          }
          iVar2 = FUN_080036ac(iVar2);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            iVar2 = FUN_08002fa0(PTR_DAT_080023e0,uVar4);
            if (iVar2 == 2) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
        }
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && ((*(int *)PTR_DAT_080023f0 >> uVar5 & 1U) != 0)) {
        uVar3 = FUN_08008880(uVar5);
        FUN_08002ef2(PTR_DAT_080023e0,uVar5,uVar3);
      }
    }
    if (-1 < (char)*PTR_DAT_080023f8) {
      for (uVar4 = 0; (int)uVar4 < (char)*PTR_DAT_080023f8 + 1; uVar4 = uVar4 + 1 & 0xff) {
        iVar2 = uVar4 * 0xc;
        FUN_08001c18(PTR_DAT_080023fc[iVar2],*(undefined4 *)(PTR_DAT_080023fc + iVar2 + 4),
                     PTR_DAT_080023fc[iVar2 + 8],PTR_DAT_080023fc[iVar2 + 9]);
      }
    }
  }
  return;
}


////>>0x08002400>>FUN_08002400>>////

undefined4 FUN_08002400(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (0xb < uVar1) {
      return 0;
    }
    if ((PTR_DAT_08002428[(param_1 * 0xc + uVar1) * 8] & 0x40) != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return 1;
}


////>>0x0800242c>>FUN_0800242c>>////

void FUN_0800242c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08007648(param_1,60000,0x5dc,PTR_LAB_08002444_1_08002440,param_4);
  return;
}


////>>0x08002578>>FUN_08002578>>////

void FUN_08002578(void)

{
  FUN_080076e0();
  return;
}


////>>0x08002580>>FUN_08002580>>////

void FUN_08002580(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *PTR_DAT_080025a4;
  if (0xb < bVar1) {
    *param_1 = 0xff;
    return;
  }
  *PTR_DAT_080025a4 = bVar1 + 1;
  *param_1 = bVar1;
  *(undefined4 *)(PTR_DAT_080025a8 + (uint)bVar1 * 8 + 4) = 0x5dc;
  return;
}


////>>0x080025ac>>FUN_080025ac>>////

byte FUN_080025ac(byte *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 < 0xc) {
    FUN_08008990(param_2,1,param_3,*param_1,param_4);
    uVar2 = (uint)*param_1;
    uVar1 = (byte)PTR_DAT_08002628[uVar2 * 8] & 0xffffffc0 | param_2 & 0x3f;
    PTR_DAT_08002628[uVar2 * 8] = (char)uVar1;
    iVar4 = -param_3 + 0x220;
    if (iVar4 < 0) {
      iVar4 = -param_3 + 0x223;
    }
    param_1[1] = (byte)((uint)(iVar4 << 0x16) >> 0x18);
    iVar4 = -param_4 + 0x960;
    if (iVar4 < 0) {
      iVar4 = -param_4 + 0x963;
    }
    param_1[2] = (byte)((uint)(iVar4 << 0x16) >> 0x18);
    uVar3 = (uint)((ulonglong)DAT_0800262c * (ulonglong)*param_1 >> 0x23);
    iVar4 = FUN_08002400(uVar3,uVar1,uVar2,(int)((ulonglong)DAT_0800262c * (ulonglong)*param_1));
    if (iVar4 == 0) {
      PTR_DAT_08002630[0x44] = (char)uVar3;
      FUN_0800242c();
    }
    PTR_DAT_08002628[(uint)*param_1 * 8] = PTR_DAT_08002628[(uint)*param_1 * 8] | 0x40;
  }
  return *param_1;
}


////>>0x08002634>>FUN_08002634>>////

void FUN_08002634(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080025ac(param_1,param_2,0x220,0x960,param_4);
  return;
}


////>>0x08002644>>FUN_08002644>>////

void FUN_08002644(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1;
  bVar1 = PTR_DAT_08002670[uVar2 * 8];
  PTR_DAT_08002670[uVar2 * 8] = bVar1 & 0xbf;
  iVar3 = FUN_08002400((uint)((ulonglong)DAT_08002674 * (ulonglong)uVar2 >> 0x23),param_2,
                       bVar1 & 0xbf,(int)((ulonglong)DAT_08002674 * (ulonglong)uVar2),param_4);
  if (iVar3 == 0) {
    FUN_08002578(PTR_DAT_08002678);
  }
  return;
}


////>>0x0800267c>>FUN_0800267c>>////

void FUN_0800267c(byte *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 < 0xc) {
    iVar1 = (0x88 - (char)param_1[1]) * 4;
    if ((iVar1 - param_2 == 0 || iVar1 < param_2) &&
       (iVar1 = (600 - (char)param_1[2]) * 4,
       param_2 == iVar1 || param_2 + (600 - (char)param_1[2]) * -4 < 0 != SBORROW4(param_2,iVar1)))
    {
      iVar1 = param_2;
    }
    *(int *)(PTR_DAT_080026ac + (uint)*param_1 * 8 + 4) = iVar1;
  }
  return;
}


////>>0x080026b0>>FUN_080026b0>>////

void FUN_080026b0(int param_1,int param_2)

{
  if (param_2 < 0x220) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0xb4 < param_2) {
      param_2 = 0xb4;
    }
    param_2 = FUN_08008ef4(param_2,0,0xb4,(0x88 - *(char *)(param_1 + 1)) * 4,
                           (600 - *(char *)(param_1 + 2)) * 4);
  }
  FUN_0800267c(param_1,param_2);
  return;
}


////>>0x080026f8>>FUN_080026f8>>////

uint FUN_080026f8(byte *param_1)

{
  return ((uint)(byte)PTR_DAT_08002708[(uint)*param_1 * 8] << 0x19) >> 0x1f;
}


////>>0x0800270c>>FUN_0800270c>>////

int FUN_0800270c(void)

{
  return (uint)(byte)*PTR_DAT_08002718 - (uint)(byte)*PTR_DAT_0800271c;
}


////>>0x08002720>>FUN_08002720>>////

uint FUN_08002720(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *PTR_DAT_08002740;
  if ((uint)bVar1 < (uint)(byte)*PTR_DAT_08002744) {
    bVar2 = *(byte *)(*(int *)PTR_DAT_08002748 + (uint)bVar1);
    *PTR_DAT_08002740 = bVar1 + 1;
    return (uint)bVar2;
  }
  return 0xffffffff;
}


////>>0x080027f0>>FUN_080027f0>>////

uint FUN_080027f0(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined uVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_08002884;
  if (*PTR_DAT_08002878 == '\0') {
    iVar3 = FUN_08007ede(param_1 + 0x14,param_2,param_3 & 0xffff);
    if (iVar3 != 0) {
      return 0;
    }
    return param_3;
  }
  uVar5 = (byte)*PTR_DAT_0800287c + param_3;
  if ((byte)*PTR_DAT_08002880 < uVar5) {
    if (uVar5 < 0x20) {
      uVar5 = 0x20;
    }
    iVar3 = FUN_08009908(*(undefined4 *)PTR_DAT_08002884,uVar5);
    *(int *)puVar2 = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined)uVar5;
    }
    *PTR_DAT_08002880 = uVar4;
  }
  puVar2 = PTR_DAT_08002888;
  if (*(int *)PTR_DAT_08002884 != 0) {
    FUN_080091b0((uint)(byte)*PTR_DAT_08002888 + *(int *)PTR_DAT_08002884,param_2,param_3);
    cVar1 = *puVar2 + (char)param_3;
    *puVar2 = cVar1;
    *PTR_DAT_0800287c = cVar1;
    return param_3;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return 0;
}


////>>0x0800288c>>FUN_0800288c>>////

undefined4 FUN_0800288c(int param_1,undefined param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined uVar5;
  uint uVar6;
  undefined local_11;
  
  puVar1 = PTR_DAT_08002914;
  local_11 = param_2;
  if (*PTR_DAT_08002908 == '\0') {
    iVar2 = FUN_08007ede(param_1 + 0x14,&local_11,1);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar6 = (byte)*PTR_DAT_0800290c + 1;
    if ((byte)*PTR_DAT_08002910 < uVar6) {
      if (uVar6 < 0x20) {
        uVar6 = 0x20;
      }
      iVar2 = FUN_08009908(*(undefined4 *)PTR_DAT_08002914,uVar6);
      *(int *)puVar1 = iVar2;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (undefined)uVar6;
      }
      *PTR_DAT_08002910 = uVar5;
    }
    puVar1 = PTR_DAT_08002918;
    if (*(int *)PTR_DAT_08002914 == 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar3 = 0;
    }
    else {
      *(undefined *)(*(int *)PTR_DAT_08002914 + (uint)(byte)*PTR_DAT_08002918) = local_11;
      cVar4 = *puVar1 + '\x01';
      *puVar1 = cVar4;
      *PTR_DAT_0800290c = cVar4;
      uVar3 = 1;
    }
  }
  return uVar3;
}


////>>0x0800291c>>FUN_0800291c>>////

void FUN_0800291c(undefined4 *param_1)

{
  undefined *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = PTR_PTR_FUN_0800288c_1_08002940;
  puVar1 = PTR_DAT_08002944;
  *(undefined *)(param_1 + 0x1b) = PTR_DAT_08002944[0xe];
  *(undefined *)((int)param_1 + 0x6d) = puVar1[0xf];
  return;
}


////>>0x08002948>>FUN_08002948>>////

void FUN_08002948(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_0800291c(PTR_DAT_08002964);
  }
  return;
}


////>>0x08002968>>FUN_08002968>>////

void FUN_08002968(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  *PTR_DAT_080029ec = 0;
  *PTR_DAT_080029f0 = 0;
  if (*(int *)PTR_DAT_080029f4 != 0) {
    FUN_080091c6(*(int *)PTR_DAT_080029f4,0,*PTR_DAT_080029f8);
  }
  *PTR_DAT_080029fc = 0;
  *PTR_DAT_08002a00 = 0;
  if (*(int *)PTR_DAT_08002a04 != 0) {
    FUN_080091c6(*(int *)PTR_DAT_08002a04,0,*PTR_DAT_08002a08);
  }
  *PTR_DAT_08002a0c = 0;
  iVar1 = (param_2 & 0x7f) << 1;
  *(char *)(param_1 + 0x10) = (char)iVar1;
  if (param_2 == 0x33) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x11) = 0;
  }
  iVar2 = param_1 + 0x14;
  FUN_080077b0(iVar2,DAT_08002a10,0x4000,iVar1,*(undefined *)(param_1 + 0x11));
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_08007f8e(iVar2,PTR_LAB_08002774_1_08002a14);
    FUN_08007f7c(iVar2,PTR_LAB_08002b00_1_08002a18);
  }
  return;
}


////>>0x08002a1c>>FUN_08002a1c>>////

void FUN_08002a1c(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002968(param_1,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002a26>>FUN_08002a26>>////

void FUN_08002a26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002a1c(param_1,0x33,param_3,param_4,param_4);
  return;
}


////>>0x08002a30>>FUN_08002a30>>////

void FUN_08002a30(undefined4 param_1,int param_2)

{
  *PTR_DAT_08002a48 = 1;
  *PTR_DAT_08002a4c = (char)(param_2 << 1);
  *PTR_DAT_08002a50 = 0;
  *PTR_DAT_08002a54 = 0;
  return;
}


////>>0x08002a58>>FUN_08002a58>>////

undefined4 FUN_08002a58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = 4;
  }
  else {
    iVar1 = FUN_08007e74(param_1 + 0x14,*PTR_DAT_08002ab0,*(undefined4 *)PTR_DAT_08002aac,
                         *PTR_DAT_08002aa8);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 4;
    }
    if (*(int *)PTR_DAT_08002aac != 0) {
      FUN_080091c6(*(int *)PTR_DAT_08002aac,0,*PTR_DAT_08002ab4);
    }
    *PTR_DAT_08002ab8 = 0;
    *PTR_DAT_08002aa8 = 0;
    *PTR_DAT_08002abc = 0;
  }
  return uVar2;
}


////>>0x08002ac0>>FUN_08002ac0>>////

void FUN_08002ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002a58(param_1,1,param_3,param_4,param_4);
  return;
}


////>>0x08002acc>>FUN_08002acc>>////

void FUN_08002acc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  
  puVar1 = PTR_DAT_08002afc;
  if ((byte)*PTR_DAT_08002af8 < param_1) {
    if (param_1 < 0x20) {
      param_1 = 0x20;
    }
    iVar2 = FUN_08009908(*(undefined4 *)PTR_DAT_08002afc,param_1,param_3,
                         (uint)(byte)*PTR_DAT_08002af8,param_4);
    *(int *)puVar1 = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined)param_1;
    }
    *PTR_DAT_08002af8 = uVar3;
  }
  return;
}


////>>0x08002b68>>FUN_08002b68>>////

undefined4
FUN_08002b68(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_5;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    return 0;
  }
  uVar3 = param_4;
  FUN_08002acc(param_3);
  if (*(int *)PTR_DAT_08002bf4 != 0) {
    if (uVar2 != 0) {
      FUN_08002a30(param_1,param_2);
      if (3 < uVar2) {
        uVar2 = 3;
      }
      while( true ) {
        if (uVar2 == 0) break;
        (**(code **)*param_1)(param_1,param_4 >> ((uVar2 - 1 & 0x1f) << 3) & 0xff);
        uVar2 = uVar2 - 1 & 0xff;
      }
      FUN_08002a58(param_1,0);
    }
    iVar1 = FUN_08007f0e(param_1 + 5,(param_2 & 0x7f) << 1,*(undefined4 *)PTR_DAT_08002bf4,param_3,
                         uVar3);
    if (iVar1 != 0) {
      param_3 = 0;
    }
    *PTR_DAT_08002bf8 = 0;
    *PTR_DAT_08002bfc = (char)param_3;
    return param_3;
  }
  param_1[1] = 1;
  return 0;
}


////>>0x08002c00>>FUN_08002c00>>////

void FUN_08002c00(void)

{
  FUN_08002b68();
  return;
}


////>>0x08002c14>>FUN_08002c14>>////

void FUN_08002c14(void)

{
  FUN_08002c00();
  return;
}


////>>0x08002c1e>>FUN_08002c1e>>////

void FUN_08002c1e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002948(1,0xffff,param_3,param_4,param_4);
  return;
}


////>>0x08002c2c>>FUN_08002c2c>>////

void FUN_08002c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)PTR_DAT_08002c3c;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,param_3,param_3,pcVar1,param_4);
  }
  return;
}


////>>0x08002ce0>>FUN_08002ce0>>////

int FUN_08002ce0(int param_1)

{
  int iVar1;
  
  FUN_0800314e(param_1 + 0x40);
  iVar1 = param_1 + 0x44;
  FUN_080032bc(iVar1,param_1,0x40);
  *(undefined *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0x1f8) = 0;
  FUN_08003306(iVar1,0xe0,PTR_FUN_08002c2c_1_08002d90,0);
  FUN_08003306(iVar1,0x90,PTR_LAB_08002c40_1_08002d94,0);
  FUN_08003306(iVar1,0xc0,PTR_LAB_08002c7c_1_08002d98,0);
  FUN_08003306(iVar1,0xd0,PTR_LAB_08002c90_1_08002d9c,0);
  FUN_08003306(iVar1,0xf4,PTR_LAB_08002c54_1_08002da0,0);
  FUN_08003306(iVar1,0xf5,PTR_LAB_08002c68_1_08002da4,0);
  FUN_08003366(iVar1,0x71,PTR_LAB_08002ca4_1_08002da8,0);
  FUN_08003370(iVar1,0xf0,PTR_LAB_08002cb8_1_08002dac,0);
  FUN_08003346(iVar1,0x79,PTR_LAB_08002e1a_1_08002db0,param_1);
  FUN_08003350(iVar1,0xf9,PTR_LAB_08002dea_1_08002db4,param_1);
  FUN_08003350(iVar1,0xff,PTR_LAB_08002cd0_1_08002db8,0);
  return param_1;
}


////>>0x08002dbc>>FUN_08002dbc>>////

void FUN_08002dbc(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_08002ce0(PTR_DAT_08002dd8);
  }
  return;
}


////>>0x08002ddc>>FUN_08002ddc>>////

void FUN_08002ddc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800322c(param_1 + 0x40,2,5,param_4,param_4);
  return;
}


////>>0x08002df6>>FUN_08002df6>>////

void FUN_08002df6(int param_1)

{
  undefined *puVar1;
  
  if (*(byte *)(param_1 + 0xc4) == 0) {
    return;
  }
  puVar1 = *(undefined **)(param_1 + 200);
  FUN_080031ce(param_1 + 0x40,*puVar1,puVar1[1],*(byte *)(param_1 + 0xc4) - 2,puVar1 + 2);
  return;
}


////>>0x08002e26>>FUN_08002e26>>////

void FUN_08002e26(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_08003154(param_1 + 0x40);
  FUN_08002ddc(param_1);
  FUN_08002df6(param_1);
  return;
}


////>>0x08002e44>>FUN_08002e44>>////

void FUN_08002e44(int param_1,int param_2,undefined param_3,undefined param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar3 = FUN_080099a4(param_2,PTR_s__cpp_08002ec0);
  iVar4 = FUN_0800997e(param_2,0x2f);
  if (iVar4 == 0) {
    iVar4 = FUN_0800997e(param_2,0x5c);
  }
  if (iVar4 != 0) {
    param_2 = iVar4 + 1;
  }
  if (iVar3 == 0) {
    cVar2 = FUN_08000178(param_2);
    *(char *)(param_1 + 0xc4) = cVar2 + '\x02';
  }
  else {
    *(char *)(param_1 + 0xc4) = ((char)iVar3 - (char)param_2) + '\x02';
  }
  FUN_080091a0(*(undefined4 *)(param_1 + 200));
  bVar1 = *(byte *)(param_1 + 0xc4);
  puVar5 = (undefined *)FUN_08009190(bVar1 + 1);
  *(undefined **)(param_1 + 200) = puVar5;
  puVar5[bVar1] = 0;
  *puVar5 = param_3;
  puVar5[1] = param_4;
  FUN_08009954(puVar5 + 2,param_2,*(byte *)(param_1 + 0xc4) - 2);
  return;
}


////>>0x08002ec4>>FUN_08002ec4>>////

void FUN_08002ec4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc0) + 8))();
  return;
}


////>>0x08002ed2>>FUN_08002ed2>>////

void FUN_08002ed2(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0xc))();
  if (uVar1 != 0xffffffff) {
    FUN_08003474(param_1 + 0x44,uVar1 & 0xff);
  }
  return;
}


////>>0x08002ef2>>FUN_08002ef2>>////

void FUN_08002ef2(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  FUN_08003158(param_1 + 0x40,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002efe>>FUN_08002efe>>////

void FUN_08002efe(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  FUN_0800319e(param_1 + 0x40,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002f0a>>FUN_08002f0a>>////

void FUN_08002f0a(int param_1)

{
  FUN_0800325a(param_1 + 0x40);
  return;
}


////>>0x08002f14>>FUN_08002f14>>////

void FUN_08002f14(int param_1)

{
  FUN_080032a2(param_1 + 0x40);
  return;
}


////>>0x08002f1e>>FUN_08002f1e>>////

void FUN_08002f1e(int param_1)

{
  (**(code **)**(undefined4 **)(param_1 + 0xc0))();
  return;
}


////>>0x08002f2c>>FUN_08002f2c>>////

void FUN_08002f2c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  if (param_2 == 0xd0) {
    *(undefined4 *)PTR_DAT_08002f78 = param_3;
    return;
  }
  if (0xd0 < param_2) {
    if (param_2 == 0xf4) {
      *(undefined4 *)PTR_DAT_08002f7c = param_3;
      return;
    }
    if (param_2 == 0xf5) {
      *(undefined4 *)PTR_DAT_08002f80 = param_3;
    }
    else if (param_2 == 0xe0) {
      *(undefined4 *)PTR_DAT_08002f6c = param_3;
      return;
    }
    return;
  }
  if (param_2 == 0x90) {
    *(undefined4 *)PTR_DAT_08002f74 = param_3;
    return;
  }
  if (param_2 == 0xc0) {
    *(undefined4 *)PTR_DAT_08002f70 = param_3;
    return;
  }
  return;
}


////>>0x08002f84>>FUN_08002f84>>////

void FUN_08002f84(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xff) {
    *(undefined4 *)PTR_DAT_08002f90 = param_3;
  }
  return;
}


////>>0x08002f94>>FUN_08002f94>>////

void FUN_08002f94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)PTR_DAT_08002f9c = param_3;
  return;
}


////>>0x08002fa0>>FUN_08002fa0>>////

undefined FUN_08002fa0(int param_1,int param_2)

{
  return *(undefined *)(param_2 + param_1 + 0xcc);
}


////>>0x08002fa8>>FUN_08002fa8>>////

void FUN_08002fa8(int param_1,int param_2,undefined param_3)

{
  if (*(char *)(param_1 + param_2 + 0xcc) != '\x7f') {
    *(undefined *)(param_1 + param_2 + 0xcc) = param_3;
  }
  return;
}


////>>0x08002fba>>FUN_08002fba>>////

undefined4 FUN_08002fba(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (param_2 + 0x42) * 4);
}


////>>0x08002fc2>>FUN_08002fc2>>////

void FUN_08002fc2(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (param_2 + 0x42) * 4) = param_3;
  return;
}


////>>0x08002fca>>FUN_08002fca>>////

void FUN_08002fca(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    FUN_08008ac4(param_5);
    FUN_08008a24(param_2,1);
    FUN_08008ac4(param_4);
    FUN_08008a24(param_2,0);
  }
  return;
}


////>>0x08003002>>FUN_08003002>>////

void FUN_08003002(int param_1)

{
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    return;
  }
  FUN_08008990(0xd,1);
  FUN_08002fca(param_1,0xd,2,0x28,0xd2);
  FUN_08008ac4(0xfa);
  FUN_08002fca(param_1,0xd,5,0x28,0xd2);
  FUN_08008ac4(0x7d);
  return;
}


////>>0x08003048>>FUN_08003048>>////

void FUN_08003048(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_08003068;
  FUN_08008c44(PTR_DAT_08003068,param_2,6,param_4,param_4);
  FUN_08003002(param_1);
  FUN_08002e26(param_1,puVar1);
  return;
}


////>>0x0800307a>>FUN_0800307a>>////

void FUN_0800307a(undefined4 *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_3;
  if (param_4 == 0) {
    param_4 = 0xffffffff;
  }
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
  while ((uVar4 < param_2 && (uVar3 < param_4))) {
    (***(code ***)(undefined4 *)*param_1)
              ((undefined4 *)*param_1,((uint)param_3[uVar4] << (uVar2 & 0xff) | uVar1) & 0x7f);
    uVar1 = (int)(uint)param_3[uVar4] >> (7 - uVar2 & 0xff) & 0xff;
    uVar2 = uVar2 + 1;
    while ((uVar3 = uVar3 + 1, 6 < uVar2 && (uVar3 < param_4))) {
      (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,uVar1 & 0x7f);
      uVar1 = uVar1 >> 7;
      uVar2 = uVar2 - 7;
    }
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 != 0) && (uVar3 < param_4)) {
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,(1 << (uVar2 & 0xff)) - 1U & uVar1)
    ;
  }
  return;
}


////>>0x08003106>>FUN_08003106>>////

void FUN_08003106(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0x6f);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    FUN_0800307a(param_1,param_3,param_4,param_3);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x0800314e>>FUN_0800314e>>////

void FUN_0800314e(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


////>>0x08003154>>FUN_08003154>>////

void FUN_08003154(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


////>>0x08003158>>FUN_08003158>>////

void FUN_08003158(undefined4 *param_1,uint param_2,ushort param_3)

{
  undefined4 *puVar1;
  ushort local_a;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    local_a = param_3;
    if (((int)param_2 < 0x10) && (param_3 < 0x4000)) {
      (**(code **)*puVar1)(puVar1,param_2 | 0xe0);
      FUN_0800307a(param_1,2,&local_a);
    }
    else {
      FUN_08003106(param_1,param_2,2,&local_a);
    }
  }
  return;
}


////>>0x0800319e>>FUN_0800319e>>////

void FUN_0800319e(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined2 local_a;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    local_a = param_3;
    (**(code **)*puVar1)(puVar1,param_2 & 0xf | 0x90);
    FUN_0800307a(param_1,2,&local_a);
  }
  return;
}


////>>0x080031ce>>FUN_080031ce>>////

void FUN_080031ce(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5
                 )

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0,param_3,*(code **)*puVar1,param_4);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0x79);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_3);
    for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
      FUN_0800307a(param_1,1,param_5 + uVar2,0);
    }
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x0800322c>>FUN_0800322c>>////

void FUN_0800322c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf9);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_3);
    return;
  }
  return;
}


////>>0x0800325a>>FUN_0800325a>>////

void FUN_0800325a(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
      FUN_0800307a(param_1,1,param_4 + uVar2,0);
    }
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x080032a2>>FUN_080032a2>>////

void FUN_080032a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000178(param_2);
  FUN_0800325a(param_1,0x71,uVar1,param_2,param_4);
  return;
}


////>>0x080032bc>>FUN_080032bc>>////

void FUN_080032bc(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = count_leading_zeroes(param_2);
  *param_1 = (char)(uVar1 >> 5);
  return;
}


////>>0x08003306>>FUN_08003306>>////

void FUN_08003306(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xd0) {
    *(undefined4 *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    return;
  }
  if (0xd0 < param_2) {
    if (param_2 == 0xf4) {
      *(undefined4 *)(param_1 + 0x5c) = param_3;
      *(undefined4 *)(param_1 + 0x2c) = param_4;
      return;
    }
    if (param_2 == 0xf5) {
      *(undefined4 *)(param_1 + 0x60) = param_3;
      *(undefined4 *)(param_1 + 0x30) = param_4;
    }
    else if (param_2 == 0xe0) {
      *(undefined4 *)(param_1 + 0x4c) = param_3;
      *(undefined4 *)(param_1 + 0x1c) = param_4;
      return;
    }
    return;
  }
  if (param_2 == 0x90) {
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_4;
    return;
  }
  if (param_2 == 0xc0) {
    *(undefined4 *)(param_1 + 0x54) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_4;
    return;
  }
  return;
}


////>>0x08003346>>FUN_08003346>>////

void FUN_08003346(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x79) {
    *(undefined4 *)(param_1 + 0x70) = param_3;
    *(undefined4 *)(param_1 + 0x34) = param_4;
  }
  return;
}


////>>0x08003350>>FUN_08003350>>////

void FUN_08003350(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xf9) {
    *(undefined4 *)(param_1 + 0x74) = param_3;
    *(undefined4 *)(param_1 + 0x38) = param_4;
    return;
  }
  if (param_2 != 0xff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}


////>>0x08003366>>FUN_08003366>>////

void FUN_08003366(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x71) {
    *(undefined4 *)(param_1 + 0x68) = param_3;
    *(undefined4 *)(param_1 + 0x40) = param_4;
  }
  return;
}


////>>0x08003370>>FUN_08003370>>////

void FUN_08003370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}


////>>0x08003376>>FUN_08003376>>////

void FUN_08003376(undefined *param_1,undefined param_2,uint param_3)

{
  bool bVar1;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(code **)(param_1 + 100) != (code *)0x0) {
      *param_1 = 1;
      (**(code **)(param_1 + 100))(*(undefined4 *)(param_1 + 0x3c));
      if (param_3 < *(uint *)(param_1 + 8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    *(undefined *)(*(int *)(param_1 + 4) + param_3) = param_2;
  }
  return;
}


////>>0x080033a8>>FUN_080033a8>>////

void FUN_080033a8(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 2) {
    bVar1 = *(byte *)(param_3 + uVar3);
    *(byte *)(param_3 + iVar2) = bVar1;
    *(byte *)(param_3 + iVar2) = *(char *)(param_3 + uVar3 + 1) << 7 | bVar1;
    iVar2 = iVar2 + 1;
  }
  return;
}


////>>0x080033cc>>FUN_080033cc>>////

void FUN_080033cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 4);
  cVar1 = *pcVar3;
  if (cVar1 == 'q') {
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar2 = FUN_080033a8(param_1,*(int *)(param_1 + 0x18) + -1,pcVar3 + 1,pcVar3,param_4);
      FUN_08003376(param_1,0,iVar2 + 1);
      (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 4) + 1);
      return;
    }
  }
  else if (cVar1 == 'y') {
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      if (*(uint *)(param_1 + 0x18) < 3) {
        (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x34),0,0);
        return;
      }
      iVar2 = FUN_080033a8(param_1,*(uint *)(param_1 + 0x18) - 3,pcVar3 + 3,pcVar3,param_4);
      FUN_08003376(param_1,0,iVar2 + 3);
      iVar2 = *(int *)(param_1 + 4);
      (**(code **)(param_1 + 0x70))
                (*(undefined4 *)(param_1 + 0x34),*(undefined *)(iVar2 + 1),*(undefined *)(iVar2 + 2)
                 ,iVar2 + 3);
      return;
    }
  }
  else if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
    (**(code **)(param_1 + 0x6c))
              (*(undefined4 *)(param_1 + 0x44),cVar1,*(int *)(param_1 + 0x18) + -1,pcVar3 + 1);
  }
  return;
}


////>>0x0800344a>>FUN_0800344a>>////

void FUN_0800344a(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
    *(undefined *)(*(int *)(param_1 + 4) + uVar1) = 0;
  }
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x48));
  }
  return;
}


////>>0x08003474>>FUN_08003474>>////

void FUN_08003474(int param_1,uint param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (param_2 != 0xf7) {
      FUN_08003376(param_1,param_2,*(undefined4 *)(param_1 + 0x18));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    *(undefined *)(param_1 + 0x14) = 0;
    FUN_080033cc();
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
          FUN_0800344a(param_1);
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
    FUN_08003376();
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


////>>0x080035b8>>FUN_080035b8>>////

void FUN_080035b8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30[0] = 2;
  local_20 = 1;
  local_1c = 0x10;
  local_14 = 2;
  local_10 = 0;
  local_c = 0x380000;
  iVar1 = FUN_08005460(local_30);
  if (iVar1 != 0) {
    FUN_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654,0x88);
  }
  local_44 = 0xf;
  local_40 = 2;
  local_3c = 0;
  local_38 = 0x400;
  local_34 = 0;
  iVar1 = FUN_080058ac(&local_44);
  if (iVar1 != 0) {
    FUN_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654,0x95);
  }
  local_54[0] = 2;
  local_4c = 0x8000;
  iVar1 = FUN_08005aa4(local_54);
  if (iVar1 != 0) {
    FUN_080073e8(PTR_s__home_bo__arduino15_packages_STM_08003654,0x9c);
  }
  uVar2 = FUN_08005a1c();
  FUN_08003fd8((uint)((ulonglong)DAT_08003650 * (ulonglong)uVar2 >> 0x26));
  FUN_08004024(4);
  FUN_08003f30(0xffffffff,0);
  return;
}


////>>0x08003658>>FUN_08003658>>////

void FUN_08003658(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; puVar2 = (undefined4 *)PTR_DAT_08003698,
      PTR_DAT_08003690 + iVar1 < PTR_DAT_08003694; iVar1 = iVar1 + 4) {
    *(undefined4 *)(PTR_DAT_08003690 + iVar1) = *(undefined4 *)(DAT_0800368c + iVar1);
  }
  for (; puVar2 < PTR_DAT_0800369c; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_080073ec();
  FUN_08009148();
  UNRECOVERED_JUMPTABLE = (code *)0x800368a;
  FUN_08008f1c();
                    /* WARNING: Could not recover jumptable at 0x0800368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x080036a2>>FUN_080036a2>>////

void FUN_080036a2(void)

{
  FUN_080072fa();
  return;
}


////>>0x080036ac>>FUN_080036ac>>////

uint FUN_080036ac(int param_1)

{
  uint uVar1;
  
  if ((uint)(param_1 << 0x18) >> 0x1c < 5) {
    for (uVar1 = 0; (uVar1 < 0x3c && (param_1 != (char)PTR_DAT_080036d0[uVar1])); uVar1 = uVar1 + 1)
    {
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


////>>0x080036d4>>FUN_080036d4>>////

void FUN_080036d4(void)

{
  return;
}


////>>0x080036d8>>FUN_080036d8>>////

undefined4 FUN_080036d8(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_08003fd8(*(uint *)PTR_DAT_0800371c / (1000 / (byte)*PTR_DAT_08003718));
  if (iVar1 != 0) {
    return 1;
  }
  if (0xf < param_1) {
    return 1;
  }
  FUN_08003f30(0xffffffff,param_1,0);
  *(uint *)PTR_DAT_08003720 = param_1;
  return 0;
}


////>>0x08003724>>FUN_08003724>>////

undefined4 FUN_08003724(void)

{
  *DAT_08003744 = *DAT_08003744 | 0x10;
  FUN_08003f0c(3);
  FUN_080036d8(0xf);
  FUN_080036d4();
  return 0;
}


////>>0x08003748>>FUN_08003748>>////

void FUN_08003748(void)

{
  *(uint *)PTR_DAT_08003758 = (uint)(byte)*PTR_DAT_0800375c + *(int *)PTR_DAT_08003758;
  return;
}


////>>0x08003760>>FUN_08003760>>////

undefined4 FUN_08003760(void)

{
  return *(undefined4 *)PTR_DAT_08003768;
}


////>>0x0800376c>>FUN_0800376c>>////

undefined4 FUN_0800376c(uint **param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = FUN_08003760();
  puVar5 = *param_1;
  if ((puVar5[2] & 0x100) == 0) {
    if (((puVar5[1] & 0x100) == 0) && ((puVar5[0xb] & 0xf00000) == 0)) {
      do {
        if ((**param_1 & 2) != 0) goto LAB_0800387e;
      } while ((param_2 == 0xffffffff) ||
              ((param_2 != 0 && (iVar3 = FUN_08003760(), (uint)(iVar3 - iVar1) <= param_2))));
      param_1[10] = (uint *)((uint)param_1[10] | 4);
      *(undefined *)(param_1 + 9) = 0;
      uVar4 = 3;
    }
    else {
      uVar6 = *(uint *)PTR_DAT_080038c8;
      uVar2 = FUN_08005bb8(2);
      puVar5 = *param_1;
      if (((puVar5[4] & DAT_080038cc) == 0) && ((puVar5[3] & DAT_080038cc + 0xdc000000) == 0)) {
        if ((puVar5[4] & DAT_080038d0) == 0) {
          if ((puVar5[3] & DAT_080038d4) == 0) {
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
      else if (((puVar5[4] & DAT_080038d0) == 0) && ((puVar5[3] & DAT_080038d0 + 0xee000000) == 0))
      {
        iVar3 = 0x54;
      }
      else if ((DAT_080038d8 & puVar5[4]) == 0) {
        if ((DAT_080038d8 & puVar5[3]) == 0) {
          iVar3 = 0x54;
        }
        else {
          iVar3 = 0xfc;
        }
      }
      else {
        iVar3 = 0xfc;
      }
      uVar2 = (uVar6 / uVar2) * iVar3;
      for (; local_1c <= uVar2 && uVar2 - local_1c != 0; local_1c = local_1c + 1) {
        if ((param_2 != 0xffffffff) &&
           ((param_2 == 0 || (iVar3 = FUN_08003760(), param_2 < (uint)(iVar3 - iVar1))))) {
          param_1[10] = (uint *)((uint)param_1[10] | 4);
          *(undefined *)(param_1 + 9) = 0;
          return 3;
        }
      }
LAB_0800387e:
      **param_1 = 0xffffffed;
      param_1[10] = (uint *)((uint)param_1[10] | 0x200);
      if (((*param_1)[2] & 0xe0000) == 0xe0000) {
        if (param_1[3] == (uint *)0x0) {
          param_1[10] = (uint *)((uint)param_1[10] & 0xfffffeff);
          if (((uint)param_1[10] & 0x1000) == 0) {
            param_1[10] = (uint *)((uint)param_1[10] | 1);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    param_1[10] = (uint *)((uint)param_1[10] | 0x20);
    *(undefined *)(param_1 + 9) = 0;
    uVar4 = 1;
  }
  return uVar4;
}


////>>0x080038dc>>FUN_080038dc>>////

undefined4 FUN_080038dc(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x4c);
}


////>>0x080038e4>>FUN_080038e4>>////

undefined4 FUN_080038e4(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 9) = 1;
    uVar2 = param_2[1];
    if (uVar2 < 7) {
      uVar2 = uVar2 * 5 - 5;
      *(uint *)(*param_1 + 0x34) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x34) & ~(0x1f << (uVar2 & 0xff));
    }
    else if (uVar2 < 0xd) {
      uVar2 = uVar2 * 5 - 0x23;
      *(uint *)(*param_1 + 0x30) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x30) & ~(0x1f << (uVar2 & 0xff));
    }
    else {
      uVar2 = uVar2 * 5 - 0x41;
      *(uint *)(*param_1 + 0x2c) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x2c) & ~(0x1f << (uVar2 & 0xff));
    }
    uVar2 = *param_2;
    if (uVar2 < 10) {
      *(uint *)(*param_1 + 0x10) =
           param_2[2] << (uVar2 * 3 & 0xff) |
           *(uint *)(*param_1 + 0x10) & ~(7 << (uVar2 * 3 & 0xff));
    }
    else {
      uVar2 = uVar2 * 3 - 0x1e;
      *(uint *)(*param_1 + 0xc) =
           param_2[2] << (uVar2 & 0xff) | *(uint *)(*param_1 + 0xc) & ~(7 << (uVar2 & 0xff));
    }
    if (*param_2 - 0x10 < 2) {
      iVar3 = *param_1;
      if (iVar3 == DAT_08003a10) {
        if ((*(uint *)(iVar3 + 8) & 0x800000) == 0) {
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x800000;
          if (*param_2 == 0x10) {
            for (local_c = (uint)((ulonglong)DAT_08003a18 * (ulonglong)*(uint *)PTR_DAT_08003a14 >>
                                 0x32) * 10; local_c != 0; local_c = local_c + -1) {
            }
            uVar1 = 0;
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        param_1[10] = param_1[10] | 0x20;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
    *(undefined *)(param_1 + 9) = 0;
  }
  return uVar1;
}


////>>0x08003a1c>>FUN_08003a1c>>////

undefined4 FUN_08003a1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


////>>0x08003a20>>FUN_08003a20>>////

undefined4 FUN_08003a20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_14;
  
  iVar3 = *param_1;
  if ((*(uint *)(iVar3 + 8) & 1) == 0) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
    for (local_14 = (uint)((ulonglong)DAT_08003a9c * (ulonglong)*(uint *)PTR_DAT_08003a98 >> 0x32);
        local_14 != 0; local_14 = local_14 - 1) {
    }
    iVar3 = FUN_08003760(param_1,param_2,
                         (int)((ulonglong)DAT_08003a9c * (ulonglong)*(uint *)PTR_DAT_08003a98));
    do {
      if ((*(uint *)(*param_1 + 8) & 1) != 0) {
        return 0;
      }
      iVar1 = FUN_08003760();
    } while ((uint)(iVar1 - iVar3) < 3);
    param_1[10] = param_1[10] | 0x10;
    param_1[0xb] = param_1[0xb] | 1;
    *(undefined *)(param_1 + 9) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08003aa0>>FUN_08003aa0>>////

int FUN_08003aa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 9) != '\x01') {
    *(undefined *)(param_1 + 9) = 1;
    iVar1 = FUN_08003a20();
    if (iVar1 == 0) {
      param_1[10] = param_1[10] & 0xfffffcfe | 0x100;
      puVar2 = (undefined4 *)*param_1;
      if ((puVar2 == DAT_08003b84) && ((DAT_08003b84[-0xff] & 0xf0000) != 0)) {
        param_1[10] = param_1[10] | 0x100000;
        if ((*(uint *)(DAT_08003b88 + 4) & 0x400) != 0) {
          param_1[10] = param_1[10] & 0xffffcfff | 0x1000;
        }
      }
      else {
        param_1[10] = param_1[10] & 0xffefffff;
        if ((puVar2[1] & 0x400) != 0) {
          param_1[10] = param_1[10] & 0xffffcfff | 0x1000;
        }
      }
      if ((param_1[10] & 0x1000) == 0) {
        param_1[0xb] = 0;
      }
      else {
        param_1[0xb] = param_1[0xb] & 0xfffffff9;
      }
      *(undefined *)(param_1 + 9) = 0;
      *puVar2 = 0xfffffffd;
      param_1 = (undefined4 *)*param_1;
      if (((param_1[2] & 0xe0000) == 0xe0000) &&
         ((param_1 != DAT_08003b84 || ((DAT_08003b84[-0xff] & 0xf0000) == 0)))) {
        param_1[2] = param_1[2] | 0x500000;
      }
      else {
        param_1[2] = param_1[2] | 0x100000;
      }
    }
    else {
      *(undefined *)(param_1 + 9) = 0;
    }
    return iVar1;
  }
  return 2;
}


////>>0x08003b8c>>FUN_08003b8c>>////

undefined4 FUN_08003b8c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(uint *)(iVar2 + 8) & 1) == 0) {
    return 0;
  }
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
  iVar2 = FUN_08003760();
  do {
    if ((*(uint *)(*param_1 + 8) & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_08003760();
  } while ((uint)(iVar1 - iVar2) < 3);
  param_1[10] = param_1[10] | 0x10;
  param_1[0xb] = param_1[0xb] | 1;
  return 1;
}


////>>0x08003bd8>>FUN_08003bd8>>////

undefined4 FUN_08003bd8(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (param_1[10] == 0) {
    param_1[0xb] = 0;
    *(undefined *)(param_1 + 9) = 0;
    FUN_08006ca8();
  }
  iVar1 = FUN_08003b8c(param_1);
  uVar3 = param_1[10] & 0x10;
  if ((uVar3 == 0) && (iVar1 == 0)) {
    param_1[10] = param_1[10] & 0xffffeefdU | 2;
    uVar2 = param_1[1] | param_1[7] | param_1[3] << 1;
    if (param_1[2] == 0x100) {
      uVar3 = 0x100;
    }
    else if (param_1[2] == 1) {
      uVar3 = 0x100;
    }
    if (param_1[5] == 1) {
      if (param_1[3] == 0) {
        uVar3 = uVar3 | (param_1[6] + -1) * 0x2000 | 0x800;
      }
      else {
        param_1[10] = param_1[10] | 0x20;
        param_1[0xb] = param_1[0xb] | 1;
      }
    }
    *(uint *)(*param_1 + 4) = uVar3 | *(uint *)(*param_1 + 4) & 0xffff16ff;
    *(uint *)(*param_1 + 8) = DAT_08003ce0 & *(uint *)(*param_1 + 8) | uVar2;
    if ((param_1[2] == 0x100) || (param_1[2] == 1)) {
      uVar3 = (param_1[4] + -1) * 0x100000;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)(*param_1 + 0x2c) = uVar3 | *(uint *)(*param_1 + 0x2c) & 0xff0fffff;
    if (uVar2 != (DAT_08003ce4 & *(uint *)(*param_1 + 8))) {
      param_1[10] = param_1[10] & 0xffffffedU | 0x10;
      param_1[0xb] = param_1[0xb] | 1;
      return 1;
    }
    param_1[0xb] = 0;
    param_1[10] = param_1[10] & 0xfffffffcU | 1;
    return 0;
  }
  param_1[10] = param_1[10] | 0x10;
  return 1;
}


////>>0x08003ce8>>FUN_08003ce8>>////

int FUN_08003ce8(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 1;
  }
  else {
    param_1[10] = param_1[10] | 2;
    iVar1 = FUN_08003b8c();
    if (iVar1 == 0) {
      *(undefined4 *)*param_1 = 0xffffffe0;
      *(uint *)(*param_1 + 4) = DAT_08003ddc & *(uint *)(*param_1 + 4);
      *(uint *)(*param_1 + 8) = DAT_08003de0 & *(uint *)(*param_1 + 8);
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xff000000;
      *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xc0000000;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffff000;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffff000;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffff000;
      *(uint *)(*param_1 + 0x20) = *(uint *)(*param_1 + 0x20) & 0xfffff000;
      *(uint *)(*param_1 + 0x24) = *(uint *)(*param_1 + 0x24) & 0xfffff000;
      *(uint *)(*param_1 + 0x28) = *(uint *)(*param_1 + 0x28) & 0xfffff000;
      *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xff000000;
      *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xff000000;
      *(uint *)(*param_1 + 0x30) = *(uint *)(*param_1 + 0x30) & 0xc0000000;
      *(uint *)(*param_1 + 0x34) = *(uint *)(*param_1 + 0x34) & 0xc0000000;
      *(uint *)(*param_1 + 0x38) = *(uint *)(*param_1 + 0x38) & 0xffc00000;
      *(uint *)(*param_1 + 0x38) = *(uint *)(*param_1 + 0x38) & 0xffc00000;
      FUN_08006d24(param_1);
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    *(undefined *)(param_1 + 9) = 0;
  }
  return iVar1;
}


////>>0x08003de4>>FUN_08003de4>>////

int FUN_08003de4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    return 2;
  }
  *(undefined *)(param_1 + 0x24) = 1;
  iVar1 = FUN_08003b8c();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffeefe | 1;
  }
  *(undefined *)(param_1 + 0x24) = 0;
  return iVar1;
}


////>>0x08003e20>>FUN_08003e20>>////

int FUN_08003e20(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    return 2;
  }
  *(undefined *)(param_1 + 9) = 1;
  iVar1 = FUN_08003b8c();
  if (iVar1 == 0) {
    param_1[10] = param_1[10] & 0xffffeefdU | 2;
    uVar5 = *(uint *)PTR_DAT_08003f08;
    uVar2 = FUN_08005bb8(2);
    for (local_14 = uVar5 / uVar2 << 1; local_14 != 0; local_14 = local_14 + -1) {
    }
    FUN_08003a20(param_1);
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 8;
    iVar3 = FUN_08003760();
    while (iVar4 = *param_1, (*(uint *)(iVar4 + 8) & 8) != 0) {
      iVar4 = FUN_08003760();
      if (10 < (uint)(iVar4 - iVar3)) {
        param_1[10] = param_1[10] & 0xffffffedU | 0x10;
        *(undefined *)(param_1 + 9) = 0;
        return 1;
      }
    }
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 4;
    iVar3 = FUN_08003760();
    while ((*(uint *)(*param_1 + 8) & 4) != 0) {
      iVar4 = FUN_08003760();
      if (10 < (uint)(iVar4 - iVar3)) {
        param_1[10] = param_1[10] & 0xffffffedU | 0x10;
        *(undefined *)(param_1 + 9) = 0;
        return 1;
      }
    }
    param_1[10] = param_1[10] & 0xfffffffcU | 1;
  }
  *(undefined *)(param_1 + 9) = 0;
  return iVar1;
}


////>>0x08003f0c>>FUN_08003f0c>>////

void FUN_08003f0c(uint param_1)

{
  *(uint *)(DAT_08003f2c + 0xc) =
       (param_1 & 7) << 8 | *(uint *)(DAT_08003f2c + 0xc) & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08003f30>>FUN_08003f30>>////

void FUN_08003f30(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(int *)(DAT_08003f8c + 0xc) << 0x15) >> 0x1d;
  uVar2 = 7 - uVar1;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if (uVar1 + 4 < 7) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - 3;
  }
  uVar1 = (param_2 & (1 << (uVar2 & 0xff)) - 1U) << (uVar1 & 0xff) |
          (1 << (uVar1 & 0xff)) - 1U & param_3;
  if ((int)param_1 < 0) {
    *(char *)(DAT_08003f90 + (param_1 & 0xf)) = (char)(uVar1 << 4);
  }
  else {
    *(char *)(param_1 + 0xe000e400) = (char)(uVar1 << 4);
  }
  return;
}


////>>0x08003f94>>FUN_08003f94>>////

void FUN_08003f94(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_08003fac + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08003fb0>>FUN_08003fb0>>////

void FUN_08003fb0(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_08003fd4 + ((param_1 >> 5) + 0x20) * 4) = 1 << (param_1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


////>>0x08003fd8>>FUN_08003fd8>>////

undefined4 FUN_08003fd8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08003ffc;
  if (param_1 - 1U < 0x1000000) {
    DAT_08003ffc[1] = param_1 - 1U;
    *(undefined *)(DAT_08004000 + 0x23) = 0xf0;
    puVar1[2] = 0;
    *puVar1 = 7;
    return 0;
  }
  return 1;
}


////>>0x08004004>>FUN_08004004>>////

void FUN_08004004(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_08004020 + ((param_1 >> 5) + 0x60) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08004024>>FUN_08004024>>////

void FUN_08004024(int param_1)

{
  if (param_1 != 4) {
    *DAT_08004040 = *DAT_08004040 & 0xfffffffb;
    return;
  }
  *DAT_08004040 = *DAT_08004040 | 4;
  return;
}


////>>0x08004044>>FUN_08004044>>////

void FUN_08004044(void)

{
  return;
}


////>>0x08004046>>FUN_08004046>>////

void FUN_08004046(void)

{
  FUN_08004044();
  return;
}


////>>0x08004050>>FUN_08004050>>////

undefined4 FUN_08004050(uint **param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)((int)param_1 + 0x21) != '\x02') {
    param_1[0xe] = (uint *)0x4;
    return 1;
  }
  **param_1 = **param_1 & 0xfffffff1;
  **param_1 = **param_1 & 0xfffffffe;
  puVar2 = *param_1;
  if (puVar2 == DAT_080040e0) {
    uVar1 = 1;
  }
  else if (puVar2 == DAT_080040e0 + 5) {
    uVar1 = 0x10;
  }
  else if (puVar2 == DAT_080040e0 + 10) {
    uVar1 = 0x100;
  }
  else if (puVar2 == DAT_080040e0 + 0xf) {
    uVar1 = 0x1000;
  }
  else if (puVar2 == DAT_080040e0 + 0x14) {
    uVar1 = 0x10000;
  }
  else if (puVar2 == DAT_080040e0 + 0x19) {
    uVar1 = 0x100000;
  }
  else {
    uVar1 = 0x1000000;
  }
  *(undefined4 *)(DAT_080040e4 + 4) = uVar1;
  *(undefined *)((int)param_1 + 0x21) = 1;
  *(undefined *)(param_1 + 8) = 0;
  if (param_1[0xd] != (uint *)0x0) {
    (*(code *)param_1[0xd])();
    return 0;
  }
  return 0;
}


////>>0x080040e8>>FUN_080040e8>>////

void FUN_080040e8(uint *param_1,uint *param_2)

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


////>>0x080042d4>>FUN_080042d4>>////

undefined4 FUN_080042d4(int param_1,uint param_2)

{
  if ((param_2 & *(uint *)(param_1 + 8)) == 0) {
    return 0;
  }
  return 1;
}


////>>0x080042e2>>FUN_080042e2>>////

void FUN_080042e2(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0x10) = param_2 << 0x10;
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


////>>0x080042f0>>FUN_080042f0>>////

void FUN_080042f0(uint param_1)

{
  if ((*(uint *)(DAT_08004308 + 0x14) & param_1) != 0) {
    *(uint *)(DAT_08004308 + 0x14) = param_1;
    FUN_08009094();
  }
  return;
}


////>>0x0800430c>>FUN_0800430c>>////

undefined4 FUN_0800430c(int *param_1)

{
  if (*(char *)((int)param_1 + 0x3e) == '@') {
    if (param_1[0x14] == 0) {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xfe;
    }
    else {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xffU | 1;
    }
  }
  else if (param_1[4] == 0x4000) {
    if (*(char *)((int)param_1 + 0x3d) == '!') {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xfe;
    }
    else {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xffU | 1;
    }
  }
  else if (param_1[0x14] == 0) {
    *(uint *)(*param_1 + 0x10) = (uint)(param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf0;
  }
  else if (param_1[0x14] == 1) {
    *(uint *)(*param_1 + 0x10) = (uint)(param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf1;
  }
  return 0;
}


////>>0x08004396>>FUN_08004396>>////

undefined4 FUN_08004396(int *param_1)

{
  *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xff;
  return 0;
}


////>>0x080043a2>>FUN_080043a2>>////

undefined4 FUN_080043a2(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if ((*(char *)((int)param_1 + 0x3d) == '\"') &&
     ((param_1[0x14] != (uint *)0x0 || (*(char *)((int)param_1 + 0x3e) != '@')))) {
    if ((param_1[0x14] == (uint *)0x0) && (param_1[4] == (uint *)0xc000)) {
      **param_1 = **param_1 | 0x100;
      param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
    }
    else {
      if (*(short *)((int)param_1 + 0x2a) == 0) {
        **param_1 = **param_1 | 0x200;
      }
      else if (*(short *)((int)param_1 + 0x2a) == 1) {
        if (puVar1 == (uint *)0xffff0000) {
          **param_1 = **param_1 & 0xfffffbff;
          puVar1 = *param_1;
          if ((puVar1[1] & 0x800) == 0) {
            *puVar1 = *puVar1 | 0x200;
          }
          else {
            *puVar1 = *puVar1 & 0xfffffbff;
          }
        }
        else if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) ||
                (param_1[0xc] == (uint *)0x12)) {
          **param_1 = **param_1 & 0xfffffbff;
          **param_1 = **param_1 | 0x200;
        }
        else if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
        }
      }
      else if (*(short *)((int)param_1 + 0x2a) == 2) {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 | 0x800;
          **param_1 = **param_1 & 0xfffffbff;
        }
        puVar1 = *param_1;
        if ((puVar1[1] & 0x800) != 0) {
          puVar1[1] = puVar1[1] | 0x1000;
        }
      }
      else {
        **param_1 = **param_1 | 0x400;
        puVar1 = *param_1;
        if ((puVar1[1] & 0x800) != 0) {
          puVar1[1] = puVar1[1] | 0x1000;
        }
      }
      param_1[0x14] = (uint *)0x0;
    }
  }
  return 0;
}


////>>0x0800457c>>FUN_0800457c>>////

undefined4 FUN_0800457c(int *param_1)

{
  byte *pbVar1;
  
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    pbVar1 = (byte *)param_1[9];
    param_1[9] = (int)(pbVar1 + 1);
    *(uint *)(*param_1 + 0x10) = (uint)*pbVar1;
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x0800459c>>FUN_0800459c>>////

undefined4 FUN_0800459c(int *param_1)

{
  undefined *puVar1;
  
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    puVar1 = (undefined *)param_1[9];
    param_1[9] = (int)(puVar1 + 1);
    *puVar1 = (char)*(undefined4 *)(*param_1 + 0x10);
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x080045bc>>FUN_080045bc>>////

void FUN_080045bc(void)

{
  return;
}


////>>0x080045c0>>FUN_080045c0>>////

undefined4 FUN_080045c0(uint **param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (param_1 == (uint **)0x0) {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    FUN_080045bc();
  }
  *(undefined *)((int)param_1 + 0x3d) = 0x24;
  **param_1 = **param_1 & 0xfffffffe;
  uVar2 = FUN_08005a28();
  if (DAT_08004714 < param_1[1]) {
    bVar1 = uVar2 <= DAT_08004720;
  }
  else if (DAT_08004718 < uVar2) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 1;
  }
  uVar4 = (uint)((ulonglong)DAT_0800471c * (ulonglong)uVar2 >> 0x32);
  (*param_1)[1] = uVar4;
  if (DAT_08004714 < param_1[1]) {
    uVar4 = (uint)((ulonglong)DAT_08004724 * (ulonglong)(uVar4 * 300) >> 0x26);
  }
  (*param_1)[8] = uVar4 + 1;
  puVar3 = param_1[1];
  if (DAT_08004714 < puVar3) {
    if (param_1[2] == (uint *)0x0) {
      uVar4 = count_leading_zeroes((uVar2 - 1) / (uint)((int)puVar3 * 3) + 1 & 0xfff);
    }
    else {
      uVar4 = count_leading_zeroes((uVar2 - 1) / (uint)((int)puVar3 * 0x19) + 1 & 0xfff);
    }
    if (uVar4 >> 5 == 0) {
      if (param_1[2] == (uint *)0x0) {
        uVar2 = (uVar2 - 1) / (uint)((int)puVar3 * 3) + 1 & 0xfff | 0x8000;
      }
      else {
        uVar2 = (uVar2 - 1) / (uint)((int)puVar3 * 0x19) + 1 & 0xfff | 0xc000;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = (uVar2 - 1) / (uint)((int)puVar3 << 1) + 1 & 0xfff;
    if (uVar2 < 4) {
      uVar2 = 4;
    }
  }
  (*param_1)[7] = uVar2;
  **param_1 = (uint)param_1[7] | (uint)param_1[8];
  (*param_1)[2] = (uint)param_1[4] | (uint)param_1[3];
  (*param_1)[3] = (uint)param_1[5] | (uint)param_1[6];
  **param_1 = **param_1 | 1;
  param_1[0x10] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  param_1[0xc] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3e) = 0;
  return 0;
}


////>>0x08004728>>FUN_08004728>>////

undefined4 FUN_08004728(uint **param_1,uint *param_2,uint *param_3,undefined2 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    local_c = (uint)((ulonglong)DAT_080047ec * (ulonglong)(*(uint *)PTR_DAT_080047e8 >> 3) >> 0x28)
              * 0x19;
    do {
      if (local_c == 0) {
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        *(undefined *)(param_1 + 0xf) = 0;
        return 3;
      }
      puVar2 = *param_1;
      local_c = local_c + -1;
    } while ((puVar2[6] & 2) != 0);
    if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x21;
      *(undefined *)((int)param_1 + 0x3e) = 0x10;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_3;
      *(undefined2 *)((int)param_1 + 0x2a) = param_4;
      param_1[0xb] = DAT_080047f0;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      param_1[0x11] = param_2;
      **param_1 = **param_1 | 0x100;
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080047f4>>FUN_080047f4>>////

undefined4 FUN_080047f4(uint **param_1,uint *param_2,uint *param_3,undefined2 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    local_c = (uint)((ulonglong)DAT_080048c0 * (ulonglong)(*(uint *)PTR_DAT_080048bc >> 3) >> 0x28)
              * 0x19;
    do {
      if (local_c == 0) {
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        *(undefined *)(param_1 + 0xf) = 0;
        return 3;
      }
      puVar2 = *param_1;
      local_c = local_c + -1;
    } while ((puVar2[6] & 2) != 0);
    if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x22;
      *(undefined *)((int)param_1 + 0x3e) = 0x10;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_3;
      *(undefined2 *)((int)param_1 + 0x2a) = param_4;
      param_1[0xb] = DAT_080048c4;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      param_1[0x11] = param_2;
      **param_1 = **param_1 | 0x400;
      **param_1 = **param_1 | 0x100;
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080048c8>>FUN_080048c8>>////

undefined4 FUN_080048c8(uint **param_1,uint *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)((int)param_1 + 0x3d) == '(') {
    if (param_2 == (uint *)0x0) {
      uVar1 = 1;
    }
    else if (param_3 == 0) {
      uVar1 = 1;
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      puVar2 = *param_1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x29;
      *(undefined *)((int)param_1 + 0x3e) = 0x20;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_2;
      *(short *)((int)param_1 + 0x2a) = (short)param_3;
      param_1[0xb] = param_4;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x08004954>>FUN_08004954>>////

undefined4 FUN_08004954(uint **param_1,uint *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)((int)param_1 + 0x3d) == '(') {
    if (param_2 == (uint *)0x0) {
      uVar1 = 1;
    }
    else if (param_3 == 0) {
      uVar1 = 1;
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      puVar2 = *param_1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x2a;
      *(undefined *)((int)param_1 + 0x3e) = 0x20;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_2;
      *(short *)((int)param_1 + 0x2a) = (short)param_3;
      param_1[0xb] = param_4;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080049e0>>FUN_080049e0>>////

undefined4 FUN_080049e0(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x3d) != ' ') {
    return 2;
  }
  *(undefined *)((int)param_1 + 0x3d) = 0x28;
  puVar1 = *param_1;
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
  }
  **param_1 = **param_1 | 0x400;
  (*param_1)[1] = (*param_1)[1] | 0x300;
  return 0;
}


////>>0x08004a1e>>FUN_08004a1e>>////

void FUN_08004a1e(void)

{
  return;
}


////>>0x08004a20>>FUN_08004a20>>////

void FUN_08004a20(void)

{
  return;
}


////>>0x08004a22>>FUN_08004a22>>////

void FUN_08004a22(void)

{
  return;
}


////>>0x08004a24>>FUN_08004a24>>////

undefined4 FUN_08004a24(int *param_1)

{
  char cVar1;
  byte *pbVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    pbVar2 = (byte *)param_1[9];
    param_1[9] = (int)(pbVar2 + 1);
    *(uint *)(*param_1 + 0x10) = (uint)*pbVar2;
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    if ((*(short *)((int)param_1 + 0x2a) == 0) && (cVar1 == ')')) {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfffffbff;
      param_1[0xc] = 0x21;
      *(undefined *)((int)param_1 + 0x3d) = 0x28;
      FUN_08004a22();
    }
    return 0;
  }
  return 0;
}


////>>0x08004a74>>FUN_08004a74>>////

void FUN_08004a74(void)

{
  return;
}


////>>0x08004a76>>FUN_08004a76>>////

undefined4 FUN_08004a76(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    puVar2 = (undefined *)param_1[9];
    param_1[9] = (int)(puVar2 + 1);
    *puVar2 = (char)*(undefined4 *)(*param_1 + 0x10);
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    if ((*(short *)((int)param_1 + 0x2a) == 0) && (cVar1 == '*')) {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfffffbff;
      param_1[0xc] = 0x22;
      *(undefined *)((int)param_1 + 0x3d) = 0x28;
      FUN_08004a74();
    }
  }
  return 0;
}


////>>0x08004ac2>>FUN_08004ac2>>////

undefined4 FUN_08004ac2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*param_1 + 0x18);
  if ((uVar2 & 0x80) == 0) {
    uVar1 = *(undefined2 *)(param_1 + 3);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 6);
  }
  FUN_08007fa0(param_1,(*(uint *)(*param_1 + 0x18) & 4) == 0,uVar1,uVar2,param_4);
  return 0;
}


////>>0x08004aec>>FUN_08004aec>>////

undefined4 FUN_08004aec(uint **param_1)

{
  if (((param_1[0xb] == (uint *)0x4) || (param_1[0xb] == (uint *)0x8)) &&
     (*(char *)((int)param_1 + 0x3d) == '(')) {
    param_1[0xb] = DAT_08004b7c;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    FUN_08007ff0();
  }
  else if (*(char *)((int)param_1 + 0x3d) == '!') {
    param_1[0xb] = DAT_08004b7c;
    param_1[0xc] = (uint *)0x21;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    FUN_08004a22();
  }
  else {
    (*param_1)[5] = 0xfffffbff;
  }
  return 0;
}


////>>0x08004b80>>FUN_08004b80>>////

void FUN_08004b80(void)

{
  return;
}


////>>0x08004b82>>FUN_08004b82>>////

undefined4 FUN_08004b82(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  puVar2 = param_1[0xb];
  if ((*(short *)(param_1 + 10) == 0) && (cVar1 == '!')) {
    if ((puVar2 == (uint *)0x4) || ((puVar2 == (uint *)0x8 || (puVar2 == (uint *)0xffff0000)))) {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      **param_1 = **param_1 | 0x200;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      if (*(char *)((int)param_1 + 0x3e) == '@') {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        FUN_08004b80();
      }
      else {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        FUN_08004a1e();
      }
    }
    else {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      param_1[0xc] = (uint *)0x11;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      FUN_08004a1e();
    }
  }
  else if ((cVar1 == '!') || ((*(char *)((int)param_1 + 0x3e) == '@' && (cVar1 == '\"')))) {
    if (*(short *)((int)param_1 + 0x2a) == 0) {
      (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
    }
    else if (*(char *)((int)param_1 + 0x3e) == '@') {
      if (param_1[0x14] == (uint *)0x0) {
        if (param_1[0x13] == (uint *)0x1) {
          (*param_1)[4] = (uint)param_1[0x12] & 0xff;
          param_1[0x14] = (uint *)((int)param_1[0x14] + 2);
        }
        else {
          (*param_1)[4] = (uint)((int)param_1[0x12] << 0x10) >> 0x18;
          param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
        }
      }
      else if (param_1[0x14] == (uint *)0x1) {
        (*param_1)[4] = (uint)param_1[0x12] & 0xff;
        param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
      }
      else if (param_1[0x14] == (uint *)0x2) {
        if (*(char *)((int)param_1 + 0x3d) == '\"') {
          **param_1 = **param_1 | 0x100;
        }
        else if (*(char *)((int)param_1 + 0x3d) == '!') {
          puVar2 = param_1[9];
          param_1[9] = (uint *)((int)puVar2 + 1);
          (*param_1)[4] = (uint)*(byte *)puVar2;
          *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
        }
      }
    }
    else {
      puVar2 = param_1[9];
      param_1[9] = (uint *)((int)puVar2 + 1);
      (*param_1)[4] = (uint)*(byte *)puVar2;
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x08004ccc>>FUN_08004ccc>>////

undefined4 FUN_08004ccc(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if (*(char *)((int)param_1 + 0x3d) == '!') {
    if (*(short *)((int)param_1 + 0x2a) == 0) {
      if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        **param_1 = **param_1 | 0x200;
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        if (*(char *)((int)param_1 + 0x3e) == '@') {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08004b80();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08004a1e();
        }
      }
      else {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        param_1[0xc] = (uint *)0x11;
        *(undefined *)((int)param_1 + 0x3e) = 0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        FUN_08004a1e();
      }
    }
    else {
      puVar1 = param_1[9];
      param_1[9] = (uint *)((int)puVar1 + 1);
      (*param_1)[4] = (uint)*(byte *)puVar1;
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x08004d6a>>FUN_08004d6a>>////

void FUN_08004d6a(void)

{
  return;
}


////>>0x08004d6c>>FUN_08004d6c>>////

undefined4 FUN_08004d6c(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x3d) == '\"') {
    if (*(ushort *)((int)param_1 + 0x2a) < 4) {
      if (*(ushort *)((int)param_1 + 0x2a) - 2 < 2) {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
          **param_1 = **param_1 | 0x800;
        }
        (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
      }
      else {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
        }
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        puVar1 = param_1[9];
        param_1[9] = (uint *)((int)puVar1 + 1);
        *(char *)puVar1 = (char)(*param_1)[4];
        *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        param_1[0xc] = (uint *)0x0;
        if (*(char *)((int)param_1 + 0x3e) == '@') {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08004d6a();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08004a20();
        }
      }
    }
    else {
      puVar1 = param_1[9];
      param_1[9] = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)(*param_1)[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x08004e3c>>FUN_08004e3c>>////

undefined4 FUN_08004e3c(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if (*(short *)((int)param_1 + 0x2a) == 3) {
    if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
      **param_1 = **param_1 & 0xfffffbff;
    }
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  else if (*(short *)((int)param_1 + 0x2a) == 2) {
    if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
      (*param_1)[1] = (*param_1)[1] & 0xfffffcff;
      **param_1 = **param_1 | 0x200;
    }
    else {
      if (puVar1 == (uint *)0x2) {
        **param_1 = **param_1 | 0x400;
      }
      else {
        **param_1 = **param_1 & 0xfffffbff;
      }
      (*param_1)[1] = (*param_1)[1] & 0xfffffcff;
    }
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    param_1[0xc] = (uint *)0x0;
    if (*(char *)((int)param_1 + 0x3e) == '@') {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08004d6a();
    }
    else {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08004a20();
    }
  }
  else {
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x08004f3a>>FUN_08004f3a>>////

void FUN_08004f3a(void)

{
  return;
}


////>>0x08004f3c>>FUN_08004f3c>>////

void FUN_08004f3c(uint **param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*(byte *)((int)param_1 + 0x3d) - 0x29 < 2) {
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x28;
  }
  else {
    if ((*(char *)((int)param_1 + 0x3d) != '`') && (((*param_1)[1] & 0x800) == 0)) {
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
    }
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3e) = 0;
  }
  **param_1 = **param_1 & 0xfffff7ff;
  puVar3 = *param_1;
  if ((puVar3[1] & 0x800) == 0) {
    if (*(char *)((int)param_1 + 0x3d) == '`') {
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      param_1[0x10] = (uint *)0x0;
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      **param_1 = **param_1 & 0xfffffffe;
      FUN_08004f3a(param_1);
    }
    else {
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      FUN_08008020(param_1);
    }
  }
  else {
    puVar3[1] = puVar3[1] & 0xfffff7ff;
    if (*(char *)((int)param_1[0xd] + 0x21) == '\x01') {
      param_1[0xe][0xd] = (uint)PTR_LAB_080053cc_1_0800507c;
      iVar1 = FUN_08004050(param_1[0xe]);
      if (iVar1 != 0) {
        if (((*param_1)[5] & 0x40) != 0) {
          puVar3 = param_1[9];
          param_1[9] = (uint *)((int)puVar3 + 1);
          *(char *)puVar3 = (char)(*param_1)[4];
        }
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xe][0xd])();
      }
    }
    else {
      param_1[0xd][0xd] = (uint)PTR_LAB_080053cc_1_0800507c;
      iVar1 = FUN_08004050(param_1[0xd]);
      if (iVar1 != 0) {
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xd][0xd])();
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x3d) == '(') && (((uint)param_1[0x10] & 4) != 0)) {
    param_1[0xb] = DAT_08005080;
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    FUN_08007ff0(param_1);
  }
  return;
}


////>>0x08005084>>FUN_08005084>>////

undefined4 FUN_08005084(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
  **param_1 = **param_1 | 1;
  **param_1 = **param_1 & 0xfffffbff;
  puVar2 = *param_1;
  if ((puVar2[1] & 0x800) != 0) {
    if ((*(char *)((int)param_1 + 0x3d) == '\"') || (*(char *)((int)param_1 + 0x3d) == '*')) {
      *(short *)((int)param_1 + 0x2a) = (short)*(undefined4 *)(*param_1[0xe] + 4);
    }
    else {
      *(short *)((int)param_1 + 0x2a) = (short)*(undefined4 *)(*param_1[0xd] + 4);
    }
  }
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    if ((puVar2[5] & 4) != 0) {
      puVar3 = param_1[9];
      param_1[9] = (uint *)((int)puVar3 + 1);
      *(char *)puVar3 = (char)puVar2[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
    if (((*param_1)[5] & 0x40) != 0) {
      puVar2 = param_1[9];
      param_1[9] = (uint *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)(*param_1)[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 4);
  }
  if (param_1[0x10] == (uint *)0x0) {
    if (((cVar1 == '(') || (cVar1 == '*')) || (cVar1 == ')')) {
      param_1[0xb] = DAT_08005184;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08007ff0();
    }
    else if ((param_1[0xc] == (uint *)0x22) || (cVar1 == '\"')) {
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08004a74();
    }
  }
  else {
    FUN_08004f3c();
  }
  return 0;
}


////>>0x08005188>>FUN_08005188>>////

void FUN_08005188(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar4 = *(uint *)(iVar1 + 0x18);
  uVar2 = *(uint *)(iVar1 + 0x14);
  uVar3 = *(uint *)(iVar1 + 4);
  if ((*(char *)((int)param_1 + 0x3e) == '\x10') || (*(char *)((int)param_1 + 0x3e) == '@')) {
    if (((uVar2 & 0x10001) == 0) || ((uVar3 & 0x200) == 0)) {
      if (((DAT_080052e8 & uVar2) == 0) || ((uVar3 & 0x200) == 0)) {
        if (((DAT_080052d4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
          FUN_080043a2(param_1);
        }
      }
      else {
        FUN_08004396(param_1);
      }
    }
    else {
      FUN_0800430c(param_1);
    }
    if ((DAT_080052dc & uVar4) == 0) {
      if ((((DAT_080052ec & uVar2) != 0) && ((uVar3 & 0x400) != 0)) && ((DAT_080052e4 & uVar2) == 0)
         ) {
        FUN_08004d6c(param_1);
        return;
      }
      if (((DAT_080052e4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08004e3c(param_1);
        return;
      }
    }
    else {
      if ((((DAT_080052e0 & uVar2) != 0) && ((uVar3 & 0x400) != 0)) && ((DAT_080052e4 & uVar2) == 0)
         ) {
        FUN_08004b82(param_1);
        return;
      }
      if (((DAT_080052e4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08004ccc(param_1);
        return;
      }
    }
  }
  else {
    if (((DAT_080052d4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_08004ac2();
      return;
    }
    if (((DAT_080052d8 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_08005084(param_1);
      return;
    }
    if ((DAT_080052dc & uVar4) == 0) {
      if ((((DAT_080052ec & uVar2) != 0) && ((uVar3 & 0x400) != 0)) && ((DAT_080052e4 & uVar2) == 0)
         ) {
        FUN_08004a76(param_1);
        return;
      }
      if (((DAT_080052e4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_0800459c(param_1);
      }
    }
    else {
      if ((((DAT_080052e0 & uVar2) != 0) && ((uVar3 & 0x400) != 0)) && ((DAT_080052e4 & uVar2) == 0)
         ) {
        FUN_08004a24(param_1);
        return;
      }
      if (((DAT_080052e4 & uVar2) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_0800457c(param_1);
        return;
      }
    }
  }
  return;
}


////>>0x080052f0>>FUN_080052f0>>////

void FUN_080052f0(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = *param_1;
  uVar3 = puVar2[5];
  uVar4 = puVar2[1];
  if (((uVar3 & DAT_080053c8) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 1);
    puVar2[5] = 0xfffffeff;
    **param_1 = **param_1 | 0x8000;
  }
  if (((uVar3 & 0x10200) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 2);
    (*param_1)[5] = 0xfffffdff;
  }
  if (((uVar3 & 0x10400) != 0) && ((uVar4 & 0x100) != 0)) {
    cVar1 = *(char *)((int)param_1 + 0x3d);
    if (((*(char *)((int)param_1 + 0x3e) == ' ') && (*(short *)((int)param_1 + 0x2a) == 0)) &&
       (((cVar1 == '!' || (cVar1 == ')')) || ((cVar1 == '(' && (param_1[0xc] == (uint *)0x21)))))) {
      FUN_08004aec(param_1);
    }
    else {
      param_1[0x10] = (uint *)((uint)param_1[0x10] | 4);
      if (*(char *)((int)param_1 + 0x3e) == '\x10') {
        **param_1 = **param_1 | 0x200;
      }
      (*param_1)[5] = 0xfffffbff;
    }
  }
  if (((uVar3 & 0x10800) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 8);
    (*param_1)[5] = 0xfffff7ff;
  }
  if (param_1[0x10] != (uint *)0x0) {
    FUN_08004f3c(param_1);
  }
  return;
}


////>>0x0800542a>>FUN_0800542a>>////

undefined FUN_0800542a(int param_1)

{
  return *(undefined *)(param_1 + 0x3d);
}


////>>0x08005430>>FUN_08005430>>////

undefined4 FUN_08005430(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


////>>0x08005434>>FUN_08005434>>////

void FUN_08005434(int param_1)

{
  bool bVar1;
  int local_4;
  
  local_4 = param_1 * (uint)((ulonglong)DAT_0800545c * (ulonglong)*(uint *)PTR_DAT_08005458 >> 0x29)
  ;
  do {
    bVar1 = local_4 != 0;
    local_4 = local_4 + -1;
  } while (bVar1);
  return;
}


////>>0x08005460>>FUN_08005460>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08005460(uint *param_1)

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
        iVar3 = FUN_08003760();
        while ((*DAT_08005720 & 0x20000) != 0) {
          iVar4 = FUN_08003760();
          if (100 < (uint)(iVar4 - iVar3)) {
            return 3;
          }
        }
      }
      else {
        iVar3 = FUN_08003760();
        while ((*DAT_08005720 & 0x20000) == 0) {
          iVar4 = FUN_08003760();
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
      iVar3 = FUN_08003760();
      while ((*DAT_08005720 & 2) != 0) {
        iVar4 = FUN_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005724 = 1;
      iVar3 = FUN_08003760();
      while ((*DAT_08005720 & 2) == 0) {
        iVar4 = FUN_08003760();
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
      iVar3 = FUN_08003760();
      while ((DAT_08005720[9] & 2) != 0) {
        iVar4 = FUN_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      *DAT_08005728 = 1;
      iVar3 = FUN_08003760();
      while ((DAT_08005720[9] & 2) == 0) {
        iVar4 = FUN_08003760();
        if (2 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
      FUN_08005434(1);
    }
  }
  if ((*param_1 & 4) != 0) {
    bVar7 = (DAT_08005720[7] & 0x10000000) == 0;
    if (bVar7) {
      DAT_08005720[7] = DAT_08005720[7] | 0x10000000;
    }
    if ((*DAT_0800572c & 0x100) == 0) {
      *DAT_0800572c = *DAT_0800572c | 0x100;
      iVar3 = FUN_08003760();
      while ((*DAT_0800572c & 0x100) == 0) {
        iVar4 = FUN_08003760();
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
      iVar3 = FUN_08003760();
      while ((DAT_08005838[8] & 2) != 0) {
        iVar4 = FUN_08003760();
        if (5000 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    else {
      iVar3 = FUN_08003760();
      while ((DAT_08005720[8] & 2) == 0) {
        iVar4 = FUN_08003760();
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
    iVar3 = FUN_08003760();
    do {
      if ((*DAT_08005838 & 0x2000000) == 0) {
        if (param_1[8] == 0x10000) {
          DAT_08005838[1] = DAT_08005838[1] & 0xfffdffff | param_1[2];
        }
        DAT_08005838[1] = DAT_08005838[1] & 0xffc2ffff | param_1[8] | param_1[9];
        *DAT_0800583c = 1;
        iVar3 = FUN_08003760();
        do {
          if ((*DAT_08005838 & 0x2000000) != 0) {
            return 0;
          }
          iVar4 = FUN_08003760();
        } while ((uint)(iVar4 - iVar3) < 3);
        return 3;
      }
      iVar4 = FUN_08003760();
    } while ((uint)(iVar4 - iVar3) < 3);
    uVar5 = 3;
  }
  else {
    *DAT_0800583c = 0;
    iVar3 = FUN_08003760();
    do {
      if ((*DAT_08005838 & 0x2000000) == 0) {
        return 0;
      }
      iVar4 = FUN_08003760();
    } while ((uint)(iVar4 - iVar3) < 3);
    uVar5 = 3;
  }
  return uVar5;
}


////>>0x08005840>>FUN_08005840>>////

uint FUN_08005840(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_1c;
  byte abStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(PTR_DAT_0800589c + 8);
  uStack_10 = *(undefined4 *)(PTR_DAT_0800589c + 4);
  uStack_14 = *(undefined4 *)PTR_DAT_0800589c;
  local_1c = *(undefined2 *)(PTR_DAT_0800589c + 0x10);
  uVar2 = *(uint *)(DAT_080058a0 + 4);
  uVar1 = DAT_080058a8;
  if ((uVar2 & 0xc) == 8) {
    if ((uVar2 & 0x10000) == 0) {
      uVar1 = DAT_080058a4 * (uint)abStack_18[(uVar2 << 10) >> 0x1c];
    }
    else {
      uVar1 = (DAT_080058a8 * abStack_18[(uVar2 << 10) >> 0x1c]) /
              (uint)*(byte *)((int)&local_1c - ((*(int *)(DAT_080058a0 + 4) << 0xe) >> 0x1f));
    }
  }
  return uVar1;
}


////>>0x080058ac>>FUN_080058ac>>////

undefined4 FUN_080058ac(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_08005a0c;
  if (((*DAT_08005a0c & 7) < param_2) &&
     (*DAT_08005a0c = *DAT_08005a0c & 0xfffffff8 | param_2, param_2 != (*puVar1 & 7))) {
    return 1;
  }
  if ((*param_1 & 2) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffff0f | param_1[2];
  }
  if ((*param_1 & 1) != 0) {
    uVar4 = param_1[1];
    if (uVar4 == 1) {
      if ((*DAT_08005a10 & 0x20000) == 0) {
        return 1;
      }
    }
    else if ((uVar4 != 2) && ((*DAT_08005a10 & 2) == 0)) {
      return 1;
    }
    DAT_08005a10[1] = uVar4 | DAT_08005a10[1] & 0xfffffffc;
    iVar2 = FUN_08003760();
    if (param_1[1] == 1) {
      while ((DAT_08005a10[1] & 0xc) != 4) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((DAT_08005a10[1] & 0xc) != 8) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      while ((DAT_08005a10[1] & 0xc) != 0) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
  }
  puVar1 = DAT_08005a0c;
  if ((param_2 < (*DAT_08005a0c & 7)) &&
     (*DAT_08005a0c = *DAT_08005a0c & 0xfffffff8 | param_2, param_2 != (*puVar1 & 7))) {
    return 1;
  }
  if ((*param_1 & 4) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xfffff8ff | param_1[3];
  }
  if ((*param_1 & 8) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffc7ff | param_1[4] << 3;
  }
  uVar4 = FUN_08005840();
  *(uint *)PTR_DAT_08005a18 = uVar4 >> PTR_DAT_08005a14[(DAT_08005a10[1] << 0x18) >> 0x1c];
  FUN_080036d8(0xf);
  return 0;
}


////>>0x080058d2>>FUN_080058d2>>////

undefined4 FUN_080058d2(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*param_1 & 2) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffff0f | param_1[2];
  }
  if ((*param_1 & 1) != 0) {
    uVar4 = param_1[1];
    if (uVar4 == 1) {
      if ((*DAT_08005a10 & 0x20000) == 0) {
        return 1;
      }
    }
    else if ((uVar4 != 2) && ((*DAT_08005a10 & 2) == 0)) {
      return 1;
    }
    DAT_08005a10[1] = uVar4 | DAT_08005a10[1] & 0xfffffffc;
    iVar2 = FUN_08003760();
    if (param_1[1] == 1) {
      while ((DAT_08005a10[1] & 0xc) != 4) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((DAT_08005a10[1] & 0xc) != 8) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      while ((DAT_08005a10[1] & 0xc) != 0) {
        iVar3 = FUN_08003760();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
  }
  puVar1 = DAT_08005a0c;
  if ((param_2 < (*DAT_08005a0c & 7)) &&
     (*DAT_08005a0c = *DAT_08005a0c & 0xfffffff8 | param_2, param_2 != (*puVar1 & 7))) {
    return 1;
  }
  if ((*param_1 & 4) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xfffff8ff | param_1[3];
  }
  if ((*param_1 & 8) != 0) {
    DAT_08005a10[1] = DAT_08005a10[1] & 0xffffc7ff | param_1[4] << 3;
  }
  uVar4 = FUN_08005840();
  *(uint *)PTR_DAT_08005a18 = uVar4 >> PTR_DAT_08005a14[(DAT_08005a10[1] << 0x18) >> 0x1c];
  FUN_080036d8(0xf);
  return 0;
}


////>>0x08005a1c>>FUN_08005a1c>>////

undefined4 FUN_08005a1c(void)

{
  return *(undefined4 *)PTR_DAT_08005a24;
}


////>>0x08005a28>>FUN_08005a28>>////

uint FUN_08005a28(void)

{
  uint uVar1;
  
  uVar1 = FUN_08005a1c();
  return uVar1 >> PTR_DAT_08005a44[(uint)(*(int *)(DAT_08005a40 + 4) << 0x15) >> 0x1d];
}


////>>0x08005a48>>FUN_08005a48>>////

uint FUN_08005a48(void)

{
  uint uVar1;
  
  uVar1 = FUN_08005a1c();
  return uVar1 >> PTR_DAT_08005a64[(uint)(*(int *)(DAT_08005a60 + 4) << 0x12) >> 0x1d];
}


////>>0x08005a68>>FUN_08005a68>>////

void FUN_08005a68(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  
  *param_1 = 0xf;
  iVar1 = DAT_08005a9c;
  param_1[1] = *(uint *)(DAT_08005a9c + 4) & 3;
  param_1[2] = *(uint *)(iVar1 + 4) & 0xf0;
  param_1[3] = *(uint *)(iVar1 + 4) & 0x700;
  param_1[4] = *(uint *)(iVar1 + 4) >> 3 & 0x700;
  *param_2 = *DAT_08005aa0 & 7;
  return;
}


////>>0x08005aa4>>FUN_08005aa4>>////

undefined4 FUN_08005aa4(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if ((*param_1 & 1) != 0) {
    bVar5 = (*(uint *)(DAT_08005bac + 0x1c) & 0x10000000) == 0;
    if (bVar5) {
      *(uint *)(DAT_08005bac + 0x1c) = *(uint *)(DAT_08005bac + 0x1c) | 0x10000000;
    }
    if ((*DAT_08005bb0 & 0x100) == 0) {
      *DAT_08005bb0 = *DAT_08005bb0 | 0x100;
      iVar2 = FUN_08003760();
      while ((*DAT_08005bb0 & 0x100) == 0) {
        iVar3 = FUN_08003760();
        if (100 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    puVar1 = DAT_08005bb4;
    iVar2 = DAT_08005bac;
    uVar4 = *(uint *)(DAT_08005bac + 0x20) & 0x300;
    if ((uVar4 != 0) && (uVar4 != (param_1[1] & 0x300))) {
      uVar4 = *(uint *)(DAT_08005bac + 0x20);
      *DAT_08005bb4 = 1;
      *puVar1 = 0;
      *(uint *)(iVar2 + 0x20) = uVar4 & 0xfffffcff;
      if ((uVar4 & 1) != 0) {
        iVar2 = FUN_08003760();
        while ((*(uint *)(DAT_08005bac + 0x20) & 2) == 0) {
          iVar3 = FUN_08003760();
          if (5000 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
    }
    iVar2 = DAT_08005bac;
    *(uint *)(DAT_08005bac + 0x20) = *(uint *)(DAT_08005bac + 0x20) & 0xfffffcff | param_1[1];
    if (bVar5) {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xefffffff;
    }
  }
  if ((*param_1 & 2) != 0) {
    *(uint *)(DAT_08005bac + 4) = *(uint *)(DAT_08005bac + 4) & 0xffff3fff | param_1[2];
  }
  if ((*param_1 & 0x10) != 0) {
    *(uint *)(DAT_08005bac + 4) = *(uint *)(DAT_08005bac + 4) & 0xffbfffff | param_1[3];
  }
  return 0;
}


////>>0x08005bb8>>FUN_08005bb8>>////

uint FUN_08005bb8(int param_1)

{
  uint uVar1;
  undefined2 local_24;
  byte abStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(PTR_DAT_08005ca0 + 8);
  uStack_18 = *(undefined4 *)(PTR_DAT_08005ca0 + 4);
  uStack_1c = *(undefined4 *)PTR_DAT_08005ca0;
  local_24 = *(undefined2 *)(PTR_DAT_08005ca0 + 0x10);
  if (param_1 == 2) {
    uVar1 = FUN_08005a48();
    uVar1 = uVar1 / ((((DAT_08005ca4[1] << 0x10) >> 0x1e) + 1) * 2);
  }
  else if (param_1 == 0x10) {
    if ((*DAT_08005ca4 & 0x1000000) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = DAT_08005cb0;
      if ((DAT_08005ca4[1] & 0x10000) != 0) {
        uVar1 = DAT_08005ca8 / *(byte *)((int)&local_24 - ((int)(DAT_08005ca4[1] << 0xe) >> 0x1f));
      }
      uVar1 = uVar1 * abStack_20[(DAT_08005ca4[1] << 10) >> 0x1c];
      if ((DAT_08005ca4[1] & 0x400000) == 0) {
        uVar1 = (uint)((ulonglong)DAT_08005cac * (ulonglong)(uVar1 * 2) >> 0x21);
      }
    }
  }
  else if (param_1 == 1) {
    if ((DAT_08005ca4[8] & 0x302) == 0x102) {
      uVar1 = 0x8000;
    }
    else {
      uVar1 = DAT_08005ca4[8] & 0x300;
      if ((uVar1 == 0x200) && ((DAT_08005ca4[9] & 2) != 0)) {
        uVar1 = 32000;
      }
      else if (uVar1 == 0x300) {
        if ((*DAT_08005ca4 & 0x20000) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0xf424;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08005cb4>>FUN_08005cb4>>////

void FUN_08005cb4(uint **param_1)

{
  if (((**param_1 & 2) != 0) && (((*param_1)[1] & 2) != 0)) {
    FUN_080073c0();
    (*param_1)[1] = 0xfffffffd;
  }
  *(undefined4 *)(DAT_08005ce8 + 0x14) = 0x20000;
  *(undefined *)((int)param_1 + 0x11) = 1;
  return;
}


////>>0x08005cec>>FUN_08005cec>>////

void FUN_08005cec(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xfffffffd | param_2[2];
  if (param_1 == DAT_08005d44) {
    uVar1 = (uVar1 & 0xfffffff7 | param_2[3]) & 0xfffffffb;
    uVar2 = uVar2 & 0xfffffcff | param_2[5] | param_2[6];
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff8c | uVar3;
  *(uint *)(param_1 + 0x34) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08005d48>>FUN_08005d48>>////

void FUN_08005d48(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xfffffdff | param_2[2] << 8;
  if (param_1 == DAT_08005da8) {
    uVar1 = (uVar1 & 0xfffff7ff | param_2[3] << 8) & 0xfffffbff;
    uVar2 = uVar2 & 0xffffcfff | param_2[5] << 4 | param_2[6] << 4;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff8c | uVar3;
  *(uint *)(param_1 + 0x3c) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08005dac>>FUN_08005dac>>////

void FUN_08005dac(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *param_2;
  iVar3 = param_2[2];
  if (param_1 == DAT_08005df0) {
    uVar1 = uVar1 & 0xffffbfff | param_2[5] << 6;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8cff | iVar2 << 8;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff | iVar3 << 0xc;
  return;
}


////>>0x08005df4>>FUN_08005df4>>////

void FUN_08005df4(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x3d) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  FUN_08007710(param_1);
  *(undefined *)((int)param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}


////>>0x08005e2e>>FUN_08005e2e>>////

void FUN_08005e2e(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x3d) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  FUN_08007110(param_1);
  *(undefined *)((int)param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}


////>>0x08005e68>>FUN_08005e68>>////

void FUN_08005e68(void)

{
  return;
}


////>>0x08005e6a>>FUN_08005e6a>>////

void FUN_08005e6a(void)

{
  return;
}


////>>0x08005e6c>>FUN_08005e6c>>////

void FUN_08005e6c(void)

{
  return;
}


////>>0x08005e6e>>FUN_08005e6e>>////

void FUN_08005e6e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffd;
    *(undefined *)(param_1 + 7) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      FUN_0800771c();
      FUN_08005e6a(param_1);
    }
    else {
      FUN_08005e68();
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 4) != 0) && ((*(uint *)(iVar1 + 0xc) & 4) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffb;
    *(undefined *)(param_1 + 7) = 2;
    if ((*(uint *)(*param_1 + 0x18) & 0x300) == 0) {
      FUN_0800771c(param_1);
      FUN_08005e6a(param_1);
    }
    else {
      FUN_08005e68(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 8) != 0) && ((*(uint *)(iVar1 + 0xc) & 8) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffff7;
    *(undefined *)(param_1 + 7) = 4;
    if ((*(uint *)(*param_1 + 0x1c) & 3) == 0) {
      FUN_0800771c(param_1);
      FUN_08005e6a(param_1);
    }
    else {
      FUN_08005e68(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x10) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffef;
    *(undefined *)(param_1 + 7) = 8;
    if ((*(uint *)(*param_1 + 0x1c) & 0x300) == 0) {
      FUN_0800771c(param_1);
      FUN_08005e6a(param_1);
    }
    else {
      FUN_08005e68(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 1) != 0) && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffe;
    FUN_08007736(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x80) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x80) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffff7f;
    FUN_080064ae(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x40) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x40) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffbf;
    FUN_08005e6c(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x20) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x20) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffdf;
    FUN_080064ac(param_1);
  }
  return;
}


////>>0x08005fe8>>FUN_08005fe8>>////

void FUN_08005fe8(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((param_1 == DAT_0800605c) || (param_1 == (uint *)0x40000000)) ||
      (param_1 == DAT_0800605c + -0x4a00)) || (param_1 == DAT_0800605c + -0x4900)) {
    uVar1 = uVar1 & 0xffffff8f | param_2[1];
  }
  if (((param_1 == DAT_0800605c) || (param_1 == (uint *)0x40000000)) ||
     ((param_1 == DAT_0800605c + -0x4a00 || (param_1 == DAT_0800605c + -0x4900)))) {
    uVar1 = uVar1 & 0xfffffcff | param_2[3];
  }
  *param_1 = uVar1 & 0xffffff7f | param_2[5];
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if (param_1 == DAT_0800605c) {
    param_1[0xc] = param_2[4];
  }
  param_1[5] = 1;
  return;
}


////>>0x08006060>>FUN_08006060>>////

undefined4 FUN_08006060(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      FUN_08007708();
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    FUN_08005fe8(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    return 0;
  }
  return 1;
}


////>>0x08006092>>FUN_08006092>>////

undefined4 FUN_08006092(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      FUN_08006e68();
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    FUN_08005fe8(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    return 0;
  }
  return 1;
}


////>>0x080060c4>>FUN_080060c4>>////

void FUN_080060c4(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xffffffdf | param_2[2] << 4;
  if (param_1 == DAT_08006124) {
    uVar1 = (uVar1 & 0xffffff7f | param_2[3] << 4) & 0xffffffbf;
    uVar2 = uVar2 & 0xfffff3ff | param_2[5] << 2 | param_2[6] << 2;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8cff | iVar3 << 8;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08006128>>FUN_08006128>>////

undefined4 FUN_08006128(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0xf) != '\x01') {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    switch(param_3) {
    case 0:
      FUN_08005cec(*param_1);
      break;
    case 4:
      FUN_080060c4(*param_1);
      break;
    case 8:
      FUN_08005d48(*param_1);
      break;
    case 0xc:
      FUN_08005dac(*param_1);
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    return 0;
  }
  return 2;
}


////>>0x08006186>>FUN_08006186>>////

undefined4 FUN_08006186(int *param_1,int param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0xf) != '\x01') {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    switch(param_3) {
    case 0:
      FUN_08005cec(*param_1);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 8;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffb;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | *(uint *)(param_2 + 0x10);
      break;
    case 4:
      FUN_080060c4(*param_1);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffbff;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | *(int *)(param_2 + 0x10) << 8;
      break;
    case 8:
      FUN_08005d48(*param_1);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffffb;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | *(uint *)(param_2 + 0x10);
      break;
    case 0xc:
      FUN_08005dac(*param_1);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x800;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffbff;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | *(int *)(param_2 + 0x10) << 8;
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    return 0;
  }
  return 2;
}


////>>0x08006262>>FUN_08006262>>////

void FUN_08006262(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x08006280>>FUN_08006280>>////

undefined4 FUN_08006280(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  switch(param_2) {
  case 0:
    (*param_1)[3] = (*param_1)[3] | 2;
    break;
  case 4:
    (*param_1)[3] = (*param_1)[3] | 4;
    break;
  case 8:
    (*param_1)[3] = (*param_1)[3] | 8;
    break;
  case 0xc:
    (*param_1)[3] = (*param_1)[3] | 0x10;
  }
  FUN_08006262(*param_1,param_2,1);
  puVar1 = *param_1;
  if (puVar1 == DAT_080062f0) {
    puVar1[0x11] = puVar1[0x11] | 0x8000;
  }
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x080062f4>>FUN_080062f4>>////

undefined4 FUN_080062f4(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  switch(param_2) {
  case 0:
    (*param_1)[3] = (*param_1)[3] & 0xfffffffd;
    break;
  case 4:
    (*param_1)[3] = (*param_1)[3] & 0xfffffffb;
    break;
  case 8:
    (*param_1)[3] = (*param_1)[3] & 0xfffffff7;
    break;
  case 0xc:
    (*param_1)[3] = (*param_1)[3] & 0xffffffef;
  }
  FUN_08006262(*param_1,param_2,0);
  puVar1 = *param_1;
  if (((puVar1 == DAT_0800638c) && ((puVar1[8] & 0x1111) == 0)) && ((puVar1[8] & 0x444) == 0)) {
    puVar1[0x11] = puVar1[0x11] & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return 0;
}


////>>0x08006390>>FUN_08006390>>////

undefined4 FUN_08006390(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_08006262(*param_1,param_2,1);
  puVar1 = *param_1;
  if (puVar1 == DAT_080063bc) {
    puVar1[0x11] = puVar1[0x11] | 0x8000;
  }
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x080063c0>>FUN_080063c0>>////

undefined4 FUN_080063c0(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_08006262(*param_1,param_2,0);
  puVar1 = *param_1;
  if (((puVar1 == DAT_0800641c) && ((puVar1[8] & 0x1111) == 0)) && ((puVar1[8] & 0x444) == 0)) {
    puVar1[0x11] = puVar1[0x11] & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined *)((int)param_1 + 0x3d) = 1;
  return 0;
}


////>>0x08006420>>FUN_08006420>>////

void FUN_08006420(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(4 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x0800643c>>FUN_0800643c>>////

undefined4 FUN_0800643c(uint **param_1,undefined4 param_2)

{
  FUN_08006420(*param_1,param_2,4);
  (*param_1)[0x11] = (*param_1)[0x11] | 0x8000;
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x08006460>>FUN_08006460>>////

undefined4 FUN_08006460(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_08006420(*param_1,param_2,0);
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    puVar1[0x11] = puVar1[0x11] & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return 0;
}


////>>0x080064ac>>FUN_080064ac>>////

void FUN_080064ac(void)

{
  return;
}


////>>0x080064ae>>FUN_080064ae>>////

void FUN_080064ae(void)

{
  return;
}


////>>0x080064b0>>FUN_080064b0>>////

void FUN_080064b0(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  return;
}


////>>0x080064cc>>FUN_080064cc>>////

undefined4 FUN_080064cc(int *param_1)

{
  short sVar1;
  byte *pbVar2;
  
  if (*(char *)((int)param_1 + 0x39) != '!') {
    return 2;
  }
  if (param_1[2] == 0x1000) {
    *(uint *)(*param_1 + 4) = *(ushort *)param_1[8] & 0x1ff;
    if (param_1[4] == 0) {
      param_1[8] = param_1[8] + 2;
    }
    else {
      param_1[8] = param_1[8] + 1;
    }
  }
  else {
    pbVar2 = (byte *)param_1[8];
    param_1[8] = (int)(pbVar2 + 1);
    *(uint *)(*param_1 + 4) = (uint)*pbVar2;
  }
  sVar1 = *(short *)((int)param_1 + 0x26) + -1;
  *(short *)((int)param_1 + 0x26) = sVar1;
  if (sVar1 == 0) {
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff7f;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x40;
    return 0;
  }
  return 0;
}


////>>0x08006538>>FUN_08006538>>////

void FUN_08006538(int *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(*param_1 + 0xc) =
       param_1[2] | param_1[4] | param_1[5] | *(uint *)(*param_1 + 0xc) & 0xffffe9f3;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  iVar12 = *param_1;
  if (iVar12 != DAT_080066e0) {
    iVar3 = FUN_08005a28();
    uVar2 = DAT_080066e4;
    iVar8 = param_1[1];
    uVar1 = (ulonglong)DAT_080066e4;
    iVar4 = FUN_08005a28();
    iVar9 = param_1[1];
    iVar5 = FUN_08005a28();
    iVar10 = param_1[1];
    iVar6 = FUN_08005a28();
    iVar11 = param_1[1];
    iVar7 = FUN_08005a28();
    *(uint *)(iVar12 + 8) =
         ((uint)((int)((ulonglong)uVar2 *
                       (ulonglong)
                       (((uint)(iVar6 * 0x19) / (uint)(iVar11 << 2) +
                        (uint)((ulonglong)uVar2 *
                               ((ulonglong)(uint)(iVar7 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)
                               ) >> 0x25) * -100) * 0x10 + 0x32) >> 0x20) << 0x17) >> 0x1c) +
         ((uint)((ulonglong)uVar2 *
                 (ulonglong)
                 (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 2) +
                  (uint)((ulonglong)uVar2 *
                         ((ulonglong)(uint)(iVar5 * 0x19) / (ulonglong)(uint)(iVar10 << 2)) >> 0x25)
                  * -100) * 0x10 + 0x32) >> 0x25) & 0xf0) +
         (uint)(uVar1 * ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 2)) >> 0x25) *
         0x10;
    return;
  }
  iVar3 = FUN_08005a48();
  uVar2 = DAT_080066e4;
  iVar8 = param_1[1];
  uVar1 = (ulonglong)DAT_080066e4;
  iVar4 = FUN_08005a48();
  iVar9 = param_1[1];
  iVar5 = FUN_08005a48();
  iVar10 = param_1[1];
  iVar6 = FUN_08005a48();
  iVar11 = param_1[1];
  iVar7 = FUN_08005a48();
  *(uint *)(iVar12 + 8) =
       ((uint)((int)((ulonglong)uVar2 *
                     (ulonglong)
                     (((uint)(iVar6 * 0x19) / (uint)(iVar11 << 2) +
                      (uint)((ulonglong)uVar2 *
                             ((ulonglong)(uint)(iVar7 * 0x19) / (ulonglong)(uint)(param_1[1] << 2))
                            >> 0x25) * -100) * 0x10 + 0x32) >> 0x20) << 0x17) >> 0x1c) +
       ((uint)((ulonglong)uVar2 *
               (ulonglong)
               (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 2) +
                (uint)((ulonglong)uVar2 *
                       ((ulonglong)(uint)(iVar5 * 0x19) / (ulonglong)(uint)(iVar10 << 2)) >> 0x25) *
                -100) * 0x10 + 0x32) >> 0x25) & 0xf0) +
       (uint)(uVar1 * ((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 2)) >> 0x25) *
       0x10;
  return;
}


////>>0x080066e8>>FUN_080066e8>>////

undefined4 FUN_080066e8(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    if (((param_2 & ~**param_1) == 0) != param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = FUN_08003760(), (uint)(iVar1 - param_4) <= param_5))));
  (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
  (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  *(undefined *)(param_1 + 0xe) = 0;
  return 3;
}


////>>0x0800674c>>FUN_0800674c>>////

void FUN_0800674c(void)

{
  return;
}


////>>0x0800674e>>FUN_0800674e>>////

undefined4 FUN_0800674e(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      FUN_0800674c();
    }
    *(undefined *)((int)param_1 + 0x39) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_08006538(param_1);
    *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 0x20;
    *(undefined *)((int)param_1 + 0x3a) = 0x20;
    return 0;
  }
  return 1;
}


////>>0x080067ac>>FUN_080067ac>>////

int FUN_080067ac(int *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x39) == ' ') {
    if (param_2 == (ushort *)0x0) {
      iVar2 = 1;
    }
    else if (param_3 == 0) {
      iVar2 = 1;
    }
    else if (*(char *)(param_1 + 0xe) == '\x01') {
      iVar2 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      param_1[0xf] = 0;
      *(undefined *)((int)param_1 + 0x39) = 0x21;
      uVar1 = FUN_08003760();
      *(short *)(param_1 + 9) = (short)param_3;
      *(short *)((int)param_1 + 0x26) = (short)param_3;
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == 0x1000) {
          iVar2 = FUN_080066e8(param_1,0x80,0,uVar1,param_4);
          if (iVar2 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = *param_2 & 0x1ff;
          if (param_1[4] == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = (ushort *)((int)param_2 + 1);
          }
        }
        else {
          iVar2 = FUN_080066e8(param_1,0x80,0,uVar1,param_4);
          if (iVar2 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = (uint)*(byte *)param_2;
          param_2 = (ushort *)((int)param_2 + 1);
        }
      }
      iVar2 = FUN_080066e8(param_1,0x40,0,uVar1,param_4);
      if (iVar2 == 0) {
        *(undefined *)((int)param_1 + 0x39) = 0x20;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        iVar2 = 3;
      }
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}


////>>0x0800688e>>FUN_0800688e>>////

undefined4 FUN_0800688e(int *param_1,int param_2,int param_3)

{
  if (*(char *)((int)param_1 + 0x39) != ' ') {
    return 2;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xe) != '\x01') {
    param_1[8] = param_2;
    *(short *)(param_1 + 9) = (short)param_3;
    *(short *)((int)param_1 + 0x26) = (short)param_3;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 0x21;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x80;
    return 0;
  }
  return 2;
}


////>>0x080068d6>>FUN_080068d6>>////

undefined4 FUN_080068d6(int *param_1,int param_2,int param_3)

{
  if (*(char *)((int)param_1 + 0x3a) != ' ') {
    return 2;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xe) != '\x01') {
    param_1[10] = param_2;
    *(short *)(param_1 + 0xb) = (short)param_3;
    *(short *)((int)param_1 + 0x2e) = (short)param_3;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x3a) = 0x22;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x100;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x20;
    return 0;
  }
  return 2;
}


////>>0x08006932>>FUN_08006932>>////

undefined4 FUN_08006932(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  FUN_08008730();
  return 0;
}


////>>0x0800694c>>FUN_0800694c>>////

undefined4 FUN_0800694c(int *param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined *puVar3;
  
  if (*(char *)((int)param_1 + 0x3a) != '\"') {
    return 2;
  }
  if (param_1[2] == 0x1000) {
    if (param_1[4] == 0) {
      *(ushort *)param_1[10] = (ushort)((uint)(*(int *)(*param_1 + 4) << 0x17) >> 0x17);
      param_1[10] = param_1[10] + 2;
    }
    else {
      *(ushort *)param_1[10] = (ushort)*(undefined4 *)(*param_1 + 4) & 0xff;
      param_1[10] = param_1[10] + 1;
    }
  }
  else if (param_1[4] == 0) {
    puVar3 = (undefined *)param_1[10];
    param_1[10] = (int)(puVar3 + 1);
    *puVar3 = (char)*(undefined4 *)(*param_1 + 4);
  }
  else {
    pbVar1 = (byte *)param_1[10];
    param_1[10] = (int)(pbVar1 + 1);
    *pbVar1 = (byte)*(undefined4 *)(*param_1 + 4) & 0x7f;
  }
  sVar2 = *(short *)((int)param_1 + 0x2e) + -1;
  *(short *)((int)param_1 + 0x2e) = sVar2;
  if (sVar2 != 0) {
    return 0;
  }
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffdf;
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  FUN_0800870c();
  return 0;
}


////>>0x080069ec>>FUN_080069ec>>////

void FUN_080069ec(uint **param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = *param_1;
  uVar5 = *puVar3;
  uVar2 = puVar3[3];
  if ((((uVar5 & 0xf) == 0) && ((uVar5 & 0x20) != 0)) && ((uVar2 & 0x20) != 0)) {
    FUN_0800694c(param_1);
    return;
  }
  if (((uVar5 & 0xf) == 0) || ((uVar4 = puVar3[5] & 1, uVar4 == 0 && ((uVar2 & 0x120) == 0)))) {
    if (((uVar5 & 0x80) != 0) && ((uVar2 & 0x80) != 0)) {
      FUN_080064cc(param_1);
      return;
    }
    if (((uVar5 & 0x40) != 0) && ((uVar2 & 0x40) != 0)) {
      FUN_08006932(param_1);
    }
  }
  else {
    if (((uVar5 & 1) != 0) && ((uVar2 & 0x100) != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 1);
    }
    if (((uVar5 & 4) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 2);
    }
    if (((uVar5 & 2) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 4);
    }
    if (((uVar5 & 8) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 8);
    }
    if (param_1[0xf] != (uint *)0x0) {
      if (((uVar5 & 0x20) != 0) && ((uVar2 & 0x20) != 0)) {
        FUN_0800694c(param_1);
      }
      if ((((uint)param_1[0xf] & 8) == 0) && (((*param_1)[5] & 0x40) == 0)) {
        FUN_0800877c(param_1);
        param_1[0xf] = (uint *)0x0;
        return;
      }
      FUN_080064b0(param_1);
      puVar3 = *param_1;
      if ((puVar3[5] & 0x40) == 0) {
        FUN_0800877c(param_1);
        return;
      }
      puVar3[5] = puVar3[5] & 0xffffffbf;
      if (param_1[0xd] == (uint *)0x0) {
        FUN_0800877c(param_1);
        return;
      }
      param_1[0xd][0xd] = (uint)PTR_LAB_08006b0c_1_08006b08;
      iVar1 = FUN_08004050(param_1[0xd]);
      if (iVar1 != 0) {
        (*(code *)param_1[0xd][0xd])();
        return;
      }
    }
  }
  return;
}


////>>0x08006b1c>>FUN_08006b1c>>////

byte FUN_08006b1c(int param_1)

{
  return *(byte *)(param_1 + 0x3a) | *(byte *)(param_1 + 0x39);
}


////>>0x08006b28>>FUN_08006b28>>////

uint FUN_08006b28(uint param_1,int param_2)

{
  return *(uint *)(param_2 + ((param_1 << 0x18) >> 0x1c) * 4) >> (param_1 & 0xf) & 1;
}


////>>0x08006b3e>>FUN_08006b3e>>////

void FUN_08006b3e(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) | 1 << (param_1 & 0xf);
  return;
}


////>>0x08006b5c>>FUN_08006b5c>>////

void FUN_08006b5c(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) & ~(1 << (param_1 & 0xf));
  return;
}


////>>0x08006b7c>>FUN_08006b7c>>////

undefined4 FUN_08006b7c(undefined4 param_1)

{
  switch(param_1) {
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


////>>0x08006bb8>>FUN_08006bb8>>////

undefined4 FUN_08006bb8(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    *(uint *)(DAT_08006c48 + 0x18) = *(uint *)(DAT_08006c48 + 0x18) | 4;
    uVar1 = DAT_08006c4c;
    break;
  case 1:
    *(uint *)(DAT_08006c48 + 0x18) = *(uint *)(DAT_08006c48 + 0x18) | 8;
    uVar1 = DAT_08006c50;
    break;
  case 2:
    *(uint *)(DAT_08006c48 + 0x18) = *(uint *)(DAT_08006c48 + 0x18) | 0x10;
    uVar1 = DAT_08006c54;
    break;
  case 3:
    *(uint *)(DAT_08006c48 + 0x18) = *(uint *)(DAT_08006c48 + 0x18) | 0x20;
    uVar1 = DAT_08006c58;
    break;
  case 4:
    *(uint *)(DAT_08006c48 + 0x18) = *(uint *)(DAT_08006c48 + 0x18) | 0x40;
    uVar1 = DAT_08006c5c;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08006c60>>FUN_08006c60>>////

uint FUN_08006c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08007376(param_1,PTR_DAT_08006c78,param_3,param_4,param_4);
  uVar2 = (uint)(iVar1 << 0xc) >> 0x1b;
  if (0x10 < uVar2 - 1) {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08006c7c>>FUN_08006c7c>>////

undefined4 FUN_08006c7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08007376(param_1,PTR_DAT_08006ca4,param_3,param_4,param_4);
  uVar2 = (uint)(iVar1 << 0xc) >> 0x1b;
  if (uVar2 == 3) {
    return 8;
  }
  if (uVar2 != 4) {
    if (uVar2 != 2) {
      return 0;
    }
    return 4;
  }
  return 0xc;
}


////>>0x08006ca8>>FUN_08006ca8>>////

void FUN_08006ca8(uint *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = DAT_08006d20;
  uVar5 = *param_1;
  if (uVar5 == DAT_08006d14) {
    uVar4 = *(uint *)(DAT_08006d20 + 0x18) | 0x200;
    *(uint *)(DAT_08006d20 + 0x18) = uVar4;
    uVar5 = *(uint *)(iVar2 + 0x18) & 0x200;
  }
  else {
    uVar4 = DAT_08006d18;
    if (uVar5 == DAT_08006d18) {
      uVar4 = *(uint *)(DAT_08006d20 + 0x18) | 0x400;
      *(uint *)(DAT_08006d20 + 0x18) = uVar4;
      uVar5 = *(uint *)(iVar2 + 0x18) & 0x400;
    }
  }
  puVar1 = PTR_DAT_08006d1c;
  uVar3 = FUN_08006bb8((uint)((int)(char)*PTR_DAT_08006d1c << 0x18) >> 0x1c,param_2,uVar4,uVar5);
  local_18 = 1 << ((byte)*puVar1 & 0xf) & 0xffff;
  local_14 = 3;
  local_10 = 0;
  FUN_080040e8(uVar3,&local_18);
  return;
}


////>>0x08006d24>>FUN_08006d24>>////

void FUN_08006d24(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_08006d7c;
  if (*param_1 != DAT_08006d74) {
    if (*param_1 == DAT_08006d78) {
      *(uint *)(DAT_08006d7c + 0xc) = *(uint *)(DAT_08006d7c + 0xc) | 0x400;
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffbff;
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xfffffbff;
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xfffffbff;
    }
    return;
  }
  *(uint *)(DAT_08006d7c + 0xc) = *(uint *)(DAT_08006d7c + 0xc) | 0x200;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffdff;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xfffffdff;
  return;
}


////>>0x08006d80>>FUN_08006d80>>////

undefined2 FUN_08006d80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 local_46;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  
  FUN_080091c6(&local_38,0,0x30);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_46 = 0;
  local_38 = FUN_08007320(param_1,PTR_DAT_08006e60);
  if (local_38 == 0) {
    local_46 = 0;
  }
  else {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0xe0000;
    local_10 = 0;
    local_28 = 1;
    local_20 = 0;
    *PTR_DAT_08006e64 = (char)param_1;
    iVar1 = FUN_08003bd8(&local_38);
    if (iVar1 == 0) {
      local_44 = FUN_08006c60(param_1);
      if (local_44 < 0x12) {
        local_40 = 1;
        local_3c = 2;
        iVar1 = FUN_080038e4(&local_38,&local_44);
        if (iVar1 == 0) {
          iVar1 = FUN_08003e20(&local_38);
          if (iVar1 == 0) {
            iVar1 = FUN_08003aa0(&local_38);
            if (iVar1 == 0) {
              iVar1 = FUN_0800376c(&local_38,10);
              if (iVar1 == 0) {
                uVar2 = FUN_08003a1c(&local_38);
                if ((uVar2 & 0x200) != 0) {
                  local_46 = FUN_080038dc(&local_38);
                }
                iVar1 = FUN_08003de4(&local_38);
                if (iVar1 == 0) {
                  iVar1 = FUN_08003ce8(&local_38);
                  if (iVar1 != 0) {
                    local_46 = 0;
                  }
                }
                else {
                  local_46 = 0;
                }
              }
              else {
                local_46 = 0;
              }
            }
            else {
              local_46 = 0;
            }
          }
          else {
            local_46 = 0;
          }
        }
        else {
          local_46 = 0;
        }
      }
      else {
        local_46 = 0;
      }
    }
    else {
      local_46 = 0;
    }
  }
  return local_46;
}


////>>0x08006e68>>FUN_08006e68>>////

void FUN_08006e68(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_08007100;
  iVar2 = FUN_08007376((int)(char)*PTR_DAT_08007100,PTR_DAT_08007104);
  FUN_08007438(param_1);
  uVar3 = FUN_08006bb8((uint)((int)(char)*puVar1 << 0x18) >> 0x1c);
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
  FUN_080040e8(uVar3,&local_20);
  return;
}


////>>0x08007110>>FUN_08007110>>////

void FUN_08007110(void)

{
  FUN_080074e0();
  return;
}


////>>0x08007118>>FUN_08007118>>////

void FUN_08007118(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_1b;
  
  FUN_080091c6(&local_58,0,0x40);
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = FUN_08007320(param_1,PTR_DAT_080071dc);
  if (local_58 != 0) {
    uVar1 = FUN_080075dc();
    local_54 = uVar1 / param_2 - 1;
    local_4c = param_3 + -1;
    local_48 = 0;
    local_50 = 0;
    local_44 = 0;
    local_1b = 0;
    if (param_5 == '\x01') {
      *PTR_DAT_080071e0 = (char)param_1;
      iVar2 = FUN_08006092(&local_58);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_08006c7c(param_1);
    if ((((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 8)) || ((iVar2 == 0xc || (iVar2 == 0x18)))) {
      local_74 = 0x60;
      local_6c = 0;
      local_64 = 0;
      local_68 = 0;
      local_5c = 0;
      local_60 = 0;
      local_70 = param_4;
      iVar3 = FUN_08006186(&local_58,&local_74,iVar2);
      if (iVar3 == 0) {
        uVar1 = FUN_08007376(param_1,PTR_DAT_080071dc);
        if ((uVar1 & 0x100000) == 0) {
          FUN_08006390(&local_58,iVar2);
        }
        else {
          FUN_0800643c(&local_58,iVar2);
        }
      }
    }
  }
  return;
}


////>>0x080071e4>>FUN_080071e4>>////

void FUN_080071e4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int local_50 [17];
  
  local_50[0] = FUN_08007320(param_1,PTR_DAT_08007238);
  if ((local_50[0] != 0) &&
     ((((iVar1 = FUN_08006c7c(param_1), iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 8)) ||
      ((iVar1 == 0xc || (iVar1 == 0x18)))))) {
    uVar2 = FUN_08007376(param_1,PTR_DAT_08007238);
    if ((uVar2 & 0x100000) == 0) {
      FUN_080063c0(local_50,iVar1);
    }
    else {
      FUN_08006460(local_50,iVar1);
    }
    FUN_08005e2e(local_50);
  }
  return;
}


////>>0x0800723c>>FUN_0800723c>>////

void FUN_0800723c(void)

{
  FUN_08003760();
  return;
}


////>>0x08007244>>FUN_08007244>>////

void FUN_08007244(void)

{
  return;
}


////>>0x08007246>>FUN_08007246>>////

void FUN_08007246(void)

{
  FUN_08003748();
  FUN_08004046();
  FUN_08007244();
  return;
}


////>>0x08007258>>FUN_08007258>>////

void FUN_08007258(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_08006bb8((param_1 << 0x18) >> 0x1c);
  local_20 = 1 << (param_1 & 0xf) & 0xffff;
  local_14 = 3;
  *(uint *)(DAT_080072d0 + 0x18) = *(uint *)(DAT_080072d0 + 0x18) | 1;
  if ((param_1 - 0xd & 0xff) < 2) {
    *(uint *)(DAT_080072d4 + 4) = *(uint *)(DAT_080072d4 + 4) & 0xf8ffffff | 0x4000000;
  }
  if (((param_1 == 0xf) || (param_1 == 0x13)) || (param_1 == 0x14)) {
    *(uint *)(DAT_080072d4 + 4) = *(uint *)(DAT_080072d4 + 4) & 0xf8ffffff | 0x2000000;
  }
  local_1c = param_2;
  local_18 = param_3;
  FUN_080040e8(uVar1,&local_20);
  return;
}


////>>0x080072d8>>FUN_080072d8>>////

void FUN_080072d8(undefined4 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    FUN_080042e2(param_1,param_2,0,param_4,param_4);
    return;
  }
  FUN_080042e2(param_1,param_2,1,param_4,param_4);
  return;
}


////>>0x080072f0>>FUN_080072f0>>////

void FUN_080072f0(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080042d4(param_1,param_2,param_3,param_4,param_4);
  return;
}


////>>0x080072fa>>FUN_080072fa>>////

void FUN_080072fa(void)

{
  FUN_08003724();
  FUN_080035b8();
  return;
}


////>>0x08007306>>FUN_08007306>>////

undefined4 FUN_08007306(int param_1,char *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return *(undefined4 *)(param_2 + 4);
}


////>>0x08007320>>FUN_08007320>>////

undefined4 FUN_08007320(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != -1) {
    uVar1 = FUN_08007306();
    return uVar1;
  }
  return 0;
}


////>>0x08007332>>FUN_08007332>>////

int FUN_08007332(int param_1,char *param_2)

{
  while( true ) {
    if (*(int *)(param_2 + 4) == 0) {
      return -1;
    }
    if (*(int *)(param_2 + 4) == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return (int)*param_2;
}


////>>0x0800734a>>FUN_0800734a>>////

undefined4 FUN_0800734a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_08007332();
    return uVar1;
  }
  return 0xffffffff;
}


////>>0x0800735a>>FUN_0800735a>>////

undefined4 FUN_0800735a(int param_1,char *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0xffffffff;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return *(undefined4 *)(param_2 + 8);
}


////>>0x08007376>>FUN_08007376>>////

undefined4 FUN_08007376(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_0800735a();
  return uVar1;
}


////>>0x0800738a>>FUN_0800738a>>////

undefined4 FUN_0800738a(int param_1,char *param_2)

{
  if (param_1 == -1) {
    return 0;
  }
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (param_1 == *param_2) break;
    param_2 = param_2 + 0xc;
  }
  return 1;
}


////>>0x080073ae>>FUN_080073ae>>////

int FUN_080073ae(int param_1,int param_2)

{
  if (param_1 != param_2) {
    if (param_1 == 0) {
      return param_2;
    }
    if (param_2 == 0) {
      return param_1;
    }
    param_1 = 0;
  }
  return param_1;
}


////>>0x080073c0>>FUN_080073c0>>////

void FUN_080073c0(void)

{
  if (*(code **)PTR_DAT_080073d0 != (code *)0x0) {
    (**(code **)PTR_DAT_080073d0)(*(undefined4 *)PTR_DAT_080073d4);
  }
  return;
}


////>>0x080073e8>>FUN_080073e8>>////

void FUN_080073e8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080073ec>>FUN_080073ec>>////

void FUN_080073ec(void)

{
  uint *puVar1;
  
  puVar1 = DAT_0800742c;
  *DAT_0800742c = *DAT_0800742c | 1;
  puVar1[1] = DAT_08007430 & puVar1[1];
  *puVar1 = *puVar1 & 0xfef6ffff;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xff80ffff;
  puVar1[2] = 0x9f0000;
  *(undefined4 *)(DAT_08007434 + 8) = 0x8000000;
  return;
}


////>>0x08007438>>FUN_08007438>>////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007438(int *param_1)

{
  if (*param_1 == DAT_080074d0) {
    *(uint *)(DAT_080074d0 + 0xe418) = *(uint *)(DAT_080074d0 + 0xe418) | 0x800;
    *(int **)PTR_DAT_080074dc = param_1;
  }
  if (*param_1 == 0x40000000) {
    _DAT_4002101c = _DAT_4002101c | 1;
    *(int **)(PTR_DAT_080074dc + 4) = param_1;
  }
  if (*param_1 == DAT_080074d4) {
    *(uint *)(DAT_080074d4 + 0x20c1c) = *(uint *)(DAT_080074d4 + 0x20c1c) | 2;
    *(int **)(PTR_DAT_080074dc + 8) = param_1;
  }
  if (*param_1 == DAT_080074d8) {
    *(uint *)(DAT_080074d8 + 0x2081c) = *(uint *)(DAT_080074d8 + 0x2081c) | 4;
    *(int **)(PTR_DAT_080074dc + 0xc) = param_1;
  }
  return;
}


////>>0x080074e0>>FUN_080074e0>>////

void FUN_080074e0(int *param_1)

{
  if (*param_1 == DAT_08007534) {
    *(uint *)(DAT_08007540 + 0x18) = *(uint *)(DAT_08007540 + 0x18) & 0xfffff7ff;
  }
  if (*param_1 == 0x40000000) {
    *(uint *)(DAT_08007540 + 0x1c) = *(uint *)(DAT_08007540 + 0x1c) & 0xfffffffe;
  }
  if (*param_1 == DAT_08007538) {
    *(uint *)(DAT_08007540 + 0x1c) = *(uint *)(DAT_08007540 + 0x1c) & 0xfffffffd;
  }
  if (*param_1 == DAT_0800753c) {
    *(uint *)(DAT_08007540 + 0x1c) = *(uint *)(DAT_08007540 + 0x1c) & 0xfffffffb;
  }
  return;
}


////>>0x08007544>>FUN_08007544>>////

undefined4 FUN_08007544(uint param_1)

{
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (param_1 == DAT_08007588) {
    return 0x1d;
  }
  if (DAT_08007588 < param_1) {
    if (param_1 == DAT_0800758c) {
      return 0x1e;
    }
    if (param_1 == DAT_0800758c + 0x12400) {
      return 0x19;
    }
  }
  else if (param_1 == 0x40000000) {
    return 0x1c;
  }
  FUN_080098d8(PTR_s_TIM__Unknown_timer_IRQn_08007590);
  return 0;
}


////>>0x08007594>>FUN_08007594>>////

undefined4 FUN_08007594(uint param_1)

{
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (param_1 == DAT_080075d0) {
    return 1;
  }
  if (DAT_080075d0 < param_1) {
    if (param_1 == DAT_080075d4) {
      return 1;
    }
    if (param_1 == DAT_080075d4 + 0x12400) {
      return 2;
    }
  }
  else if (param_1 == 0x40000000) {
    return 1;
  }
  FUN_080098d8(PTR_s_TIM__Unknown_timer_instance_080075d8);
  return 0;
}


////>>0x080075dc>>FUN_080075dc>>////

int FUN_080075dc(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_20 = 0;
  FUN_08005a68(&local_1c,&local_20);
  iVar2 = FUN_08007594(param_1);
  uVar1 = local_c;
  uVar3 = local_10;
  if (iVar2 == 1) {
    iVar2 = FUN_08005a28();
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_08005a48();
    uVar3 = uVar1;
  }
  else {
    FUN_080098d8(PTR_s_TIM__Unknown_clock_source_08007644);
    iVar2 = 0;
    uVar3 = 0;
  }
  if (uVar3 != 0x500) {
    if (uVar3 < 0x501) {
      if (uVar3 != 0x400) {
        return iVar2;
      }
    }
    else if ((uVar3 != 0x600) && (uVar3 != 0x700)) {
      return iVar2;
    }
  }
  return iVar2 << 1;
}


////>>0x08007648>>FUN_08007648>>////

void FUN_08007648(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  puVar4 = param_1 + 1;
  *param_1 = 0x40000000;
  param_1[1] = 0x40000000;
  param_1[4] = param_2;
  uVar2 = FUN_080075dc();
  param_1[2] = (uint)((ulonglong)DAT_080076dc * (ulonglong)uVar2 >> 0x32) - 1;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[0x13] = param_4;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_30 = param_3;
  cVar1 = FUN_08007544(*param_1);
  FUN_08003f30((int)cVar1,0xe,0);
  cVar1 = FUN_08007544(*param_1);
  FUN_08003f94((int)cVar1);
  iVar3 = FUN_08006060(puVar4);
  if ((iVar3 == 0) && (iVar3 = FUN_08006128(puVar4,&local_34,0), iVar3 == 0)) {
    FUN_08006280(puVar4,0);
  }
  return;
}


////>>0x080076e0>>FUN_080076e0>>////

void FUN_080076e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  param_1[0x13] = 0;
  cVar1 = FUN_08007544(*param_1);
  FUN_08003fb0((int)cVar1);
  iVar2 = FUN_08005df4(param_1 + 1);
  if (iVar2 == 0) {
    FUN_080062f4(param_1 + 1,0);
  }
  return;
}


////>>0x08007708>>FUN_08007708>>////

void FUN_08007708(void)

{
  FUN_08007438();
  return;
}


////>>0x08007710>>FUN_08007710>>////

void FUN_08007710(void)

{
  FUN_080074e0();
  return;
}


////>>0x08007718>>FUN_08007718>>////

int FUN_08007718(int param_1)

{
  return param_1 + -4;
}


////>>0x0800771c>>FUN_0800771c>>////

void FUN_0800771c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08007718();
  if ((*(code **)(iVar1 + 0x4c) != (code *)0x0) && (*(char *)(param_1 + 0x1c) == '\x01')) {
    (**(code **)(iVar1 + 0x4c))(iVar1,0);
  }
  return;
}


////>>0x08007736>>FUN_08007736>>////

void FUN_08007736(void)

{
  int iVar1;
  
  iVar1 = FUN_08007718();
  if (*(code **)(iVar1 + 0x48) != (code *)0x0) {
    (**(code **)(iVar1 + 0x48))();
  }
  return;
}


////>>0x08007744>>FUN_08007744>>////

undefined4 FUN_08007744(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
}


////>>0x0800774a>>FUN_0800774a>>////

void FUN_0800774a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = param_2;
  return;
}


////>>0x08007750>>FUN_08007750>>////

void FUN_08007750(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x34 + param_2 * 4) = param_3;
  return;
}


////>>0x080077b0>>FUN_080077b0>>////

void FUN_080077b0(int *param_1,int param_2,int param_3,int param_4,undefined param_5)

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
    iVar2 = FUN_08007320((int)*(char *)(param_1 + 0x16),PTR_DAT_08007a74);
    iVar3 = FUN_08007320((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08007a78);
    if ((iVar2 == 0) || (iVar3 == 0)) {
      FUN_080098d8(PTR_s_ERROR__at_least_one_I2C_pin_has_n_08007a88);
    }
    else {
      iVar3 = FUN_080073ae(iVar2,iVar3);
      *param_1 = iVar3;
      iVar2 = DAT_08007a7c;
      if (iVar3 == 0) {
        FUN_080098d8(PTR_s_ERROR__I2C_pins_mismatch_08007a8c);
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
        uVar4 = FUN_08006bb8((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        puVar1 = PTR_DAT_08007a78;
        local_38 = 1 << ((int)*(char *)((int)param_1 + 0x59) & 0xfU) & 0xffff;
        uVar5 = FUN_08007376((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08007a78);
        uVar6 = FUN_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
        local_34 = (uVar5 >> 3 & 1) << 4 | uVar6 & 7;
        local_2c = 3;
        iVar2 = FUN_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
        local_30 = (uint)(iVar2 << 0x1a) >> 0x1e;
        iVar3 = FUN_08007376((int)*(char *)((int)param_1 + 0x59),puVar1);
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
        FUN_080040e8(uVar4,&local_38,uVar7,uVar8);
        uVar4 = FUN_08006bb8((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        puVar1 = PTR_DAT_08007a74;
        local_38 = 1 << ((int)*(char *)(param_1 + 0x16) & 0xfU) & 0xffff;
        uVar5 = FUN_08007376((int)*(char *)(param_1 + 0x16),PTR_DAT_08007a74);
        uVar6 = FUN_08007376((int)*(char *)(param_1 + 0x16),puVar1);
        local_34 = (uVar5 >> 3 & 1) << 4 | uVar6 & 7;
        local_2c = 3;
        iVar2 = FUN_08007376((int)*(char *)(param_1 + 0x16),puVar1);
        local_30 = (uint)(iVar2 << 0x1a) >> 0x1e;
        iVar3 = FUN_08007376((int)*(char *)(param_1 + 0x16),puVar1);
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
        FUN_080040e8(uVar4,&local_38,uVar7,uVar8);
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
        FUN_08003f30((int)*(char *)((int)param_1 + 0x5a),0,1);
        FUN_08003f94((int)*(char *)((int)param_1 + 0x5a));
        FUN_08003f30((int)*(char *)((int)param_1 + 0x5b),0,1);
        FUN_08003f94((int)*(char *)((int)param_1 + 0x5b));
        FUN_080045c0(piVar9);
        *(undefined *)((int)param_1 + 0x5d) = param_5;
      }
    }
    return;
  }
  return;
}


////>>0x08007e74>>FUN_08007e74>>////

int FUN_08007e74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = param_4;
  iVar1 = FUN_08003760();
  uVar3 = 0;
  iVar4 = 2;
  do {
    iVar5 = param_1 + 4;
    iVar2 = FUN_08004728(iVar5,param_2,param_3,param_4,uVar6);
    if (iVar2 == 0) {
      iVar4 = 0;
      while ((iVar2 = FUN_0800542a(iVar5), iVar2 != 0x20 && (iVar4 == 0))) {
        iVar2 = FUN_08003760();
        uVar3 = iVar2 - iVar1;
        if (uVar3 < 0x65) {
          iVar2 = FUN_08005430(iVar5);
          if (iVar2 != 0) {
            iVar4 = 2;
          }
        }
        else {
          iVar4 = 1;
        }
      }
    }
    iVar2 = FUN_08005430(iVar5);
  } while ((iVar2 == 4) && (uVar3 < 100));
  return iVar4;
}


////>>0x08007ede>>FUN_08007ede>>////

undefined4 FUN_08007ede(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (0x20 < param_3) {
    return 2;
  }
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined *)(param_1 + uVar1 + 0x68) = *(undefined *)(param_2 + uVar1);
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + '\x01';
  }
  return 0;
}


////>>0x08007f0e>>FUN_08007f0e>>////

int FUN_08007f0e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = param_4;
  iVar1 = FUN_08003760();
  uVar3 = 0;
  iVar4 = 2;
  do {
    iVar5 = param_1 + 4;
    iVar2 = FUN_080047f4(iVar5,param_2,param_3,param_4,uVar6);
    if (iVar2 == 0) {
      iVar4 = 0;
      while ((iVar2 = FUN_0800542a(iVar5), iVar2 != 0x20 && (iVar4 == 0))) {
        iVar2 = FUN_08003760();
        uVar3 = iVar2 - iVar1;
        if (uVar3 < 0x65) {
          iVar2 = FUN_08005430(iVar5);
          if (iVar2 != 0) {
            iVar4 = 2;
          }
        }
        else {
          iVar4 = 1;
        }
      }
    }
    iVar2 = FUN_08005430(iVar5);
  } while ((iVar2 == 4) && (uVar3 < 100));
  return iVar4;
}


////>>0x08007f78>>FUN_08007f78>>////

int FUN_08007f78(int param_1)

{
  return param_1 + -4;
}


////>>0x08007f7c>>FUN_08007f7c>>////

void FUN_08007f7c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x60) = param_2;
      FUN_080049e0(param_1 + 4);
    }
    return;
  }
  return;
}


////>>0x08007f8e>>FUN_08007f8e>>////

void FUN_08007f8e(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(int *)(param_1 + 100) = param_2;
      FUN_080049e0(param_1 + 4);
    }
    return;
  }
  return;
}


////>>0x08007fa0>>FUN_08007fa0>>////

void FUN_08007fa0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_08007f78();
  if (param_3 == *(int *)(param_1 + 0xc)) {
    if (param_2 == 0) {
      *(undefined *)(iVar1 + 0x88) = 0;
      *(undefined *)(iVar1 + 0x5c) = 0;
      if (*(code **)(iVar1 + 100) != (code *)0x0) {
        (**(code **)(iVar1 + 100))();
      }
      FUN_080048c8(param_1,iVar1 + 0x68,*(undefined *)(iVar1 + 0x88),8);
      return;
    }
    *(undefined *)(iVar1 + 0x5c) = 1;
    FUN_08004954(param_1,iVar1 + 0x68,0x20,8,param_4);
  }
  return;
}


////>>0x08007ff0>>FUN_08007ff0>>////

void FUN_08007ff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08007f78();
  if (((*(code **)(iVar1 + 0x60) != (code *)0x0) && (*(char *)(iVar1 + 0x5c) == '\x01')) &&
     (*(char *)(iVar1 + 0x2c) != ' ')) {
    (**(code **)(iVar1 + 0x60))(iVar1 + 0x68);
  }
  FUN_080049e0(param_1);
  return;
}


////>>0x08008020>>FUN_08008020>>////

void FUN_08008020(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08007f78();
  if (*(char *)(iVar1 + 0x5d) == '\0') {
    FUN_080049e0(param_1);
  }
  return;
}


////>>0x08008078>>FUN_08008078>>////

void FUN_08008078(int *param_1)

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
    iVar2 = FUN_08007320((int)*(char *)(param_1 + 0x16),PTR_DAT_08008330);
    iVar3 = FUN_08007320((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08008334);
    if ((iVar3 == 0) || (iVar2 == 0)) {
      FUN_080098d8(PTR_s_ERROR__at_least_one_UART_pin_has_08008348,iVar3);
    }
    else {
      iVar4 = FUN_080073ae(iVar2);
      *param_1 = iVar4;
      iVar1 = DAT_08008340;
      iVar3 = DAT_0800833c;
      iVar2 = DAT_08008338;
      if (iVar4 == 0) {
        FUN_080098d8(PTR_s_ERROR__U_S_ART_pins_mismatch_0800834c);
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
        uVar5 = FUN_08006bb8((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        uVar6 = FUN_08007376((int)*(char *)((int)param_1 + 0x59),PTR_DAT_08008334);
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
        FUN_080040e8(uVar5,&local_20);
        uVar5 = FUN_08006bb8((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        uVar6 = FUN_08007376((int)*(char *)(param_1 + 0x16),PTR_DAT_08008330);
        local_20 = 1 << (*(byte *)(param_1 + 0x16) & 0xf) & 0xffff;
        local_1c = (uVar6 >> 3 & 1) << 4 | uVar6 & 7;
        local_18 = (uVar6 << 0x1a) >> 0x1e;
        FUN_080040e8(uVar5,&local_20);
        *(int **)(PTR_DAT_08008354 + (uint)*(byte *)(param_1 + 0x11) * 4) = param_1 + 1;
        param_1[1] = *param_1;
        param_1[2] = param_1[0x12];
        param_1[3] = param_1[0x13];
        param_1[4] = param_1[0x14];
        param_1[5] = param_1[0x15];
        param_1[6] = 0xc;
        param_1[7] = 0;
        param_1[8] = 0;
        FUN_0800674e(param_1 + 1);
      }
    }
    return;
  }
  return;
}


////>>0x080084b0>>FUN_080084b0>>////

void FUN_080084b0(void)

{
  char cVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  
  cVar1 = PTR_DAT_080084f0[1];
  iVar4 = FUN_08007320((int)cVar1,PTR_DAT_080084f4);
  if (iVar4 != 0) {
    uVar5 = FUN_08007320((int)cVar1,PTR_DAT_080084f4);
    uVar3 = FUN_0800734a(uVar5,PTR_DAT_080084f8);
    puVar2 = PTR_DAT_080084fc;
    PTR_DAT_080084fc[0x59] = uVar3;
    puVar2[0x58] = cVar1;
    *(undefined4 *)(puVar2 + 0x48) = 0x2580;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 0x4c) = 0;
    *(undefined4 *)(puVar2 + 0x50) = 0;
    FUN_08008078(puVar2);
  }
  return;
}


////>>0x08008500>>FUN_08008500>>////

uint FUN_08008500(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_08003760();
  cVar1 = PTR_DAT_080085a8[1];
  iVar3 = FUN_08007320((int)cVar1,PTR_DAT_080085ac);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  while ((uVar4 < 5 &&
         ((*(int *)(PTR_DAT_080085b0 + uVar4 * 4) == 0 ||
          (iVar3 = FUN_08007320((int)cVar1,PTR_DAT_080085ac),
          **(int **)(PTR_DAT_080085b0 + uVar4 * 4) != iVar3))))) {
    uVar4 = uVar4 + 1 & 0xff;
  }
  if (4 < uVar4) {
    if ((4 < (byte)PTR_DAT_080085b4[0x44]) && (FUN_080084b0(), 4 < (byte)PTR_DAT_080085b4[0x44])) {
      return 0;
    }
    uVar4 = (uint)(byte)PTR_DAT_080085b4[0x44];
  }
  do {
    iVar3 = FUN_080067ac(*(undefined4 *)(PTR_DAT_080085b0 + uVar4 * 4),param_1,param_2 & 0xffff,1000
                        );
    if (iVar3 == 0) {
      return param_2;
    }
    iVar3 = FUN_08003760();
  } while ((uint)(iVar3 - iVar2) < 1000);
  return 0;
}


////>>0x080085b8>>FUN_080085b8>>////

bool FUN_080085b8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_08006b1c(*(undefined4 *)(PTR_DAT_080085d8 + (uint)*(byte *)(param_1 + 0x44) * 4));
  return (uVar1 & 0x22) == 0x22;
}


////>>0x080085dc>>FUN_080085dc>>////

bool FUN_080085dc(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_08006b1c(*(undefined4 *)(PTR_DAT_080085fc + (uint)*(byte *)(param_1 + 0x44) * 4));
  return (uVar1 & 0x21) == 0x21;
}


////>>0x08008600>>FUN_08008600>>////

undefined4 FUN_08008600(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_080085b8();
  if (iVar1 == 0) {
    *param_2 = *(undefined *)(param_1 + 0x45);
    FUN_080068d6(*(undefined4 *)(PTR_DAT_08008638 + (uint)*(byte *)(param_1 + 0x44) * 4),
                 param_1 + 0x45,1,PTR_DAT_08008638,param_4);
    return 0;
  }
  return 0xffffffff;
}


////>>0x0800863c>>FUN_0800863c>>////

void FUN_0800863c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_080085b8();
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 0x44);
      *(undefined4 *)(PTR_DAT_08008688 + uVar2 * 4) = param_2;
      *(int *)(PTR_DAT_0800868c + uVar2 * 4) = param_1;
      FUN_08003f30((int)*(char *)(param_1 + 0x5a),0,1,uVar2,param_4);
      FUN_08003f94((int)*(char *)(param_1 + 0x5a));
      FUN_080068d6(*(undefined4 *)(PTR_DAT_08008690 + (uint)*(byte *)(param_1 + 0x44) * 4),
                   param_1 + 0x45,1);
    }
    return;
  }
  return;
}


////>>0x08008694>>FUN_08008694>>////

void FUN_08008694(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x44);
    *(undefined4 *)(PTR_DAT_080086dc + (uint)bVar1 * 4) = param_2;
    *(int *)(PTR_DAT_080086e0 + (uint)bVar1 * 4) = param_1;
    FUN_08003f30((int)*(char *)(param_1 + 0x5a),0,2);
    FUN_08003f94((int)*(char *)(param_1 + 0x5a));
    FUN_0800688e(*(undefined4 *)(PTR_DAT_080086e4 + (uint)*(byte *)(param_1 + 0x44) * 4),
                 *(int *)(param_1 + 100) + (uint)*(ushort *)(param_1 + 0x6a),1);
    return;
  }
  return;
}


////>>0x080086e8>>FUN_080086e8>>////

uint FUN_080086e8(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
    while( true ) {
      if (4 < uVar1) {
        return uVar1;
      }
      if (param_1 == *(int *)(PTR_DAT_08008708 + uVar1 * 4)) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return uVar1;
}


////>>0x0800870c>>FUN_0800870c>>////

void FUN_0800870c(void)

{
  uint uVar1;
  
  uVar1 = FUN_080086e8();
  if (uVar1 < 5) {
    (**(code **)(PTR_DAT_08008728 + uVar1 * 4))(*(undefined4 *)(PTR_DAT_0800872c + uVar1 * 4));
  }
  return;
}


////>>0x08008730>>FUN_08008730>>////

void FUN_08008730(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_080086e8();
  iVar3 = *(int *)(PTR_DAT_08008770 + uVar1 * 4);
  if ((uVar1 < 5) && (iVar2 = (**(code **)(PTR_DAT_08008774 + uVar1 * 4))(iVar3), iVar2 != -1)) {
    FUN_0800688e(*(undefined4 *)(PTR_DAT_08008778 + (uint)*(byte *)(iVar3 + 0x44) * 4),
                 *(int *)(iVar3 + 100) + (uint)*(ushort *)(iVar3 + 0x6a),1);
  }
  return;
}


////>>0x0800877c>>FUN_0800877c>>////

void FUN_0800877c(void)

{
  return;
}


////>>0x08008804>>FUN_08008804>>////

int FUN_08008804(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int *)PTR_DAT_08008834 == 0) {
    *(undefined **)PTR_DAT_08008834 = PTR_DAT_08008838;
  }
  iVar1 = *(int *)PTR_DAT_08008834;
  puVar2 = (undefined *)(param_1 + iVar1);
  if (puVar2 <= &stack0x00000000) {
    *(undefined **)PTR_DAT_08008834 = puVar2;
    return iVar1;
  }
  *(undefined4 *)PTR_DAT_0800883c = 0xc;
  return -1;
}


////>>0x08008840>>FUN_08008840>>////

undefined4 FUN_08008840(void)

{
  return 0xffffffff;
}


////>>0x08008846>>FUN_08008846>>////

undefined4 FUN_08008846(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x08008850>>FUN_08008850>>////

undefined4 FUN_08008850(void)

{
  return 1;
}


////>>0x08008854>>FUN_08008854>>////

undefined4 FUN_08008854(void)

{
  return 0;
}


////>>0x08008858>>FUN_08008858>>////

undefined4 FUN_08008858(void)

{
  return 0;
}


////>>0x0800885c>>FUN_0800885c>>////

void FUN_0800885c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08008500(param_2,param_3,param_3,param_4,param_4);
  return;
}


////>>0x08008868>>FUN_08008868>>////

void FUN_08008868(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0800886c>>FUN_0800886c>>////

undefined4 FUN_0800886c(void)

{
  *(undefined4 *)PTR_DAT_08008878 = 0x16;
  return 0xffffffff;
}


////>>0x0800887c>>FUN_0800887c>>////

undefined4 FUN_0800887c(void)

{
  return 1;
}


////>>0x08008880>>FUN_08008880>>////

uint FUN_08008880(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 < 0xe) {
    if (param_1 + 0x2e < 0x3c) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = param_1 < 0x3c;
  }
  if (bVar1) {
    if (param_1 < 0xe) {
      param_1 = param_1 + 0x2e;
    }
    cVar2 = PTR_DAT_080088d8[param_1];
  }
  else {
    cVar2 = -1;
  }
  if (cVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_08006d80();
    uVar4 = *(uint *)PTR_DAT_080088dc;
    if (uVar4 != 0xc) {
      if (uVar4 < 0xc) {
        return uVar3 >> (0xc - uVar4 & 0xff);
      }
      return uVar3 << (uVar4 - 0xc & 0xff);
    }
  }
  return uVar3;
}


////>>0x080088e0>>FUN_080088e0>>////

void FUN_080088e0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x3c) {
    iVar3 = (int)(char)PTR_DAT_0800897c[param_1];
  }
  else {
    iVar3 = -1;
  }
  if (iVar3 != -1) {
    iVar1 = FUN_0800738a(iVar3,PTR_DAT_08008980);
    if (iVar1 == 0) {
      FUN_08008990(param_1,1);
      uVar2 = *(uint *)PTR_DAT_08008988;
      if (uVar2 != 8) {
        if (uVar2 < 9) {
          param_2 = param_2 << (8 - uVar2 & 0xff);
        }
        else {
          param_2 = param_2 >> (uVar2 - 8 & 0xff);
        }
      }
      if (param_2 < 0x80) {
        FUN_08008a24(param_1,0);
      }
      else {
        FUN_08008a24(param_1,1);
      }
    }
    else {
      iVar1 = FUN_08006b28(iVar3,PTR_DAT_08008984);
      if (iVar1 == 0) {
        FUN_08006b3e(iVar3,PTR_DAT_08008984);
      }
      uVar2 = *(uint *)PTR_DAT_08008988;
      if (uVar2 != 8) {
        if (uVar2 < 9) {
          param_2 = param_2 << (8 - uVar2 & 0xff);
        }
        else {
          param_2 = param_2 >> (uVar2 - 8 & 0xff);
        }
      }
      FUN_08007118(iVar3,DAT_0800898c,0xff,param_2,iVar1 == 0);
    }
  }
  return;
}


////>>0x08008990>>FUN_08008990>>////

void FUN_08008990(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  if (param_1 < 0x3c) {
    iVar3 = (int)(char)PTR_DAT_08008a14[param_1];
    puVar2 = PTR_DAT_08008a14;
  }
  else {
    iVar3 = -1;
    puVar2 = param_4;
  }
  if (iVar3 != -1) {
    iVar1 = FUN_08006b28(iVar3,PTR_DAT_08008a18,param_3,puVar2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_0800738a(iVar3,PTR_DAT_08008a1c);
      if (iVar1 != 0) {
        FUN_080071e4(iVar3);
      }
      FUN_08006b5c(iVar3,PTR_DAT_08008a18);
    }
    switch(param_2) {
    case 0:
      FUN_08007258(iVar3,0);
      break;
    case 1:
      FUN_08007258(iVar3,1,0);
      break;
    case 2:
      FUN_08007258(iVar3,0,1);
      break;
    case 3:
      FUN_08007258(iVar3,0,2);
    }
    FUN_08006b3e(iVar3,PTR_DAT_08008a20);
  }
  return;
}


////>>0x08008a24>>FUN_08008a24>>////

void FUN_08008a24(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)PTR_DAT_08008a64[param_1];
    puVar3 = PTR_DAT_08008a64;
  }
  else {
    uVar4 = 0xffffffff;
    puVar3 = param_4;
  }
  if ((uVar4 != 0xffffffff) &&
     (iVar1 = FUN_08006b28(uVar4,PTR_DAT_08008a68,param_3,puVar3,param_4), iVar1 != 0)) {
    uVar2 = FUN_08006b7c((uVar4 << 0x18) >> 0x1c);
    FUN_080072d8(uVar2,1 << (uVar4 & 0xf) & 0xffff,param_2);
  }
  return;
}


////>>0x08008a6c>>FUN_08008a6c>>////

char FUN_08008a6c(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)PTR_DAT_08008ab4[param_1];
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0xffffffff) {
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_08006b28(uVar4,PTR_DAT_08008ab8);
    if (iVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      uVar3 = FUN_08006b7c((uVar4 << 0x18) >> 0x1c);
      cVar1 = FUN_080072f0(uVar3,1 << (uVar4 & 0xf) & 0xffff);
    }
  }
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


////>>0x08008abc>>FUN_08008abc>>////

void FUN_08008abc(void)

{
  FUN_0800723c();
  return;
}


////>>0x08008ac4>>FUN_08008ac4>>////

void FUN_08008ac4(void)

{
  return;
}


////>>0x08008afa>>FUN_08008afa>>////

ushort FUN_08008afa(int param_1)

{
  return (*(short *)(param_1 + 0x134) + 0x40) - *(short *)(param_1 + 0x136) & 0x3f;
}


////>>0x08008b66>>FUN_08008b66>>////

void FUN_08008b66(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined local_9;
  
  iVar1 = FUN_08008600(param_1,&local_9);
  if ((iVar1 == 0) &&
     (uVar2 = *(short *)(param_1 + 0x60) + 1U & 0x3f, uVar2 != *(ushort *)(param_1 + 0x62))) {
    *(undefined *)(*(int *)(param_1 + 0x5c) + (uint)*(ushort *)(param_1 + 0x60)) = local_9;
    *(ushort *)(param_1 + 0x60) = uVar2;
  }
  return;
}


////>>0x08008bf4>>FUN_08008bf4>>////

void FUN_08008bf4(void)

{
  if (DAT_08008c18 != 0) {
    FUN_08008afa(PTR_DAT_08008c1c);
  }
  return;
}


////>>0x08008c20>>FUN_08008c20>>////

void FUN_08008c20(int param_1)

{
  *(int *)(param_1 + 0x130) = param_1 + 0x11;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(int *)(param_1 + 0x138) = param_1 + 0x51;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x13e) = 0;
  return;
}


////>>0x08008c44>>FUN_08008c44>>////

void FUN_08008c44(int param_1,undefined4 param_2,byte param_3)

{
  uint extraout_r1;
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(byte *)(param_1 + 0x140) = param_3;
  bVar1 = param_3 & 7;
  if (bVar1 == 4) {
    iVar2 = 7;
  }
  else if (bVar1 == 6) {
    iVar2 = 8;
  }
  else if (bVar1 == 2) {
    iVar2 = 6;
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x30) == 0x30) {
    *(undefined4 *)(param_1 + 0x128) = 0x600;
    iVar2 = iVar2 + 1;
  }
  else if ((param_3 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0x400;
    iVar2 = iVar2 + 1;
  }
  if ((param_3 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0x2000;
  }
  if (iVar2 == 8) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else if (iVar2 == 9) {
    *(undefined4 *)(param_1 + 0x120) = 0x1000;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_08008078(param_1 + 0xd4);
    FUN_0800863c(param_1 + 0xd4,uRam08008cf0);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x8008cee;
  FUN_080090cc(uRam08008cfc,299,uRam08008cf8,uRam08008cf4);
  if (extraout_r1 < 0x3c) {
    uRam0000012d = PTR_DAT_08008d14[extraout_r1];
  }
  else {
    uRam0000012d = 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x08008d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,extraout_r1,&stack0x00000148);
  return;
}


////>>0x08008d00>>FUN_08008d00>>////

void FUN_08008d00(int param_1,uint param_2)

{
  undefined uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0x3c) {
    uVar1 = PTR_DAT_08008d14[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x12d) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x08008d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08008d18>>FUN_08008d18>>////

void FUN_08008d18(int param_1,uint param_2)

{
  undefined uVar1;
  
  if (param_2 < 0x3c) {
    uVar1 = PTR_DAT_08008d2c[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 300) = uVar1;
  return;
}


////>>0x08008d30>>FUN_08008d30>>////

undefined4 *
FUN_08008d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = PTR_PTR_LAB_08008ba4_1_08008d7c;
  if (param_1 == (undefined4 *)PTR_DAT_08008d80) {
    FUN_08008d00(param_1,0,param_3,PTR_DAT_08008d80,param_4);
    FUN_08008d18(param_1,1);
  }
  else {
    uVar1 = FUN_0800734a(param_2,PTR_DAT_08008d84);
    *(undefined *)((int)param_1 + 0x12d) = uVar1;
    uVar1 = FUN_0800734a(param_2,PTR_DAT_08008d88);
    *(undefined *)(param_1 + 0x4b) = uVar1;
  }
  FUN_08008c20(param_1);
  return param_1;
}


////>>0x08008d8c>>FUN_08008d8c>>////

void FUN_08008d8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_08008d30(PTR_DAT_08008dac,DAT_08008da8,param_3,0xffff,param_4);
  }
  return;
}


////>>0x08008df8>>FUN_08008df8>>////

void FUN_08008df8(undefined4 *param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *param_1 = PTR_PTR_LAB_08008dbe_1_08008e10;
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = param_3;
  *(undefined *)((int)param_1 + 6) = param_4;
  *(undefined *)((int)param_1 + 7) = param_5;
  return;
}


////>>0x08008e14>>FUN_08008e14>>////

void FUN_08008e14(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_08008df8(PTR_DAT_08008e3c,0,0,0,0);
    return;
  }
  return;
}


////>>0x08008e72>>FUN_08008e72>>////

void FUN_08008e72(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}


////>>0x08008e7c>>FUN_08008e7c>>////

undefined4 FUN_08008e7c(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_15 [9];
  
  local_15[1] = 0;
  if ((int)param_3 < 2) {
    param_3 = 10;
  }
  pcVar5 = local_15 + 1;
  do {
    uVar4 = param_2 / param_3;
    uVar3 = (param_2 & 0xff) - (uVar4 * param_3 & 0xff) & 0xff;
    pcVar5 = pcVar5 + -1;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      cVar1 = cVar1 + '0';
    }
    else {
      cVar1 = cVar1 + '7';
    }
    *pcVar5 = cVar1;
    param_2 = uVar4;
  } while (uVar4 != 0);
  if (pcVar5 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08000178(pcVar5);
    uVar2 = (**(code **)(*param_1 + 4))(param_1,pcVar5,uVar2);
  }
  return uVar2;
}


////>>0x08008ed6>>FUN_08008ed6>>////

void FUN_08008ed6(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  if (param_3 != 0) {
    FUN_08008e7c(param_1,param_2,param_3 & 0xff);
    return;
  }
  (**(code **)*param_1)(param_1,param_2 & 0xff,0,*(code **)*param_1,param_4);
  return;
}


////>>0x08008eec>>FUN_08008eec>>////

void FUN_08008eec(void)

{
  FUN_08008ed6();
  return;
}


////>>0x08008ef4>>FUN_08008ef4>>////

int FUN_08008ef4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (uint)((param_5 - param_4) * (param_1 - param_2)) / (uint)(param_3 - param_2) + param_4;
}


////>>0x08008f0c>>FUN_08008f0c>>////

void FUN_08008f0c(void)

{
  return;
}


////>>0x08008f0e>>FUN_08008f0e>>////

void FUN_08008f0e(void)

{
  FUN_08003f0c(3);
  FUN_080036a2();
  return;
}


////>>0x08008f1c>>FUN_08008f1c>>////

void FUN_08008f1c(void)

{
  FUN_08008f0c();
  FUN_08001b48();
  do {
    do {
      FUN_080022f8();
    } while (DAT_08008f38 == 0);
    FUN_08008bf4();
  } while( true );
}


////>>0x08008f3c>>FUN_08008f3c>>////

char FUN_08008f3c(uint param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; param_1 != 1; param_1 = param_1 >> 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


////>>0x08008f78>>FUN_08008f78>>////

void FUN_08008f78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_08009018;
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    *PTR_DAT_08009018 = 6;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x14] = 7;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x28] = 8;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    puVar1[0x3c] = 9;
    *(undefined4 *)(puVar1 + 0x48) = 0;
    puVar1[0x50] = 10;
    *(undefined4 *)(puVar1 + 0x5c) = 0;
    puVar1[100] = 0x17;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    puVar1[0x78] = 0x17;
    *(undefined4 *)(puVar1 + 0x84) = 0;
    puVar1[0x8c] = 0x17;
    *(undefined4 *)(puVar1 + 0x98) = 0;
    puVar1[0xa0] = 0x17;
    *(undefined4 *)(puVar1 + 0xac) = 0;
    puVar1[0xb4] = 0x17;
    *(undefined4 *)(puVar1 + 0xc0) = 0;
    puVar1[200] = 0x28;
    *(undefined4 *)(puVar1 + 0xd4) = 0;
    puVar1[0xdc] = 0x28;
    *(undefined4 *)(puVar1 + 0xe8) = 0;
    puVar1[0xf0] = 0x28;
    *(undefined4 *)(puVar1 + 0xfc) = 0;
    puVar1[0x104] = 0x28;
    *(undefined4 *)(puVar1 + 0x110) = 0;
    puVar1[0x118] = 0x28;
    *(undefined4 *)(puVar1 + 0x124) = 0;
    puVar1[300] = 0x28;
    *(undefined4 *)(puVar1 + 0x138) = 0;
    FUN_080090c2(0,PTR_LAB_08008f50_1_08009020,PTR_DAT_0800901c,puVar1,param_4);
  }
  return;
}


////>>0x08009084>>FUN_08009084>>////

void FUN_08009084(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 0xc))();
    return;
  }
  FUN_0800a18c();
  iVar1 = FUN_08008f3c();
  if (*(int *)(PTR_DAT_080090b0 + iVar1 * 0x14 + 0xc) != 0) {
    FUN_08009084();
  }
  return;
}


////>>0x08009094>>FUN_08009094>>////

void FUN_08009094(void)

{
  int iVar1;
  
  iVar1 = FUN_08008f3c();
  if (*(int *)(PTR_DAT_080090b0 + iVar1 * 0x14 + 0xc) != 0) {
    FUN_08009084();
  }
  return;
}


////>>0x080090c2>>FUN_080090c2>>////

void FUN_080090c2(undefined4 param_1,undefined4 param_2)

{
  FUN_08009108(param_2,param_1);
  return;
}


////>>0x080090cc>>FUN_080090cc>>////

void FUN_080090cc(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(*(int *)PTR_PTR_DAT_080090f8 + 0xc);
  puVar2 = PTR_s___function__080090fc;
  uVar4 = param_4;
  if (param_3 == (undefined *)0x0) goto LAB_080090f0;
  do {
    FUN_08009124(uVar1,PTR_s_assertion___s__failed__file___s__08009100,param_4,param_1,param_2,
                 puVar2,param_3,uVar4);
    uVar3 = FUN_08009b5c();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
LAB_080090f0:
    param_3 = PTR_s__08009104;
    puVar2 = PTR_s__08009104;
  } while( true );
}


////>>0x08009108>>FUN_08009108>>////

longlong FUN_08009108(undefined4 param_1,uint param_2)

{
  if (DAT_08009120 != 0) {
    return CONCAT44(param_1,2);
  }
  return (ulonglong)param_2 << 0x20;
}


////>>0x08009124>>FUN_08009124>>////

void FUN_08009124(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0800937c(*(undefined4 *)PTR_PTR_DAT_08009144,param_1,param_2,&uStack_8,param_1,&uStack_8);
  return;
}


////>>0x08009148>>FUN_08009148>>////

void FUN_08009148(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_08009180;
  iVar2 = (int)PTR_DAT_08009184 - (int)PTR_DAT_08009180;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(puVar1 + iVar3 * 4))();
  }
  FUN_0800a424();
  puVar1 = PTR_DAT_08009188;
  iVar2 = (int)PTR_DAT_0800918c - (int)PTR_DAT_08009188;
  for (iVar3 = 0; iVar3 != iVar2 >> 2; iVar3 = iVar3 + 1) {
    (**(code **)(puVar1 + iVar3 * 4))();
  }
  return;
}


////>>0x08009190>>FUN_08009190>>////

void FUN_08009190(undefined4 param_1)

{
  FUN_08009270(*(undefined4 *)PTR_PTR_DAT_0800919c,param_1);
  return;
}


////>>0x080091a0>>FUN_080091a0>>////

void FUN_080091a0(undefined4 param_1)

{
  FUN_080091d8(*(undefined4 *)PTR_PTR_DAT_080091ac,param_1);
  return;
}


////>>0x080091b0>>FUN_080091b0>>////

void FUN_080091b0(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(param_1 + -1);
  puVar1 = param_2 + param_3;
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    puVar2 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  return;
}


////>>0x080091c6>>FUN_080091c6>>////

void FUN_080091c6(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


////>>0x080091d8>>FUN_080091d8>>////

void FUN_080091d8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int **extraout_r1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  if (param_2 == 0) {
    return;
  }
  ppiVar7 = (int **)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    ppiVar7 = (int **)((int)ppiVar7 + *(int *)(param_2 + -4));
  }
  FUN_08009f48();
  puVar1 = PTR_DAT_0800926c;
  ppiVar5 = *(int ***)PTR_DAT_0800926c;
  if (ppiVar5 == (int **)0x0) {
    ppiVar7[1] = (int *)0x0;
    *(int ***)puVar1 = ppiVar7;
    ppiVar2 = extraout_r1;
    ppiVar3 = (int **)puVar1;
  }
  else if (ppiVar7 < ppiVar5) {
    ppiVar2 = (int **)*ppiVar7;
    ppiVar3 = (int **)((int)ppiVar7 + (int)ppiVar2);
    if (ppiVar5 == ppiVar3) {
      piVar4 = *ppiVar5;
      ppiVar5 = (int **)ppiVar5[1];
      ppiVar3 = (int **)((int)piVar4 + (int)ppiVar2);
      *ppiVar7 = (int *)ppiVar3;
    }
    ppiVar7[1] = (int *)ppiVar5;
    *(int ***)puVar1 = ppiVar7;
  }
  else {
    do {
      ppiVar6 = ppiVar5;
      ppiVar3 = (int **)ppiVar6[1];
      if (ppiVar3 == (int **)0x0) break;
      ppiVar5 = ppiVar3;
    } while (ppiVar3 <= ppiVar7);
    ppiVar2 = (int **)*ppiVar6;
    if ((int **)((int)ppiVar6 + (int)ppiVar2) == ppiVar7) {
      ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar7);
      *ppiVar6 = (int *)ppiVar2;
      if (ppiVar3 == (int **)((int)ppiVar6 + (int)ppiVar2)) {
        piVar4 = *ppiVar3;
        ppiVar3 = (int **)ppiVar3[1];
        ppiVar2 = (int **)((int)ppiVar2 + (int)piVar4);
        *ppiVar6 = (int *)ppiVar2;
        ppiVar6[1] = (int *)ppiVar3;
      }
    }
    else if (ppiVar7 < (int **)((int)ppiVar6 + (int)ppiVar2)) {
      *param_1 = 0xc;
    }
    else {
      ppiVar2 = (int **)((int)ppiVar7 + (int)*ppiVar7);
      if (ppiVar3 == ppiVar2) {
        piVar4 = *ppiVar3;
        ppiVar3 = (int **)ppiVar3[1];
        ppiVar2 = (int **)((int)piVar4 + (int)*ppiVar7);
        *ppiVar7 = (int *)ppiVar2;
      }
      ppiVar7[1] = (int *)ppiVar3;
      ppiVar6[1] = (int *)ppiVar7;
    }
  }
  FUN_08009f4a(param_1,ppiVar2,ppiVar3,param_4);
  return;
}


////>>0x08009270>>FUN_08009270>>////

uint FUN_08009270(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar8 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar8 < 0xc) {
    uVar8 = 0xc;
  }
  if (((int)uVar8 < 0) || (uVar8 < param_2)) {
    *param_1 = 0xc;
  }
  else {
    FUN_08009f48();
    puVar1 = PTR_DAT_08009328;
    puVar3 = *(uint **)PTR_DAT_08009324;
    puVar7 = *(uint **)PTR_DAT_08009324;
    while (puVar5 = puVar3, puVar5 != (uint *)0x0) {
      uVar6 = *puVar5 - uVar8;
      if (-1 < (int)uVar6) {
        if (uVar6 < 0xc) {
          if (puVar7 == puVar5) {
            uVar8 = puVar7[1];
            *(uint *)PTR_DAT_08009324 = uVar8;
          }
          else {
            uVar8 = puVar5[1];
          }
          if (puVar7 != puVar5) {
            puVar7[1] = uVar8;
            puVar7 = puVar5;
          }
        }
        else {
          *puVar5 = uVar6;
          *(uint *)((int)puVar5 + uVar6) = uVar8;
          puVar7 = (uint *)((int)puVar5 + uVar6);
        }
        goto LAB_080092d4;
      }
      puVar7 = puVar5;
      puVar3 = (uint *)puVar5[1];
    }
    if (*(int *)PTR_DAT_08009328 == 0) {
      uVar2 = FUN_08009918(param_1);
      *(undefined4 *)puVar1 = uVar2;
    }
    puVar3 = (uint *)FUN_08009918(param_1,uVar8);
    if ((puVar3 != (uint *)0xffffffff) &&
       ((puVar7 = (uint *)((int)puVar3 + 3U & 0xfffffffc), puVar3 == puVar7 ||
        (iVar4 = FUN_08009918(param_1,(int)puVar7 - (int)puVar3), iVar4 != -1)))) {
      *puVar7 = uVar8;
LAB_080092d4:
      FUN_08009f4a(param_1);
      uVar8 = (int)puVar7 + 0xbU & 0xfffffff8;
      iVar4 = uVar8 - (int)(puVar7 + 1);
      if (iVar4 != 0) {
        *(int *)((int)puVar7 + iVar4) = -iVar4;
        return uVar8;
      }
      return uVar8;
    }
    *param_1 = 0xc;
    FUN_08009f4a(param_1);
  }
  return 0;
}


////>>0x0800932c>>FUN_0800932c>>////

uint FUN_0800932c(int param_1,byte param_2,byte **param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar2 = param_3[2] + -1;
  param_3[2] = pbVar2;
  if ((-1 < (int)pbVar2) ||
     (((int)param_3[6] <= (int)pbVar2 && (pbVar2 = (byte *)(uint)param_2, pbVar2 != (byte *)0xa))))
  {
    pbVar2 = *param_3;
    *param_3 = pbVar2 + 1;
    *pbVar2 = param_2;
    return (uint)param_2;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_08009d50();
  }
  if (param_3 == (byte **)PTR_DAT_08009a74) {
    param_3 = *(byte ***)(param_1 + 4);
  }
  else if (param_3 == (byte **)PTR_DAT_08009a78) {
    param_3 = *(byte ***)(param_1 + 8);
  }
  else if (param_3 == (byte **)PTR_DAT_08009a7c) {
    param_3 = *(byte ***)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  pbVar3 = (byte *)(uint)*(ushort *)(param_3 + 3);
  iVar1 = (int)pbVar3 << 0x1c;
  if (((iVar1 < 0) && (pbVar3 = param_3[4], pbVar3 != (byte *)0x0)) ||
     (iVar1 = FUN_08009a80(param_1,param_3,iVar1,pbVar3,pbVar2), iVar1 == 0)) {
    uVar4 = (uint)param_2;
    iVar1 = (int)*param_3 - (int)param_3[4];
    if ((iVar1 < (int)param_3[5]) || (iVar1 = FUN_08009c7c(param_1,param_3), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      pbVar2 = *param_3;
      *param_3 = pbVar2 + 1;
      *pbVar2 = param_2;
      if ((byte *)(iVar1 + 1) != param_3[5]) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return uVar4;
        }
        if (uVar4 != 10) {
          return uVar4;
        }
      }
      iVar1 = FUN_08009c7c(param_1,param_3);
      if (iVar1 == 0) {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


////>>0x08009358>>FUN_08009358>>////

int FUN_08009358(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = FUN_0800932c(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x0800937c>>FUN_0800937c>>////

int FUN_0800937c(int param_1,undefined *param_2,byte *param_3,int *param_4)

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
    FUN_08009d50();
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
     (iVar7 = FUN_08009a80(param_1,param_2), iVar7 != 0)) {
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
    iVar2 = FUN_08009358(param_1,param_2,param_3,iVar7);
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
    iVar7 = FUN_08009f2c(PTR_s___0__0800958c,*pbVar5);
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
  iVar7 = FUN_08009f2c(PTR_DAT_08009598,*param_3,3);
  if (iVar7 != 0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << (iVar7 - (int)puVar1 & 0xffU);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar7 = FUN_08009f2c(PTR_s_efgEFG_0800959c,local_70,6);
  if (iVar7 == 0) {
    iVar7 = FUN_08009698(param_1,&local_88,param_2,DAT_080095a4,&local_8c);
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


////>>0x080095a8>>FUN_080095a8>>////

undefined4
FUN_080095a8(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar2 = param_2[2];
  }
  *param_3 = uVar2;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar2 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  uVar2 = *param_2 & 6;
  if (uVar2 == 0) {
    for (; (int)uVar2 < (int)(param_2[3] - *param_3); uVar2 = uVar2 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
  }
  uVar2 = (uint)*(byte *)((int)param_2 + 0x43);
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  uVar3 = uVar2;
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + uVar2 + 0x43) = 0x30;
    uVar3 = uVar2 + 2;
    *(undefined *)((int)param_2 + uVar2 + 0x44) = *(undefined *)((int)param_2 + 0x45);
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar3);
  if (iVar1 != -1) {
    uVar2 = param_2[3];
    bVar4 = (*param_2 & 6) != 4;
    if (bVar4) {
      uVar2 = 0;
    }
    uVar3 = 0;
    if (!bVar4) {
      uVar2 = uVar2 - *param_3;
    }
    if (!bVar4) {
      uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar2 = uVar2 + (param_2[2] - param_2[4]);
    }
    while( true ) {
      if (uVar2 == uVar3) {
        return 0;
      }
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) break;
      uVar3 = uVar3 + 1;
    }
  }
  return 0xffffffff;
}


////>>0x08009698>>FUN_08009698>>////

uint FUN_08009698(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

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
      iVar2 = FUN_08009f2c(puVar11,0,param_2[1]);
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
  iVar2 = FUN_080095a8(param_1,param_2,local_24,param_3,param_4);
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


////>>0x080098d8>>FUN_080098d8>>////

void FUN_080098d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)PTR_PTR_DAT_08009904;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
    FUN_08009d50(iVar1);
  }
  FUN_0800937c(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


////>>0x08009908>>FUN_08009908>>////

uint FUN_08009908(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)PTR_PTR_DAT_08009914;
  if (param_1 != 0) {
    if (param_2 == 0) {
      FUN_080091d8();
      uVar2 = param_2;
    }
    else {
      uVar3 = FUN_0800a154();
      uVar2 = param_1;
      if ((uVar3 < param_2) && (uVar2 = FUN_08009270(uVar1,param_2), uVar2 != 0)) {
        FUN_080091b0(uVar2,param_1,param_2);
        FUN_080091d8(uVar1,param_1);
      }
    }
    return uVar2;
  }
  uVar2 = FUN_08009270(uVar1,param_2,param_2,PTR_PTR_DAT_08009914);
  return uVar2;
}


////>>0x08009918>>FUN_08009918>>////

void FUN_08009918(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_08009934;
  *(undefined4 *)PTR_DAT_08009934 = 0;
  iVar2 = FUN_08008804(param_2);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
  }
  return;
}


////>>0x08009938>>FUN_08009938>>////

char * FUN_08009938(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_1;
    if (*pcVar1 == '\0') {
      if (param_2 != '\0') {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    param_1 = pcVar1 + 1;
  } while (param_2 != *pcVar1);
  return pcVar1;
}


////>>0x08009954>>FUN_08009954>>////

void FUN_08009954(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  do {
    pcVar3 = param_1;
    iVar2 = param_3;
    if (iVar2 == 0) {
      return;
    }
    cVar1 = *param_2;
    param_1 = pcVar3 + 1;
    *pcVar3 = cVar1;
    param_2 = param_2 + 1;
    param_3 = iVar2 + -1;
  } while (cVar1 != '\0');
  for (; param_1 != pcVar3 + iVar2; param_1 = param_1 + 1) {
    *param_1 = '\0';
  }
  return;
}


////>>0x0800997e>>FUN_0800997e>>////

int FUN_0800997e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    while (iVar1 = FUN_08009938(param_1,param_2,param_3,param_1,param_4), iVar1 != 0) {
      param_1 = iVar1 + 1;
      iVar2 = iVar1;
    }
    return iVar2;
  }
  iVar2 = FUN_08009938();
  return iVar2;
}


////>>0x080099a4>>FUN_080099a4>>////

char * FUN_080099a4(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      param_1 = (char *)0x0;
    }
    return param_1;
  }
  do {
    pcVar1 = param_1;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar3 = param_2 + -1;
    pcVar2 = pcVar1 + -1;
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return pcVar1;
      }
      pcVar2 = pcVar2 + 1;
      param_1 = pcVar1 + 1;
    } while (*pcVar2 == *pcVar3);
  } while( true );
}


////>>0x08009a80>>FUN_08009a80>>////

uint FUN_08009a80(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)PTR_PTR_DAT_08009b4c;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 0)) {
    FUN_08009d50(iVar3);
  }
  if (param_2 == (undefined4 *)PTR_DAT_08009b50) {
    param_2 = *(undefined4 **)(iVar3 + 4);
  }
  else if (param_2 == (undefined4 *)PTR_DAT_08009b54) {
    param_2 = *(undefined4 **)(iVar3 + 8);
  }
  else if (param_2 == (undefined4 *)PTR_DAT_08009b58) {
    param_2 = *(undefined4 **)(iVar3 + 0xc);
  }
  uVar2 = *(ushort *)(param_2 + 3);
  uVar1 = (uint)uVar2;
  if (-1 < (int)(uVar1 << 0x1c)) {
    if (-1 < (int)(uVar1 << 0x1b)) {
      *param_1 = 9;
      goto LAB_08009ab0;
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_080091d8(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    FUN_08009eac(param_1,param_2);
  }
  uVar2 = *(ushort *)(param_2 + 3);
  uVar1 = uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    if (-1 < (int)((uint)uVar2 << 0x1e)) {
      uVar1 = param_2[5];
    }
    param_2[2] = uVar1;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] == 0) {
    uVar2 = *(ushort *)(param_2 + 3);
    uVar1 = (int)(short)uVar2 & 0x80;
    if (uVar1 != 0) {
LAB_08009ab0:
      *(ushort *)(param_2 + 3) = uVar2 | 0x40;
      return 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08009b5c>>FUN_08009b5c>>////

void FUN_08009b5c(void)

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
  
  FUN_08009fe8(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x8009b6b;
  uVar12 = FUN_08008868(1);
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
        FUN_080091d8(puVar1);
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


////>>0x08009c7c>>FUN_08009c7c>>////

undefined4 FUN_08009c7c(uint *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar10;
  
  if (param_2[4] != 0) {
    if ((param_1 != (uint *)0x0) && (param_1[6] == 0)) {
      FUN_08009d50();
    }
    if (param_2 == (int *)PTR_DAT_08009cc4) {
      param_2 = (int *)param_1[1];
    }
    else if (param_2 == (int *)PTR_DAT_08009cc8) {
      param_2 = (int *)param_1[2];
    }
    else if (param_2 == (int *)PTR_DAT_08009ccc) {
      param_2 = (int *)param_1[3];
    }
    if (*(short *)(param_2 + 3) != 0) {
      uVar5 = *(ushort *)(param_2 + 3);
      uVar4 = (uint)uVar5;
      if ((int)(uVar4 << 0x1c) < 0) {
        iVar2 = param_2[4];
        if (iVar2 != 0) {
          iVar6 = uVar4 << 0x1e;
          bVar10 = iVar6 != 0;
          if (bVar10) {
            iVar6 = 0;
          }
          iVar8 = *param_2;
          if (!bVar10) {
            iVar6 = param_2[5];
          }
          *param_2 = iVar2;
          param_2[2] = iVar6;
          for (iVar8 = iVar8 - iVar2; 0 < iVar8; iVar8 = iVar8 - iVar6) {
            iVar6 = (*(code *)param_2[10])(param_1,param_2[8],iVar2,iVar8,unaff_r4,unaff_r5);
            if (iVar6 < 1) {
              uVar5 = *(ushort *)(param_2 + 3);
              goto LAB_08009c62;
            }
            iVar2 = iVar2 + iVar6;
          }
        }
      }
      else if (((0 < param_2[1]) || (0 < param_2[0x10])) &&
              (pcVar7 = (code *)param_2[0xb], pcVar7 != (code *)0x0)) {
        uVar9 = *param_1;
        *param_1 = 0;
        if ((uVar5 & 0x1000) == 0) {
          iVar2 = (*pcVar7)(param_1,param_2[8],uVar4 & 0x1000,1);
          if ((iVar2 == -1) && (uVar4 = *param_1, uVar4 != 0)) {
            if ((uVar4 != 0x1d) && (uVar4 != 0x16)) {
              *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
              return uVar1;
            }
            *param_1 = uVar9;
            goto LAB_08009b86;
          }
        }
        else {
          iVar2 = param_2[0x15];
        }
        if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
           (iVar2 = iVar2 - param_2[1], param_2[0xd] != 0)) {
          iVar2 = iVar2 - param_2[0x10];
        }
        iVar2 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar2,0);
        uVar5 = *(ushort *)(param_2 + 3);
        if ((iVar2 == -1) &&
           ((0x1d < *param_1 || (-1 < (int)((DAT_08009c78 >> (*param_1 & 0xff)) << 0x1f))))) {
LAB_08009c62:
          *(ushort *)(param_2 + 3) = uVar5 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
          return uVar1;
        }
        param_2[1] = 0;
        *param_2 = param_2[4];
        if (((int)((uint)uVar5 << 0x13) < 0) && ((iVar2 != -1 || (*param_1 == 0)))) {
          param_2[0x15] = iVar2;
        }
        piVar3 = (int *)param_2[0xd];
        *param_1 = uVar9;
        if (piVar3 != (int *)0x0) {
          if (piVar3 != param_2 + 0x11) {
            FUN_080091d8(param_1);
          }
          param_2[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08009c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar1;
        }
      }
LAB_08009b86:
                    /* WARNING: Could not recover jumptable at 0x08009b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0);
      return uVar1;
    }
  }
  return 0;
}


////>>0x08009cdc>>FUN_08009cdc>>////

void FUN_08009cdc(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_080091c6(param_1 + 0x17,0,8);
  uVar1 = DAT_08009d14;
  param_1[8] = param_1;
  param_1[9] = uVar1;
  param_1[10] = PTR_FUN_0800a042_1_08009d18;
  param_1[0xb] = PTR_FUN_0800a07a_1_08009d1c;
  param_1[0xc] = PTR_LAB_0800a09e_1_08009d20;
  return;
}


////>>0x08009d24>>FUN_08009d24>>////

undefined4 * FUN_08009d24(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_08009270(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_080091c6(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x08009d50>>FUN_08009d50>>////

void FUN_08009d50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar2 = *(int *)PTR_PTR_DAT_08009da8;
    *(undefined **)(param_1 + 0x28) = PTR_LAB_08009cd0_1_08009dac;
    bVar3 = param_1 == iVar2;
    if (bVar3) {
      iVar2 = 1;
    }
    if (bVar3) {
      *(int *)(param_1 + 0x18) = iVar2;
    }
    uVar1 = FUN_08009db0();
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_08009db0(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_08009db0(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_08009cdc(*(undefined4 *)(param_1 + 4),4,0);
    FUN_08009cdc(*(undefined4 *)(param_1 + 8),9,1);
    FUN_08009cdc(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


////>>0x08009db0>>FUN_08009db0>>////

int * FUN_08009db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  
  iVar3 = *(int *)PTR_PTR_DAT_08009e24;
  if (*(int *)(iVar3 + 0x18) == 0) {
    FUN_08009d50(iVar3);
  }
  ppiVar4 = (int **)(iVar3 + 0x48);
  do {
    piVar2 = ppiVar4[2];
    piVar1 = ppiVar4[1];
    while (piVar1 = (int *)((int)piVar1 + -1), -1 < (int)piVar1) {
      if (*(short *)(piVar2 + 3) == 0) {
        *(undefined2 *)((int)piVar2 + 0xe) = 0xffff;
        piVar2[0x19] = 0;
        *(undefined2 *)(piVar2 + 3) = 1;
        *piVar2 = 0;
        piVar2[2] = 0;
        piVar2[1] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        FUN_080091c6(piVar2 + 0x17,0,8,1,param_4);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar4 == (int *)0x0) {
      piVar1 = (int *)FUN_08009d24(param_1,4);
      *ppiVar4 = piVar1;
      if (piVar1 == (int *)0x0) {
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar4 = (int **)*ppiVar4;
  } while( true );
}


////>>0x08009e64>>FUN_08009e64>>////

undefined4 FUN_08009e64(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_4c [4];
  uint local_48;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = FUN_0800a0ec(param_1,(int)*(short *)(param_2 + 0xe),auStack_4c), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_08009ea4;
    }
  }
  else {
    *param_4 = (uint)((local_48 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_08009ea4:
  *param_3 = uVar2;
  return 0;
}


////>>0x08009eac>>FUN_08009eac>>////

void FUN_08009eac(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = FUN_08009e64(param_1,param_2,&local_18,&local_14);
    iVar2 = FUN_08009270(param_1,local_18);
    if (iVar2 != 0) {
      *(undefined **)(param_1 + 0x28) = PTR_LAB_08009cd0_1_08009f28;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[4] = iVar2;
      param_2[5] = local_18;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = FUN_0800a110(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
      }
      *(ushort *)(param_2 + 3) = uVar1 | *(ushort *)(param_2 + 3);
      return;
    }
    if ((int)(short)*(ushort *)(param_2 + 3) << 0x16 < 0) {
      return;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
  }
  *param_2 = (int)param_2 + 0x47;
  param_2[4] = (int)param_2 + 0x47;
  param_2[5] = 1;
  return;
}


////>>0x08009f2c>>FUN_08009f2c>>////

char * FUN_08009f2c(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    if (pcVar2 == param_1 + param_3) {
      return (char *)0x0;
    }
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != param_2);
  return pcVar2;
}


////>>0x08009f48>>FUN_08009f48>>////

void FUN_08009f48(void)

{
  return;
}


////>>0x08009f4a>>FUN_08009f4a>>////

void FUN_08009f4a(void)

{
  return;
}


////>>0x08009fe8>>FUN_08009fe8>>////

int FUN_08009fe8(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  undefined *puVar6;
  
  piVar3 = *(int **)PTR_PTR_DAT_08009ff4;
  if (0x1f < param_1) {
    *piVar3 = 0x16;
    return -1;
  }
  iVar4 = piVar3[0x11];
  if ((iVar4 != 0) && (pcVar5 = *(code **)(iVar4 + param_1 * 4), pcVar5 != (code *)0x0)) {
    if (pcVar5 != (code *)0x1) {
      if (pcVar5 == (code *)0xffffffff) {
        *piVar3 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar4 + param_1 * 4) = 0;
      (*pcVar5)(param_1);
    }
    return 0;
  }
  puVar6 = PTR_PTR_DAT_08009ff4;
  uVar2 = thunk_FUN_0800887c(piVar3);
  puVar1 = PTR_DAT_0800a018;
  *(undefined4 *)PTR_DAT_0800a018 = 0;
  iVar4 = FUN_0800886c(uVar2,param_1,param_1,0,puVar6,unaff_r4,unaff_r5,in_lr);
  if ((iVar4 == -1) && (*(int *)puVar1 != 0)) {
    *piVar3 = *(int *)puVar1;
  }
  return iVar4;
}


////>>0x0800a01c>>thunk_FUN_0800887c>>////

undefined4 thunk_FUN_0800887c(void)

{
  return 1;
}


////>>0x0800a020>>FUN_0800a020>>////

void FUN_0800a020(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0800a168(param_1,(int)*(short *)(param_2 + 0xe));
  bVar3 = -1 < iVar1;
  if (bVar3) {
    uVar2 = *(int *)(param_2 + 0x54) + iVar1;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xffffefff;
  }
  if (bVar3) {
    *(uint *)(param_2 + 0x54) = uVar2;
  }
  if (!bVar3) {
    *(short *)(param_2 + 0xc) = (short)uVar2;
  }
  return;
}


////>>0x0800a042>>FUN_0800a042>>////

void FUN_0800a042(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_0800a130(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  puVar2 = PTR_DAT_0800a0c8;
  sVar1 = *(short *)(param_2 + 0xe);
  *(undefined4 *)PTR_DAT_0800a0c8 = 0;
  iVar3 = FUN_0800885c((int)sVar1,param_3,param_4,param_4,param_4,unaff_r4,unaff_r5,in_lr);
  if ((iVar3 == -1) && (*(int *)puVar2 != 0)) {
    *param_1 = *(int *)puVar2;
  }
  return;
}


////>>0x0800a07a>>FUN_0800a07a>>////

void FUN_0800a07a(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  iVar1 = FUN_0800a130(param_1,(int)*(short *)(param_2 + 0xe));
  bVar3 = iVar1 == -1;
  if (bVar3) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_2 + 0x54) = iVar1;
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  if (!bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  return;
}


////>>0x0800a0ec>>FUN_0800a0ec>>////

void FUN_0800a0ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0800a10c;
  *(undefined4 *)PTR_DAT_0800a10c = 0;
  iVar2 = FUN_08008846(param_2,param_3,param_3,0,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
  }
  return;
}


////>>0x0800a110>>FUN_0800a110>>////

void FUN_0800a110(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0800a12c;
  *(undefined4 *)PTR_DAT_0800a12c = 0;
  iVar2 = FUN_08008850(param_2);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
  }
  return;
}


////>>0x0800a130>>FUN_0800a130>>////

void FUN_0800a130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0800a150;
  *(undefined4 *)PTR_DAT_0800a150 = 0;
  iVar2 = FUN_08008854(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
  }
  return;
}


////>>0x0800a154>>FUN_0800a154>>////

int FUN_0800a154(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x0800a168>>FUN_0800a168>>////

void FUN_0800a168(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0800a188;
  *(undefined4 *)PTR_DAT_0800a188 = 0;
  iVar2 = FUN_08008858(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*(int *)puVar1 != 0)) {
    *param_1 = *(int *)puVar1;
  }
  return;
}


////>>0x0800a18c>>FUN_0800a18c>>////

void FUN_0800a18c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_0800a18c;
  FUN_08009b5c();
  if (-1 < *(int *)PTR_DAT_0800a228 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a228 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a22c << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a22c = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a230 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a230 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a234 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a234 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a238 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a238 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a23c << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a23c = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a240 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a240 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a244 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a244 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a248 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a248 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a24c << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a24c = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a250 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a250 = 1;
  }
  if (-1 < *(int *)PTR_DAT_0800a254 << 0x1f) {
    *(undefined4 *)PTR_DAT_0800a254 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0800a224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x0800a424>>FUN_0800a424>>////

void FUN_0800a424(void)

{
  return;
}


////>>0x0800a430>>FUN_0800a430>>////

void FUN_0800a430(void)

{
  return;
}

