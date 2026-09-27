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
extern int fn_822393D0();
extern int fn_823B4900();
extern int fn_8287C410();
extern int __u64tod();
extern unsigned int lbl_82195520;
extern float lbl_82195658;
extern unsigned int lbl_82195740;


void fn_822CB730(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [16];
  
  fn_823B4900(param_1,8,0,0);
  dVar3 = (double)__u64tod();
  dVar3 = (dVar3 + lbl_82195520) * lbl_82195658 * lbl_82195740;
  fn_822393D0(auStack_40,param_1);
  fn_8287C410((double)(float)dVar3,auStack_40);
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

