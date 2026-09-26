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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82BA02A8();
extern int fn_82BEEB18();
extern int fn_82BEEBC0();
extern int fn_82BEEC00();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82BE4378(int param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fn_82BA02A8(&uStack_50);
  fn_82BA02A8(&uStack_60);
  fn_82BA02A8(auStack_40);
  puVar1 = (undefined4 *)fn_82BEEB18(auStack_30,param_1 + 0x88,param_1 + 0x7c);
  uStack_50 = *puVar1;
  uStack_4c = puVar1[1];
  uStack_48 = puVar1[2];
  fn_82BEEC00(&uStack_50);
  puVar1 = (undefined4 *)fn_82BEEB18(auStack_30,param_1 + 0xa0,param_1 + 0x7c);
  uStack_60 = *puVar1;
  uStack_5c = puVar1[1];
  uStack_58 = puVar1[2];
  fn_82BEEC00(&uStack_60);
  puVar1 = (undefined4 *)fn_82BEEBC0(auStack_30,&uStack_50,&uStack_60);
  *(undefined4 *)(param_1 + 0x70) = *puVar1;
  *(undefined4 *)(param_1 + 0x74) = puVar1[1];
  *(undefined4 *)(param_1 + 0x78) = puVar1[2];
  fn_82BEEC00(param_1 + 0x70);
  return;
}

