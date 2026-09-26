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
extern unsigned int *auStack_2c;
extern int fn_82800648();
extern unsigned int iStack_30;


undefined8 fn_827FE3C8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  int iStack_30;
  undefined4 auStack_2c [11];
  
  uVar1 = *(ushort *)(param_1 + 0xe8);
  uVar3 = 0;
  if ((ulonglong)uVar1 != 0) {
    do {
      iVar2 = fn_82800648(param_1,3,uVar3,auStack_2c,&iStack_30);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iStack_30 * 4 + param_2) = auStack_2c[0];
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar1);
  }
  return 1;
}

