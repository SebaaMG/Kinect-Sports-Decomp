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
extern int fn_82F7C468();
extern int fn_82F857F8();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


ulonglong fn_82F86278(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  
  if ((param_2[3] & 0x40U) == 0) {
    uVar2 = fn_82F7C468(param_2);
    puVar5 = &lbl_831BBF60;
    puVar4 = puVar5;
    if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
      puVar4 = (undefined *)((&lbl_8329F620)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x48);
    }
    if ((puVar4[0x28] & 0xfe) == 0) {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar5 = (undefined *)((&lbl_8329F620)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x48);
      }
      if ((puVar5[0x28] & 1) == 0) goto LAB_82f8635c;
    }
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
  }
  else {
LAB_82f8635c:
    if ((param_1 != 0xffffffff) &&
       ((uVar2 = param_2[3], (uVar2 & 1) != 0 || (((uVar2 & 0x80) != 0 && ((uVar2 & 2) == 0)))))) {
      if (param_2[2] == 0) {
        fn_82F857F8(param_2);
      }
      if (*param_2 == param_2[2]) {
        if (param_2[1] != 0) {
          return 0xffffffffffffffff;
        }
        *param_2 = *param_2 + 1;
      }
      iVar1 = *param_2;
      pcVar6 = (char *)(iVar1 + -1);
      *param_2 = (int)pcVar6;
      if ((param_2[3] & 0x40U) == 0) {
        *pcVar6 = (char)param_1;
      }
      else if (*pcVar6 != (char)param_1) {
        *param_2 = iVar1;
        return 0xffffffffffffffff;
      }
      param_2[1] = param_2[1] + 1;
      param_2[3] = param_2[3] & 0xffffffeeU | 1;
      return (ulonglong)param_1 & 0xff;
    }
  }
  return 0xffffffffffffffff;
}

