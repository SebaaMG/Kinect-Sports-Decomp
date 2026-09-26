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
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268B610(uint *param_1,char *param_2,char *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  char *pcVar7;
  char in_RESERVE;
  byte in_cr0;
  
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    pcVar7 = param_2;
    if (param_3 == (char *)0xffffffff) {
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      param_3 = pcVar7 + (-1 - (int)param_2);
    }
    uVar4 = *param_1;
    uVar5 = 0;
    uVar2 = (ulonglong)uVar4 & 0xfffffffc;
    uVar3 = *(uint *)uVar2 & 0x7fffffff;
    if ((uVar4 & 3) == 0) {
      uVar5 = (ulonglong)lbl_831E7E64;
    }
    else if ((uVar4 & 3) == 1) {
      uVar5 = fn_8267BF50(param_1,0);
    }
    else if ((uVar4 & 3) < 3) {
      uVar5 = (ulonglong)param_1[1];
    }
    uVar4 = fn_8268B368(param_1,uVar5,param_3 + uVar3,0);
    fn_82F68CC0(uVar4 + 8,uVar2 + 8,uVar3);
    fn_82F68CC0(uVar4 + uVar3 + 8,param_2,param_3);
    *param_1 = uVar4 | *param_1 & 3;
    do {
      puVar6 = (uint *)(uVar2 + 4);
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar5 - 1,0,uVar2 + 4);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38(uVar2);
    }
  }
  return;
}

