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
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern int fn_827663E0();
extern int fn_827664B0();


longlong fn_82768FB0(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar7;
  longlong lVar6;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 8);
  if ((ulonglong)**(uint **)(param_1 + 8) < (param_2 + 0xf & 0xffffffff)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(char *)(*(int *)(((uint)((param_2 & 0xffffffff) >> 10) & 0x3ffffc) +
                          (*(uint **)(param_1 + 8))[3]) + ((uint)param_2 & 0xfff)) != '\0') {
      uVar5 = param_2;
      do {
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 1;
      } while (*(char *)(*(int *)(((uint)uVar5 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                        ((uint)uVar5 & 0xfff)) != '\0');
    }
    uVar5 = lVar3 + 1;
    fn_827663E0((int *)(param_1 + 0x1c),uVar5,0);
    *(int *)(param_1 + 0x20) = (int)uVar5;
    uVar7 = 0;
    if ((uVar5 & 0xffffffff) != 0) {
      do {
        uVar2 = uVar7 + (uint)param_2;
        uVar4 = uVar7 + 1;
        *(undefined1 *)(uVar7 + *(int *)(param_1 + 0x1c)) =
             *(undefined1 *)
              (*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) + (uVar2 & 0xfff));
        uVar7 = uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x20));
    }
    lVar3 = *(uint *)(param_1 + 0x20) + param_2;
    uVar2 = (uint)lVar3;
    *(uint *)(param_1 + 0x28) =
         (uint)CONCAT11(*(undefined1 *)
                         (*(int *)((uVar2 + 1 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 1 & 0xfff)),
                        *(undefined1 *)
                         (*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 & 0xfff)));
    *(uint *)(param_1 + 0x2c) =
         (uint)CONCAT11(*(undefined1 *)
                         (*(int *)((uVar2 + 3 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 3 & 0xfff)),
                        *(undefined1 *)
                         (*(int *)((uVar2 + 2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 2 & 0xfff)));
    *(float *)(param_1 + 0x30) =
         (float)(longlong)
                CONCAT11(*(undefined1 *)
                          (*(int *)((uVar2 + 5 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 5 & 0xfff)),
                         *(undefined1 *)
                          (*(int *)((uVar2 + 4 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 4 & 0xfff)));
    *(float *)(param_1 + 0x34) =
         (float)(longlong)
                CONCAT11(*(undefined1 *)
                          (*(int *)((uVar2 + 7 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 7 & 0xfff)),
                         *(undefined1 *)
                          (*(int *)((uVar2 + 6 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 6 & 0xfff)));
    lVar3 = lVar3 + 0xe;
    *(float *)(param_1 + 0x38) =
         (float)(longlong)
                CONCAT11(*(undefined1 *)
                          (*(int *)((uVar2 + 9 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 9 & 0xfff)),
                         *(undefined1 *)
                          (*(int *)((uVar2 + 8 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 8 & 0xfff)));
    uVar7 = (uint)lVar3;
    iVar1 = *(int *)(*piVar8 + 0xc);
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                        (*(int *)((uVar2 + 0xd >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0xd & 0xfff)),
                                       *(undefined1 *)
                                        (*(int *)((uVar2 + 0xc >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0xc & 0xfff))),
                              *(undefined1 *)
                               (*(int *)((uVar2 + 0xb >> 10 & 0x3ffffc) + iVar1) +
                               (uVar2 + 0xb & 0xfff))),
                     *(undefined1 *)
                      (*(int *)((uVar2 + 10 >> 10 & 0x3ffffc) + iVar1) + (uVar2 + 10 & 0xfff)));
    *(uint *)(param_1 + 0xc) = uVar4;
    iVar1 = *(int *)(*piVar8 + 0xc);
    lVar6 = (ulonglong)
            CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                        (*(int *)((uVar2 + 0x11 >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0x11 & 0xfff)),
                                       *(undefined1 *)
                                        (*(int *)((uVar2 + 0x10 >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0x10 & 0xfff))),
                              *(undefined1 *)
                               (*(int *)((uVar2 + 0xf >> 10 & 0x3ffffc) + iVar1) +
                               (uVar2 + 0xf & 0xfff))),
                     *(undefined1 *)(*(int *)((uVar7 >> 10 & 0x3ffffc) + iVar1) + (uVar7 & 0xfff)))
            + lVar3 + 4;
    *(int *)(param_1 + 0x10) = (int)lVar6;
    lVar6 = ((ulonglong)uVar4 & 0x1fffffff) * 8 + lVar6;
    lVar3 = fn_827664B0(piVar8,lVar6,param_1 + 0x14);
    lVar3 = lVar3 + lVar6;
    *(int *)(param_1 + 0x18) = (int)lVar3;
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x14) * 6 - param_2) + lVar3;
  }
  return lVar3;
}

