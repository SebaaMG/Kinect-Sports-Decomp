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
extern unsigned int *auStack_40;
extern int fn_82E531C8();
extern int fn_82F68CC0();


undefined8
fn_82E53558(int param_1,uint param_2,undefined4 *param_3,undefined2 *param_4,ulonglong param_5,
             uint *param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint auStack_40 [16];
  
  uVar3 = 0;
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined2 *)0x0)) {
    uVar3 = 0xffffffff80004003;
  }
  else if ((param_2 & 0xffff) < *(uint *)(param_1 + 0x108)) {
    lVar1 = fn_82E531C8(param_1 + 0xa0,param_2 & 0xffff,auStack_40);
    puVar2 = (undefined4 *)(-(uint)(lVar1 != 0) & auStack_40[0]);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0xffffffffc00d36bb;
    }
    else {
      *param_3 = *puVar2;
      param_3[1] = puVar2[1];
      param_3[2] = puVar2[2];
      param_3[3] = puVar2[3];
      *param_4 = *(undefined2 *)(puVar2 + 4);
      if (param_6 != (uint *)0x0) {
        if ((param_5 & 0xffffffff) == 0) {
          if (*param_6 != 0) {
            return 0xffffffff80070057;
          }
        }
        else if ((uint)puVar2[5] <= *param_6) {
          *param_6 = puVar2[5];
          fn_82F68CC0(param_5,puVar2[6],puVar2[5]);
          return 0;
        }
        uVar3 = 0xffffffffc00d36b1;
        *param_6 = puVar2[5];
      }
    }
  }
  else {
    uVar3 = 0xffffffffc00d36bf;
  }
  return uVar3;
}

