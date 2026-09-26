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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern int fn_825AF0C8();


void fn_825AE918(undefined8 param_1)

{
  undefined4 *puVar1;
  int in_r0;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fn_825AF0C8(auStack_20,param_1);
  uVar2 = fn_823B4900(param_1,7,0,0);
  fn_8232A988(auStack_30,uVar2 >> 3 & 0xf,0,4);
  fn_8232A988(auStack_30,uVar2 & 7,4,3);
  lVar3 = fn_8223A9E0(auStack_30,0,4);
  lVar4 = fn_8223A9E0(auStack_30,4,3);
  if ((lVar3 == 0) && (lVar4 != 0)) {
    for (uVar2 = lVar4 << 0x31; (uVar2 & 0xfff0000000000000) == 0; uVar2 = uVar2 << 1) {
    }
  }
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return;
}

