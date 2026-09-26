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
extern unsigned int *auStack_32b0;
extern unsigned int *auStack_32c0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern int fn_83089E78();
extern unsigned int iStack_32a4;


/* WARNING: Removing unreachable block (ram,0x82da4244) */
/* WARNING: Removing unreachable block (ram,0x82da4248) */
/* WARNING: Removing unreachable block (ram,0x82da4268) */
/* WARNING: Removing unreachable block (ram,0x82da42a0) */
/* WARNING: Removing unreachable block (ram,0x82da428c) */
/* WARNING: Removing unreachable block (ram,0x82da42a4) */
/* WARNING: Removing unreachable block (ram,0x82da42d4) */
/* WARNING: Removing unreachable block (ram,0x82da42e4) */
/* WARNING: Removing unreachable block (ram,0x82da4348) */
/* WARNING: Removing unreachable block (ram,0x82da4354) */
/* WARNING: Removing unreachable block (ram,0x82da43b4) */
/* WARNING: Removing unreachable block (ram,0x82da43cc) */
/* WARNING: Removing unreachable block (ram,0x82da4434) */
/* WARNING: Removing unreachable block (ram,0x82da443c) */
/* WARNING: Removing unreachable block (ram,0x82da4470) */
/* WARNING: Removing unreachable block (ram,0x82da4474) */
/* WARNING: Removing unreachable block (ram,0x82da45b8) */
/* WARNING: Removing unreachable block (ram,0x82da4798) */
/* WARNING: Removing unreachable block (ram,0x82da47a8) */
/* WARNING: Removing unreachable block (ram,0x82da47bc) */
/* WARNING: Removing unreachable block (ram,0x82da47f4) */

void fn_82DA4100(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_32c0 [16];
  undefined1 auStack_32b0 [12];
  int iStack_32a4;
  
  fn_82F6A528();
  fn_82F6DA24();
  iVar1 = fn_82CE5410();
  fn_82CEAB00(auStack_32b0,*(undefined4 *)(iVar1 + 0x10),param_3);
  iStack_32a4 = 0;
  if (0 < (int)param_3) {
    do {
      iVar2 = *(int *)param_2 + 0x10;
      iVar1 = fn_82CE5410();
      fn_82CEA160(auStack_32b0,*(undefined4 *)(iVar1 + 0x10),iVar2,0);
      fn_83089E78(iVar2,auStack_32c0);
      param_2 = param_2 + 4;
      iStack_32a4 = iStack_32a4 + 1;
    } while (iStack_32a4 < (int)param_3);
  }
  fn_82CE5410();
  iVar1 = fn_82CE5410();
  fn_82CEA4B8(auStack_32b0,*(undefined4 *)(iVar1 + 0x10));
  fn_82BA02A8(auStack_32b0);
  fn_82F6DCBC();
  fn_82F6A574();
  return;
}

