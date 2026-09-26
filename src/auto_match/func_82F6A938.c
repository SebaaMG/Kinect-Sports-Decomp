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
extern int fn_82F63BA0();
extern int fn_82F67A88();
extern int fn_82F68240();
extern int fn_82F6AAD0();
extern int fn_82F6AC80();
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


longlong fn_82F6A938(char *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar2;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  if ((param_1 != (char *)0x0) && (param_2 != param_2 + -1 + (uint)(param_2 == 0))) {
    pcVar8 = param_1;
    if ((*(uint *)(param_2 + 0xc) & 0x40) != 0) {
LAB_82f6aa2c:
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      fn_82F6AC80(param_2);
      uVar2 = fn_82F816D0(param_2);
      pcVar5 = (char *)fn_82F67A88(param_1,1,pcVar8 + (-1 - (int)param_1),param_2);
      fn_82F817C0(uVar2,param_2);
      fn_82F6AAD0();
      return -(ulonglong)(pcVar8 + (-1 - (int)param_1) != pcVar5);
    }
    uVar4 = fn_82F7C468(param_2);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar6 = &lbl_831BBF60;
    }
    else {
      puVar6 = (undefined *)((&lbl_8329F620)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
    }
    puVar7 = &lbl_831BBF60;
    if ((puVar6[0x28] & 0xfe) == 0) {
      if ((uVar4 != 0xffffffff) && (uVar4 != 0xfffffffe)) {
        puVar7 = (undefined *)((&lbl_8329F620)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
      }
      if ((puVar7[0x28] & 1) == 0) goto LAB_82f6aa2c;
    }
  }
  puVar3 = (undefined4 *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return -1;
}

