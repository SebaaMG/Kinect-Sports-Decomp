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
extern int fn_8306ED58();
extern int fn_8306ED98();
extern int fn_8306EE38();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


double fn_8306EB40(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  double dVar2;
  double dVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  dVar2 = (double)fn_8306EE38();
  if (dVar2 <= (double)lbl_82196080) {
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    dVar2 = (double)lbl_821AAD20;
  }
  else {
    dVar2 = (double)fn_8306ED98();
    dVar3 = (double)fn_8306EE38();
    dVar2 = (double)(float)(dVar2 / (double)(float)(dVar3 * dVar3));
    fn_8306ED58(dVar2);
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
  }
  return dVar2;
}

