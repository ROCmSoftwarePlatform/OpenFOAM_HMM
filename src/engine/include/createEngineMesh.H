    Info<< "Create mesh for time = "
        << runTime.timeName() << nl << endl;

    autoPtr<engineMesh> meshPtr
    (
        engineMesh::New
        (
            IOobject
            (
                polyMesh::defaultRegion,
                runTime.timeName(),
                runTime,
                Foam::IOobject::MUST_READ
            )
        )
    );

    engineMesh& mesh = meshPtr();
