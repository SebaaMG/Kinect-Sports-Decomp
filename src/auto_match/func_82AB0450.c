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
extern unsigned int *auStack_64;
extern int fn_82A29A38();
extern int fn_82AB0350();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82AB0450(ulonglong param_1,int param_2,ulonglong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint auStack_64 [25];
  
  puVar3 = (uint *)*param_8;
  if (0xd < param_2) {
    fn_82A29A38();
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  uVar4 = (uint)((param_3 & 0xff) << 0x15);
  if (param_2 == 5) {
    uVar2 = (uint)(param_3 + 1);
    if ((param_3 + 1 & 0xffffffff) < (ulonglong)*(uint *)(param_7 + 4)) {
      uVar2 = *(uint *)(param_7 + 4);
    }
    *(uint *)(param_7 + 4) = uVar2;
    iVar1 = *(int *)(*(int *)(param_7 + 0x10) + 4);
    if (iVar1 == 1) {
      param_4 = 0;
    }
    else if (iVar1 == 2) {
      param_4 = 1;
    }
    uVar4 = uVar4 | 0x50017;
    if (7 < (param_3 & 0xffffffff)) {
      fn_82A29A38();
    }
  }
  else if (param_2 == 10) {
    uVar4 = uVar4 | 0x20017;
  }
  else {
    uVar4 = ((param_2 + 1) * 0x2000000 | (uint)((param_3 & 0xffffffff) << 0x15)) & 0x1fe00000 |
            0x50017;
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  *(undefined4 *)((int)((param_1 + 4 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10)) = 0xc;
  *(uint *)((int)((param_1 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10) + 0x1c) = (uint)param_1;
  fn_82AB0350(param_6,param_5,auStack_64,&uStack_68,&uStack_6c,&uStack_70);
  if ((((param_4 == 0) && (auStack_64[0] == 3)) && (uStack_68 == 3)) &&
     ((uStack_6c == 3 && (uStack_70 == 3)))) {
    *puVar3 = uVar4;
  }
  else {
    *puVar3 = uVar4 | 0x80000000;
    puVar3 = puVar3 + 1;
    *puVar3 = ((((param_4 & 1) << 2 | uStack_70 & 3) << 2 | uStack_6c & 3) << 2 | uStack_68 & 3) <<
              2 | auStack_64[0] & 3;
  }
  puVar3[1] = (uint)param_1 & 0xffff | 0xc0000;
  *param_8 = (int)(puVar3 + 2);
  return;
}

