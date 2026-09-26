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
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_82F65350();
extern int iRam832967ec;
extern unsigned int iStack_50;


undefined8 fn_8252E168(int param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int iStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [68];
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = fn_8263C7F0(0x80,0x80,1,1,0,0x4900102,0,3);
    *(int *)(param_1 + 0x3c) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  fn_8263BDD8(*(undefined4 *)(param_1 + 0x3c),0,0,0x1000,&iStack_50,auStack_44,auStack_48,
                    auStack_4c);
  lVar3 = 0x80;
  pcVar4 = (char *)(iStack_50 + -1);
  do {
    lVar5 = 0x80;
    do {
      if (iRam832967ec == 0) {
        cVar2 = '\0';
      }
      else {
        iVar1 = fn_82F65350();
        if (iVar1 % 400 < 0xff) {
          iVar1 = fn_82F65350();
          cVar2 = (char)iVar1 + (char)(iVar1 / 400) * 'p';
        }
        else {
          cVar2 = -1;
        }
      }
      lVar5 = lVar5 + -1;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar2;
    } while (lVar5 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  iVar1 = *(int *)(param_1 + 0x3c);
  fn_8262FBD8(iVar1,*(uint *)(iVar1 + 0x20) & 0xfffff000,*(uint *)(iVar1 + 0x30) & 0xfffff000)
  ;
  return 1;
}

