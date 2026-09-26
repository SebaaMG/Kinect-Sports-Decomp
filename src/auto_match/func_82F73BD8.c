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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_28;
extern int fn_82F728D0();
extern int fn_82F73308();
extern int fn_82F739E8();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 * fn_82F73BD8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [16];
  
  uStack_2c = uStack_2c & 0xffff;
  uStack_30 = 0;
  uVar4 = (uint)*lbl_832635C0;
  if (uVar4 == 0) {
    fn_82F728D0(param_1,1);
    return param_1;
  }
  if (7 < uVar4 - 0x30) {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 4) = 2;
    return param_1;
  }
  if (uVar4 == 0x31) {
LAB_82f73c4c:
    uVar3 = 0xffffffff82169df0;
  }
  else if ((uVar4 == 0x32) || (uVar4 == 0x33)) {
    uVar3 = 0xffffffff82169de8;
  }
  else {
    if (uVar4 == 0x34) goto LAB_82f73c80;
    if (uVar4 == 0x35) {
      uVar3 = 0xffffffff82169de0;
    }
    else {
      if ((uVar4 != 0x36) && (uVar4 == 0x30)) goto LAB_82f73c4c;
      uVar3 = 0xffffffff82169dd8;
    }
  }
  fn_82F73308(&uStack_30,uVar3);
LAB_82f73c80:
  bVar1 = *lbl_832635C0;
  if ((((bVar1 == 0x31) || (bVar1 == 0x33)) || (bVar1 == 0x35)) || (bVar1 == 0x37)) {
    lbl_832635C0 = lbl_832635C0 + 1;
    puVar2 = (undefined8 *)fn_82F739E8(auStack_28,0xffffffff82169dcc,&uStack_30);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = CONCAT44(uStack_30,uStack_2c);
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  *param_1 = uVar3;
  return param_1;
}

