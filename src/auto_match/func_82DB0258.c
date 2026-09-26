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


int fn_82DB0258(uint param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char cVar5;
  int iVar3;
  uint *puVar4;
  
  cVar5 = ((char)((int)*(uint *)(param_3 + 0x60) >> 0x1f) -
          (char)((int)*(uint *)(param_2 + 0x60) >> 0x1f)) +
          (*(uint *)(param_2 + 0x60) <= *(uint *)(param_3 + 0x60));
  iVar3 = param_2;
  if (cVar5 == '\0') {
    iVar3 = param_3;
  }
  cVar1 = '\0';
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x60)) {
    puVar4 = *(uint **)(iVar3 + 0x5c);
    do {
      if ((*puVar4 <= param_1) && (param_1 < *puVar4 + 0x200)) {
        cVar1 = '\x01';
        break;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(int *)(iVar3 + 0x60));
  }
  if ((int)cVar1 + (-(uint)(cVar1 == '\0') - (cVar1 + -1)) ==
      (int)cVar5 + (-(uint)(cVar5 == '\0') - (cVar5 + -1))) {
    param_3 = param_2;
  }
  return param_3;
}

