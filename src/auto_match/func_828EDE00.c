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
extern int fn_828ED1A0();
extern int fn_82CE1D08();
extern int fn_82F68CC0();


undefined8 fn_828EDE00(int param_1)

{
  char cVar3;
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar4;
  longlong lVar5;
  
  cVar3 = fn_828ED1A0();
  if ((cVar3 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    puVar4 = (undefined4 *)(param_1 + 0x108);
    lVar5 = 7;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_82F68CC0(param_1 + 0x94);
    iVar2 = fn_82CE1D08(*(undefined4 *)(param_1 + 0x58),0xfe,param_1 + 0x94,param_1 + 0x10c);
    *(undefined1 *)(param_1 + 0x129) = 0;
    if ((iVar2 == 0) || (iVar2 == 0x3e5)) {
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x128) = 1;
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x128) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

