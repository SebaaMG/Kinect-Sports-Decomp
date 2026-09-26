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
extern int fn_8225F160();
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern int fn_824B70F0();
extern int fn_82512508();
extern int fn_828EA610();


void fn_824B8348(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar3;
  int iVar2;
  undefined1 uVar4;
  undefined2 auStack_30 [24];
  
  iVar1 = fn_8225F160();
  *(undefined4 *)(iVar1 + 0x18) = 4;
  *(undefined4 *)(iVar1 + 0x1c) = 0xc;
  *(undefined4 *)(iVar1 + 0x28) = 4;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  cVar3 = fn_828EA610(param_1);
  if ((cVar3 == '\0') && (cVar3 = fn_82512508(param_1), cVar3 != '\0')) {
    iVar1 = fn_8245AE18();
    iVar2 = fn_8245B1F0();
    if (iVar2 != 0) {
      fn_8245AF50(iVar1,8);
      if (*(int *)(iVar1 + 0x14) == 0) {
        *(undefined4 *)(iVar1 + 0x14) = 1;
      }
      uVar4 = fn_823AB478(param_1);
      fn_8245B050(iVar1,uVar4,4);
      fn_8245B050(iVar1,param_2,4);
      fn_8245B100(iVar1);
      auStack_30[0] = (undefined2)param_3;
      fn_8245B168(iVar1,auStack_30,2);
      fn_824B70F0();
      fn_8245AFC0(iVar1,0,0);
    }
  }
  return;
}

