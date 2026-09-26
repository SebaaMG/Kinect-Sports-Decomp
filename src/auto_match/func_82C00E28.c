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
extern unsigned int *auStack_50;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


undefined8 fn_82C00E28(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined2 auStack_50 [2];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  puVar2 = auStack_50;
  lVar4 = 8;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  param_1[0xa5] = param_2[1];
  if (-1 < (int)uVar1) {
    if (param_3 == (int *)0x0) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      (**(code **)(*param_3 + 4))(param_3);
      param_1[0xa4] = (int)param_3;
      uStack_40 = 0;
      param_1[0xa3] = 1;
      uStack_4c = 0xac44;
      uStack_44 = 0x40010;
      uStack_48 = 0x2b110;
      iVar3 = param_2[2];
      if (iVar3 == 0) {
        iVar3 = 0x10;
      }
      param_1[0x9f] = iVar3;
      uVar1 = (**(code **)(*param_3 + 0x20))
                        ((double)lbl_82002AE0,param_3,param_1 + 0xe,auStack_50,
                         4U - ((param_1[0xa5] != 0) + '\x04') & 0x10 | 2,*(code **)(*param_3 + 0x20)
                         ,0xffffffff83175b58,0,0);
      if ((-1 < (int)uVar1) &&
         (uVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2), -1 < (int)uVar1)) {
        return uVar1;
      }
    }
  }
  (**(code **)(*param_1 + 0x2c))(param_1);
  return uVar1;
}

