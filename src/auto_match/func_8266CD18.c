typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_82674070();
extern int fn_82674250();
extern int fn_82675498();
extern int fn_82679FA8();
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82684FA8();
extern int fn_82F68CC0();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002AE8;
extern unsigned int lbl_82002B98;
extern unsigned int lbl_82002BA4;
extern unsigned int lbl_82002BB0;
extern unsigned int lbl_82002BBC;
extern unsigned int lbl_82002BC8;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


undefined8 fn_8266CD18(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar1;
  double dVar5;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  
  puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x10,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 4;
    puVar2[3] = &lbl_82002AE8;
    *puVar2 = &lbl_82002BA4;
    puVar2[3] = &lbl_82002B98;
  }
  (**(code **)(*param_1 + 8))(param_1,4,puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    fn_8267C4F0(puVar2);
  }
  iVar3 = fn_8267B890(lbl_831E7E64,0x38,0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82675498();
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = iVar3;
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 8))(param_1,10);
    puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0xc,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 1;
      puVar2[2] = 0xb;
      *puVar2 = &lbl_82002BB0;
    }
    if (param_1[5] != 0) {
      fn_8267C4F0();
    }
    param_1[5] = (int)puVar2;
    (**(code **)(*param_1 + 8))(param_1,0xb,puVar2);
    iVar3 = fn_8267B890(lbl_831E7E64,0x20,0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82674250();
    }
    if (param_1[7] != 0) {
      fn_8267C4F0();
    }
    param_1[7] = iVar3;
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 8))(param_1,0x13);
      iVar3 = fn_8267B890(lbl_831E7E64,0x10,0);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82674070();
      }
      if (param_1[8] != 0) {
        fn_8267C4F0();
      }
      param_1[8] = iVar3;
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 8))(param_1,0x15);
        piVar4 = (int *)fn_82679FA8();
        if (param_1[9] != 0) {
          fn_8267C4F0();
        }
        param_1[9] = (int)piVar4;
        (**(code **)(*piVar4 + 0x8c))(piVar4,param_2,param_1 + 0xc,2,0);
        uVar1 = fn_8267B890(lbl_831E7E64,0x24,0);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_82684FA8(uVar1,param_1[9],0);
        }
        if (param_1[10] != 0) {
          fn_8267C4F0();
        }
        param_1[10] = iVar3;
        if ((param_1[9] != 0) && (iVar3 != 0)) {
          (**(code **)(*param_1 + 8))(param_1,1);
          puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0xc,0);
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2[1] = 1;
            puVar2[2] = 5;
            *puVar2 = &lbl_82002BBC;
          }
          if (param_1[6] != 0) {
            fn_8267C4F0();
          }
          param_1[6] = (int)puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)(*param_1 + 8))(param_1,5);
            param_1[0x33] = (int)param_2;
            param_1[0x34] = param_3;
            param_1[0x35] = param_4;
            *(undefined4 *)(param_1[10] + 0x14) = 0x10;
            puVar2 = (undefined4 *)fn_8267B890(lbl_831E7E64,0xc,0);
            if (puVar2 == (undefined4 *)0x0) {
              puVar2 = (undefined4 *)0x0;
            }
            else {
              puVar2[1] = 1;
              puVar2[2] = 9;
              *puVar2 = &lbl_82002BC8;
            }
            (**(code **)(*param_1 + 8))(param_1,9,puVar2);
            iStack_8c = param_1[0x35];
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_60 = 0;
            uStack_6c = 0;
            dVar5 = (double)lbl_82002AE0;
            uStack_70 = 0;
            fStack_64 = lbl_82002AE0;
            uStack_74 = 0;
            fStack_68 = lbl_82002AE0;
            uStack_78 = 0;
            iStack_90 = param_1[0x34];
            param_1[0x3e] = 1;
            iStack_80 = iStack_90;
            iStack_7c = iStack_8c;
            fn_82F68CC0(param_1 + 0x3f,&iStack_90,0x34);
            iStack_90 = param_1[0x34];
            iStack_8c = param_1[0x35];
            fStack_64 = (float)dVar5;
            fStack_68 = (float)dVar5;
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_60 = 0;
            uStack_6c = 0;
            uStack_70 = 0;
            uStack_74 = 0;
            uStack_78 = 0;
            param_1[0x4c] = 1;
            iStack_80 = iStack_90;
            iStack_7c = iStack_8c;
            fn_82F68CC0(param_1 + 0x4d,&iStack_90,0x34);
            if (puVar2 != (undefined4 *)0x0) {
              fn_8267C4F0(puVar2);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

