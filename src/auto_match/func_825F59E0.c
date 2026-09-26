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
extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82544528();
extern int fn_8262FEC8();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263B758();
extern int fn_826438C0();
extern int fn_82A93C18();
extern int fn_82A93F08();
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_825F59E0(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fn_82520158(0xffffffff821ca464,0xffffffff83270124,0);
  fn_82520158(0xffffffff821ca488,0xffffffff83270128,0);
  fn_82520158(0xffffffff821ca464,0xffffffff8327012c,0);
  fn_82520158(0xffffffff821ca4b4,0xffffffff83270130,0);
  fn_82520158(0xffffffff821ca4e4,0xffffffff83270134,0);
  fn_82520158(0xffffffff821ca4f8,auStack_50,0);
  uVar2 = fn_8251F720(auStack_50,0);
  uVar3 = fn_82631830();
  param_1[1] = uVar3;
  fn_8251FA58(uVar2);
  auStack_50[0] = 0xc;
  uVar2 = fn_82631BF8(0xffffffff831bf8d8);
  fn_826438C0(param_1[1],0,uVar2,auStack_50,0);
  fn_8262FEC8(uVar2);
  *param_1 = 0;
  iVar4 = fn_82544528();
  fn_8263B758(iVar4,0,auStack_40);
  uVar1 = *(uint *)(iVar4 + 0x20);
  fn_82A93C18(uStack_28,uStack_24,1,0,0x18280186,0,0,0);
  fn_82A93F08(0xffffffff8327025c,uVar1 & 0xfffff000,0);
  return;
}

