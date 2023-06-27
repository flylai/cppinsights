#ifndef IGNORED_DECL
#define IGNORED_DECL(type)
#endif

#ifndef IGNORED_STMT
#define IGNORED_STMT(type)
#endif

#ifndef SUPPORTED_DECL
#define SUPPORTED_DECL(type)
#endif

#ifndef SUPPORTED_STMT
#define SUPPORTED_STMT(type)
#endif

IGNORED_STMT(OMPOrderedDirective)
IGNORED_STMT(OMPParallelForDirective)

IGNORED_DECL(UsingShadowDecl)
IGNORED_DECL(UsingPackDecl)

SUPPORTED_DECL(BindingDecl)
SUPPORTED_DECL(CXXDeductionGuideDecl)
SUPPORTED_DECL(VarDecl)
SUPPORTED_DECL(TypeAliasDecl)
SUPPORTED_DECL(TypedefDecl)
SUPPORTED_DECL(StaticAssertDecl)
SUPPORTED_DECL(FieldDecl)
SUPPORTED_DECL(AccessSpecDecl)
SUPPORTED_DECL(CXXMethodDecl)
SUPPORTED_DECL(UsingDecl)
SUPPORTED_DECL(CXXRecordDecl)
SUPPORTED_DECL(FunctionDecl)
SUPPORTED_DECL(UsingDirectiveDecl)
SUPPORTED_DECL(FriendDecl)
SUPPORTED_DECL(EnumDecl)
SUPPORTED_DECL(EnumConstantDecl)
SUPPORTED_DECL(NamespaceAliasDecl)
SUPPORTED_DECL(FunctionTemplateDecl)
SUPPORTED_DECL(TypeAliasTemplateDecl)
SUPPORTED_DECL(LabelDecl)
SUPPORTED_DECL(ClassTemplateDecl)
SUPPORTED_DECL(NamespaceDecl)
SUPPORTED_DECL(VarTemplateDecl)
SUPPORTED_DECL(ConceptDecl)
SUPPORTED_DECL(UnresolvedUsingValueDecl)

SUPPORTED_STMT(CXXDeleteExpr)
SUPPORTED_STMT(CXXDefaultInitExpr)
SUPPORTED_STMT(MemberExpr)
SUPPORTED_STMT(IntegerLiteral)
SUPPORTED_STMT(StringLiteral)
SUPPORTED_STMT(FloatingLiteral)
SUPPORTED_STMT(CXXOperatorCallExpr)
SUPPORTED_STMT(ParenExpr)
SUPPORTED_STMT(UnaryOperator)
SUPPORTED_STMT(LambdaExpr)
SUPPORTED_STMT(CXXMemberCallExpr)
SUPPORTED_STMT(CXXThisExpr)
SUPPORTED_STMT(CXXConstructExpr)
SUPPORTED_STMT(CXXInheritedCtorInitExpr)
SUPPORTED_STMT(CompoundAssignOperator)
SUPPORTED_STMT(BinaryOperator)
SUPPORTED_STMT(CXXNamedCastExpr)
SUPPORTED_STMT(CXXFunctionalCastExpr)
SUPPORTED_STMT(ImplicitCastExpr)
SUPPORTED_STMT(UnaryExprOrTypeTraitExpr)
SUPPORTED_STMT(ConditionalOperator)
SUPPORTED_STMT(MaterializeTemporaryExpr)
SUPPORTED_STMT(CXXBindTemporaryExpr)
SUPPORTED_STMT(DeclRefExpr)
SUPPORTED_STMT(CallExpr)
SUPPORTED_STMT(CXXBoolLiteralExpr)
SUPPORTED_STMT(CXXTypeidExpr)
SUPPORTED_STMT(GNUNullExpr)
SUPPORTED_STMT(CharacterLiteral)
SUPPORTED_STMT(ArraySubscriptExpr)
SUPPORTED_STMT(PredefinedExpr)
SUPPORTED_STMT(ExprWithCleanups)
SUPPORTED_STMT(InitListExpr)
SUPPORTED_STMT(DeclStmt)
SUPPORTED_STMT(CompoundStmt)
SUPPORTED_STMT(IfStmt)
SUPPORTED_STMT(SubstNonTypeTemplateParmExpr)
SUPPORTED_STMT(ReturnStmt)
SUPPORTED_STMT(NullStmt)
SUPPORTED_STMT(CXXDefaultArgExpr)
SUPPORTED_STMT(CXXStdInitializerListExpr)
SUPPORTED_STMT(CStyleCastExpr)
SUPPORTED_STMT(ForStmt)
SUPPORTED_STMT(CXXNewExpr)
SUPPORTED_STMT(CXXNullPtrLiteralExpr)
SUPPORTED_STMT(ArrayInitLoopExpr)
SUPPORTED_STMT(OpaqueValueExpr)
SUPPORTED_STMT(WhileStmt)
SUPPORTED_STMT(SwitchStmt)
SUPPORTED_STMT(CaseStmt)
SUPPORTED_STMT(BreakStmt)
SUPPORTED_STMT(DefaultStmt)
SUPPORTED_STMT(ContinueStmt)
SUPPORTED_STMT(GotoStmt)
SUPPORTED_STMT(LabelStmt)
SUPPORTED_STMT(CXXForRangeStmt)
SUPPORTED_STMT(DoStmt)
SUPPORTED_STMT(ArrayInitIndexExpr)
SUPPORTED_STMT(UnresolvedLookupExpr)
SUPPORTED_STMT(ImplicitValueInitExpr)
SUPPORTED_STMT(CXXScalarValueInitExpr)
SUPPORTED_STMT(CXXTryStmt)
SUPPORTED_STMT(CXXCatchStmt)
SUPPORTED_STMT(CXXThrowExpr)
SUPPORTED_STMT(CXXDependentScopeMemberExpr)
SUPPORTED_STMT(CXXNoexceptExpr)
SUPPORTED_STMT(ParenListExpr)
SUPPORTED_STMT(SizeOfPackExpr)
// SUPPORTED_STMT(ParenListExpr)
SUPPORTED_STMT(ConstantExpr)
SUPPORTED_STMT(CXXUnresolvedConstructExpr)
SUPPORTED_STMT(UnresolvedMemberExpr)
SUPPORTED_STMT(PackExpansionExpr)
SUPPORTED_STMT(CXXFoldExpr)
SUPPORTED_STMT(CoroutineBodyStmt)
SUPPORTED_STMT(CoroutineSuspendExpr)
SUPPORTED_STMT(DependentCoawaitExpr)
SUPPORTED_STMT(CoreturnStmt)
SUPPORTED_STMT(DependentScopeDeclRefExpr)
SUPPORTED_STMT(CXXRewrittenBinaryOperator)
SUPPORTED_STMT(AttributedStmt)
SUPPORTED_STMT(ConceptSpecializationExpr)
SUPPORTED_STMT(RequiresExpr)
SUPPORTED_STMT(StmtExpr)
SUPPORTED_STMT(CppInsightsCommentStmt)

#undef IGNORED_DECL
#undef IGNORED_STMT
#undef SUPPORTED_DECL
#undef SUPPORTED_STMT
