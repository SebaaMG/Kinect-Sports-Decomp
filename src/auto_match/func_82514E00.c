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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_825159C8();
extern int fn_82518120();
extern int fn_82897060();
extern int fn_82F56D40();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82514E00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iStack_50 = *(int *)(param_1 + 0x28);
  iVar1 = fn_82518120();
  fn_82F56D40(&uStack_4c,iVar1,&iStack_50);
  if ((((ulonglong)uStack_4c != (ulonglong)*(uint *)(iVar1 + 4)) &&
      ((ulonglong)uStack_4c != 0xfffffffffffffff0)) &&
     (iStack_50 = **(int **)(uStack_4c + 0x14), (int *)iStack_50 != *(int **)(uStack_4c + 0x14))) {
    do {
      iVar1 = iStack_50;
      puVar2 = (undefined4 *)(**(code **)(iStack_50 + 0x4c))(auStack_40);
      uStack_48 = *puVar2;
      iStack_44 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      fn_82897060(iVar1 + 0x18,*(uint *)(iVar1 + 0x34) & 0xffff,
                        *(uint *)(iVar1 + 0x38) & 0xffff,*(undefined4 *)(iVar1 + 0x48),
                        *(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),&uStack_48,
                        param_1);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      fn_825159C8(&iStack_50);
    } while (iStack_50 != *(int *)(uStack_4c + 0x14));
  }
  return;
}

