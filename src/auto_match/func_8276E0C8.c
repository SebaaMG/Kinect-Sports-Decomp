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
extern int fn_826C8C70();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_8276B308();
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;


void fn_8276E0C8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 uStack_40;
  ushort uStack_3e;
  undefined2 uStack_3c;
  ushort uStack_3a;
  ushort *puStack_38;
  undefined2 *puStack_34;
  
  fn_826C8C70(param_2,0xffffffff82014f88,
                    ((ulonglong)*(uint *)(param_2 + 0x34) - (ulonglong)*(uint *)(param_2 + 0x30)) +
                    (ulonglong)*(uint *)(param_2 + 0x2c));
  uVar7 = 0;
  uVar4 = *(uint *)(param_1 + 0x24);
  if (uVar4 != 0) {
    iVar6 = param_1 + 0x2c;
    if ((*(uint *)(param_1 + 0x14) >> 0xe & 1) == 0) {
      puStack_38 = &uStack_3a;
      puStack_34 = &uStack_3c;
      do {
        uStack_3c = (undefined2)uVar7;
        *(undefined1 *)(param_2 + 0x15) = 0;
        if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 1) {
          fn_826E7990(param_2);
        }
        bVar3 = *(byte *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        uStack_3a = (ushort)bVar3;
        fn_8276B308(iVar6,iVar6,&puStack_38);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
    else {
      puStack_38 = &uStack_3e;
      puStack_34 = &uStack_40;
      do {
        uStack_40 = (undefined2)uVar7;
        *(undefined1 *)(param_2 + 0x15) = 0;
        if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
          fn_826E7800(param_2,2);
        }
        puVar5 = (undefined1 *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
        uVar1 = puVar5[1];
        uVar2 = *puVar5;
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
        uStack_3e = CONCAT11(uVar1,uVar2);
        fn_8276B308(iVar6,iVar6,&puStack_38);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  return;
}

