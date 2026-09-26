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
extern int fn_82381BC0();
extern int fn_8243DD58();
extern int fn_825950A0();
extern int fn_8265CA20();
extern unsigned int *lbl_83297008;
extern unsigned int stack0x0000001c;
extern unsigned int uRam8329700c;
extern unsigned int uStack0000001c;


uint * fn_82594FD0(uint *param_1,ulonglong param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uStack0000001c;
  undefined1 auStack_30 [48];
  
  uStack0000001c = (uint)param_2;
  if (((param_2 & 0xffffffff) == (ulonglong)*lbl_83297008) && (param_3 == lbl_83297008)) {
    cVar1 = *(char *)((int)lbl_83297008[1] + 0x15);
    puVar3 = (uint *)lbl_83297008[1];
    while (cVar1 == '\0') {
      fn_8243DD58(0xffffffff83297004,puVar3[2]);
      puVar2 = (uint *)*puVar3;
      fn_8265CA20(puVar3);
      puVar3 = puVar2;
      cVar1 = *(char *)((int)puVar2 + 0x15);
    }
    lbl_83297008[1] = (uint)lbl_83297008;
    *lbl_83297008 = (uint)lbl_83297008;
    lbl_83297008[2] = (uint)lbl_83297008;
    uRam8329700c = 0;
    *param_1 = *lbl_83297008;
  }
  else {
    while ((param_2 & 0xffffffff) != ZEXT48(param_3)) {
      fn_82381BC0(&stack0x0000001c);
      fn_825950A0(auStack_30,param_2);
      param_2 = (ulonglong)uStack0000001c;
    }
    *param_1 = (uint)param_2;
  }
  return param_1;
}

