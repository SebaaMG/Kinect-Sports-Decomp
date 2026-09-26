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
extern unsigned int *auStack_130;
extern unsigned int *auStack_138;
extern int fn_82800E88();
extern int fn_82817B08();
extern int fn_82817B50();
extern int fn_82817C68();
extern int fn_82817C98();
extern int fn_828182C0();
extern int fn_82F65390();
extern unsigned int iStack_13c;
extern unsigned int iStack_140;


undefined8 fn_827F9E30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  undefined2 *puVar5;
  longlong lVar6;
  int iStack_140;
  int iStack_13c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [304];
  
  fn_82800E88(param_1,&iStack_13c);
  iVar1 = *(int *)(*param_1 + 0x38);
  iVar2 = *(int *)(*(int *)(iStack_13c + 4) + 0x20);
  if ((iVar2 == 0) || (iVar1 == 0)) {
LAB_827f9f44:
    uVar3 = 1;
  }
  else {
    lVar6 = 0;
    iVar4 = fn_82817B08(iVar1);
    if (0 < iVar4) {
      puVar5 = (undefined2 *)(param_2 + -2);
      do {
        fn_82817B50(iVar1,lVar6,&iStack_140);
        fn_82817C68(iStack_140,auStack_130,0x100);
        iVar4 = fn_82F65390(auStack_130,0xffffffff8201ddf8,10);
        if (((iVar4 != 0) && (iVar4 = fn_82F65390(auStack_130,0xffffffff8201de04,7), iVar4 != 0))
           && (iVar4 = fn_82F65390(auStack_130,0xffffffff8201de0c,0xd), iVar4 != 0)) {
          fn_828182C0(iVar2,auStack_130,0,&iStack_140);
          if (iStack_140 == 0) goto LAB_827f9f44;
          fn_82817C98(iStack_140,auStack_138);
          puVar5 = puVar5 + 1;
          *puVar5 = (short)(((U64)(auStack_138) >> 0) & 0xFFFFFFFF);
        }
        lVar6 = lVar6 + 1;
        iVar4 = fn_82817B08(iVar1);
      } while ((int)lVar6 < iVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

