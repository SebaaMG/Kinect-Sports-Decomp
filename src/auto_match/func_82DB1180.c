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
extern unsigned int *auStack_50;
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA2F0();


void fn_82DB1180(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_50 [80];
  
  if (*(char *)(param_1 + 8) != '\0') {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    if (0 < *(int *)(param_2 + 0x4c)) {
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0x48) + iVar3);
        iVar4 = iVar1 + 0x10;
        if (*(char *)(iVar1 + 0x28) == '\x01') {
          iVar1 = fn_82CEA2F0(param_1 + 0x34,iVar4,auStack_50);
          if (iVar1 != 0) {
            iVar1 = fn_82CE5410();
            fn_82CEA160(param_1 + 0x34,*(undefined4 *)(iVar1 + 0x10),iVar4,0xffffffffffffffff)
            ;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_2 + 0x4c));
    }
  }
  return;
}

