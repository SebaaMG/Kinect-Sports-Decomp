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
extern unsigned int *auStack_2c;
extern int fn_8255EBE0();
extern int fn_8255EDD0();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82A1DD38();
extern int fn_82F63108();
extern unsigned int uStack_30;


void fn_824C7608(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uStack_30;
  uint auStack_2c [11];
  
  if (param_1[0x78] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  iVar3 = (**(code **)(*(int *)param_1[0x78] + 4))();
  puVar2 = *(undefined4 **)((iVar3 + 0x20) * 4 + param_1[0x73]);
  if ((param_2 == 0) || (param_1[0x7c] == 0)) {
    if (param_1[0x7a] == 0) {
      fn_827EFFE8(*param_1);
    }
    else if (param_1[0x7b] == 0) {
      fn_8255EBE0(*param_1,param_1 + 0x69);
    }
    else {
      fn_8255EDD0();
    }
    fn_827F0180(*param_1,*puVar2,1,0,0);
    param_1[0x7e] = iVar3;
    param_1[0x7c] = 1;
    param_1[0x7d] = 0;
  }
  else if (param_1[0x7e] != iVar3) {
    uVar1 = param_1[0x7d];
    uStack_30 = 3;
    if (uVar1 < 3) {
      fn_82A1DD38(*puVar2,**(undefined4 **)((param_1[0x7e] + 0x20) * 4 + param_1[0x73]),
                        (ulonglong)*(ushort *)(puVar2 + 2) << 6);
      auStack_2c[0] = uVar1 + 1;
      puVar4 = &uStack_30;
      if (auStack_2c[0] < 4) {
        puVar4 = auStack_2c;
      }
      param_1[0x7d] = *puVar4;
    }
  }
  return;
}

