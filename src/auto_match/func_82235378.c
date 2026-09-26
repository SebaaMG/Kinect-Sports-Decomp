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
extern unsigned int *auStack_30;
extern int fn_8223C610();
extern int fn_8223C680();


void fn_82235378(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_30 [48];
  
  iVar1 = fn_8223C610(param_3,1,0,0);
  if (iVar1 == 0) {
    uVar4 = 0;
    do {
      iVar1 = fn_8223C610(param_3,1,0,0);
      if (iVar1 == 0) {
        uVar3 = 5;
        if (uVar4 != 3) {
          uVar3 = 8;
        }
        uVar2 = fn_8223C610(param_3,uVar3,0,0);
        auStack_30[uVar4] = uVar2;
      }
      else {
        auStack_30[uVar4] = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 4) = 7;
    *(undefined4 *)(param_4 + 0xc) = 4;
    fn_8223C680(param_4,0,auStack_30);
  }
  return;
}

