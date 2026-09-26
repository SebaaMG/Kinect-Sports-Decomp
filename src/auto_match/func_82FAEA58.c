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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAE840();
extern int fn_82FAFE40();
extern unsigned int lbl_82160788;
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8 fn_82FAEA58(int param_1,double *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  double *pdStack0000001c;
  undefined4 uStack00000024;
  
  pdStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar2 = fn_82FAFE40(param_1,&stack0x0000001c,&stack0x00000024,0);
  if ((int)uVar2 == 1) {
    *(int *)(param_1 + 0xac) = (int)(*pdStack0000001c * lbl_82160788);
    uVar1 = *(uint *)(pdStack0000001c + 1);
    pdStack0000001c = (double *)((int)pdStack0000001c + 0xc);
    if (uVar1 != 0) {
      iVar3 = fn_82FA5060(lbl_831BC768,uVar1 << 4);
      if (iVar3 == 0) {
        uVar2 = 2;
      }
      else {
        uVar5 = 0;
        if (3 < (int)uVar1) {
          puVar7 = (undefined8 *)(iVar3 + -8);
          do {
            uVar5 = uVar5 + 4;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)pdStack0000001c;
            puVar7[2] = *(undefined8 *)((int)pdStack0000001c + 4);
            *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((int)pdStack0000001c + 0xc);
            puVar7[4] = *(undefined8 *)((int)pdStack0000001c + 0x10);
            *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((int)pdStack0000001c + 0x18);
            puVar7[6] = *(undefined8 *)((int)pdStack0000001c + 0x1c);
            puVar4 = (undefined8 *)((int)pdStack0000001c + 0x28);
            *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((int)pdStack0000001c + 0x24);
            pdStack0000001c = (double *)((int)pdStack0000001c + 0x30);
            puVar7 = puVar7 + 8;
            *puVar7 = *puVar4;
          } while (uVar5 < uVar1 - 3);
        }
        if (uVar5 < uVar1) {
          iVar6 = uVar1 - uVar5;
          puVar7 = (undefined8 *)(uVar5 * 0x10 + iVar3 + -8);
          do {
            puVar4 = (undefined8 *)((int)pdStack0000001c + 4);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)pdStack0000001c;
            pdStack0000001c = (double *)((int)pdStack0000001c + 0xc);
            puVar7 = puVar7 + 2;
            *puVar7 = *puVar4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = fn_82FAE840(param_1,iVar3,uVar1);
        fn_82FA5190(lbl_831BC768,iVar3);
      }
    }
  }
  return uVar2;
}

