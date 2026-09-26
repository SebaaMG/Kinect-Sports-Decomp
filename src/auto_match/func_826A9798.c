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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_8267BED0();
extern int fn_826A68D8();
extern int fn_826A91F0();
extern int fn_826E7430();
extern int fn_826E7458();
extern int fn_826E7A08();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826A9798(int param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *(int *)(param_1 + 0xc) = (int)param_3;
  uVar3 = fn_8267BED0(param_1,param_3,0);
  *(int *)(param_1 + 8) = (int)uVar3;
  fn_826E7A08(param_2,uVar3,*(undefined4 *)(param_1 + 0xc));
  cVar4 = fn_826E7458(param_2);
  if (cVar4 != '\0') {
    iVar2 = *(int *)(param_1 + 8);
    uStack_3c = 0x33;
    iVar5 = 0;
    do {
      bVar1 = *(byte *)(iVar2 + iVar5);
      iVar6 = iVar5 + 1;
      if ((bVar1 & 0x80) != 0) {
        iVar6 = (uint)CONCAT11(*(undefined1 *)(iVar2 + iVar6 + 1),*(undefined1 *)(iVar2 + iVar6)) +
                iVar5 + 3;
      }
      fn_826A91F0(param_2,0xffffffff820072ac,iVar5);
      uStack_40 = fn_826E7430(param_2);
      fn_826A68D8(&uStack_40,0xffffffff820071ac);
      iVar5 = iVar6;
    } while (bVar1 != 0);
  }
  return;
}

