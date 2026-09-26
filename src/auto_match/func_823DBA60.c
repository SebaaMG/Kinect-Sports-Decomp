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
extern unsigned int *auStack_820;
extern unsigned int *auStack_838;
extern unsigned int *auStack_840;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_82358FD8();
extern int fn_82672C20();
extern unsigned int iStack_834;
extern unsigned int iStack_83c;
extern unsigned int uStack_84c;
extern unsigned int uStack_850;
extern unsigned int uStack_85c;
extern unsigned int uStack_860;


void fn_823DBA60(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined1 *puStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  double dStack_848;
  undefined1 auStack_840 [4];
  int iStack_83c;
  undefined1 auStack_838 [4];
  int iStack_834;
  longlong lStack_830;
  undefined1 auStack_820 [2080];
  
  iVar1 = *(int *)(*param_1 + 0xd4);
  fn_82358FD8(*(undefined4 *)(iVar1 + 0x1c),auStack_820,0x400,0xffffffff821aaefc);
  uStack_860 = 0;
  uStack_85c = 0;
  fn_82273CD8(&uStack_860,5);
  puStack_858 = auStack_820;
  puVar2 = (undefined4 *)fn_8229AE10(auStack_838,iVar1);
  fn_82672C20(*puVar2,0xffffffff821aaf0c,&uStack_860,1);
  if (iStack_834 != 0) {
    fn_822315A0();
  }
  uStack_850 = 0;
  uStack_84c = 0;
  fn_82273CD8(&uStack_850,3);
  lStack_830 = (longlong)param_2;
  dStack_848 = (double)lStack_830;
  puVar2 = (undefined4 *)fn_8229AE10(auStack_840,iVar1);
  fn_82672C20(*puVar2,0xffffffff821aaf14,&uStack_850,1);
  if (iStack_83c != 0) {
    fn_822315A0();
  }
  fn_82273C88(&uStack_850);
  fn_82273C88(&uStack_860);
  return;
}

