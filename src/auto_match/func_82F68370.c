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
extern int fn_82F68240();
extern int fn_82F6856C();
extern int fn_82F6AC80();
extern int fn_82F7BAF0();
extern int fn_82F7C468();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


char * fn_82F68370(char *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcStack_50;
  
  iVar3 = (int)param_2;
  if ((((param_1 == (char *)0x0) && (iVar3 != 0)) || (iVar3 < 0)) ||
     (param_3 == (undefined4 *)((int)param_3 + ((param_3 == (undefined4 *)0x0) - 1)))) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  else if (iVar3 != 0) {
    fn_82F6AC80(param_3);
    pcStack_50 = param_1;
    if ((param_3[3] & 0x40) == 0) {
      uVar2 = fn_82F7C468(param_3);
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &lbl_831BBF60;
      }
      else {
        puVar4 = (undefined *)((&lbl_8329F620)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x48);
      }
      puVar5 = &lbl_831BBF60;
      if ((puVar4[0x28] & 0xfe) == 0) {
        if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
          puVar5 = (undefined *)((&lbl_8329F620)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x48);
        }
        if ((puVar5[0x28] & 1) == 0) goto LAB_82f684b0;
      }
      puVar1 = (undefined4 *)fn_82F68240();
      *puVar1 = 0x16;
      fn_82F63BA0();
      pcStack_50 = (char *)0x0;
    }
LAB_82f684b0:
    pcVar6 = param_1;
    if (pcStack_50 != (char *)0x0) {
      do {
        param_2 = param_2 + -1;
        if (param_2 == 0) break;
        uVar2 = param_3[1];
        param_3[1] = (int)((ulonglong)uVar2 - 1);
        if ((longlong)((ulonglong)uVar2 - 1) < 0) {
          uVar2 = fn_82F7BAF0(param_3);
        }
        else {
          uVar2 = (uint)*(byte *)*param_3;
          *param_3 = (byte *)*param_3 + 1;
        }
        if (uVar2 == 0xffffffff) {
          if (pcVar6 == param_1) {
            pcStack_50 = (char *)0x0;
            goto LAB_82f68534;
          }
          break;
        }
        *pcVar6 = (char)uVar2;
        pcVar6 = pcVar6 + 1;
      } while ((char)uVar2 != '\n');
      *pcVar6 = '\0';
    }
LAB_82f68534:
    fn_82F6856C();
    return pcStack_50;
  }
  return (char *)0x0;
}

