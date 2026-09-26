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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_823E1618();
extern int fn_824CB080();
extern int fn_824CB558();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined4 * fn_824CAC50(undefined4 *param_1,int param_2,ulonglong param_3,uint *param_4)

{
  uint *puVar1;
  uint uStack00000024;
  undefined1 auStack_30 [48];
  
  puVar1 = *(uint **)(param_2 + 4);
  uStack00000024 = (uint)param_3;
  if (((param_3 & 0xffffffff) == (ulonglong)*puVar1) && (param_4 == puVar1)) {
    fn_824CB558(param_2,puVar1[1]);
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)*(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    while ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      fn_823E1618(&stack0x00000024);
      fn_824CB080(auStack_30,param_2,param_3);
      param_3 = (ulonglong)uStack00000024;
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

