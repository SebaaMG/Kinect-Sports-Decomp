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
extern int fn_82522ED8();
extern int fn_82575E90();


void fn_82575818(ulonglong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if (param_2 != (int *)0x0) {
    piVar3 = param_2;
    if ((int)param_3 != 0) {
      do {
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          uVar4 = (ulonglong)*(uint *)(iVar1 + 0x1bc);
          if ((ulonglong)*(uint *)(iVar1 + 0x1bc) == 0) {
            uVar4 = param_1;
          }
          cVar2 = fn_82575E90(iVar1,uVar4 + 0x78);
          if (((cVar2 == '\0') && (cVar2 = fn_82575E90(iVar1,uVar4 + 0x70), cVar2 == '\0')) &&
             (cVar2 = fn_82575E90(iVar1,uVar4 + 0x68), cVar2 == '\0')) {
            fn_82575E90(iVar1,uVar4 + 0x60);
          }
          *piVar3 = 0;
        }
        param_3 = param_3 + -1;
        piVar3 = piVar3 + 1;
      } while (param_3 != 0);
    }
    fn_82522ED8(param_2);
  }
  return;
}

