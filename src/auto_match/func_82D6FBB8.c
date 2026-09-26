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
#define TBLr 0
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int iStack_244;
extern unsigned int iStack_24c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_248;


void fn_82D6FBB8(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_260 [16];
  int *piStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  undefined1 auStack_240 [576];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcConvxPiece";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = 0;
    do {
      if (*(int *)(param_2 + 0x24) == 0) {
LAB_82d6fc70:
        piStack_250 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x14))
                                       (*(int *)(param_1 + 0x20) + 0x10,
                                        *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar7),
                                        auStack_240);
        uStack_248 = *(undefined4 *)(param_3 + 8);
        iStack_24c = iVar3;
        iStack_244 = param_3;
        (**(code **)(*piStack_250 + 0x24))(piStack_250,param_2,&piStack_250,param_4);
      }
      else {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
        lVar6 = uVar5 + 0x10;
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        pcVar4 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x24))
                                   (auStack_260,*(undefined4 **)(param_2 + 0x24),param_2,uVar5,lVar6
                                    ,*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar7));
        if (*pcVar4 != '\0') goto LAB_82d6fc70;
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

