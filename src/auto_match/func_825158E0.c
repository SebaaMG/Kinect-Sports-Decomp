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
extern int fn_82230300();
extern int fn_822509A0();
extern int fn_82515A40();
extern int fn_82515E00();
extern int fn_8265CA20();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined4 * fn_825158E0(undefined4 *param_1,int param_2,ulonglong param_3,uint *param_4)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uStack00000024;
  undefined1 auStack_30 [48];
  
  puVar2 = *(uint **)(param_2 + 4);
  uStack00000024 = (uint)param_3;
  if (((param_3 & 0xffffffff) == (ulonglong)*puVar2) && (param_4 == puVar2)) {
    cVar1 = *(char *)((int)puVar2[1] + 0x49);
    puVar2 = (uint *)puVar2[1];
    while (cVar1 == '\0') {
      fn_82515E00(param_2,puVar2[2]);
      puVar3 = (uint *)*puVar2;
      fn_82230300(puVar2 + 5,1,0);
      fn_8265CA20(puVar2);
      puVar2 = puVar3;
      cVar1 = *(char *)((int)puVar3 + 0x49);
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)*(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    while ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      fn_822509A0(&stack0x00000024);
      fn_82515A40(auStack_30,param_2,param_3);
      param_3 = (ulonglong)uStack00000024;
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

