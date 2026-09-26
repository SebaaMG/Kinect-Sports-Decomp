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
extern int fn_828142D8();
extern int fn_82F68CC0();
extern unsigned int lbl_8320A500;
extern unsigned int lbl_8320A50C;
extern unsigned int lbl_8320A510;
extern unsigned int lbl_8320A514;
extern unsigned int lbl_8320A5C0;


void fn_82814360(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *apuStack_30 [12];
  
  pcVar3 = (char *)fn_828142D8(param_1,apuStack_30);
  if (apuStack_30[0] == (undefined1 *)0x0) {
    iVar4 = (uint)lbl_8320A5C0 * 0x18;
    apuStack_30[0] = &lbl_8320A500 + iVar4;
    lbl_8320A5C0 = lbl_8320A5C0 + 1;
    *(undefined4 *)(&lbl_8320A50C + iVar4) = param_2;
    *(undefined4 *)(&lbl_8320A510 + iVar4) = param_3;
    *(undefined4 *)(&lbl_8320A514 + iVar4) = param_4;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5[(int)apuStack_30[0] - (int)pcVar3] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else {
    *(undefined4 *)(apuStack_30[0] + 0xc) = param_2;
    *(undefined4 *)(apuStack_30[0] + 0x10) = param_3;
    *(undefined4 *)(apuStack_30[0] + 0x14) = param_4;
  }
  pcVar5 = ".data";
  do {
    cVar1 = *pcVar3;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    fn_82F68CC0(0xffffffff8320a4e8,apuStack_30[0],0x18);
  }
  return;
}

