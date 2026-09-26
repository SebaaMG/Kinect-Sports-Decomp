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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289EEE0();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828BE158();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828D3188();
extern int fn_828D31A8();
extern int fn_828DDA38();
extern int fn_82BA02A8();


void fn_828DAA50(int param_1)

{
  bool bVar1;
  char cVar5;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar5 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar5 == '\0') {
LAB_828daa90:
    bVar1 = true;
  }
  else {
    uVar2 = fn_828D2EE0(param_1);
    bVar1 = false;
    if (0x1d4c < uVar2) goto LAB_828daa90;
  }
  if (!bVar1) {
    cVar5 = fn_828AD740(*(undefined4 *)(param_1 + 8));
    bVar1 = false;
    if (cVar5 == '\0') goto LAB_828daabc;
  }
  bVar1 = true;
LAB_828daabc:
  if (bVar1) {
    fn_828D2F28();
  }
  else {
    cVar5 = fn_828D3188(param_1);
    if (cVar5 != '\0') {
      uVar3 = fn_828D31A8(param_1);
      fn_82BA02A8(param_1);
      uVar2 = fn_8265C9E0(0x98);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_828DDA38(uVar2,uVar3);
      }
      fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      fn_8289EEE0(*(undefined4 *)(param_1 + 8));
      uVar4 = fn_82897BD0();
      fn_828BE158(*(undefined4 *)(param_1 + 8),uVar3,uVar4,0);
      fn_828D2DB8(param_1,2);
    }
  }
  return;
}

