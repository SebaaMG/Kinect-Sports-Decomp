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
extern int fn_83004190();
extern int fn_8300A010();
extern unsigned int uStack_1a;


undefined8 fn_8300A720(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  float *pfVar4;
  float fVar5;
  undefined2 uStack_1a;
  
  pfVar4 = (float *)*param_2;
  *param_2 = (int)(pfVar4 + 1);
  fn_83004190((double)*pfVar4,param_1 + 0x2c);
  fVar5 = *(float *)*param_2;
  *param_2 = (int)((float *)*param_2 + 1);
  fn_83004190((double)fVar5,param_1 + 0x2e);
  fVar5 = *(float *)*param_2;
  *param_2 = (int)((float *)*param_2 + 1);
  uStack_1a = (undefined2)(int)fVar5;
  *(undefined2 *)(param_1 + 0x30) = uStack_1a;
  pfVar4 = (float *)*param_2;
  *param_2 = (int)(pfVar4 + 1);
  uStack_1a = ((((U64)(uStack_1a)) & (~(((U64)0xFF) << 8))) | ((((U64)((undefined1)(longlong)*pfVar4)) & ((U64)0xFF)) << 8));
  *(undefined1 *)(param_1 + 0x3c) = (undefined1)uStack_1a;
  cVar1 = *(char *)*param_2;
  *param_2 = (int)((char *)*param_2 + 1);
  *(byte *)(param_1 + 0x3d) = (cVar1 != '\0') << 7 | *(byte *)(param_1 + 0x3d) & 0x7f;
  uVar3 = *(undefined2 *)*param_2;
  *param_2 = (int)((undefined2 *)*param_2 + 1);
  *(undefined2 *)(param_1 + 0x32) = uVar3;
  *(undefined2 *)(param_1 + 0x9e) = uVar3;
  bVar2 = *(byte *)*param_2;
  *param_2 = (int)((byte *)*param_2 + 1);
  *(byte *)(param_1 + 0x3d) = (bVar2 & 1) << 5 | *(byte *)(param_1 + 0x3d) & 0xdb | 4;
  cVar1 = *(char *)*param_2;
  *param_2 = (int)((char *)*param_2 + 2);
  if (cVar1 != '\0') {
    fn_8300A010(param_1);
  }
  return 1;
}

