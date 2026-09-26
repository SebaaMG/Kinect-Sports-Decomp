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
extern int fn_8255FA88();
extern int fn_82563688();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern unsigned int lbl_8218E690;


undefined8 fn_824FAC80(int param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  fn_827EF828(param_3[1]);
  fn_827EFFE8(param_3[1]);
  fn_827F0180(param_3[1],
                    **(undefined4 **)
                      ((*(int *)(*(int *)(param_1 + 0x30) + 0x44) + 0x20) * 4 + *param_3),1,0,0);
  puVar5 = (ushort *)param_3[3];
  if (puVar5 != (ushort *)0x0) {
    iVar2 = param_3[2];
    uVar1 = puVar5[6];
    while (uVar3 = (uint)uVar1, uVar3 != 0) {
      if ((0x31 < uVar3) || (*(uint *)(&lbl_8218E690 + uVar3 * 0xc) == (uint)*puVar5)) {
        fn_82563688(iVar2,0,puVar5,0xffffffff824fad78,0);
      }
      puVar5 = (ushort *)((uint)*puVar5 + (int)puVar5);
      uVar1 = puVar5[6];
    }
  }
  if (param_3[2] == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = fn_8255FA88();
  }
  return uVar4;
}

