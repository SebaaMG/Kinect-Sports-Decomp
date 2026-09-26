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
extern int fn_82F72E58();
extern unsigned int lbl_832635D0;


undefined4 * fn_82F72FB0(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 uVar5;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
LAB_82f730f0:
    uVar5 = 2;
  }
  else {
    if (*pcVar2 != '\0') {
      lVar3 = 0;
      do {
        bVar1 = *(byte *)*param_2;
        if (bVar1 == param_3) break;
        if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
              (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1)))))
              ) && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((lbl_832635D0 & 0x10000) == 0))))
        goto LAB_82f730f0;
        pbVar4 = (byte *)*param_2 + 1;
        lVar3 = lVar3 + 1;
        *param_2 = pbVar4;
      } while (*pbVar4 != 0);
      fn_82F72E58(param_1,pcVar2,lVar3);
      bVar1 = *(byte *)*param_2;
      if (bVar1 != 0) {
        *param_2 = (byte *)*param_2 + 1;
        if (bVar1 == param_3) {
          return param_1;
        }
        uVar5 = 3;
        *param_1 = 0;
        goto LAB_82f730f4;
      }
      if ((param_1[1] & 0xff000000) != 0) {
        return param_1;
      }
    }
    uVar5 = 1;
  }
LAB_82f730f4:
  *(undefined1 *)(param_1 + 1) = uVar5;
  return param_1;
}

