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
extern char cRam8323fe19;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82E21200();
extern int fn_82F64268();
extern int fn_82F66368();
extern int fn_82F668D8();
extern unsigned int uRam8323fe18;


undefined8 fn_82E21350(undefined8 param_1,char *param_2)

{
  uint uVar2;
  undefined8 uVar1;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    iVar3 = (int)pcVar6 - (int)param_2;
    uVar5 = iVar3 - 1;
    iVar7 = 0;
    if (cRam8323fe19 == '\0') {
      do {
        cVar4 = (char)iVar7 + '\x01';
        *(char *)(iVar7 + -0x7cdc020c) = '\x1f' - (char)iVar7;
        iVar7 = (int)cVar4;
      } while (cVar4 < ' ');
      fn_82F668D8(0xffffffff8323fdf4,0x25,0xffffffff8214baf0,5);
      uRam8323fe18 = 0;
      cRam8323fe19 = '\x01';
    }
    uVar2 = fn_82F64268(param_2,0xffffffff8323fdf4);
    if (uVar2 == uVar5) {
      uVar1 = fn_82E21200(param_1,param_2);
      return uVar1;
    }
    iVar7 = fn_8265C9E0(iVar3);
    iVar3 = fn_82F66368(iVar7,iVar3,param_2,uVar5);
    if (iVar3 == 0) {
      *(undefined1 *)(iVar7 + uVar5) = 0;
      while (uVar2 < uVar5) {
        *(undefined1 *)(iVar7 + uVar2) = 0x2e;
        uVar2 = fn_82F64268(iVar7,0xffffffff8323fdf4);
      }
      fn_82E21200(param_1,iVar7);
      fn_8265CA20(iVar7);
      return 1;
    }
  }
  return 0;
}

