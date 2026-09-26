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
extern int fn_82681898();
extern int fn_826A7380();
extern int fn_826D6630();
extern int fn_82713EE8();
extern unsigned int lbl_8200D8DC;


undefined8 fn_82751668(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar6 = "blurX";
  pcVar8 = *(char **)*param_3;
  pcVar7 = pcVar8;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    bVar3 = *(byte *)(param_1 + 0x21);
  }
  else {
    pcVar6 = "blurY";
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      pcVar7 = "quality";
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        uVar5 = fn_82713EE8(param_1);
        return uVar5;
      }
      uVar4 = fn_826A7380(param_2);
      if ((uVar4 & 0xffffffff) == 0) {
        return 1;
      }
      fn_826D6630(uVar4 + 0xc,0xffffffff82013bf8);
      return 1;
    }
    bVar3 = *(byte *)(param_1 + 0x22);
  }
  fn_82681898((double)((float)bVar3 * lbl_8200D8DC),param_4);
  return 1;
}

