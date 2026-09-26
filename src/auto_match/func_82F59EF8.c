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
extern int fn_82F59428();
extern int fn_82F59EA8();
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000010;


double fn_82F59EF8(void)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  char cVar3;
  double dVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_stack_0000001c;
  
  puVar1 = (undefined4 *)((uint)(&stack0x00000010 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  cVar3 = fn_82F59EA8();
  fVar2 = lbl_821AAD20;
  if (cVar3 == '\0') {
    dVar4 = (double)fn_82F59428((double)in_stack_0000001c);
    fVar2 = (float)(dVar4 * (double)lbl_82005344);
  }
  return (double)fVar2;
}

