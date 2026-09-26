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
extern unsigned int *auStack_30;
extern int fn_82E5AF48();
extern int fn_82F68CC0();


undefined8
fn_82E5B290(int param_1,uint param_2,undefined4 *param_3,undefined2 *param_4,uint *param_5,
             ulonglong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint auStack_30 [12];
  
  if (((param_3 == (undefined4 *)0x0) || (param_4 == (undefined2 *)0x0)) ||
     (*(uint *)(param_1 + 0xf4) <= (param_2 & 0xffff))) {
    return 0xffffffff80070057;
  }
  lVar1 = fn_82E5AF48(param_1 + 0x8c,param_2 & 0xffff,auStack_30);
  puVar3 = (undefined4 *)(-(uint)(lVar1 != 0) & auStack_30[0]);
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  param_3[3] = puVar3[3];
  *param_4 = *(undefined2 *)(puVar3 + 4);
  if (param_5 == (uint *)0x0) {
LAB_82e5b360:
    uVar2 = 0;
  }
  else {
    if ((param_6 & 0xffffffff) == 0) {
      if (*param_5 != 0) {
        return 0xffffffff80070057;
      }
    }
    else if ((uint)puVar3[5] <= *param_5) {
      *param_5 = puVar3[5];
      fn_82F68CC0(param_6,puVar3[6],puVar3[5]);
      goto LAB_82e5b360;
    }
    uVar2 = 0xffffffffc00d36b1;
    *param_5 = puVar3[5];
  }
  return uVar2;
}

