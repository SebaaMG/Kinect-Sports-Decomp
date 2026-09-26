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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_824C8FA8();
extern unsigned int iStack_38;
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int iStack_68;


undefined4 * fn_824C6B80(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  code *pcStack_70;
  undefined1 auStack_6c [4];
  int iStack_68;
  code *pcStack_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  code *pcStack_50;
  undefined1 auStack_4c [4];
  int iStack_48;
  code *pcStack_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  
  iVar1 = fn_82365BD8(auStack_80);
  iVar2 = fn_82365BD8(auStack_78,iVar1);
  pcStack_40 = fn_824C8FA8;
  fn_82365BD8(auStack_3c,iVar2);
  if (*(int *)(iVar2 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(iVar1 + 4) != 0) {
    fn_822315A0();
  }
  pcStack_60 = pcStack_40;
  fn_82365BD8(auStack_5c,auStack_3c);
  pcStack_70 = pcStack_60;
  fn_82365BD8(auStack_6c,auStack_5c);
  pcStack_50 = pcStack_70;
  fn_82365BD8(auStack_4c,auStack_6c);
  if (iStack_68 != 0) {
    fn_822315A0();
  }
  if (iStack_58 != 0) {
    fn_822315A0();
  }
  *param_1 = pcStack_50;
  fn_82365BD8(param_1 + 1,auStack_4c);
  if (iStack_48 != 0) {
    fn_822315A0();
  }
  if (iStack_38 != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

